/*
	File: fn_revokeDriverLicense.sqf
*/
private["_unit"];
params [
    ["_unit", ObjNull,[ObjNull]]
];
if(isNull _unit) exitWith {};
[0,format["%1 zabral %2 prawo jazdy.",name player, name _unit]] remoteExecCall ["life_fnc_broadcast",west];
[4] remoteExecCall ["life_fnc_removeLicenses",_unit];