/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "life_cash";								//--- Cash Variable
	cashSymbol = "$"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =						"Shop Parameter is empty!";
		msgInVehicle =						"You cannot be in a Vehicle!";
		msgShopExists =						"Shop doesn't Exist!";
		msgCondition =						"Not permitted to access this Shop!";
		msgCashOnHand =						"Cash on Hand - %1%2";
		msgCartTotal =						"Your Cart - %1%2";
		msgInfoTooltip =					"--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgInfoTooltip2 = 					"--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgEmptyShop = 						"Nothing Found...";
		msgInfoText	=						"<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Cart is Full";
		msgCartEmpty =						"Cart is Empty";
		msgNotEnoughCash =					"Not enough Cash for this Transaction";
		msgOverrideAlert =					"Use the override feature to override gear!";
		msgTransactionComplete =			"Purchase completed for %1%2";
		msgNotEnoughSpace =				 	"You didn't have enough space for all the items. You however only paid for those you had space for!";
		msgClear =							"Clear";
		msgSearch =							"Search";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapon"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Other"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Complete"
		#define dialogCloseBtn 				"Close"
	};

	class shops {
		class gun {
			title = "Billy Joe's Firearms"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in S

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hgun_Rook40_F", 4000, "true", "Rook"},
				{"hgun_ACPC2_F", 9850, "true", ""},
				{"hgun_Pistol_heavy_02_F", 9850, "true", ""},
				{"hgun_PDW2000_F", 23500, "true", ""},
				{"SMG_02_F", 25000, "true", ""},
				{"SMG_01_F", 30000, "true", ""},
				{"SMG_05_F", 30000, "true", ""}
			};

			magazines[] = {
				{"9Rnd_45ACP_Mag", 100, "true", ""},
				{"30Rnd_9x21_Mag", 95, "true", ""},
				{"6Rnd_45ACP_Cylinder", 85, "true", ""},
				{"9Rnd_45ACP_Mag", 85, "true", ""},
				{"16Rnd_9x21_Mag", 75, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 100, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 100, "true", ""}
			};

			attachments[] = {
				{"optic_ACO_grn_smg", 2500, "true", ""}
			};
			
			items[] = {
				{"Binocular", 250, "true", ""}
			};
		};
	    
		class rebel {
			title = "Zbrojownia"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"arifle_MXC_F", 40000, "true", ""},
				{"arifle_MX_F", 48000, "true", ""},
				{"arifle_MXM_F", 55555, "true", ""},
				{"arifle_MX_SW_F", 58950, "true", ""},
				{"arifle_Katiba_F", 55000, "true", ""},
				{"arifle_SPAR_01_khk_F", 55000, "true", ""},
				{"arifle_Mk20_F", 50000, "true", ""},
				{"arifle_TRG20_F", 38000, "true", ""},
				{"arifle_SPAR_02_khk_F", 60000, "true", ""},
				{"arifle_Mk20C_F", 60000, "true", ""},
				{"arifle_TRG21_F", 60000, "true", ""},
				{"arifle_CTAR_ghex_F", 73000, "true", ""},
				{"srifle_DMR_07_ghex_F", 80000, "true", ""},
				{"arifle_AKS_F", 45000, "true", ""},
				{"SMG_05_F", 25000, "true", ""},
				{"SMG_02_F", 30000, "true", ""},
				{"arifle_SDAR_F", 25600, "true", ""}
			};

			magazines[] = {
				{"30Rnd_556x45_Stanag_Tracer_Yellow", 500, "true", ""},
				{"30Rnd_65x39_caseless_ma", 1000, "true", ""},
				{"30Rnd_556x45_Stanag", 1000, "true", ""},
				{"30Rnd_556x45_Stanag_green", 1000, "true", ""},
				{"30Rnd_580x42_Mag_F", 1000, "true", ""},
				{"30Rnd_580x42_Mag_Tracer_F", 1000, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 1000, "true", ""},
				{"100Rnd_580x42_Mag_Tracer_F", 1000, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1000, "true", ""},
				{"20Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 500, "true", ""},
				{"30Rnd_65x39_caseless_green", 1000, "true", ""},
				{"30Rnd_545x39_Mag_Green_F", 1000, "true", ""},
				{"20Rnd_762x51_Mag", 3000, "true", ""},
				{"30Rnd_545x39_Mag_F", 10000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 4000, "true", ""},
				{"RPG7_F", 250000, "true", ""},
				{"30Rnd_762x39_Mag_Green_F", 3000, "true", ""},
				{"30Rnd_65x39_caseless_mag", 500, "true", ""},
				{"20Rnd_556x45_UW_mag", 200, "true", ""},
				{"100Rnd_65x39_caseless_mag", 2500, "true", ""}
			};

			attachments[] = {
				{"optic_Aco", 3000, "true", ""},
				{"optic_Aco_smg", 3000, "true", ""},
				{"optic_Holosight", 3500, "true", ""},
				{"optic_MRCO", 5000, "true", ""},
				{"optic_Arco", 7500, "true", ""},
				{"optic_ERCO_blk_F", 25000, "true", ""},
				{"optic_Hamr", 2500, "true", ""},
				{"optic_DMS", 15500, "true", ""},
				//{"optic_KHS_old", 8000, "true", ""},
				//{"optic_KHS_blk", 10000, "true", ""},
				{"bipod_02_F_blk", 2500, "true", ""},
				{"acc_pointer_IR", 1500, "true", ""},
				{"acc_flashlight", 1500, "true", ""}
			};
			
			items[] = {
				{"ItemRadio", 100, "true", ""},
				{"Binocular", 400, "true", ""},
				{"ItemGPS", 400, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"FirstAidKit", 260, "true", ""},
				{"NVGoggles", 2000, "true", ""},
				{"Chemlight_red", 1000, "true", ""},
				{"Chemlight_yellow", 1000, "true", ""},
				{"Chemlight_green", 1000, "true", ""},
				{"Chemlight_blue", 1000, "true", ""},
				{"SmokeShellRed", 2000, "true", ""},
				{"SmokeShellGreen", 2000, "true", ""},
				{"SmokeShellPurple", 2000, "true", ""},
				{"SmokeShell", 2000, "true", ""}	
			};
		};
	
		class rebel2 {
			title = "Zbrojownia"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"arifle_MXC_F", 65000, "true", ""},
				{"arifle_MX_F", 70000, "true", ""},
				{"arifle_MXM_F", 55555, "true", ""},
				{"arifle_MX_SW_F", 58950, "true", ""},
				{"arifle_Katiba_F", 55000, "true", ""},
				{"LMG_03_F", 145000, "true", ""},
				{"arifle_SPAR_01_khk_F", 50000, "true", ""},
				{"arifle_SPAR_02_khk_F", 60000, "true", ""},
				{"arifle_CTAR_ghex_F", 65000, "true", ""},
				{"arifle_CTARS_ghex_F", 73000, "true", ""},
				{"srifle_DMR_07_ghex_F", 80000, "true", ""},
				{"arifle_ARX_ghex_F", 78000, "true", ""},
				{"arifle_ARX_hex_F", 78000, "true", ""},
				{"arifle_AKS_F", 45000, "true", ""},
				{"SMG_05_F", 25000, "true", ""},
				{"SMG_02_F", 30000, "true", ""},
				{"srifle_EBR_F", 110000, "true", ""},
				{"srifle_DMR_03_multicam_F", 120000, "true", ""},
				{"srifle_DMR_06_olive_F", 115000, "true", ""},
				{"arifle_SPAR_03_khk_F", 120000, "true", ""},
				{"LMG_Mk200_F", 325000, "true", ""},
				{"launch_RPG7_F", 315000, "true", ""},
				{"arifle_AKM_F", 70000, "true", ""},
				{"arifle_AK12_F", 130000, "true", ""},	
				{"arifle_SDAR_F", 25600, "true", ""}		
			};

			magazines[] = {
				{"30Rnd_556x45_Stanag_Tracer_Yellow", 500, "true", ""},
				{"30Rnd_65x39_caseless_ma", 1000, "true", ""},
				{"30Rnd_556x45_Stanag", 1000, "true", ""},
				{"30Rnd_556x45_Stanag_green", 1000, "true", ""},
				{"30Rnd_580x42_Mag_F", 1000, "true", ""},
				{"30Rnd_580x42_Mag_Tracer_F", 1000, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 1000, "true", ""},
				{"100Rnd_580x42_Mag_Tracer_F", 2200, "true", ""},
				{"200Rnd_556x45_Box_F", 2200, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"200Rnd_556x45_Box_Tracer_F", 2200, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1000, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"200Rnd_65x39_cased_Box_Tracer", 1000, "true", ""},
				{"30Rnd_65x39_caseless_green", 1000, "true", ""},
				{"30Rnd_545x39_Mag_F", 1000, "true", ""},
				{"30Rnd_545x39_Mag_Green_F", 1000, "true", ""},
				{"100Rnd_580x42_Mag_Tracer_F", 1000, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 500, "true", ""},
				{"20Rnd_762x51_Mag", 3000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 4000, "true", ""},
				{"RPG7_F", 250000, "true", ""},
				{"30Rnd_762x39_Mag_Green_F", 3000, "true", ""},
				{"30Rnd_65x39_caseless_mag", 500, "true", ""},
				{"20Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"20Rnd_556x45_UW_mag", 200, "true", ""},
				{"100Rnd_65x39_caseless_mag", 2500, "true", ""}
			};

			attachments[] = {
				{"optic_Aco", 3000, "true", ""},
				{"optic_Aco_smg", 3000, "true", ""},
				{"optic_Holosight", 3500, "true", ""},
				{"optic_MRCO", 5000, "true", ""},
				{"optic_Arco", 7500, "true", ""},
				{"optic_ERCO_blk_F", 25000, "true", ""},
				{"optic_Hamr", 2500, "true", ""},
				{"optic_DMS", 15000, "true", ""},
				{"optic_KHS_old", 8000, "true", ""},
				{"optic_KHS_blk", 10000, "true", ""},
				{"bipod_02_F_blk", 2500, "true", ""},
				{"acc_pointer_IR", 1000, "true", ""},
				//{"muzzle_snds_H", 80200, "true", ""},
				//{"muzzle_snds_L", 50000, "true", ""},
				//{"muzzle_snds_M", 60000, "true", ""},
				//{"muzzle_snds_B", 90000, "true", ""},
				{"acc_flashlight", 2000, "true", ""}
			};
			
			items[] = {
				{"ItemRadio", 100, "true", ""},
				{"Binocular", 10000, "true", ""},
				{"Rangefinder", 12000, "true", ""},
				{"ItemGPS", 400, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"FirstAidKit", 260, "true", ""},
				{"Medikit", 25000, "true", ""},
				{"NVGoggles", 2000, "true", ""},
				{"Chemlight_red", 1000, "true", ""},
				{"Chemlight_yellow", 1000, "true", ""},
				{"Chemlight_green", 1000, "true", ""},
				{"Chemlight_blue", 1000, "true", ""},
				{"SmokeShellRed", 2000, "true", ""},
				{"SmokeShellGreen", 2000, "true", ""},
				{"SmokeShellPurple", 2000, "true", ""},
				{"SmokeShell", 2000, "true", ""}	
			};
		};
		 
		class genstore {
			title = "Altis General Store"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
			};

			magazines[] = {
			};

			attachments[] = {
			};
			
			items[] = {
				{"ItemRadio", 100, "true", ""},
				{"Binocular", 400, "true", ""},
				{"ItemGPS", 400, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"FirstAidKit", 260, "true", ""},
				{"NVGoggles", 2000, "true", ""},
				{"Chemlight_red", 1000, "true", ""},
				{"Chemlight_yellow", 1000, "true", ""},
				{"Chemlight_green", 1000, "true", ""},
				{"Chemlight_blue", 1000, "true", ""},
				{"SmokeShell", 2000, "true", ""}	
			};
		};
	
		class cop_kadet {
			title = "Zaopatrzenie Kadeta"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 1000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 450, "true", ""},
				{"optic_Holosight_smg", 450, "true", ""},
				{"optic_Aco", 2500, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 5000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
	
	class cop_posterunkowy {
			title = "Zaopatrzenie posterunkowego"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 1000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 30000, "true", ""},
				{"arifle_SPAR_01_blk_F", 28500, "true", ""},
				{"arifle_SPAR_02_blk_F", 28500, "true", ""},
				{"arifle_MX_SW_F", 32500, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 100, "true", ""},
				{"30Rnd_556x45_Stanag", 95, "true", ""},
				{"20Rnd_556x45_UW_mag", 105, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 95, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 100, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"30Rnd_65x39_caseless_green", 50, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 450, "true", ""},
				{"optic_Holosight_smg", 450, "true", ""},
				{"optic_Aco", 3500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 4500, "true", ""},
				{"muzzle_snds_H", 5000, "true", ""},
				{"muzzle_snds_L", 5000, "true", ""},
				{"muzzle_snds_M", 5000, "true", ""},
				{"optic_Hamr", 3000, "true", ""},
				{"optic_SOS", 3000, "true", ""},
				{"optic_MRCO", 6000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				//{"optic_LRPS", 1000, "true", ""},
				{"optic_AMS", 5000, "true", ""},
				{"optic_KHS_blk", 1000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 2000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 2000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
	
	class cop_sierzant {
			title = "Zaopatrzenie Sierżanta"; //--- Title of Shop
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 1000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"srifle_EBR_F", 48500, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"30Rnd_65x39_caseless_green", 50, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 450, "true", ""},
				{"optic_Holosight_smg", 450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 3500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_B", 4000, "true", ""},
				{"optic_Hamr", 1000, "true", ""},
				{"optic_SOS", 3000, "true", ""},
				{"optic_MRCO", 5000, "true", ""},
				{"optic_DMS", 9000, "true", ""},
				//{"optic_LRPS", 1000, "true", ""},
				{"optic_AMS", 6000, "true", ""},
				{"optic_KHS_blk", 4000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 2000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 3000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
	
		class cop_stsierzant {
			title = "Zaopatrzenie starszego sierżanta"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 4000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"30Rnd_65x39_caseless_green", 50, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"200Rnd_556x45_Box_F", 490, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 2450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_B", 4000, "true", ""},
				{"optic_Hamr", 1000, "true", ""},
				{"optic_SOS", 4000, "true", ""},
				{"optic_MRCO", 6000, "true", ""},
				{"optic_DMS", 15000, "true", ""},
				//{"optic_LRPS", 1000, "true", ""},
				{"optic_AMS", 6000, "true", ""},
				{"optic_KHS_blk", 4000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 3000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 3000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
			
		class cop_sierzantsztabowy {
			title = "Zaopatrzenie sierżanta sztabowego"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 10000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 450, "true", ""},
				{"optic_Holosight_smg", 450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_B", d0 "true", ""},
				{"optic_Hamr", 4000, "true", ""},
				{"optic_SOS", 4000, "true", ""},
				{"optic_MRCO", 6000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				//{"optic_LRPS", 20000, "true", ""},
				{"optic_AMS", 4000, "true", ""},
				{"optic_KHS_blk", 4000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 1000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 3000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
			
		class cop_aspirant {
			title = "Zaopatrzenie Aspiranta"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 10000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_SPAR_03_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""},
				{"LMG_03_F", 40500, "true", ""},
				{"launch_RPG32_ghex_F", 295000, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"RPG32_F", 150000, "true", ""},
				{"RPG32_HE_F", 150000, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 2450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_B", 4000, "true", ""},
				{"optic_Hamr", 4000, "true", ""},
				{"optic_SOS", 400, "true", ""},
				{"optic_MRCO", 6000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				//{"optic_LRPS", 1000, "true", ""},
				{"optic_AMS", 1000, "true", ""},
				{"optic_KHS_blk", 1000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 1000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 5000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
	
	class cop_staspirant {
			title = "Zaopatrzenie St.aspirant"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 10000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_SPAR_03_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""},
				{"LMG_03_F", 40500, "true", ""},
				{"LMG_Mk200_F", 62500, "true", ""},
				{"launch_RPG32_ghex_F", 285000, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"RPG32_F", 150000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 400, "true", ""},
				{"RPG32_HE_F", 150000, "true", ""}
			};

			attachments[] = {
				{"optic_Holosight", 2450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_B", 4000, "true", ""},
				{"optic_Hamr", 4000, "true", ""},
				{"optic_SOS", 1000, "true", ""},
				{"optic_MRCO", 4000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				{"muzzle_snds_93mmg", 4000, "true", ""},
				//{"optic_LRPS", 7000, "true", ""},
				{"optic_AMS", 7000, "true", ""},
				{"optic_KHS_blk", 7000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 1000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 5000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
	
		class cop_komisarz {
			title = "Zaopatrzenie Komisarza"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 10000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_SPAR_03_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_CTARS_blk_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""},
				{"LMG_03_F", 40500, "true", ""},
				{"LMG_Mk200_F", 62500, "true", ""},
				{"launch_RPG32_ghex_F", 265000, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1000, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"RPG32_F", 150000, "true", ""},
				{"RPG32_HE_F", 150000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 400, "true", ""},
				{"1Rnd_SmokeBlue_Grenade_shell", 2000, "true", "gaz łzawiacy"}
			};

			attachments[] = {
				{"optic_Holosight", 2450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_338_black", 6000, "true", ""},
				{"muzzle_snds_B", 4000, "true", ""},
				{"optic_Hamr", 4000, "true", ""},
				{"optic_SOS", 4000, "true", ""},
				{"optic_MRCO", 4000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				{"muzzle_snds_93mmg", 4000, "true", ""},
				//{"optic_LRPS", 7000, "true", ""},
				{"optic_AMS", 6000, "true", ""},
				{"optic_KHS_blk", 6000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 1000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 2000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
	
	class cop_nadkomisarz {
			title = "Zaopatrzenie Nadkomisarza"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 10000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_SPAR_03_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_CTARS_blk_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""},
				{"arifle_AK12_GL_F", 84500, "true", ""},
				{"LMG_03_F", 40500, "true", ""},
				{"LMG_Mk200_F", 62500, "true", ""},
				{"launch_RPG32_ghex_F", 185000, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"muzzle_snds_B", 1000, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1000, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"RPG32_F", 150000, "true", ""},
				{"RPG32_HE_F", 150000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 400, "true", ""},
				{"1Rnd_SmokeBlue_Grenade_shell", 2000, "true", "gaz łzawiacy"}
			};

			attachments[] = {
				{"optic_Holosight", 2450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_338_black", 4000, "true", ""},
				{"muzzle_snds_93mmg", 4000, "true", ""},
				{"optic_Hamr", 4000, "true", ""},
				{"optic_SOS", 1000, "true", ""},
				{"optic_MRCO", 4000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				//{"optic_LRPS", 6000, "true", ""},
				{"optic_AMS", 4000, "true", ""},
				{"optic_KHS_blk", 4000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 1000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 3000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"}
			};
		};
	
	class cop_inspektor {
			title = "Zaopatrzenie Inspektora"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 10000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_SPAR_03_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_CTARS_blk_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""},
				{"arifle_AK12_GL_F", 84500, "true", ""},
				{"LMG_03_F", 40500, "true", ""},
				{"LMG_Mk200_F", 62500, "true", ""},
				{"launch_RPG32_ghex_F", 255000, "true", ""},
				{"launch_NLAW_F", 500000, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1000, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"RPG32_F", 150000, "true", ""},
				{"RPG32_HE_F", 150000, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"NLAW_F", 300000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 400, "true", ""},
				{"1Rnd_SmokeBlue_Grenade_shell", 2000, "true", "gaz łzawiacy"}
			};

			attachments[] = {
				{"optic_Holosight", 3450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_65_TI_blk_F", 4000, "true", ""},
				{"muzzle_snds_93mmg", 4000, "true", ""},
				{"muzzle_snds_B", 4000, "true", ""},
				{"optic_Hamr", 3000, "true", ""},
				{"optic_SOS", 4000, "true", ""},
				{"optic_MRCO", 4000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				//{"optic_LRPS", 1000, "true", ""},
				{"optic_AMS", 6000, "true", ""},
				{"optic_KHS_blk", 6000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 1000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 13000, "true", ""},
				{"muzzle_snds_338_black", 4000, "true", ""},
				{"muzzle_snds_93mmg", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 3000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"},
				{"B_UavTerminal", 10000, "true", ""}
			};
		};
	
		class cop_nadinspektor {
			title = "Zaopatrzenie Nadinspektora"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 10000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_SPAR_03_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_CTARS_blk_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""},
				{"arifle_AK12_GL_F", 84500, "true", ""},
				{"LMG_03_F", 40500, "true", ""},
				{"LMG_Mk200_F", 62500, "true", ""},
				{"launch_RPG32_ghex_F", 235000, "true", ""},
				{"launch_NLAW_F", 500000, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1000, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"RPG32_F", 150000, "true", ""},
				{"RPG32_HE_F", 150000, "true", ""},
				{"NLAW_F", 300000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 400, "true", ""},
				{"1Rnd_SmokeBlue_Grenade_shell", 2000, "true", "gaz łzawiacy"}
			};

			attachments[] = {
				{"optic_Holosight", 2450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_65_TI_blk_F", 4000, "true", ""},
				{"muzzle_snds_93mmg", 4000, "true", ""},
				{"muzzle_snds_B", 4000, "true", ""},
				{"optic_Hamr", 4000, "true", ""},
				{"optic_SOS", 4000, "true", ""},
				{"optic_MRCO", 4000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				//{"optic_LRPS", 6000, "true", ""},
				{"optic_AMS", 6000, "true", ""},
				{"optic_KHS_blk", 1000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 1000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""},
				{"muzzle_snds_338_black", 3000, "true", ""},
				{"muzzle_snds_93mmg", 3000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 3000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"},
				{"B_UavTerminal", 10000, "true", ""}
			};
		};
	
			class cop_generalnyinspektor {
			title = "Zaopatrzenie Gen.Inspektora"; //--- Title of 
			condition = "true"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No 
			maxCart = 100; 			//--- Max Amount of Items in 

			weapons[] = {
				{"hgun_P07_snds_F", 1000, "true", "Paralizator"},
				{"arifle_SDAR_F", 14500, "true", ""},
				{"arifle_Mk20_F", 16500, "true", ""},
				{"arifle_MX_Black_F", 24000, "true", ""},
				{"arifle_SPAR_01_blk_F", 26500, "true", ""},
				{"arifle_SPAR_02_blk_F", 26500, "true", ""},
				{"arifle_SPAR_03_blk_F", 26500, "true", ""},
				{"arifle_MX_SW_Black_F", 28500, "true", ""},
				{"arifle_ARX_blk_F", 32500, "true", ""},
				{"arifle_MXM_Black_F", 28500, "true", ""},
				{"arifle_CTARS_blk_F", 28500, "true", ""},
				{"arifle_Katiba_F", 32500, "true", ""},
				{"srifle_EBR_F", 28500, "true", ""},
				{"srifle_DMR_03_F", 45600, "true", ""},
				{"arifle_AK12_F", 84500, "true", ""},
				{"arifle_AK12_GL_F", 84500, "true", ""},
				{"LMG_03_F", 40500, "true", ""},
				{"LMG_Mk200_F", 62500, "true", ""},
				{"launch_RPG32_ghex_F", 205000, "true", ""},
				{"launch_NLAW_F", 500000, "true", ""}
			};

			magazines[] = {
				{"16Rnd_9x21_Mag", 50, "true", ""},
				{"30Rnd_556x45_Stanag", 75, "true", ""},
				{"20Rnd_556x45_UW_mag", 50, "true", ""},
				{"150Rnd_556x45_Drum_Mag_Tracer_F", 1000, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 50, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 50, "true", ""},
				{"100Rnd_580x42_Mag_F", 700, "true", ""},
				{"100Rnd_65x39_caseless_mag", 700, "true", ""},
				{"200Rnd_556x45_Box_F", 4900, "true", ""},
				{"30Rnd_65x39_caseless_green", 800, "true", ""},
				{"30Rnd_65x39_caseless_mag", 50, "true", ""},
				{"200Rnd_650x39_Cased_Mag_F", 1000, "true", ""},
				{"20Rnd_762x51_Mag", 50, "true", ""},
				{"30Rnd_762x39_Mag_F", 50, "true", ""},
				{"200Rnd_65x39_cased_Box", 1000, "true", ""},
				{"RPG32_F", 150000, "true", ""},
				{"RPG32_HE_F", 150000, "true", ""},
				{"NLAW_F", 300000, "true", ""},
				{"200Rnd_65x39_belt_Tracer_Green", 400, "true", ""},
				{"1Rnd_SmokeBlue_Grenade_shell", 2000, "true", "gaz łzawiacy"}
			};

			attachments[] = {
				{"optic_Holosight", 2450, "true", ""},
				{"optic_Holosight_smg", 2450, "true", ""},
				{"optic_Aco", 2500, "true", ""},
				{"optic_ACO_grn_smg", 2500, "true", ""},
				{"optic_Arco_blk_F", 3500, "true", ""},
				{"muzzle_snds_H", 4000, "true", ""},
				{"muzzle_snds_L", 4000, "true", ""},
				{"muzzle_snds_M", 4000, "true", ""},
				{"muzzle_snds_65_TI_blk_F", 3000, "true", ""},
				{"muzzle_snds_93mmg", 3000, "true", ""},
				{"optic_Hamr", 1000, "true", ""},
				{"optic_SOS", 1000, "true", ""},
				{"optic_MRCO", 6000, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				//{"optic_LRPS", 6000, "true", ""},
				{"optic_AMS", 6000, "true", ""},
				{"optic_KHS_blk", 6000, "true", ""},
				{"optic_ERCO_blk_F", 3500, "true", ""},
				{"acc_flashlight", 2000, "true", ""},
				{"muzzle_snds_B", 3000, "true", ""},
				{"acc_pointer_IR", 3000, "true", ""},
				{"bipod_01_F_blk", 3000, "true", ""},
				{"muzzle_snds_338_black", 4000, "true", ""},
				{"muzzle_snds_93mmg", 4000, "true", ""}
			};
			
			items[] = {
				{"HandGrenade_Stone", 3000, "true", "Flashbang"},
				{"Rangefinder", 2000, "true", ""},
				{"NVGoggles_OPFOR", 1000, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemRadio", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"Medikit", 1000, "true", ""},
				{"SmokeShellBlue", 3500, "true", "Gaz łzawiacy"},
				{"B_UavTerminal", 10000, "true", ""}
			};
		};
	};
};

#include "gui\weapon_gui_master.cpp"
