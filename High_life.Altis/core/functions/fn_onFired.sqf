#include "..\..\script_macros.hpp"
/*
    File: fn_onFired.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles various different ammo types being fired.
*/
private["_ammoType","_projectile","_weapon","_player","_weap","_ammo"];
_ammoType = _this select 4;
_projectile = _this select 6;
_weapon = _this select 1;
_player = _this select 0;
_weap = currentWeapon _player;
_ammo = _player ammo _weap;

if (_ammoType isEqualTo "GrenadeHand_stone") then {
    _projectile spawn {
        private "_position";
        while {!isNull _this} do {
            _position = ASLtoATL (visiblePositionASL _this);
            sleep 0.1;
        };
        [_position] remoteExec ["life_fnc_flashbang",RCLIENT];
    };
};


//if(side _player != west) exitWith {};

if (_weap == "hgun_P07_snds_F") then {
if (_ammo > 0) then {
_player setAmmo ["hgun_P07_snds_F",0];
};
};