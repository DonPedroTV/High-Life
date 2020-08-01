#include "..\..\script_macros.hpp"
/*
    Author:AlaskaVet
*/
private["_damage","_health"];

closeDialog 0;

//Little hint then wait a litle before starting drugs effects
sleep 3;

//Activate ppEffects we need
"chromAberration" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
enableCamShake true;

//Let's go for 45secs of effetcs
for "_i" from 0 to 44 do
{
    "chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
    "chromAberration" ppEffectCommit 1;
    "radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
    "radialBlur" ppEffectCommit 1;
    addcamShake[random 3, 1, random 3];
    sleep 1;
};

for "_health" from 0 to 29 do
{
	while {damage player > 0.1} do  {
		_damage = damage player;
		_damage = _damage - 0.05;
		player setDamage (_damage);
		[] call life_fnc_hudUpdate;
		sleep 3;
	};
};

//Stop effects
"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

//Deactivate ppEffects
"chromAberration" ppEffectEnable false;
"radialBlur" ppEffectEnable false;
resetCamShake;