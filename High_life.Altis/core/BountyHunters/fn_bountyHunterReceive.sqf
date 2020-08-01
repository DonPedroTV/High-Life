#include "..\..\script_macros.hpp"
/*
    File: fn_bountyHunterReceive.sqf
    Author: !TS JORDAN
	Originally Made for: Underbelly ArmA

    Description:
    Notifies the bounty hunter he has killed the person with the bounty and was rewarded with the bounty.
*/
private ["_val","_total"];
_val = [_this,0,"",["",0]] call BIS_fnc_param;
_total = [_this,1,"",["",0]] call BIS_fnc_param;

if (_val != _total) then {
    hint "Cos poszlo nie tak...";
} else {
    titleText[format [localize "STR_Bounty_BountyKill",[_val] call life_fnc_numberText],"PLAIN"];
};

BANK = BANK + _val;
[1] call SOCK_fnc_updatePartial;