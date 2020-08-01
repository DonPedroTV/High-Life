#include "..\..\script_macros.hpp"
/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
    case (_item in ["waterBottle","coffee","redgull"]): {
        if ([false,_item,1] call life_fnc_handleInv) then {
            life_thirst = 100;
            player say3D "drink";
            if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1) then {player setFatigue 0;};
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 1}) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect","PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    case (_item in ["woodencontainer","smallchest","mediumchest","leadbox","largechest","hugechest"]): {
        [_item] call life_fnc_openContainer;
        closeDialog 0;
    };

    case (_item isEqualTo "boltcutter"): {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };

    case (_item isEqualTo "sitemapnormal"): {
        closeDialog 0;
        [4,10,"sitemapnormal"] spawn life_fnc_prepDigSites;
    };

    case (_item isEqualTo "sitemaprare"): {
        closeDialog 0;
        [5,100,"sitemaprare"] spawn life_fnc_prepDigSites;
    };

    case (_item isEqualTo "surveyingequipment"): {
        closeDialog 0;
        ["normal"] spawn life_fnc_surveyDigSite;
    };

    case (_item isEqualTo "advsurveyingequipment"): {
        closeDialog 0;
        ["advanced"] spawn life_fnc_surveyDigSite;
    };

    case (_item in ["shovel","basictools"]): {
        closeDialog 0;
        [] spawn life_fnc_excavateDigSite;
    };

    case (_item isEqualTo "blastingcharge"): {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

    case (_item isEqualTo "defusekit"): {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"): {
        [false] call life_fnc_storageBox;
    };

    case (_item isEqualTo "piwo"):
    {
    If (([false, _item, 1] call life_fnc_handleInv)) then
    {
    if (isNil "life_drink") then {life_drink = 0;};
    // If you drink the beer, then you have 0.15 per thousand
    life_drink = life_drink + 0.06;
    life_thirst = 100;
    If (life_drink <0.2) exitWith {};
    [] Spawn life_fnc_pijealko;
    [] Spawn life_fnc_alkoragdoll;
    };
    };

    case (_item isEqualTo "wodka"):
    {
    If (([false, _item, 1] call life_fnc_handleInv)) then
    {
    if (isNil "life_drink") then {life_drink = 0;};
    // If you drink the beer, then you have 0.15 per thousand
    life_drink = life_drink + 0.20;
    life_thirst = 100;
    If (life_drink <0.2) exitWith {};
    [] Spawn life_fnc_pijealko;
    [] Spawn life_fnc_alkoragdoll;
    };
    };

    case (_item isEqualTo "whiskey"):
    {
    If (([false, _item, 1] call life_fnc_handleInv)) then
    {
    if (isNil "life_drink") then {life_drink = 0;};
    // If you drink the beer, then you have 0.15 per thousand
    life_drink = life_drink + 0.20;
    life_thirst = 100;
    If (life_drink <0.20) exitWith {};
    [] Spawn life_fnc_pijealko;
    [] Spawn life_fnc_alkoragdoll;
    };
    };

    case (_item isEqualTo "storagebig"): {
        [true] call life_fnc_storageBox;
    };

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if (vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn life_fnc_jerrycanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"): {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };

    case (_item isEqualTo "marijuana"): {
    if(([false,_item,1] call life_fnc_handleInv)) then
    {
        [] spawn life_fnc_weed;
        };
    };

    case (_item isEqualTo "heroin_processed"): {
    if(([false,_item,1] call life_fnc_handleInv)) then
    {
        [] spawn life_fnc_heroin;
        };
    };

    case (_item isEqualTo "cocaine_processed"): {
    if(([false,_item,1] call life_fnc_handleInv)) then
    {
        [] spawn life_fnc_heroin;
        };
    };

    case (_item isEqualTo "dop"): {
    if(([false,_item,1] call life_fnc_handleInv)) then
    {
        [] spawn life_fnc_heroin;
        };
    };

    case (_item isEqualTo "morphine"): {
    if(([false,_item,1] call life_fnc_handleInv)) then
    {
        [] spawn life_fnc_morphine;
        };
    };

    case (_item isEqualTo "bandages"):
    {
        [] spawn life_fnc_bandages;
    };

    case (_item isEqualTo "gpsTracker"): {
        [cursorObject] spawn life_fnc_gpsTracker;
        closeDialog 0;
    };

    case (_item isEqualTo "speedbomb"):
    {
        [] spawn life_fnc_speedBomb;
    };

    case (_item in ["apple","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","donuts","tbacon","peach"]): {
        if (!(M_CONFIG(getNumber,"VirtualItems",_item,"edible") isEqualTo -1)) then {
            if ([false,_item,1] call life_fnc_handleInv) then {
                _val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
                _sum = life_hunger + _val;
                switch (true) do {
                    case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
                    case (_sum > 100): {life_hunger = 100;};
                    default {life_hunger = _sum;};
                };
                player say3D "eat";
            };
        };
    };

    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;

_log = format ["%1, %2 uzyl %3", name player, getPlayerUID player, _item];
[_log, "uzyjprzedmiot"] remoteExecCall ["A3Log", 2];