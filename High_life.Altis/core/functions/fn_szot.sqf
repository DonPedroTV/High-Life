#include "..\..\script_macros.hpp"
if(life_cash < 25) exitWith {hint "Nie masz tyle pieniedzy!"; };
hint "Wypiles szota!";
CASH = CASH - 25;
if (isNil "life_drink") then {life_drink = 0;};
    // If you drink the beer, then you have 0.15 per thousand
    life_drink = life_drink + 0.20;
    life_thirst = 100;
    If (life_drink <0.2) exitWith {};
    [] Spawn life_fnc_pijealko;
    [] Spawn life_fnc_alkoragdoll;