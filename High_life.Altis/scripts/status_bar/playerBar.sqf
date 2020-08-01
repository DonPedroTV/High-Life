waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

	4 cutRsc["statusBar","PLAIN"];
	[] spawn
	{
		sleep 5;

	while {true} do
	{
		sleep 1;

		if(isNull ((uiNamespace getVariable "statusBar")displayCtrl 1000)) then
		{
			diag_log "statusbar is null create";
			disableSerialization;

			4 cutRsc["statusBar","PLAIN"];
		};

		_unit = _this select 0;
		_nakit = [life_cash] call life_fnc_numberText;
		_bank = ([life_atmbank] call life_fnc_numberText);
		_fps = format["%1", diag_fps];
		_polis = (west countSide playableUnits);
		_doktor = (independent countSide playableUnits);
		_sivil = (civilian countSide playableUnits);
		_time = (round(360-(serverTime)/60));  //edit the '240' value (60*4=240) to change the countdown timer if your server restarts are shorter or longer than 4 hour intervals
		_hours = (floor(_time/60));
		_minutes = (_time - (_hours * 60));
		_players = (count playableUnits);


		switch(_minutes) do	{
			case 9: {_minutes = "09"};
			case 8: {_minutes = "08"};
			case 7: {_minutes = "07"};
			case 6: {_minutes = "06"};
			case 5: {_minutes = "05"};
			case 4: {_minutes = "04"};
			case 3: {_minutes = "03"};
			case 2: {_minutes = "02"};
			case 1: {_minutes = "01"};
			case 0: {_minutes = "00"};
		};

		((uiNamespace getVariable "statusBar")displayCtrl 1000)ctrlSetStructuredText parseText
			format["
			FPS: %7 | Gracze: %2 | Policja: %3 | Cywile: %5 | Medycy: %4 | KASA: %6 | BANK: %10 | TS3: tslife.pl | Do restartu: %8:%9",
					"%",
					_players,
					_polis,
					_doktor,
					_sivil,
					_nakit,
					round diag_fps,
					//format["%1/%2",_xx,_yy],
					_hours,
					_minutes,
					_bank

				];




	};
};