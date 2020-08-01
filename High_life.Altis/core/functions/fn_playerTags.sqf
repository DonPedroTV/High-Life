#include "..\..\script_macros.hpp"
/*
    File: fn_playerTags.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
_units = _units - [player];

_masks = LIFE_SETTINGS(getArray,"clothing_masks");

{
    private "_text";
    _idc = _ui displayCtrl (iconID + _forEachIndex);
    if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
        _pos = switch (typeOf _x) do {
            case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
            case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
            default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
        };
        _sPos = worldToScreen _pos;
        _distance = _pos distance player;
        if (!((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks)) then {
            if (count _sPos > 1 && {_distance < 15}) then {
                _text = switch (true) do {
                    case (_x in (units group player) && playerSide isEqualTo civilian): {format["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];};
                    case (side _x isEqualTo west && {!isNil {_x getVariable "rank"}}): {format["<img image='%1' size='1'></img><t color='#42b6f4'>%3</t> %2",switch ((_x getVariable "rank")) do {
                        case 1: {"textures\policja_ikony\rekrut.paa"};
                        case 2: {"textures\policja_ikony\posterunkowy.paa"};
                        case 3: {"textures\policja_ikony\sierzant.paa"};
                        case 4: {"textures\policja_ikony\st_sierzant.paa"};
                        case 5: {"textures\policja_ikony\sierzant_sztabowy.paa"};
                        case 6: {"textures\policja_ikony\aspirant.paa"};
                        case 7: {"textures\policja_ikony\st_aspirant.paa"};
                        case 8: {"textures\policja_ikony\komisarz.paa"};
                        case 9: {"textures\policja_ikony\nadkomisarz.paa"};
                        case 10: {"textures\policja_ikony\inspektor.paa"};
                        case 11: {"textures\policja_ikony\zcakom.paa"};
                        case 12: {"textures\policja_ikony\komendant.paa"};
                        case 13: {"textures\policja_ikony\fbi.paa"};
						},_x getVariable ["realname",name _x],
                        switch ((_x getVariable "rank")) do {
                        case 1: {"Rekrut"};
                        case 2: {"Posterunkowy"};
                        case 3: {"Sierżant"};
                        case 4: {"St.Sierżant"};
                        case 5: {"Sierżant Szt."};
                        case 6: {"Aspirant"};
                        case 7: {"St. Aspirant"};
                        case 8: {"Komisarz"};
                        case 9: {"Nadkomisarz"};
                        case 10: {"Inspektor"};
                        case 11: {"Z-ca Komendanta"};
                        case 12: {"Komendant"};
                        case 13: {"FBI"};
						default {"Policja"};
                        }]};
                    case (side _x isEqualTo independent && {!isNil {_x getVariable "rank"}}): {format["<img image='%1' size='1'></img><t color='#FF0000'>%3</t> %2",switch ((_x getVariable "rank")) do {
                        case 1: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 2: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 3: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 4: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 5: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 6: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 7: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 8: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        case 9: {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        default {"a3\ui_f\data\map\MapControl\hospital_ca.paa"};
                        },_x getVariable ["realname",name _x],
                        switch ((_x getVariable "rank")) do {
                        case 1: {"Stażysta"};
                        case 2: {"Pielęgniarz"};
                        case 3: {"Ratownik"};
                        case 4: {"Lekarz Rezydent"};
                        case 5: {"Lekarz"};
                        case 6: {"Doktor"};
                        case 7: {"Doktor Habilitowany"};
                        case 8: {"Z-ca Ordynatora"};
                        case 9: {"Ordynator"};
                        default {"Medyk"};
                        }]};
                    default {
                        if (!isNil {(group _x) getVariable "gang_name"}) then {
                            format["%1<br/><t size='0.8' color='#B6B6B6'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]];
                        } else {
                            _x getVariable ["realname",name _x];
                        };
                    };
                };

                   if ((_x getVariable "donorrank") > 0) then {
                _text = format["<t color='#FFFF00'>VIP</t> | "] + _text};

                _idc ctrlSetStructuredText parseText _text;
                _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
                _idc ctrlSetScale scale;
                _idc ctrlSetFade 0;
                _idc ctrlCommit 0;
                _idc ctrlShow true;
            } else {
                _idc ctrlShow false;
            };
        } else {
            _idc ctrlShow false;
        };
    } else {
        _idc ctrlShow false;
    };
} forEach _units;
