#include "..\..\script_macros.hpp"
/*
	File: fn_skyDive.sqf
	Author: blaster
	Contributions: Rambo6699(Ciaran Langton, Pink (L.27)), demigod
	Concepts pulled from: Mokomoko http://www.altisliferpg.com/topic/1938-document-server-commands/


	Description:
	Sky diving, with a random coloured smoke that deploys once chute is pulled.

	this enableSimulation false; this allowDamage false; this addAction ["SkyDive", life_fnc_skyDive];
*/
private ["_backpackName","_backpackItems","_x"];

titleCut ["", "BLACK FADED", 999];

life_action_inUse = true;
sleep 2;

_backpackName = backpack player;
_backpackItems = backpackItems player;
sleep 1;

removeBackpack player;
player addBackpack "B_Parachute";
player setPos [getPos player select 0, getPos player select 1, 3000];
sleep 2;

titlecut [" ","BLACK IN",3];

waitUntil {(vehicle player != player)};
waitUntil {isTouchingGround player};
deleteVehicle vehicle player;
sleep 1;

removeBackpack player;
sleep 1;

player addBackpack _backpackName;
clearAllItemsFromBackpack player;
{
	[_x,true,true] call life_fnc_handleItem;
} foreach _backpackItems;


life_action_inUse = false;