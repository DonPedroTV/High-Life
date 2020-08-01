#include "..\..\script_macros.hpp"
/*
    File: fn_gather.sqf
    Author: Devilfloh

    Description:
    Main functionality for gathering.
*/
private["_maxGather","_resource","_amount","_maxGather","_requiredItem"];
if (life_action_inUse) exitWith {};
if ((vehicle player) != player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};

life_action_inUse = true;
_zone = "";
_requiredItem = "";
_zoneSize = (getNumber(missionConfigFile >> "CfgGather" >> "zoneSize"));
_exit = false;

_resourceCfg = missionConfigFile >> "CfgGather" >> "Resources";
for "_i" from 0 to count(_resourceCfg)-1 do {

    _curConfig = _resourceCfg select _i;
    _resource = configName _curConfig;
    _maxGather = getNumber(_curConfig >> "amount");
    _resourceZones = getArray(_curConfig >> "zones");
    _requiredItem = getText(_curConfig >> "item");
    {
        if (((getPosATL(player) distance (getMarkerPos _x)) < _zoneSize) && ((getPosATL(player) select 2) < 3)) exitWith {_zone = _x;};
    } forEach _resourceZones;

    if (_zone != "") exitWith {};
};

if (_zone isEqualTo "") exitWith {life_action_inUse = false;};
if (_resource != "pankuronium") exitWith {life_action_inUse = false;};

if (_requiredItem != "") then {
    _valItem = missionNamespace getVariable "life_inv_" + _requiredItem;

    if (_valItem < 1) exitWith {
        switch (_requiredItem) do {
         //Messages here
        };
        life_action_inUse = false;
        _exit = true;
    };
};

if (_exit) exitWith {life_action_inUse = false;};

_amount = round(random(_maxGather)) + 1;
_diff = [_resource,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if (_diff isEqualTo 0) exitWith {
    hint localize "STR_NOTF_InvFull";
    life_action_inUse = false;
};

switch (_requiredItem) do {
    case "pickaxe": {player say3D "mining";};
    default {player say3D "harvest";};
};

for "_i" from 0 to 4 do {
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
    sleep 0.5;
};

if ([true,_resource,_diff] call life_fnc_handleInv) then {
    _itemName = M_CONFIG(getText,"VirtualItems",_resource,"displayName");
    titleText[format[localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
    _log = format ["%1, %2 zebral %3 w ilosci %4", name player, getPlayerUID player, (localize _itemName), _diff];
    [_log, "kopanie"] remoteExecCall ["A3Log", 2];
};

sleep 1;
life_action_inUse = false;

