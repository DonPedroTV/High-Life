/*
	File: fn_busTravel.sqf
	Author: midgetgrimm
*/
private ["_action","_teleMan"];
if(!alive player) exitWith {hint"Nie żyjesz.. dafuq";};
if (vehicle player != player) exitWith {hint "Wyjdź z pojazdu";};
if(life_cash < 5000) exitWith {hint "Nie masz przy sobie $5,000!!";};

_teleMan = _this select 3;

_action = [
			"Czy jesteś pewien, że chcesz wsiąść do autobusu ?",
			"Podróz Autobusem",
			"Tak",
			"Nie"
		] call BIS_fnc_guiMessage;

if(_action) then {

		life_cash = life_cash - 5000;

		switch (_teleMan) do
		{
			case "Bus_Kavala":
			{
					titleText ["Jedziesz autobusem...","BLACK",2];
					uiSleep 2;
					player setPos (getMarkerPos "Respawn_west");
					_handle = [] spawn life_fnc_teleTimer;
					waitUntil {scriptDone _handle};
					player setPos (getMarkerPos "Bus_Kavala");
					disableUserInput false;
					titleText ["Wysiadłeś z autobusu.","BLACK IN"];
			};
			case "Bus_Athira":
			{
					titleText ["Jedziesz autobusem...","BLACK",2];
					uiSleep 2;
					player setPos (getMarkerPos "respawn_civilian");
					_handle = [] spawn life_fnc_teleTimer;
					waitUntil {scriptDone _handle};
					player setPos (getMarkerPos "Bus_Athira");
					disableUserInput false;
					titleText ["Wysiadłeś z autobusu.","BLACK IN"];
			};
			case "Bus_Sofia":
			{
					titleText ["Jedziesz autobusem...","BLACK",2];
					uiSleep 2;
					player setPos (getMarkerPos "Respawn_west");
					_handle = [] spawn life_fnc_teleTimer;
					waitUntil {scriptDone _handle};
					player setPos (getMarkerPos "Bus_Sofia");
					disableUserInput false;
					titleText ["Wysiadłeś z autobusu.","BLACK IN"];
			};
			case "Bus_Pyrgos":
			{
					titleText ["Jedziesz autobusem...","BLACK",2];
					uiSleep 2;
					player setPos (getMarkerPos "respawn_civilian");
					_handle = [] spawn life_fnc_teleTimer;
					waitUntil {scriptDone _handle};
					player setPos (getMarkerPos "Bus_Pyrgos");
					disableUserInput false;
					titleText ["Wysiadłeś z autobusu.","BLACK IN"];
			};
		};
} else {
	hint"Dziękujemy za korzystanie z Publicznego Transportu!";
};