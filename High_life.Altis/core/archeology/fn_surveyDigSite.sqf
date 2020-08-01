#include <macro.h>

private ["_index","_cpRate"];
_gearLevel = [_this,0,"",[""]] call BIS_fnc_param;

//Initial checks
if (count life_activeDigsites < 1) exitWith {hint "Nie masz żadnych aktywnych stref do zbadania.."};


// Check if we are near a zone which can be surveyed
_index = -1;

{
	if (player distance (getMarkerPos (_x select 0)) < 75) exitWith {_index = _forEachIndex};
}forEach life_activeDigsites;

if (_index isEqualTo -1) exitWith {hint "Nie jesteś blisko strefy, która może być zbadana."};

if (count (life_activeDigsites select _index) >= 6) exitWith {hint "Już zbadałeś tą strefę!"};

// Select the site, get data
_siteData = life_activeDigsites select _index;
_selectedSiteMarker = _siteData select 0;
_type = _siteData select 1;
_task = _siteData select 2;
_areaMarker = _siteData select 3;
_loot = _siteData select 4;

//Setup our progress bar.
life_action_inUse = true;
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Badanie...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

switch (_gearLevel) do {
	case "normal" : {_cpRate = 0.007};
	case "advanced" : {_cpRate = 0.02};
	default {_cpRate = 0.01};
};


for "_i" from 0 to 1 step 0 do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
	//if(dialog) exitWith {};
};

//Stop player
life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player) exitWith {life_action_inUse = false; };
if(dialog) exitWith {life_action_inUse = false;};
if(player != vehicle player) exitWith {life_action_inUse = false; };
//You moved or died or something
if(life_interrupted) exitWith {life_interrupted = false; player playActionNow "stop"; titleText["Badanie anulowane ","PLAIN"]; life_action_inUse = false;};

//tfw you can't remember circles from year 6 maths
//Random position

_maxDistance = (getMarkerSize _areaMarker select 0) - 2;
_dist = floor random _maxDistance;

_dir = floor random 360;
_xpos = (getMarkerPos _selectedSiteMarker select 0) + (sin _dir) * _dist;
_ypos = (getMarkerPos _selectedSiteMarker select 1) + (cos _dir) * _dist;

//Create the marker
_text = format ["digsitemarker_%1",_index];
_marker = createMarkerLocal [_text, [_xpos,_ypos]];
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTypeLocal "hd_objective";
_marker setMarkerColorLocal "ColorBlack";
_marker setMarkerTextLocal "Wykopaliska";

//Add the marker to the dig site data
life_activeDigsites select _index pushBack _text;

//Update the task?
_taskDescArray = taskDescription _task;
_task setSimpleTaskDescription ["Wykopaliska zostały oznaczone w strefie.", _taskDescArray select 1, _taskDescArray select 2];

[1, "Zbadałeś strefę, wykopaliska zostały oznaczone na mapie!", ["Archeologia", "#b38f00"]] call life_fnc_hint;
