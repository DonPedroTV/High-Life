/*
	File: fn_openEmpMenu.sqf
	Author/Copyright: © 2014 nano2K - written for we-are-friendly.de
	Edited by: blackfisch for Native-Network
	
	Description:
	Opens EMP menu
*/
if(!alive player || dialog) exitWith {};
createDialog "nanoEMPConsole";	
disableSerialization;
waitUntil {!isNull (findDisplay 3494)};
[] spawn life_fnc_scanVehicles;
