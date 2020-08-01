#include "..\..\script_macros.hpp"
/*
    File: fn_handleDamage.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep","_originalDamage","_vehicle"];
_unit = _this select 0;
_part = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_projectile = _this select 4;
_originalDamage = if (_part == "") then {damage _unit} else {_unit getHit _part};

//Handle the tazer first (Top-Priority).
if (!isNull _source) then {
    if (_source != _unit) then {
        _curWep = currentWeapon _source;
        if (_projectile in ["B_9x21_Ball"] && _curWep in ["hgun_P07_snds_F","hgun_P07_F"]) then {
                private["_distance"];
                _distance = if (_projectile == "B_556x45_dual") then {100} else {25};
                _damage = _originalDamage;
                if (_unit distance _source < _distance) then {
                    if (!life_istazed && !life_isknocked && !(_unit getVariable ["restrained",false])) then {
                        if (vehicle player != player) then {
                            if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
                                player action ["Eject",vehicle player];
                                [_unit,_source] spawn life_fnc_tazed;
                            };
                        } else {
                            [_unit,_source] spawn life_fnc_tazed;
                        };
                    };
                };


            //Temp fix for super tasers on cops.
            if (side _source isEqualTo west && (playerSide isEqualTo west || playerSide isEqualTo independent)) then {
                _damage = _originalDamage;
            };
        };
    };
};

if ((vehicle _unit) isKindOf "Car" && (isNull _source || _source isEqualTo _unit)) then
{
    _damage = if (life_seatbelt) then { _damage / 2 } else { _damage};
};



/*
if ((isPlayer _source) && (vehicle _source != _source)) then {
if(_part == "body" && (player getVariable["limit",true])) then {
player setVariable ["limit",false];
[_source] spawn {
_driver = _this select 0;
sleep(10);
player setVariable ["limit",true];
    };
};
_damage = getDammage player;
};
*/


if (typeOf (vehicle player) == "O_heli_light_02_unarmed_F") then
{
    _vehicle = vehicle player;
    _vehicle setHit [getText(configFile >> "cfgVehicles" >> typeOf _vehicle >> "HitPoints" >> "HitEngine" >> "name"), _damage];
    _damage = _damage * 2;

};


[] spawn life_fnc_hudUpdate;
_damage;
