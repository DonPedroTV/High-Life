#include "..\..\script_macros.hpp"
/*
    File: fn_unrestrain.sqf
    Author:

    Description:

*/
private["_unit"];
_unit = param [0,ObjNull,[ObjNull]];
if (isNull _unit) exitWith {}; //Error check?

_unit setVariable ["restrained",FALSE,TRUE];
_unit setVariable ["nosze",FALSE,TRUE];
_unit setVariable ["Escorting",FALSE,TRUE];
_unit setVariable ["transporting",FALSE,TRUE];
_unit setVariable ["tied", nil, true];
_unit setVariable ["gagged",false,true];
_unit setVariable ["blindfolded", nil, true];
detach _unit;
