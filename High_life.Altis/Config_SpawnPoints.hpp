/*
*    Format:
*        licenses: ARRAY (This is for limiting spawn to certain things)
*           0: License Name
*           1: License Check Type
*                false: If license isn't set
*                true: If license is set
*           Example:
*                licenses[] = { { "pilot", true }, { "rebel", false } }; //Shows up for players with pilot and without rebel license.
*
*        level: ARRAY (This is for limiting spawn to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / INVERSE)
*                SCALAR: VALUE => VALUE
*                BOOL: VALUE EXISTS
*                EQUAL: VALUE == VALUE
*                INVERSE: VALUE <= VALUE
*            2: What to compare to (-1 = Check Disabled)
*
*/
class CfgSpawnPoints {
    class Civilian {
        class Kavala {
            displayName = "Kavala";
            spawnMarker = "civ_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira";
            spawnMarker = "civ_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos";
            spawnMarker = "civ_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Sofia {
            displayName = "Sofia";
            spawnMarker = "civ_spawn_4";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class RebelS {
            displayName = "Północna rebelka";
            spawnMarker = "Rebelop";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelN {
            displayName = "Południowa rebelka";
            spawnMarker = "Rebelop_1";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };

        class RebelE {
            displayName = "Wschodnia rebelka";
            spawnMarker = "Rebelop_2";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "rebel", true } };
            level[] = { "", "", -1 };
        };
		
		/*class Mafia {
            displayName = "GROM";
            spawnMarker = "mafia_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "mafia", true } };
            level[] = { "", "", -1 };
        };
		
		class grom {
            displayName = "SGPL";
            spawnMarker = "grom_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "grom", true } };
            level[] = { "", "", -1 };
        };
		
		class 4DWD {
            displayName = "4DWD";
            spawnMarker = "4DWD_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "4DWD", true } };
            level[] = { "", "", -1 };
        };
		
		class klapek {
            displayName = "Ghost Cartel";
            spawnMarker = "klapek_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "klapek", true } };
            level[] = { "", "", -1 };
        };
		
		class bh {
            displayName = "Baza Łowców Głów";
            spawnMarker = "bh_spawn";
            icon = "\a3\ui_f\data\map\MapControl\bunker_ca.paa";
            licenses[] = { { "bountyH", true } };
            level[] = { "", "", -1 };
        };*/
    };

    class Cop {
        class Kavala {
            displayName = "Komisariat Kavala";
            spawnMarker = "cop_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Athira";
            spawnMarker = "cop_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\fuelstation_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Pyrgos";
            spawnMarker = "cop_spawn_2";
            icon = "\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class szkolenia_p {
            displayName = "Osrodek szkoleniowy";
            spawnMarker = "szkolenia_p_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };

    class Medic {
        class Kavala {
            displayName = "Szpital Kavala";
            spawnMarker = "medic_spawn_1";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Athira {
            displayName = "Szpital Athira";
            spawnMarker = "medic_spawn_2";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };

        class Pyrgos {
            displayName = "Szpital Pyrgos";
            spawnMarker = "medic_spawn_3";
            icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
		
		class szkolenia_m {
            displayName = "Osrodek szkoleniowy";
            spawnMarker = "szkolenia_m_spawn";
            icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
            licenses[] = { { "", true } };
            level[] = { "", "", -1 };
        };
    };
};
