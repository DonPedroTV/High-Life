/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 10500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 23500, -1 },
			{ "SMG_01_F", "", 30000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 100 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500 }
        };
    };

   class rebel {
        name = "Zbrojownia";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_MXC_F", "", 40000, 0 },
			{ "arifle_MX_F", "", 48000, 0 },
			{ "arifle_MXM_F", "", 55555, 0 },
			{ "arifle_MX_SW_F", "", 58950, 0 },
			{ "arifle_Katiba_F", "", 55000, 0 },
			{ "arifle_SPAR_01_khk_F", "", 50000, 0 },
			{ "arifle_SPAR_02_khk_F", "", 60000, 0 },
			{ "arifle_CTAR_ghex_F", "", 65000, 0 },
			{ "arifle_CTARS_hex_F", "",73000 , 0 },
			{ "srifle_DMR_07_ghex_F", "", 80000, 0 },
			{ "arifle_AKS_F", "", 45000, 0 },
			{ "SMG_05_F", "",25000, 0 },
			{ "SMG_02_F", "", 30000, 0 },
			{ "arifle_SDAR_F", "", 25600, 0 },
			
			{ "Binocular", "", 400, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 260, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "Chemlight_red", "", 1000, -1 },
            { "Chemlight_yellow", "", 1000, -1 },
            { "Chemlight_green", "", 1000, -1 },
            { "Chemlight_blue", "", 1000, -1 },
			{ "SmokeShell", "", 2000, -1 }
			
        };
        mags[] = {
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 500 },
			{ "30Rnd_65x39_caseless_mag", "", 2000 },
			{ "30Rnd_556x45_Stanag", "", 1000 },
			{ "30Rnd_556x45_Stanag_green", "", 1000 },
			{ "30Rnd_580x42_Mag_F", "", 1000 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 1000 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 1000 },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 22000 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 1000 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2000 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
			{ "30Rnd_65x39_caseless_green", "", 1500 },
			{ "30Rnd_545x39_Mag_Green_F", "", 500 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 500 },
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "20Rnd_762x51_Mag", "", 3000 },
			{ "200Rnd_65x39_belt_Tracer_Green", "", 4000 },
			{ "RPG7_F", "", 500000 },
			{ "30Rnd_762x39_Mag_Green_F", "", 3000 },
			{ "100Rnd_65x39_caseless_mag", "", 2500 }
			
        };
        accs[] = {
           	{ "optic_Aco", "", 1000, -1 },
			{ "optic_Aco_smg", "", 1000, -1 },
			{ "optic_Holosight", "", 1000, -1 },
			{ "optic_MRCO", "", 5000, -1 },
			{ "optic_Arco", "", 5000, -1 },
			{ "optic_ERCO_blk_F", "", 25000, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_DMS", "", 7500, -1 },
			{ "optic_KHS_old", "", 8000, -1 },
			{ "optic_KHS_blk", "", 10000, -1 },

			{ "bipod_02_F_blk", "", 2500, -1 },
			{ "acc_pointer_IR", "", 1000, -1 },
			{ "acc_flashlight", "", 1000, -1 }
        };
    };
	
	    class rebel2 {
        name = "Zbrojownia";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_MXC_F", "", 40000, 0 },
			{ "arifle_MX_F", "", 48000, 0 },
			{ "arifle_MXM_F", "", 55555, 0 },
			{ "arifle_MX_SW_F", "", 58950, 0 },
			{ "arifle_Katiba_F", "", 55000, 0 },	
			{ "arifle_SPAR_01_khk_F", "", 50000, 0 },
			{ "arifle_SPAR_02_khk_F", "", 60000, 0 },
			{ "arifle_CTAR_ghex_F", "", 65000, 0 },
			{ "arifle_CTARS_hex_F", "",73000 , 0 },
			{ "srifle_DMR_07_ghex_F", "", 80000, 0 },
			{ "arifle_ARX_ghex_F", "", 78000, 0 },
			{ "arifle_ARX_hex_F", "", 78000, 0 },
			{ "arifle_AKS_F", "", 45000, 0 },
			{ "SMG_05_F", "", 25000, 0 },
			{ "SMG_02_F", "", 30000, 0 },
			{ "srifle_EBR_F", "", 110000, 0 },
			{ "srifle_DMR_03_multicam_F", "", 120000, 0 },
			{ "srifle_DMR_06_olive_F", "", 115000, 0 },
			{ "arifle_SPAR_03_khk_F", "", 120000, 0 },
			{ "LMG_Mk200_F", "", 325000, 0 },
			{ "launch_RPG7_F", "", 415000, 0 },
			{ "arifle_AKM_F", "", 70000, 0 },
			{ "arifle_AK12_F", "", 130000, 0 },
			{ "arifle_SDAR_F", "", 25600, 0 },
			
			{ "Binocular", "", 400, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 400, -1 },
            { "NVGoggles", "", 2000, -1 },
            { "Chemlight_red", "", 1000, -1 },
            { "Chemlight_yellow", "", 1000, -1 },
            { "Chemlight_green", "", 1000, -1 },
            { "Chemlight_blue", "", 1000, -1 },
			{ "SmokeShell", "", 2000, -1 }
			
        };
        mags[] = {
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 500 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
			{ "30Rnd_556x45_Stanag", "", 1000 },
			{ "30Rnd_556x45_Stanag_green", "", 1000 },
			{ "30Rnd_580x42_Mag_F", "", 1000 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 1000 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 1000 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 1000 },
			{ "30Rnd_65x39_caseless_green", "", 1500 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2000 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
			{ "30Rnd_545x39_Mag_Green_F", "", 500 },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 22000 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 500 },
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "20Rnd_762x51_Mag", "", 3000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 4000 },
			{ "RPG7_F", "", 500000 },
			{ "30Rnd_762x39_Mag_Green_F", "", 3000 },
			{ "100Rnd_65x39_caseless_mag", "", 2500 }
			
        };
        accs[] = {
           	{ "optic_Aco", "", 1000, -1 },
			{ "optic_Aco_smg", "", 1000, -1 },
			{ "optic_Holosight", "", 1000, -1 },
			{ "optic_MRCO", "", 2500, -1 },
			{ "optic_Arco", "", 2500, -1 },
			{ "optic_ERCO_blk_F", "", 2500, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_DMS", "", 7500, -1 },
			{ "optic_KHS_old", "", 8000, -1 },
			{ "optic_KHS_blk", "", 10000, -1 },

			{ "bipod_02_F_blk", "", 2500, -1 },
			{ "acc_pointer_IR", "", 1000, -1 },
			{ "acc_flashlight", "", 1000, -1 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 10500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1 },
            { "hgun_ACPC2_F", "", 11500, -1 },
            { "hgun_PDW2000_F", "", 23500, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
			{ "ItemRadio", "", 100, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
        mags[] = {};
        accs[] = {};
    };
	
	class czrynek {
        name = "Czarny rynek";
        side = "civ";
        license = "czrynek";
        level[] = { "", "", -1, "" };
        items[] = {
            //{ "arifle_MXM_F", "", 85000, -1 },
            //{ "arifle_MX_SW_F", "", 80000, -1 },
            { "srifle_EBR_F", "", 150000, -1 },
            { "launch_RPG7_F", "", 415000, -1 },
            { "Medikit", "", 130000, -1 },
            { "Rangefinder", "", 50000, -1 },
            { "muzzle_snds_H", "", 150000, -1 },
            { "muzzle_snds_L", "", 45000, -1 },
            { "muzzle_snds_M", "", 100000, -1 },
            { "muzzle_snds_B", "", 190000, -1 }
			//{ "G_Combat", "", 20000, -1 }
        };
        mags[] = {
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 500 },
            { "30Rnd_65x39_caseless_mag", "", 2000 },
			{ "30Rnd_556x45_Stanag", "", 1000 },
			{ "30Rnd_556x45_Stanag_green", "", 1000 },
			{ "30Rnd_580x42_Mag_F", "", 1000 },
			{ "30Rnd_580x42_Mag_Tracer_F", "", 1000 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 1000 },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 1000 },
			{ "30Rnd_65x39_caseless_green", "", 1500 },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2000 },
			{ "30Rnd_545x39_Mag_F", "", 500 },
			{ "30Rnd_545x39_Mag_Green_F", "", 500 },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 22000 },
			{ "30Rnd_9x21_Mag_SMG_02", "", 500 },
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "20Rnd_762x51_Mag", "", 3000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 4000 },
			{ "RPG7_F", "", 500000 },
			{ "30Rnd_762x39_Mag_Green_F", "", 3000 },
			{ "100Rnd_65x39_caseless_mag", "", 2500 }
			
        };
        accs[] = {
			{ "optic_Aco", "", 1000, -1 },
			{ "optic_Aco_smg", "", 1000, -1 },
			{ "optic_Holosight", "", 1000, -1 },
			{ "optic_MRCO", "", 2500, -1 },
			{ "optic_Arco", "", 2500, -1 },
			{ "optic_ERCO_blk_F", "", 2500, -1 },
			{ "optic_Hamr", "", 2500, -1 },
			{ "optic_DMS", "", 7500, -1 },
			{ "optic_KHS_old", "", 8000, -1 },
			{ "optic_KHS_blk", "", 10000, -1 },

			{ "bipod_02_F_blk", "", 2500, -1 },
			{ "acc_pointer_IR", "", 1000, -1 },
			{ "acc_flashlight", "", 1000, -1 }
		};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 750, -1 },
			{ "ItemRadio", "", 100, -1 },
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 250, 35 },
            { "ItemCompass", "", 250, 25 },
            { "ItemWatch", "", 250, -1 },
            { "FirstAidKit", "", 750, 65 },
            { "NVGoggles", "", 1000, 980 },
            { "Chemlight_red", "", 1500, -1 },
            { "Chemlight_yellow", "", 1500, 50 },
            { "Chemlight_green", "", 1500, 50 },
            { "Chemlight_blue", "", 1500, 50 }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
   
    class cop_kadet {
        name = "Zaopatrzenie Kadeta";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 1, "Musisz mieć range Kadeta!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_Mk20_F", "", 16500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_SPAR_02_blk_F", "", 26500, -1 },

            { "HandGrenade_Stone", "Flashbang", 5000, -1 },
            { "Rangefinder", "", 2000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "Medikit", "", 10000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 3500, -1 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 75 },
			{ "20Rnd_556x45_UW_mag", "", 50 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 }

        };
		accs[] = {
			{ "optic_Holosight", "", 450 },
			{ "optic_Holosight_smg", "", 450 },
			{ "optic_Aco", "", 2500, -1 }
        };
    };

    class cop_posterunkowy {
        name = "Zaopatrzenie posterunkowego";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "Musisz mieć range starszego posterunkowego!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "arifle_MX_SW_F", "", 28500, -1 },

            { "HandGrenade_Stone", "Flashbang", 5000, -1 },
            { "Rangefinder", "", 2000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 1000, -1 },
            { "Medikit", "", 10000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 3500, -1 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "30Rnd_65x39_caseless_mag", "", 100 }
        };
		accs[] = {
			{ "optic_Aco", "", 2500, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "optic_Holosight_smg", "", 2500, -1 },
			{ "optic_ACO_grn_smg", "", 2500, -1 },
			{ "optic_Arco_blk_F", "", 3500, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 3500, -1 },
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 2000, -1 },
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

    class cop_sierzant {
        name = "Zaopatrzenie Sierżanta";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "Musisz mieć range Sierżanta!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_MXM_Black_F", "", 28500, -1 },
			{ "arifle_MX_SW_Black_F", "", 28500, -1 },
			{ "arifle_Katiba_F", "", 38500, -1 },
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "srifle_EBR_F", "", 48500, -1 },

            { "HandGrenade_Stone", "Flashbang", 4000, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 1000, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 3000, -1 }
        };
        mags[] = {
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "30Rnd_65x39_caseless_mag", "", 100 }
        };
		accs[] = {
			{ "optic_Aco", "", 2500, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "optic_Holosight_smg", "", 2500, -1 },
			{ "optic_ACO_grn_smg", "", 2500, -1 },
			{ "optic_Arco_blk_F", "", 3500, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 3500, -1 },
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 2000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

	class cop_stsierzant {
        name = "Zaopatrzenie starszego sierżanta";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 4, "Musisz mieć range starszego sierżanta!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "arifle_MXM_Black_F", "", 24000, -1 },
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "arifle_Katiba_F", "", 32000, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },

            { "HandGrenade_Stone", "Flashbang", 3000, -1 },
            { "Rangefinder", "", 2000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 3000, -1 }
        };
        mags[] = {
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 20 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "100Rnd_580x42_Mag_F", "", 70 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 490 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "30Rnd_65x39_caseless_mag", "", 100 }
        };
		accs[] = {
			{ "optic_Aco", "", 2500, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "optic_Holosight_smg", "", 2500, -1 },
			{ "optic_ACO_grn_smg", "", 2500, -1 },
			{ "optic_Arco_blk_F", "", 3500, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 3500, -1 },
			{ "optic_NVS", "", 15000, -1},
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 2000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

	class cop_sierzantsztabowy {
        name = "Zaopatrzenie sierżanta sztabowego";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 5, "Musisz mieć range sierżanta sztabowego!" };
        items[] = {
			{ "hgun_P07_snds_F", "Paralizator", 10000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_Katiba_F", "", 32000, -1 },
			{ "arifle_ARX_blk_F", "", 36500, -1},
			{ "arifle_MXM_Black_F", "", 24000, -1 },
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },
			{ "srifle_DMR_03_F", "", 45600, -1},
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "arifle_AK12_F", "", 84500, -1},
            { "HandGrenade_Stone", "Flashbang", 3000, -1 },
            { "Rangefinder", "", 2000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 3000, -1 }
        };
        mags[] = {
			{ "30Rnd_762x39_Mag_F", "", 25 },
            { "16Rnd_9x21_Mag", "", 25 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_Tracer_F", "", 70 },
			{ "100Rnd_65x39_caseless_mag", "", 70 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
			{ "30Rnd_65x39_caseless_mag", "", 100 }
        };
		accs[] = {
			{ "optic_Aco", "", 2500, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "optic_Holosight_smg", "", 2500, -1 },
			{ "optic_ACO_grn_smg", "", 2500, -1 },
			{ "optic_Arco_blk_F", "", 3500, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 3500, -1 },
			{ "optic_NVS", "", 15000, -1},
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 2000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
	};
	 
	

	class cop_aspirant {
        name = "Zaopatrzenie Aspiranta";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 6, "Musisz mieć range aspiranta!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MX_Black_F", "", 24500, -1 },
			{ "arifle_Katiba_F", "", 32000, -1 },
			{ "arifle_ARX_blk_F", "", 36500, -1},
			{ "arifle_MXM_Black_F", "", 24000, -1 },
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },
			{ "srifle_DMR_03_F", "", 46500, -1},
			{ "arifle_SPAR_03_blk_F", "", 26500, -1 },
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "LMG_03_F", "", 28500, -1},
			{ "arifle_AK12_F", "", 84500, -1},
            { "launch_RPG32_ghex_F", "", 185000, -1},

            
            { "HandGrenade_Stone", "Flashbang", 2500, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 2500, -1 }
        };
        mags[] = {
			{ "30Rnd_762x39_Mag_F", "", 25 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "RPG32_F","",150000},
            { "RPG32_HE_F","",150000}
        };
		accs[] = {
			{ "optic_Aco", "", 2500, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "optic_Holosight_smg", "", 2500, -1 },
			{ "optic_ACO_grn_smg", "", 2500, -1 },
			{ "optic_Arco_blk_F", "", 3500, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 3500, -1 },
			{ "optic_NVS", "", 15000, -1},
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 2000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

	class cop_staspirant {
        name = "Zaopatrzenie St.aspirant";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 7, "Musisz mieć range starszego aspiranta!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_Katiba_F", "", 32000, -1 },
			{ "arifle_ARX_blk_F", "", 36500, -1},
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "arifle_MXM_Black_F", "", 24000, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },
			{ "srifle_DMR_03_F", "", 46500, -1},
			{ "arifle_SPAR_03_blk_F", "", 26500, -1 },
            { "arifle_AK12_F", "", 84500, -1 },
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "LMG_03_F", "", 28500, -1},
            { "launch_RPG32_ghex_F", "", 165000, -1},
			{ "10Rnd_50BW_Mag_F", "type 115", 6000, -1 },


            { "HandGrenade_Stone", "Flashbang", 2500, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 2500, -1 }
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "", 25 },
			{ "10Rnd_50BW_Mag_F", "type 115", 100, -1 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 50 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "RPG32_F","",150000},
            { "RPG32_HE_F","",150000}
        };
		accs[] = {
            { "muzzle_snds_93mmg", "", 1000, -1 },
			{ "optic_Arco_blk_F", "", 3500, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 3500, -1 },
			{ "optic_NVS", "", 15000, -1},
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

    class cop_komisarz {
        name = "Zaopatrzenie Komisarza";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 8, "Musisz mieć range Komisarza!" };
        items[] = {
             { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MXC_Black_F", "", 26000, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_Katiba_F", "", 32000, -1 },
			{ "arifle_ARX_blk_F", "", 36500, -1},
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "arifle_AK12_GL_F", "", 84500, -1},
			{ "arifle_MXM_Black_F", "", 24000, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },
			{ "srifle_DMR_03_F", "", 46500, -1},
			{ "arifle_SPAR_03_blk_F", "", 26500, -1 },
			{ "srifle_DMR_06_camo_F", "", 46500, -1},
            { "arifle_AK12_F", "", 84500, -1 },
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "LMG_03_F", "", 28500, -1},
			{ "LMG_Zafir_F", "", 425000, 0 },
			{ "arifle_CTARS_blk_F","", 28500,-1},
            { "launch_RPG32_ghex_F", "", 130000, -1},
			{ "10Rnd_50BW_Mag_F", "type 115", 6000, -1 },

           
            { "HandGrenade_Stone", "Flashbang", 2000, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 1250, -1 }
        };
        mags[] = {
            { "30Rnd_762x39_Mag_F", "", 25 },
			{ "16Rnd_9x21_Mag", "", 25 },
			{ "10Rnd_338_Mag", "", 25 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "30Rnd_762x39_Mag_F","",500},
			{ "1Rnd_SmokeBlue_Grenade_shell","gaz łzawiący",2000},
			{ "100Rnd_580x42_Mag_F","",290},
			{ "10Rnd_338_Mag","",500},
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "10Rnd_93x64_DMR_05_Mag","",50},
			{ "RPG32_F","",150000},
            { "RPG32_HE_F","",150000}
        };
		accs[] = {
			{ "optic_Aco", "", 2500, -1 },
			{ "muzzle_snds_93mmg", "", 1000, -1 },
			{ "optic_Holosight", "", 2500, -1 },
			{ "optic_Holosight_smg", "", 2500, -1 },
			{ "optic_ACO_grn_smg", "", 2500, -1 },
			{ "optic_Arco_blk_F", "", 3500, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 3500, -1 },
			{ "optic_NVS", "", 15000, -1},
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 2000, -1 },
			{ "muzzle_snds_338_black", "", 10000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

    class cop_nadkomisarz {
        name = "Zaopatrzenie Nadkomisarza";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 9, "Musisz mieć range Nadkomisarza!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MXC_Black_F", "", 26000, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_Katiba_F", "", 32000, -1 },
			{ "arifle_ARX_blk_F", "", 36500, -1},
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "arifle_AK12_GL_F", "", 84500, -1},
            { "arifle_AK12_F", "", 84500, -1 },
			{ "arifle_MXM_Black_F", "", 24000, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "srifle_DMR_03_F", "", 46500, -1},
			{ "arifle_SPAR_03_blk_F", "", 26500, -1 },
			{ "srifle_DMR_06_camo_F", "", 46500, -1},
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "LMG_03_F", "", 28500, -1},
			{ "LMG_Zafir_F", "", 425000, 0 },
			{ "arifle_CTARS_blk_F","",28500,-1},
			{ "launch_B_Titan_tna_F","",250000,-1},
			{ "launch_RPG32_ghex_F","",130000,-1},
			{ "10Rnd_50BW_Mag_F", "type 115", 6000, -1 },

            { "HandGrenade_Stone", "Flashbang", 2000, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 1000, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 1250, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
			{ "10Rnd_50BW_Mag_F", "type 115", 100, -1 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "10Rnd_338_Mag", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "150Rnd_762x54_Box","",600},
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_762x39_Mag_F","",500},
			{ "1Rnd_SmokeBlue_Grenade_shell","gaz łzawiący",2000},
			{ "100Rnd_580x42_Mag_F","",2900},
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "10Rnd_338_Mag","",500},
			{ "10Rnd_93x64_DMR_05_Mag","",500},
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "RPG32_F","",75000},
            { "RPG32_HE_F","",75000},
			{ "Titan_AA","",12500}
        };
		accs[] = {
			{ "optic_Aco", "", 1000, -1 },
			{ "optic_Holosight", "", 1000, -1 },
			{ "optic_Holosight_smg", "", 1000, -1 },
			{ "optic_ACO_grn_smg", "", 1000, -1 },
			{ "optic_Arco_blk_F", "", 1000, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 1000, -1 },
			{ "optic_NVS", "", 50000, -1},
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 1000, -1 },
			{ "muzzle_snds_338_black", "", 1000, -1 },
			{ "muzzle_snds_93mmg", "", 1000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

    class cop_inspektor {
        name = "Zaopatrzenie Inspektora";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 10, "Musisz mieć range Inspektora!" };
        items[] = {
             { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MXC_Black_F", "", 2600, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_Katiba_F", "", 32000, -1 },
			{ "arifle_ARX_blk_F", "", 36500, -1},
			{ "arifle_AK12_GL_F", "", 84500, -1},
            { "arifle_AK12_F", "", 84500, -1 },
			{ "arifle_MXM_Black_F", "", 24000, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },
			{ "srifle_DMR_03_F", "", 46500, -1},
			{ "arifle_SPAR_03_blk_F", "", 26500, -1 },
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "LMG_03_F", "", 28500, -1},
			{ "LMG_Zafir_F", "", 425000, 0 },
			{ "arifle_CTARS_blk_F","",28500,-1},
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "launch_B_Titan_tna_F","",250000,-1},
			{ "launch_RPG32_ghex_F","",130000,-1},
			{ "launch_NLAW_F","",500000,-1},

            { "10Rnd_50BW_Mag_F", "type 115", 500, -1 },
            { "HandGrenade_Stone", "Flashbang", 1000, -1 },
            { "B_UavTerminal", "", 100000, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 1000, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 1000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "10Rnd_50BW_Mag_F", "", 25 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_762x39_Mag_F","",500},
			{ "1Rnd_SmokeBlue_Grenade_shell","gaz łzawiący",2000},
			{ "100Rnd_580x42_Mag_F","",2900},
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "10Rnd_338_Mag","",500},
			{ "10Rnd_93x64_DMR_05_Mag","",500},
			{ "7Rnd_408_Mag","",500},
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "10Rnd_50BW_Mag_F", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "RPG32_F","",65000},
            { "RPG32_HE_F","",65000},
			{ "NLAW_F","",300000},
			{ "Titan_AA","",100000}
        };
		accs[] = {
			{ "optic_Aco", "", 1000, -1 },
			{ "optic_Holosight", "", 1000, -1 },
			{ "optic_Holosight_smg", "", 1000, -1 },
			{ "optic_ACO_grn_smg", "", 1000, -1 },
			{ "optic_Arco_blk_F", "", 1000, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "muzzle_snds_65_TI_blk_F", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 1000, -1 },
			{ "optic_NVS", "", 1000, -1},
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 1000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "muzzle_snds_93mmg","",1000,-1},
			{ "muzzle_snds_338_black","",1000,-1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

    class cop_nadinspektor {
        name = "Zaopatrzenie Nadinspektora";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 11, "Musisz mieć range Nadinspektora!" };
        items[] = {
             { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 14500, -1 },
			{ "arifle_SPAR_01_blk_F", "", 26500, -1 },
			{ "arifle_MXC_Black_F", "", 26000, -1 },
			{ "arifle_MX_Black_F", "", 24000, -1 },
			{ "arifle_Katiba_F", "", 3200, -1 },
			{ "arifle_ARX_blk_F", "", 36500, -1},
			{ "arifle_AK12_GL_F", "", 84500, -1},
            { "arifle_AK12_F", "", 84500, -1 },
			{ "arifle_MXM_Black_F", "", 24000, -1 },
			{ "srifle_EBR_F", "", 42500, -1 },
			{ "srifle_DMR_03_F", "", 46500, -1},
			{ "arifle_SPAR_03_blk_F", "", 26500, -1 },
            { "arifle_SPAR_02_blk_F", "", 26500, -1 },
			{ "arifle_MX_SW_Black_F", "", 24500, -1 },
			{ "LMG_03_F", "", 28500, -1},
			{ "LMG_Zafir_F", "", 425000, 0 },
			{ "arifle_CTARS_blk_F","",28500,-1},
			{ "launch_B_Titan_tna_F","",250000,-1},
			{ "launch_RPG32_ghex_F","",130000,-1},
			{ "launch_NLAW_F","",300000,-1},
			{ "10Rnd_50BW_Mag_F", "type 115", 300, -1 },

            { "HandGrenade_Stone", "Flashbang", 1000, -1 },
            { "B_UavTerminal", "", 1000, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 1000, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 1000, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "10Rnd_50BW_Mag_F", "", 25 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_762x39_Mag_F","",500},
			{ "1Rnd_SmokeBlue_Grenade_shell","gaz łzawiący",2000},
			{ "100Rnd_580x42_Mag_F","",2900},
			{ "10Rnd_338_Mag","",500},
			{ "10Rnd_93x64_DMR_05_Mag","",500},
			{ "7Rnd_408_Mag","",500},
			{ "30Rnd_65x39_caseless_green", "", 800 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "10Rnd_50BW_Mag_F", "", 300 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "RPG32_F","",65000},
            { "RPG32_HE_F","",65000},
			{ "NLAW_F","",300000},
			{ "Titan_AA","",100000}
        };
		accs[] = {
			{ "optic_Aco", "", 1000, -1 },
			{ "optic_Holosight", "", 1000, -1 },
			{ "optic_Holosight_smg", "", 1000, -1 },
			{ "optic_ACO_grn_smg", "", 1000, -1 },
			{ "optic_Arco_blk_F", "", 1000, -1 },
			{ "optic_Hamr", "", 1000, -1 },
			{ "optic_SOS", "", 1000, -1 },
			{ "optic_MRCO", "", 1000, -1 },
			{ "optic_DMS", "", 1000, -1 },
			{ "optic_LRPS", "", 1000, -1 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_KHS_blk", "", 1000, -1 },
			{ "muzzle_snds_65_TI_blk_F", "", 1000, -1 },
			{ "optic_ERCO_blk_F", "", 1000, -1 },
			{ "optic_NVS", "", 1000, -1},
			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 1000, -1 },
			{ "muzzle_snds_H", "", 1000, -1 },
			{ "muzzle_snds_L", "", 1000, -1 },
			{ "muzzle_snds_M", "", 1000, -1 },
			{ "muzzle_snds_B", "", 1000, -1},
			{ "muzzle_snds_93mmg","",1000,-1},
			{ "muzzle_snds_338_black","",1000,-1},
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };

    class cop_generalnyinspektor {
        name = "Zaopatrzenie Gen.Inspektora";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 12, "Musisz mieć range generalnego inspektora!" };
        items[] = {
            { "hgun_P07_snds_F", "Paralizator", 1000, -1 },
			{ "arifle_SDAR_F", "", 10000, -1 },
			{ "arifle_SPAR_01_blk_F", "", 10000, -1 },
			{ "arifle_MXC_Black_F", "", 10000, -1 },
			{ "arifle_MX_Black_F", "", 10000, -1 },
			{ "arifle_Katiba_F", "", 10000, -1 },
			{ "arifle_ARX_blk_F", "", 10000, -1},
			{ "arifle_AK12_GL_F", "", 10000, -1},
            { "arifle_AK12_F", "", 10000, -1 },
			{ "arifle_MXM_Black_F", "", 10000, -1 },
			{ "srifle_EBR_F", "", 10000, -1 },
            { "arifle_SPAR_02_blk_F", "", 10000, -1 },
			{ "srifle_DMR_03_F", "", 10000, -1},
			{ "arifle_SPAR_03_blk_F", "", 10000, -1 },
			{ "arifle_MX_SW_Black_F", "", 10000, -1 },
			{ "LMG_03_F", "", 10000, -1},
			{ "LMG_Zafir_F", "", 425000, 0 },
			{ "arifle_CTARS_blk_F","",1000,-1},
			{ "150Rnd_762x54_Box_Tracer", "", 5000 },
			{ "launch_B_Titan_tna_F","",250000,-1},
			{ "launch_RPG32_ghex_F","",100000,-1},
			{ "launch_NLAW_F","",300000,-1},

            { "10Rnd_50BW_Mag_F", "type 115", 100, -1 },
            { "HandGrenade_Stone", "Flashbang", 1000, -1 },
            { "B_UavTerminal", "", 1000, -1 },
            { "Rangefinder", "", 1000, -1 },
			{ "NVGoggles_OPFOR", "", 1000, -1 },
            { "ItemGPS", "", 100, -1 },
            { "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "FirstAidKit", "", 1000, -1 },
            { "Medikit", "", 1000, -1 },
			{ "SmokeShellBlue", "Gaz łzawiący", 100, -1 }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "10Rnd_50BW_Mag_F", "", 25 },
			{ "30Rnd_9x21_Mag", "", 50 },
            { "20Rnd_556x45_UW_mag", "", 50 },
			{ "30Rnd_556x45_Stanag", "", 50 },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 50 },
			{ "20Rnd_762x51_Mag", "", 200 },
			{ "100Rnd_580x42_Mag_F", "", 700 },
			{ "100Rnd_65x39_caseless_mag", "", 700 },
			{ "200Rnd_556x45_Box_F", "", 4900 },
            { "150Rnd_556x45_Drum_Mag_F", "", 50 },
			{ "30Rnd_65x39_caseless_mag", "", 100 },
			{ "30Rnd_762x39_Mag_F","",500},
			{ "1Rnd_SmokeBlue_Grenade_shell","gaz łzawiący",2000},
			{ "100Rnd_580x42_Mag_F","",2900},
			{ "10Rnd_338_Mag","",500},
			{ "10Rnd_93x64_DMR_05_Mag","",500},
			{ "7Rnd_408_Mag","",500},
			{ "10Rnd_50BW_Mag_F", "", 300 },
		    { "30Rnd_65x39_caseless_green", "", 800 },
			{ "30Rnd_65x39_caseless_green", "", 800 },
			{ "RPG32_F","",50000},
            { "RPG32_HE_F","",50000},
			{ "NLAW_F","",250000},
			{ "Titan_AA","",100000}
        };
		accs[] = {
			{ "optic_Aco", "", 240 },
			{ "optic_ACO_grn", "", 240 },
			{ "optic_Aco_smg", "", 240 },
			{ "optic_ACO_grn_smg", "", 240 },
			{ "optic_Holosight", "", 300 },
			{ "optic_Holosight_smg", "", 300 },
			{ "optic_Hamr", "", 400 },
			{ "optic_Arco_blk_F", "", 420 },
			{ "optic_ERCO_blk_F", "", 420 },
			{ "optic_MRCO", "", 440 },
			{ "optic_DMS", "", 490 },
			{ "optic_LRPS", "", 490 },
			{ "optic_AMS", "", 1000, -1 },
			{ "optic_NVS", "", 510 },
			{ "optic_KHS_blk", "", 690 },
			{ "muzzle_snds_65_TI_blk_F", "", 690 },
			{ "muzzle_snds_H", "", 10000, -1 },
			{ "muzzle_snds_L", "", 10000, -1 },
			{ "muzzle_snds_M", "", 10000, -1 },
			{ "muzzle_snds_B", "", 10000, -1 },
			{ "muzzle_snds_338_black", "", 10000, -1 },
			{ "muzzle_snds_93mmg", "", 10000, -1 },
			{ "muzzle_snds_58_blk_F", "", 10000, -1 },
			{ "muzzle_snds_93mmg", "", 10000, -1 },
			{ "muzzle_snds_93mmg", "", 10000, -1 },

			{ "acc_flashlight", "", 1000, -1 },
			{ "acc_pointer_IR", "", 2000, -1 },
			{ "bipod_01_F_blk", "", 1000, -1 }
        };
    };
	
    //Medic Shops
       class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, -1 },
			{ "ItemMap", "", 100, -1 },
            { "ItemRadio", "", 100, -1 },
            { "ItemCompass", "", 100, -1 },
            { "ItemWatch", "", 100, -1 },
            { "Binocular", "", 100, -1 },
            { "Medikit", "", 500, -1 },
            { "I_UavTerminal", "", 1000, -1 },
            { "NVGoggles_INDEP", "", 1000, -1 }
        };
        mags[] = {};
    };
};