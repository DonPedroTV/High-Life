#include "..\..\script_macros.hpp"
/*
	File: fn_bountyBuy.sqf
	Author: !TS JORDAN
	Originally Made for: Underbelly ArmA

	Description: Creates a GUI message when someone wants to buy the bounty hunting license.
*/

private ["_aciton","_unit","_atm"];

_unit = player;

if(playerSide != civilian) exitWith {hint "Nie jestes cywilem!"};
if(life_cash < 100000) exitWith {hint "Nie masz tyle pieniedzy!"};
if(license_civ_bountyH) exitWith {hint "Juz posiadasz ta licencje!"};

_action = [
    format [localize "STR_GNOTF_BountyMSG"],
    localize "STR_Bounty_License",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
	hint parseText format["<t color='#FA4F4F'><t size='1.5'>Witaj w Lowcach Glow!</t></t><br/><br/><t size='1.2'>Twoim zadaniem jest eliminacja ludzi z listy nagrod, aby otrzymac pieniadze.</t>"];
	life_cash = life_cash - 100000;
	[100] remoteExecCall ["life_fnc_removeLicenses",_unit];
} else {
	hint "...";
};
