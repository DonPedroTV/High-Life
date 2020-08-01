 /*
    	File: fn_speedBomb.sqf
    	Author: Fuzz
    	
    	Description:
    	Attaches a speed bomb to a vehicle.
    */
    private["_unit"];
    _unit = cursorTarget;
    
    //if(!license_civ_rebel) exitWith {hint "Musisz być rebeliantem!"}; // OPTIONAL - If you want license to plant the bomb.
    if((!(_unit isKindOf "LandVehicle"))&&(!(_unit getVariable ["restrained",false]))) exitWith {hint "Nie możesz tego zrobić."};
    if(player distance _unit > 7) exitWith {hint "Musisz podejść bliżej!"};
    if(!([false,"speedbomb",1] call life_fnc_handleInv)) exitWith {};
    closeDialog 0;
     
    life_action_inUse = true;
     
    player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
    sleep 1.5;
    waitUntil {animationState player != "ainvpknlmstpsnonwnondnon_medic_1"};
     
    life_action_inUse = false;
    if(player distance _unit > 7) exitWith {titleText["Musisz podejść bliżej!","PLAIN"];};
     
    titleText["Bomba podłożona.","PLAIN"];
    //life_experience = life_experience + 25;
     
    [_unit] spawn
    {
    	_veh = _this select 0;
    	waitUntil {(speed _veh) > 70}; // 70 - Speed for activate the bomb. You can change if you want ;)
    	[[_veh, "caralarm",10],"life_fnc_playSound",true,false] spawn BIS_fnc_MP;
    	hint "Bomba prędkościowa została aktywowana!";
    	{ [[2,"Bomba prędkościowa została aktywowana w twoim pojeździe. Wybuchnie kiedy zwolisz poniżej 50 km/h!"],"life_fnc_broadcast",_x,false] spawn BIS_fnc_MP; } foreach (crew _veh);
    	waitUntil {(speed _veh) < 50}; // 50 - Speed that the bomb will explode. You change it what you want. Don't forget to change the text above too.
    	serv_killed = [player,"1090"];
    	publicVariableServer "serv_killed";
    	_test = "Bo_Mk82" createVehicle [0,0,9999];
    	_test setPos (getPos _veh);
    	_test setVelocity [100,0,0];
    	hint "Bomba prędkościowa zdetonowana!";
    };