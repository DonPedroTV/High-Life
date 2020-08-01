While{true} do
{
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [0]; // enables normal vision
"dynamicBlur" ppEffectCommit 15; // time it takes to normal
resetCamShake; // resets the shake
20 fadeSound 1; //fades the sound back to normal
_gasmask=["G_Combat","G_Balaclava_TI_G_blk_F"];

waituntil{
((nearestObject [getpos player, "SmokeShellBlue"]) distance player < 10)
and
(getpos (nearestObject [getpos player, "SmokeShellBlue"]) select 2 < 0.5)
};

if(!(goggles player in _gasMask))then
{
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
"dynamicBlur" ppEffectCommit 3; // time till vision is fully blurred
enableCamShake true; // enables camera shake
addCamShake [2, 60, 2]; // sets shakevalues
player setFatigue 1; // sets the fatigue to 100%
5 fadeSound 0.2; // fades the sound to 10% in 5 seconds

};

sleep 5;
};