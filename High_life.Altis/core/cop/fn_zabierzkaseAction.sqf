#include "..\..\script_macros.hpp"
/*
    File: fn_robAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the robbing process?
*/
private["_target"];
_target = cursorObject;

//Error checks
if (isNull _target) exitWith {};
if (!isPlayer _target) exitWith {};

[player] remoteExecCall ["life_fnc_zabierzkase",_target];

