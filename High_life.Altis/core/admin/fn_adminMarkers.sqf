#include "..\..\script_macros.hpp"
/*
    File: fn_adminMarkers.sqf
    Author: NiiRoZz
    Description:
    Display markers for all players
*/
if (FETCH_CONST(life_adminlevel) < 5) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

[] spawn TON_fnc_MapMarkersAdmin;

_log = format ["%1, %2 uzyl markerow", name player, getPlayerUID player];
[_log, "admin"] remoteExecCall ["A3Log", 2];