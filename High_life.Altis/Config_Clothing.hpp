/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
            { "U_O_Protagonist_VR", "smieszne ubranko", 50000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Gey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Shades_Green", "", 20, { "", "", -1 } },
            { "G_Shades_Red", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Greenblack", "", 25, { "", "", -1 } },
            { "G_Sport_Red", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            //{ "G_Combat", "", 125, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "V_BandollierB_blk", "Pas taktyczny", 22000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
         uniforms[] = {
            { "NONE", "Usuń Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "", 350, { "life_coplevel", "SCALAR", -1 } },
            { "U_O_Wetsuit", "", 350, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_CombatUniform_mcam", "", 5000, { "life_coplevel", "SCALAR", -1 } },
            { "U_B_GEN_Soldier_F", "", 5000, { "life_coplevel", "SCALAR", -1 } },
            { "U_B_GEN_Commander_F", "", 5000, { "life_coplevel", "SCALAR", -1 } }            
        };
        headgear[] = {
            { "NONE", "Usuń Czapkę", 0, { "", "", -1 } },
            { "H_Cap_police", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Bandanna_gry", "", 100, { "life_coplevel", "SCALAR", 2 } },
            { "H_Watchcap_blk", "", 100, { "life_coplevel", "SCALAR", 2 } },            
            { "H_Beret_blk", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_gen_F", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_HelmetB_light_black", "", 100, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_sand", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_HelmetSpecB_blk", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_Beret_02", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_CrewHelmetHeli_B", "", 100, { "life_coplevel", "SCALAR", 8 } },
            { "H_Beret_Colonel", "", 100, { "life_coplevel", "SCALAR", 10 } },
			{ "H_PilotHelmetFighter_B", "", 15000, { "life_coplevel", "SCALAR", 1 } }
        };
        goggles[] = {
            { "NONE", "Usuń Okulary", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Balaclava_TI_blk_F", "", 100, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Balaclava_TI_G_blk_F", "Maska maskująca przeciwgazowa", 5000, { "life_coplevel", "SCALAR", 7 } },
            { "G_Balaclava_blk", "", 100, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "Maska przeciwgazowa", 2000, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Bandanna_blk", "", 200, { "life_coplevel", "SCALAR", 6 } },
			{ "G_B_Diving", "", 200, { "life_coplevel", "SCALAR", 2 } }
        };
        vests[] = {
            { "NONE", "Usuń Kamizelke", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "", "", -1 } },
            { "V_DeckCrew_yellow_F", "", 1000, { "", "", -1 } },
            { "V_RebreatherB", "", 1000, { "life_coplevel", "SCALAR", 1 }},
			{ "V_PlateCarrier1_blk", "", 5000, { "life_coplevel", "SCALAR", 3 } },
			{ "V_PlateCarrier2_blk", "", 5000, { "life_coplevel", "SCALAR", 5 } },
			{ "V_PlateCarrierSpec_blk", "", 10000, { "life_coplevel", "SCALAR", 8 } },
			{ "V_Safety_yellow_F", "", 1000, { "", "", -1  } }
        };
        backpacks[] = {
            { "NONE", "Usuń Plecak", 0, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 1000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 2000, { "", "", -1 } },
			{ "B_Bergen_hex_F", "", 5000, { "", "", -1 } },
			//{ "B_UAV_01_backpack_F", "", 60000, { "life_coplevel", "SCALAR", 10 } },
            { "Steerable_Parachute_F", "", 2000, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Construction_basic_yellow_F", "", 5000, { "", "", -1 } },
			{ "H_Construction_earprot_yellow_F", "", 5000, { "", "", -1 } },
			{ "H_Construction_headset_yellow_F", "", 5000, { "", "", -1 } },
			{ "H_PASGT_basic_blue_press_F", "", 8000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Press_F", "", 7000, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	class uran {
        title = "STR_Shops_C_Gun";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Scientist", "", 20000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	class broda_clothing {
        title = "STR_Shops_C_VIP";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_vest", "", 100, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	class eddard_clothing {
        title = "STR_Shops_C_Shield";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam_vest", "", 100, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Carryall_mcamo", "", 5000, { "", "", -1 } }
        };
    };
	
	class czrynek {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "", 50000, { "", "", -1 } },
            { "U_B_FullGhillie_sard", "", 50000, { "", "", -1 } },
            { "U_B_FullGhillie_lsh", "", 50000, { "", "", -1 } },
            { "U_O_T_FullGhillie_tna_F", "", 50000, { "", "", -1 } },
            { "U_O_T_FullGhillie_tna_F", "", 50000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Combat", "", 20000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Bergen_hex_F", "", 65000, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Usuń Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Strój Medyka", 50, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } },
			{ "U_C_Paramedic_01_F", "Stroj Medyka", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Usuń Czapkę", 0, { "", "", -1 } },
			{ "H_CrewHelmetHeli_B", "", 350, { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "", 350, { "", "", -1 } },
            { "H_PilotHelmetFighter_B", "", 350, { "", "", -1 } },
            { "H_Cap_marshal", "", 10, { "", "", -1 } },
			{ "H_EarProtectors_Red_F", "", 10, { "", "", -1 } },
		    { "HeadSet_red_F", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Usuń Okulary", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 10, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } },
			{ "G_Respirator_white_F", "", 10, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Usuń Kamizelke", 0, { "", "", -1 } },
			{ "V_DeckCrew_yellow_F", "", 1000, { "", "", -1 } },
			{ "V_Safety_yellow_F", "", 1000, { "", "", -1  } },
			{ "V_RebreatherIR", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Usuń Plecak", 0, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "Plecak Medyczny", 0, { "", "", -1 } },
            { "B_Messenger_IDAP_F", "Plecak Medyczny", 300, { "", "", -1 } },
            { "B_LegStrapBag_black_F", "Plecak Mechanika", 300, { "", "", -1 } },
            { "I_UAV_06_medical_backpack_F", "", 5000, { "life_mediclevel", "SCALAR", 4 } },
            { "C_UAV_06_medical_backpack_F", "", 5000, { "life_mediclevel", "SCALAR", 4 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Usuń Uniform", 0, { "", "", -1 } },
            { "U_I_C_Soldier_Para_1_F", "", 10000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_2_F", "", 10000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_3_F", "", 10000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_4_F", "", 10000, { "", "", -1 } },
            { "U_I_C_Soldier_Para_5_F", "", 10000, { "", "", -1 } },
            { "U_I_G_resistanceLeader_F", "", 10000, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 10000, {"", "", -1} },
            { "U_IG_Guerrilla_6_1", "", 10000, {"", "", -1} },
            { "U_B_T_Soldier_F", "", 10000, { "", "", -1 } },
            { "U_B_T_Soldier_AR_F", "", 10000, { "", "", -1 } },
            { "U_I_C_Soldier_Camo_F", "", 10000, { "", "", -1 } },
            { "U_B_T_Soldier_SL_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_1", "", 10000, { "", "", -1 } },
            { "U_B_CTRG_2", "", 10000, { "", "", -1 } },
            { "U_B_CTRG_3", "", 10000, { "", "", -1 } },
            { "U_B_CTRG_Soldier_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_2_F", "", 10000, { "", "", -1 } },
			{ "U_B_CTRG_Soldier_3_F", "", 10000, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 10000, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "", 10000, { "", "", -1 } },
            { "U_O_GhillieSuit", "", 30000, { "", "", -1 } },
            { "U_B_T_Sniper_F", "", 30000, { "", "", -1 } },
            { "U_O_T_Sniper_F", "", 30000, { "", "", -1 } },
            { "U_I_GhillieSuit", "", 30000, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "", 70000, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 70000, { "", "", -1 } },    
			{ "U_B_FullGhillie_ard", "", 70000, { "", "", -1 } }   
        
		};
        headgear[] = {
            { "NONE", "Usuń Czapkę", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 500, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 500, { "", "", -1 } },
            { "H_Booniehat_indp", "", 500, { "", "", -1 } },
            { "H_Booniehat_mcamo", "", 500, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 500, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 500, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 500, { "", "", -1 } },
            { "H_MilCap_mcamo", "", 500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 500, { "", "", -1 } },
            { "H_MilCap_rucamo", "", 500, { "", "", -1 } },
            { "H_Shemag_olive", "Maska", 500, { "", "", -1 } },
            { "H_Shemag_olive_hs", "Maska", 500, { "", "", -1 } },
            { "H_CrewHelmetHeli_O", "", 20000, { "", "", -1 } },
            { "H_HelmetCrew_I", "", 40000, { "", "", -1 } },
            { "H_HelmetB_TI_tna_F", "", 30000, { "", "", -1 } },
			{ "H_HelmetB_camo", "", 30000, { "", "", -1 } },
			{ "H_HelmetB", "", 30000, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 30000, { "", "", -1 } },
			{ "H_HelmetIA", "", 30000, { "", "", -1 } },
			{ "H_HelmetSpecB_sand", "", 45000, { "", "", -1 } },
			{ "H_HelmetSpecB_blk", "", 45000, { "", "", -1 } },
			{ "H_HelmetSpecB_paint2", "", 45000, { "", "", -1 } },
			{ "H_HelmetSpecB_paint1", "", 45000, { "", "", -1 } },
			{ "H_HelmetSpecB_Enh_tna_F", "", 45000, { "", "", -1 } },
			{ "H_HelmetSpecO_ghex_F", "", 60000, { "", "", -1 } },
			{ "H_HelmetLeaderO_ghex_F", "", 60000, { "", "", -1 } },
			{ "H_HelmetLeaderO_ocamo", "", 60000, { "", "", -1 } },
			{ "H_HelmetB_camo", "", 60000, { "", "", -1 } },
			{ "H_HelmetSpecO_ocamo", "", 50000, { "", "", -1 } },
            { "H_PilotHelmetFighter_B", "", 30000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Usuń Okulary", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Usuń Kamizelke", 0, { "", "", -1 } },
            { "V_TacVest_khk", "", 20000, { "", "", -1 } },
            { "V_TacVest_brn", "", 20000, { "", "", -1 } },
            { "V_TacVest_oli", "", 20000, { "", "", -1 } },
            { "V_TacVest_camo", "", 20000, { "", "", -1 } },
            { "V_PlateCarrierL_CTRG", "", 50000, { "", "", -1 } },
			{ "V_PlateCarrier1_rgr_noflag_F", "", 50000, { "", "", -1 } },
			{ "V_PlateCarrier1_tna_F", "", 50000, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "", 50000, { "", "", -1 } },
			{ "V_PlateCarrierH_CTRG", "", 100000, { "", "", -1 } },
			{ "V_PlateCarrier2_tna_F", "", 100000, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr", "", 100000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Usuń Plecak", 0, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_ocamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3000, { "", "", -1 } },
            { "B_TacticalPack_ocamo", "", 4000, { "", "", -1 } },
            { "B_TacticalPack_mcamo", "", 4000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 5000, { "", "", -1 } }
        };
    };
	
	 class bountyH {
        title = "STR_Shops_C_Rebel";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Usuń Uniform", 0, { "", "", -1 } },
            { "U_B_T_Soldier_F", "", 500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Usuń Czapkę", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "", 500, { "", "", -1 } },
            { "H_Bandanna_mcamo", "", 500, { "", "", -1 } },
            { "H_Booniehat_indp", "", 500, { "", "", -1 } },
            { "H_Booniehat_mcamo", "", 500, { "", "", -1 } },
            { "H_Cap_brn_SPECOPS", "", 500, { "", "", -1 } },
            { "H_Cap_blk_Raven", "", 500, { "", "", -1 } },
            { "H_MilCap_ocamo", "", 500, { "", "", -1 } },
            { "H_MilCap_mcamo", "", 500, { "", "", -1 } },
            { "H_MilCap_oucamo", "", 500, { "", "", -1 } },
            { "H_MilCap_rucamo", "", 500, { "", "", -1 } },
            { "H_Shemag_olive", "Maska", 500, { "", "", -1 } },
            { "H_Shemag_olive_hs", "Maska", 500, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Booniehat_tna_F", "", 425, { "", "", -1 } },
			{ "H_Beret_blk", "", 100, { "", "", -1 } }
		};
        goggles[] = {
            { "NONE", "Usuń Okulary", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 20, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 25, { "", "", -1 } },
            { "G_Sport_Checkered", "", 25, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 25, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Squares", "", 50, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Usuń Kamizelke", 0, { "", "", -1 } },
            { "V_PlateCarrier2_tna_F", "", 10000, { "", "", -1 } }
		};
        backpacks[] = {
            { "NONE", "Usuń Plecak", 0, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_ocamo", "", 2000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3000, { "", "", -1 } },
            { "B_Bergen_hex_F", "", 20000, { "", "", -1 } },
			{ "B_TacticalPack_ocamo", "", 4000, { "", "", -1 } },
            { "B_TacticalPack_mcamo", "", 4000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 5000, { "", "", -1 } }
        };
    };

    class HWP {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
         uniforms[] = {
            { "NONE", "Usuń Uniform", 0, { "", "", -1 } },
			{ "U_marshal", "", 3950, { "life_coplevel", "SCALAR", -1 } },
			{ "U_Rangemaster", "", 3950, { "life_coplevel", "SCALAR", -1 } },
            { "U_O_Wetsuit", "", 350, { "life_coplevel", "SCALAR", 2 } },
            { "U_B_CombatUniform_mcam", "", 5000, { "life_coplevel", "SCALAR", -1 } },
            { "U_B_GEN_Soldier_F", "", 5000, { "life_coplevel", "SCALAR", -1 } },
            { "U_B_GEN_Commander_F", "", 5000, { "life_coplevel", "SCALAR", -1 } }            
        };
        headgear[] = {
            { "NONE", "Usuń Czapkę", 0, { "", "", -1 } },
            { "H_Cap_police", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Bandanna_gry", "", 100, { "life_coplevel", "SCALAR", 2 } },
            { "H_Watchcap_blk", "", 100, { "life_coplevel", "SCALAR", 2 } },            
            { "H_Beret_blk", "", 100, { "life_coplevel", "SCALAR", 1 } },
            { "H_Beret_gen_F", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_HelmetB_light_black", "", 100, { "life_coplevel", "SCALAR", 2 } },
            { "H_HelmetB_sand", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_HelmetSpecB_blk", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_Beret_02", "", 100, { "life_coplevel", "SCALAR", 6 } },
            { "H_CrewHelmetHeli_B", "", 100, { "life_coplevel", "SCALAR", 8 } },
            { "H_Beret_Colonel", "", 100, { "life_coplevel", "SCALAR", 10 } },
			{ "H_PilotHelmetFighter_B", "", 15000, { "life_coplevel", "SCALAR", 1 } },
        };
        goggles[] = {
            { "NONE", "Usuń Okulary", 0, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Balaclava_TI_blk_F", "", 100, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Balaclava_TI_G_blk_F", "Maska maskująca przeciwgazowa", 5000, { "life_coplevel", "SCALAR", 7 } },
            { "G_Balaclava_blk", "", 100, { "life_coplevel", "SCALAR", 6 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Combat", "Maska przeciwgazowa", 2000, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Bandanna_blk", "", 200, { "life_coplevel", "SCALAR", 6 } },
			{ "G_B_Diving", "", 200, { "life_coplevel", "SCALAR", 2 } }
        };
        vests[] = {
            { "NONE", "Usuń Kamizelke", 0, { "", "", -1 } },
            { "V_TacVest_blk_POLICE", "", 1000, { "", "", -1 } },
            { "V_DeckCrew_yellow_F", "", 1000, { "", "", -1 } },
            { "V_RebreatherB", "", 1000, { "life_coplevel", "SCALAR", 1 }},
			{ "V_PlateCarrier1_blk", "", 5000, { "life_coplevel", "SCALAR", 3 } },
			{ "V_PlateCarrier2_blk", "", 5000, { "life_coplevel", "SCALAR", 5 } },
			{ "V_Safety_yellow_F", "", 1000, { "", "", -1  } }
        };
        backpacks[] = {
            { "NONE", "Usuń Plecak", 0, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 1000, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 2000, { "", "", -1 } },
			{ "B_Bergen_hex_F", "", 5000, { "", "", -1 } },
            { "Steerable_Parachute_F", "", 2000, { "", "", -1 } }
        };
    };
	
	/*class mafia {
        title = "STR_Shops_C_Gun";
        license = "mafia";
        side = "civ";
        uniforms[] = {
            { "NONE", "Usuń Uniform", 0, { "", "", -1 } },
			{ "U_B_SpecopsUniform_sgg", "Strój Szefa Mafi", 500, {"", "", -1} }
        };
        headgear[] = {
            { "NONE", "Usuń Czapkę", 0, { "", "", -1 } },
            { "H_CrewHelmetHeli_B", "", 350, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Usuń Okulary", 0, { "", "", -1 } },
			{ "H_Watchcap_sgg", "", 1000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Usuń Kamizelke", 0, { "", "", -1 } },
            { "V_Press_F", "", 3000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 8000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Usuń Plecak", 0, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 750, { "", "", -1 } },
            { "B_Carryall_oli", "", 750, { "", "", -1 } },
            { "B_Carryall_khk", "", 750, { "", "", -1 } },
            { "B_Carryall_cbr", "", 750, { "", "", -1 } }
        };
    };*/
	
	class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
};
