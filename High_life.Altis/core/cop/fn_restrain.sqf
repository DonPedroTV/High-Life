#include "..\..\script_macros.hpp"
/*
    File: fn_restrain.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Retrains the client.
*/
private["_cop","_player","_vehicle"];
_cop = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_player = player;
_vehicle = vehicle player;
if (isNull _cop) exitWith {};

//Monitor excessive restrainment
[] spawn {
    private "_time";
    for "_i" from 0 to 1 step 0 do {
        _time = time;
        waitUntil {(time - _time) > (20 * 60)};

        if (!(player getVariable ["restrained",FALSE])) exitWith {};
        if (!([west,getPos player,30] call life_fnc_nearUnits) && (player getVariable ["restrained",FALSE]) && isNull objectParent player) exitWith {
            player setVariable ["restrained",FALSE,TRUE];
            player setVariable ["Escorting",FALSE,TRUE];
            player setVariable ["transporting",false,true];
            detach player;
            titleText[localize "STR_Cop_ExcessiveRestrain","PLAIN"];
        };
    };
};

titleText[format[localize "STR_Cop_Restrained",_cop getVariable ["realname",name _cop]],"PLAIN"];

life_disable_getIn = true;
life_disable_getOut = false;

while {player getVariable  "restrained"} do {
    if (isNull objectParent player) then {
        player playMove "AmovPercMstpSnonWnonDnon_Ease";
    };

    _state = vehicle player;
    waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player getVariable "restrained") || vehicle player != _state};

    if (!alive player) exitWith {
        player setVariable ["restrained",false,true];
        player setVariable ["Escorting",false,true];
        player setVariable ["transporting",false,true];
        detach _player;
    };

    if (!alive _cop) then {
        player setVariable ["Escorting",false,true];
        detach player;
    };

    if (vehicle player != player && life_disable_getIn) then {
        player action["eject",vehicle player];
    };

    if ((vehicle player != player) && (vehicle player != _vehicle)) then {
        _vehicle = vehicle player;
    };

    if (isNull objectParent player && life_disable_getOut) then {
        player moveInCargo _vehicle;
    };

    if ((vehicle player != player) && life_disable_getOut && (driver (vehicle player) isEqualTo player)) then {
        player action["eject",vehicle player];
        player moveInCargo _vehicle;
    };

    if (vehicle player != player && life_disable_getOut) then {
        _turrets = [[-1]] + allTurrets _vehicle;
        {
            if (_vehicle turretUnit [_x select 0] isEqualTo player) then {
                player action["eject",vehicle player];
                sleep 1;
                player moveInCargo _vehicle;
            };
        }forEach _turrets;
    };
};

//disableUserInput false;

if (alive player) then {
    player switchMove "AmovPercMstpSlowWrflDnon_SaluteIn";
    player setVariable ["Escorting",false,true];
    player setVariable ["transporting",false,true];
    detach player;
};


_log = format ["%1, %2 skul %3 %4", name _cop, getPlayerUID _cop, name _player, getPlayerUID _player];
[_log, "skujrozkuj"] remoteExecCall ["A3Log", 2];