/*
    File: fn_gagged.sqf
    Author: Lowheartrate & Panda
*/
private["_gagger"];
_gagger = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
hint format["Zostałeś zakneblowany przez %1.", _gagger getVariable["realname",_gagger]];
titleText ["Jesteś zakneblowany i nie możesz mówić!", "PLAIN"];
enableRadio false;
5 enableChannel false;
3 enableChannel false;
4 enableChannel false;
waitUntil{!(player getVariable ["gagged",false]) OR !(player getVariable ["tied",false])};
hint format["Już nie jesteś zakneblowany!"];
titleText ["Nie jesteś zakneblowany", "PLAIN"];
enableRadio true;
5 enableChannel true;
3 enableChannel true;
4 enableChannel true;