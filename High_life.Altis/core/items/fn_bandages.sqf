#include "..\..\script_macros.hpp"

private["_damage","_health"];
if (life_inv_bandages < 1) exitWith { hint "Nie posiadasz tego przedmiotu!"; };

closeDialog 0;
life_action_inUse = true;
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
uiSleep 1.5;
waitUntil {animationState player != "ainvpknlmstpsnonwnondnon_medic_1"};
life_action_inUse = false;


sleep 3;
[false,"bandages",1] call life_fnc_handleInv;
enableCamShake true;

for "_health" from 0 to 29 do
{
	while {damage player > 0.1} do  {
		_damage = damage player;
		_damage = _damage - 0.05;
		player setDamage (_damage);
		[] call life_fnc_hudUpdate;
		sleep 12;
	};
};

resetCamShake;