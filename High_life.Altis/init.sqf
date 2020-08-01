/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\Status_Bar\init_statusBar.sqf";
[] execVM "scripts\teargas.sqf";
0 = execVM "IgiLoad\IgiLoadInit.sqf";
[] execVM "scripts\welcomeMessage.sqf";
[] execVM "HL_FNC.sqf";
[] execVM "scripts\removeFog.sqf";

StartProgress = true;

