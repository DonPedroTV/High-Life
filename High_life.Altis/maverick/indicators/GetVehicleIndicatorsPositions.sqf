[] spawn {
	vehiclesToEdit = ["C_Van_01_transport_F","C_Van_01_box_F","C_Truck_02_covered_F","C_Truck_02_transport_F","B_T_LSV_01_armed_F","B_Truck_01_ammo_F","B_Truck_01_box_F","B_Truck_01_transport_F","B_Truck_01_covered_F","O_MRAP_02_gmg_F","O_MRAP_02_hmg_F","O_Truck_03_ammo_F","O_Truck_03_repair_F","O_Truck_03_medical_F","O_Truck_03_covered_F","O_Truck_02_Ammo_F","O_Truck_02_fuel_F","I_MRAP_03_gmg_F","I_MRAP_03_hmg_F","I_Truck_02_transport_F"];

	currentVehPositions = [];
	allInfo = [];

	(findDisplay 46) displayRemoveAllEventHandlers "KeyDown";
	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		_ret = false;
		if ((_this select 1) == 2) then {
			_a = currentVehPositions pushBack curPos;
			_ret = true;
		};

		_ret
	}];

	arrow = "Sign_Sphere10cm_F" createVehicle [0,0,0];
	curVeh = objNull;
	curPos = [];

	[] spawn {
		onEachFrame {
			_ins = lineIntersectsSurfaces [
				AGLToASL positionCameraToWorld [0,0,0],
				AGLToASL positionCameraToWorld [0,0,1000],
				player
			];
			if (count _ins == 0) exitWith {arrow setPosASL [0,0,0]};
			arrow setPosASL (_ins select 0 select 0);
			arrow setVectorUp (_ins select 0 select 1);
			curPos = curVeh worldToModel (ASLToAGL (_ins select 0 select 0));
		};
	};

	for "_i" from 0 to (count vehiclesToEdit - 1) step 1 do
	{
		_class = vehiclesToEdit select _i;

		currentVehPositions = [];
		curVeh = _class createVehicle position player;
		curVeh setPos (player modelToWorld [0,3,0]);
		curVeh setDir (getDir player - 90);

		waitUntil {count currentVehPositions == 4};

		allInfo pushBack [_class, currentVehPositions];

		deleteVehicle curVeh;
	};

	_replace = {
		_input = param[0,"",[""]];
		private["_output"];

		_output = [];

		{
			switch (_x) do
			{
				case 91:
				{
					_output pushBack 123;
				};
				case 93:
				{
					_output pushBack 125;
				};

				default
				{
					_output pushBack _x;
				};
			};
		} forEach (toArray _input);

		(toString _output)
	};

	_index = -1;
	_output = "";
	{
		_index = _index + 1;
		_start = "class " + (_x select 0) + " {positions[] = {";
		_end = "};};";
		_part = format ["%1,%2,%3,%4", _x select 1 select 0, _x select 1 select 1, _x select 1 select 2, _x select 1 select 3];
		_partNew = [_part] call _replace;
		_output = format ["%1%2%3%4", _output ,_start ,_partNew , _end];
	} forEach allInfo;

	hint _output;
	copyToClipboard _output
};
