#include "..\script_macros.hpp"
/*
    File: pedagio.sqf
    Author: GhostsBR

    Description: Script toll V1.0 EN-US

	this addAction ["<t color = '#40FF00'>Zaplac za przejazd - $20000</t>", "scripts\pedagio.sqf"];

	this setVariable ['bis_disabled_Door_1',1,true]; this setVariable ['bis_disabled_Door_2',1,true];


*/

if (side player == civilian) then {
	if (BANK > 19999) then {
		call action_pagar;
	};
	if (BANK < 20000) exitWith {hint "Potrzebujesz $20000 aby przejechac!"};
};

if (side player == west) then {
	call action_prioridade;
};

if (side player == independent) then {
	call action_prioridade;
};


action_prioridade = {
	_porta = nearestObject [player, "Land_Net_Fence_gate_F"];
	hint "Sluzby maja darmowy przejazd!";
	_porta animate ["Door_1_rot", 1];
	_porta animate ["Door_2_rot", 1];
	sleep 25;
	call action_acabou;
};

action_pagar = {
	_pagamento = 20000;
	_porta = nearestObject [player, "Land_Net_Fence_gate_F"];
	BANK = BANK - _pagamento;
	hint "Zaplaciles $20000 za przejazd!";
	_porta animate ["Door_1_rot", 1];
	_porta animate ["Door_2_rot", 1];
	sleep 25;
	call action_acabou;
};

action_acabou = {
	_portao = nearestObjects [player, ["Land_Net_Fence_gate_F"], 200];
	_obj = _portao select 0;
	_obj animate ["Door_1_rot", 0];
	_obj animate ["Door_2_rot", 0];
	_obj2 = _portao select 1;
	_obj2 animate ["Door_1_rot", 0];
	_obj2 animate ["Door_2_rot", 0];
};