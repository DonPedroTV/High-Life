#include "..\..\script_macros.hpp"
/*
    File: fn_wireTransfer.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initiates the wire-transfer
*/
params [
    ["_value",0,[0]],
    ["_from","",[""]]
];

if (_value isEqualTo 0 || _from isEqualTo "" || _from isEqualTo profileName) exitWith {}; //No
BANK = BANK + _value;
hint format["%1 has wire transferred $%2 to you",_from,[_value] call life_fnc_numberText];

_log = format ["%1, %2 przelal %3, %4 %5", name _from, getPlayerUID _from, name player, getPlayerUID player, [_value] call life_fnc_numberText];
[_log, "przelew"] remoteExecCall ["A3Log", 2];
