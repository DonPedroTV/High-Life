#include <macro.h>

private ["_amount","_selectedSiteMarker","_siteType","_markerText","_selectedPos","_lootTable","_lootAmount"];
_amount = [_this,0,0,[0]] call BIS_fnc_param;			// Base amount of 'Normal' digsites
_chanceOfRare = [_this,1,0,[0]] call BIS_fnc_param;		// Chance of getting a rare digsite
_typeOfMap = [_this,2,"",[""]] call BIS_fnc_param;		// Type of map, so we know what needs to be removed
if (count life_activeDigsites >= 1) exitWith {hint "Musisz zakończyć wszystkie swoje aktywne poszukiwania."}; //Already stuff going
if (count life_availableDigsites < _amount) then {["total"] call life_fnc_resetDigSites}; //No sites left, or first time using this?
if (playerSide != civilian) exitWith {hint "Ta praca jest dostępna tylko dla cywili."};

_lootAmount = 0;

for "_i" from 1 to _amount do {

	_selectedSiteMarker = selectRandom life_availableDigsites;
 	_selectedPos = getMarkerPos _selectedSiteMarker;

 	//Rare? If so, chance gets lower for next loop
 	if ((random 100) < _chanceOfRare) then {
 		_siteType = "rare";
 		_chanceOfRare = round (_chanceOfRare / 3);
	 	} else {
	 	_siteType = "common"
	 };

	// Remove from available for future
	life_availableDigsites = life_availableDigsites - [_selectedSiteMarker];

	// Create an area Marker
	_areaMarkerVar = format ["archeology_digsite_%1",_i];
	_areaMarker = createMarkerLocal [_areaMarkerVar , _selectedPos];
	_areaMarker setMarkerShapeLocal "ELLIPSE";
	_areaMarker setMarkerBrushLocal "Solid";
	_areaMarker setMarkerColorLocal "ColorBlack";
	_areaMarker setMarkerSizeLocal [75, 75];

 	// Create a task
	_task = player createSimpleTask ["archeology"];

	if (isNil "_siteType") exitWith {};

	switch (_siteType) do {

		case "rare" :	{

			_task setSimpleTaskDescription ["Zbadaj oznaczoną strefę aby znaleźć położenie wykopalisk.", format ["Wykopaliska %1 (Rzadkie)",_i], ""];
			_lootAmount = round(random[4,5,6]);
			_lootTable = life_rareSiteTable;
		};

		case "common" : {

			_task setSimpleTaskDescription ["Zbadaj oznaczoną strefę aby znaleźć położenie wykopalisk.", format ["Wykopaliska %1",_i], ""];
			_lootAmount = round(random[3,4,5]);
			_lootTable = life_commonSiteTable;
		};
	};

	_task setSimpleTaskDestination _selectedPos;

	//Zone loot
	_loot = [];

	for "_i" from 1 to _lootAmount do {
		_finding = [_lootTable] call HL_SelectByChance;
		_loot pushBack _finding;
	};

	// Add to active, with type + task
	life_activeDigsites pushBack [_selectedSiteMarker,_siteType,_task,_areaMarkerVar,_loot];
};

//Remove the map
[false,_typeOfMap,1] call life_fnc_handleInv;

//Finalize
life_archeologyStartCoords = position player;
[1, "Położenie wykopalisk zostało oznaczone na mapie. Udaj się tam i użyj sprzętu geodezyjnego aby sprawdzić gdzie kopać.", ["Archeologia", "#b38f00"]] call life_fnc_hint;