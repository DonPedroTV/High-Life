#include "..\..\script_macros.hpp"
/*
 Player clicked arrest/ok
*/
private ["_time"];
if(playerSide != west) exitWith {};
if(isNil "life_pInact_curTarget") exitWith {};
//Get minutes
_time = ctrlText 1400;
if(! ([_time] call TON_fnc_isnumber)) exitWith {
 hint localize "STR_ATM_notnumeric";
};
_time = parseNumber _time; //requested number
_time = round _time;
if(_time < 5 || _time > 120) exitWith { hint "Musisz  wybrać czas między 5-60 minutami!"; };
closeDialog 0;
[life_pInact_curTarget, _time] call life_fnc_arrestAction;
["wiezienie"] spawn mav_ttm_fnc_addExp;