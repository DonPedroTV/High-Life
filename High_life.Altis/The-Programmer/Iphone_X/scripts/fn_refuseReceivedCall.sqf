/*
    Author: Jean_Park
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Discord : https://discord.gg/DhFUFsq

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
if !(player getVariable ["receiveCall",false]) exitWith {};

_with = player getVariable ["receiveCallBy",objNull];
if (isNull _with) exitWith {};

_withNum = _with getVariable ["maxence_numero",""];
if (_with getVariable ["calling_ano",false]) then {
    _withNum = (["STR_ANONYME"] call max_phone_fnc_localize);
} else {
    {
       if (_x select 1 isEqualTo _withNum) exitWith {
          _withNum = _x select 0;
       };
    } foreach maxence_contact;
};

1 fadeSound 0;
closeDialog 0;
hint format ["Incoming %1 call refused.",_withNum]; 

player setVariable ["receiveCall",false]; 
player setVariable ["receiveCallBy",objNull];

[] spawn the_programmer_iphone_fnc_phone_init;
