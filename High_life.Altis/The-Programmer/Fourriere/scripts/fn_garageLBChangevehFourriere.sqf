#include "..\..\script_macros.hpp"
/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
disableSerialization;
private ["_control","_index","_className","_classNameLife","_dataArr","_retrievePrice","_vehicle_four_multiplier","_price","_purchasePrice"];
_control = _this select 0;
_index = _this select 1;

_dataArr = CONTROL_DATAI(_control,_index);
_dataArr = call compile format ["%1",_dataArr];
_className = (_dataArr select 0);
_classNameLife = _className;
if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _classNameLife)) then {
    _classNameLife = "Default";
    diag_log format ["%1: LifeCfgVehicles class doesn't exist",_className];
};

_price = M_CONFIG(getNumber,"LifeCfgVehicles",_classNameLife,"price");
_vehicle_four_multiplier = getNumber(missionConfigFile >> "Max_Settings_Fourriere" >> "price_unimpound");

switch (playerSide) do {
    case civilian: {            
            _purchasePrice = _price * LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
        };
    case west: {
            _purchasePrice = _price * LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_COP");
        };
    case independent: {
            _purchasePrice = _price * LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_MEDIC");
        };
    };  

_retrievePrice = _purchasePrice * _vehicle_four_multiplier;
if (!(_retrievePrice isEqualType 0) || _retrievePrice < 1) then {_retrievePrice = 500;};

(CONTROL(2800,2803)) ctrlSetStructuredText parseText format [
    (localize "STR_Shop_Veh_UI_RetrievalP")+ " <t color='#32A832'>$%1</t><br/>
    ",
[_retrievePrice] call life_fnc_numberText
];

ctrlShow [2803,true];
ctrlShow [2830,true];