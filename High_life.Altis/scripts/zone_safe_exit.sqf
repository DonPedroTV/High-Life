/*
    File: zone_safe_exit.sqf
    Author: jogo2015

    Description:
    Script that is run when the player leaves a safe zone
*/

hint parseText format ["<t color='#d11414'><t size='2'><t align='center'>Zielona strefa<br/><br/><t color='#efc743'><t align='center'><t size='1'>Właśnie opuściłeś zieloną strefę uważaj na siebie!"];

SAW_zone_safe = false;
life_safe_warnings = 0;
life_safe_vdm_warnings = 0;

player setVariable ["vdm_warnings", 0, true];
player allowDamage true;

