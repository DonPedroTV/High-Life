/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the navigation script

class maverick_navigation_cfg {

	class bindings {
		keyCode		= 49; // Keycodes can be found at https://community.bistudio.com/wiki/DIK_KeyCodes
		reqShift	= 0;
		reqAlt		= 0;
		reqCtrl		= 1;
	};

	option_list[] = {
		{"Aktualny cel", "maverick\navigation\data\currentroute.paa", "!isNil 'mav_gps_v_markers'", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationCurrent';"},
		{"Nowy cel", "maverick\navigation\data\newroute.paa", "isNil 'mav_gps_v_markers'", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationNew';"},
		{"Zapisane cele", "maverick\navigation\data\savedroutes.paa", "true", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationSaved';"},
		{"Ustawienia GPS", "maverick\navigation\data\mapsettings.paa", "true", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationSettings';"},
		{"Informacje GPS", "maverick\navigation\data\help.paa", "false", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationHelp';"}
	};

	class presets {
		class Altis {
			presetLocations[] = {

			};
		};
		class Malden {
			presetLocations[] = {

			};
		};
		class Stratis {
			presetLocations[] = {

			};
		};
		class Tanoa {
			presetLocations[] = {

			};
		};
	};

	class localization {

		// Display messages from around the navigation system
		msgStartPosInvalid = 		"Poczatkowa pozycja jest niepoprawna!";
		msgEndPosInvalid = 			"Koncowa pozycja jest niepoprawna";
		msgCheckpointInvalid = 		"Pozycja jest niepoprawna";
		msgNoRoadsegmentFound = 	"Nie mozna znalezc drogi w odleglosci %1 od podanej pozycji %2, Konczenie Pracy...";
		msgAbortCurrentRoute = 		"Musisz najpierw zakonczyc aktualna trase by zaczac nastepna!";
		msgSettingsSaved = 			"Zapisano ustawienia nawigacji!";
		msgPositionReset = 			"Pozycja GPS zostala zapisana!";
		msgCalcRoadDirs = 			"Wyszukiwanie trasy";
		msgCalcRoadDirsProgress = 	"Wyszukiwanie trasy (%1/%2)";
		msgOneMinute = 				"&lt; 1 min";
		msgSmallerThanMinute = 		"< 1 min";
		msgMinutesLeft = 			"%1 min";
		msgReachDestination = 		"Do Osiagniecia celu zostalo ci %1";
		msgFollowThenTurnLeft = 	"Jedz dalej ta droga przez %1, po czym skrec w lewo";
		msgFollowThenTurnRight = 	"Jedz dalej ta droga przez %1, po czym skrec w prawo";
		msgArrivedFormatted = 		"<t align='center'>Dotarles do celu!</t>";
		msgReachedDestination = 	"Ustawiles cel podrozy!";
		msgNoRoadsFound = 			"Nie udalo sie odnalezc drogi!";
		msgInvalidRoadSegment = 	"Nie udalo sie ustalic trasy dla tej pozycji";
		msgCurrentLocation = 		"Aktualna lokalizacja";
		msgStart = 					"Start";
		msgCheckpoint = 			"Postoj";
		msgDestination = 			"Cel podrozy";
		msgPressSpace = 			"Wcisnij [spacja] by zapisac pozycje";
		msgGpsPosSaved = 			"Pozycja zostala zapisana pomyslnie!";
		msgNoRouteFound = 			"Nie wykryto trasy!";
		msgTimedOut = 				"Przekroczono czas oczekiwania!... Sprobuj ponownie!";
		msgRouteFound = 			"Znaleziono trase";
		msgRouteInfo = 				"Informacja o trasie";
		msgFrom = 					"Z";
		msgTo = 					"Do";
		msgTotalDistance = 			"Dystans do pokonania";
		msgTotalravelTime = 		"Czas podrozy";
		msgRoadPreference = 		"Preferowane trasy";
		msgRouteCalculate = 		"Obliczanie trasy...";
		msgCancelConfirm = 			"Czy napewno chcesz anulowac trase?";
		msgCancelRoute = 			"Anuluj trase";
		msgCancel = 				"Anuluj";
		msgProceed = 				"Kontynuuj";
		msgNoRouteNameGiven = 		"Nie nazwano trasy!.";
		msgRouteNameLimit = 		"Nazwa trasy nie moze byc dluzsza niz 30 znakow";
		msgIllegalChars = 			"Nazwa trasy zawiera niedozowolne znaki!";
		msgRouteLimit = 			"Przekroczyles limit zapisanych tras, musisz usunac jedna z tras!";
		msgRouteSaved = 			"Trasa zostala zapisana pomyslnie!";
		msgRouteDeleted = 			"Trasa zostala usunieta pomyslnie!";
		msgFinishRouteFirst = 		"Najpierw musisz ukonczyc aktualna trase albo ja zakonczyc!";
		msgNoSavedRoutes = 			"Brak zapisanych tras";
		msgTurnNow =				"Skrec teraz!";

		// Localization for the dialogs
		#define dialogMainMenu 		"Menu nawigacji"
		#define dialogClose 		"Zamknij"
		#define dialogCurrentRoute 	"Aktualna trasa"
		#define dialogResetRoute 	"Zakoncz aktualna trase"
		#define dialogRecalculate	"Zaladuj ponownie trase"
		#define dialogNewRoute 		"Nowa trasa"
		#define dialogCalcRoute		"Pokaz trase"
		#define dialogBack 			"cofnij"
		#define dialogStart 		"Start"
		#define dialogLoad 			"wczytaj"
		#define dialogCheckpoint 	"Postoj"
		#define dialogDestination 	"Cel"
		#define dialogCommonDest	"Common Destination Points"
		#define dialogSavedRouts	"Zapisane trasy"
		#define dialogMenuSettings	"Ustawienia"
		#define dialogSave			"Zapisz"
		#define dialogUnitSpeed		"Jednostka predkosci"
		#define dialogPreference	"Preferred Path"
		#define dialogGpsPos		"Pozycja GPS GUI"
		#define dialogCustomize		"Spersonalizuj"
		#define dialogReset			"Zresetuj"
		#define dialogGpsColor		"GPS kolor"
		#define dialogDragHere		"DRAG HERE"
		#define dialogSavedTitle	"Zapisane trasy"
		#define dialogDelete		"usun"
		#define dialogCalcProgress	"<t size='1.2' align='center'>Trasa jest obliczana...</t>"
		#define dialogNavigation	"Nawigacja"
		#define dialogSaveRoute		"Zapisz Trase"
		#define dialogRouteName		"Wprowadz Nazwe Trasy"
		#define dialogCalculating	"Obliczanie Trasy..."
		#define dialogRouteInfo		"Informacje o Trasie"
		#define dialogRouteMapPrev	"Przeglad Trasy"
		#define dialogVoiceSetting	"Komendy glosowe"
		#define dialogCalculationH	"Obliczenia trasy"
	};

	/*
		You should only add / remove / edit any of these parameters if you were advised to do so by Maverick Applications
		Unauthorized Changes can lead to a complete failure of the navigation system!
	*/
	class AlgorithmParameters {

		class Chernarus_Summer {
			greedy = 3.2;
		};

		class australia {
			greedy = 3.2;
		};

		class Malden {
			radius = 45;
		};

		class Sara {
			radius = 66;
		};
	};

	// Do not touch below
	#include "sounds\voicepacks\config.cpp"
};

//Do not touch below
#include "gui\gps_gui_master.cpp"