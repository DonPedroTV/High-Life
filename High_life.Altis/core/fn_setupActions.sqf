/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
case west:
    {
        //CopEnter - Driver Seat
        life_actions = life_actions + [player addAction[localize "STR_pAct_DriverSeat",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
        //CopEnter - Passenger Seat
        life_actions = life_actions + [player addAction[localize "STR_pAct_PassengerSeat",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
        //CopEnter - Gunner Seat
        life_actions = life_actions + [player addAction[localize "STR_pAct_GunnerSeat",life_fnc_copEnter,"gunner",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
         //CopEnter - Exit
         life_actions = life_actions + [player addAction[localize "STR_pAct_GoOut",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
         //Pasy
        life_actions pushBack (player addAction["<t color = '#D660D6'>Zapnij Pasy</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
        life_actions pushBack (player addAction["<t color = '#D660D6'>Odepnij Pasy</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
        //odznaka
        life_actions = life_actions + [player addAction["<t color='#00FF00'>Pokaż odznakę</t>",life_fnc_copPasseport,"",1,false,true,"",' playerSide == west && player distance cursorObject < 3.5 && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
        //usuniecie z ziemi
        life_actions pushBack (player addAction["Skonfiskuj przedmioty",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']);
        //zatrzymaj pojazd
        life_actions pushBack (player addAction["<t color = '#ff0000'>Zatrzymaj pojazd!</t>",life_fnc_zatrzymaj,"",7,false,false,"",' vehicle player != player ']);
        //strefy
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Wyzwól strefę</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];
    };
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
        //Pasy
		life_actions pushBack (player addAction["<t color = '#D660D6'>Zapnij Pasy</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
		life_actions pushBack (player addAction["<t color = '#D660D6'>Odepnij Pasy</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
		//Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable["robbed",FALSE]) ']];
        //dowod
        life_actions = life_actions + [player addAction["<t color='#00FF00'>Pokaż dokumenty</t>",life_fnc_civPasseport,"",1,false,true,"",' playerSide == civilian && player distance cursorObject < 3.5 &&  !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
        //kradziez telefonu i mapy
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobSmartphone",life_fnc_robItems,"",0,false,false,"",'!isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && (animationState cursorObject=="Incapacitated" or animationState cursorObject=="AmovPercMstpSnonWnonDnon_amovpercmstpssurwnondnon")']];
        //apteczka na cywilu
        life_actions = life_actions + [player addAction["Wylecz się",life_fnc_heal,"",1,false,false,"",'("Medikit" in (items player)) && vehicle player == player && ((damage player) > 0.1)']];
                //Strefy
        life_actions = life_actions + [player addAction["<t color='#FF0000'>Zajmij strefę</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];
    };

    case independent:
    {
        //CopEnter - Driver Seat
        life_actions = life_actions + [player addAction[localize "STR_pAct_DriverSeat",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
        //CopEnter - Passenger Seat
        life_actions = life_actions + [player addAction[localize "STR_pAct_PassengerSeat",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
        //CopEnter - Gunner Seat
        life_actions = life_actions + [player addAction[localize "STR_pAct_GunnerSeat",life_fnc_copEnter,"gunner",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];
         //CopEnter - Exit
         life_actions = life_actions + [player addAction[localize "STR_pAct_GoOut",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
         //Pasy
        life_actions pushBack (player addAction["<t color = '#D660D6'>Zapnij Pasy</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
        life_actions pushBack (player addAction["<t color = '#D660D6'>Odepnij Pasy</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);
        //medyk jedzie
        life_actions pushBack (player addAction["<t color = '#ff0000'>Zwolnij przejazd!</t>",life_fnc_jedziemedyk,"",7,false,false,"",' vehicle player != player ']);
    };
};
