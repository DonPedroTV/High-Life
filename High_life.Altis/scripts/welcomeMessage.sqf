/*
	File: welcomecredits.sqf
	Author: HellsGateGaming.com
	Edit: RenildoMarcio
	Date: 09/05/2014
	Description:
	Creates an intro on the bottom-right hand corner of the screen.
*/

_onScreenTime = 7;

sleep 60; //Wait in seconds before the credits start after player is in-game

_role1 = "Witamy na Serwerze:";
_role1names = ["High Life"];
_role2 = "Administracja:";
_role2names = ["Damian Dzik, Cezary Dymacz, Komornik, Nassiu, Ankou, RetuShadow"];
_role3 = "Developerzy:";
_role3names = ["Shield, DonPedroTV, Bartek, dobrzy_ludzie"];
_role4 = "Forum:";
_role4names = ["armahighlife.pl"];
_role5 = "TeamSpeak3:";
_role5names = ["tslife.pl"];
_role6 = "Znalazłeś błąd na serwerze?";
_role6names = ["Skontaktuj się z nami!"];
_role7 = "Restarty serwera";
_role7names = ["02:00, 08:00, 14:00, 20:00"];
_role8 = "Życzymy miłej gry!";
_role8names = ["Ekipa High Life"];


{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.70' color='#ffee00' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.80' color='#FFFFFF' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.9);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names],
[_role7, _role7names],
[_role8, _role8names]

];