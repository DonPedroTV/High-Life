class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "C_Hatchback_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
			{ "C_Offroad_01_F", { "", "", -1 } },
            { "C_Offroad_02_unarmed_F", { "", "", -1 } },
			{ "C_SUV_01_F", { "", "", -1 } },
            { "C_Hatchback_01_sport_F", { "", "", -1 } },
            { "C_Van_01_transport_F", { "", "", -1 } },
			{ "C_Van_02_transport_F", { "", "", -1 } },
			{ "C_Van_02_vehicle_F", { "", "", -1 } }
		};
    };
	
	class nasiu_car {
		side = "civ";
		vehicles[] = {
			{ "C_SUV_01_F", { "", "", -1 } }
			};    };

	
	class broda_car {
		side = "civ";
		vehicles[] = {
			{ "C_SUV_01_F", { "", "", -1 } }
			};
    };
	
	class eddard_car {
		side = "civ";
		vehicles[] = {
			{ "C_SUV_01_F", { "", "", -1 } },
			{ "B_T_LSV_01_unarmed_F", { "", "", -1 } }
			};
    };
	
	class cezary_car {
		side = "civ";
		vehicles[] = {
			{ "C_SUV_01_F", { "", "", -1 } }
			};
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", { "", "", -1 } },
            { "C_Kart_01_Fuel_F", { "", "", -1 } },
            { "C_Kart_01_Red_F", { "", "", -1 } },
            { "C_Kart_01_Vrana_F", { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", { "", "", -1 } },
            { "I_Truck_02_transport_F", { "", "", -1 } },
            { "I_Truck_02_covered_F", { "", "", -1 } },
			{ "O_Truck_03_transport_F", { "", "", -1 } },
			{ "O_Truck_03_covered_F", { "", "", -1 } },
			{ "O_Truck_03_device_F", { "", "", -1 } },
            { "B_Truck_01_transport_F", { "", "", -1 } },
            { "B_Truck_01_ammo_F", { "", "", -1 } },
            { "B_Truck_01_box_F", { "", "", -1 } },
            { "C_Van_01_fuel_F", { "", "", -1 } },
            { "I_Truck_02_fuel_F", { "", "", -1 } },
            { "B_Truck_01_fuel_F", { "", "", -1 } }
			
		};
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", { "", "", -1 } },
            { "B_Heli_Light_01_F", { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1 } },
            { "I_Heli_Transport_02_F", { "", "", -1 } },
			{ "C_Plane_Civil_01_F", { "", "", -1 } }
        };
    };

     class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", { "", "", -1 } },
            { "C_Boat_Civil_01_F", { "", "", -1 } },
            { "B_SDV_01_F", { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
			{ "C_SUV_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_CTRG_F", { "", "", -1 } },
			{ "B_G_Offroad_01_armed_F", { "", "", -1 } },
            { "O_Heli_Transport_04_box_F", { "", "", -1 } }, //Taru Box
            { "O_Heli_Transport_04_F", { "", "", -1 } }, //Taru
            { "O_Heli_Transport_04_bench_F", { "", "", -1 } }, //Taru Ławka
			{ "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },//huron
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1} },
			{ "B_Heli_Light_01_F", { "", "", -1} }
		};
    };
	
	class bh_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", { "", "", -1 } },
            { "B_G_Offroad_01_F", { "", "", -1 } },
			{ "C_SUV_01_F", { "", "", -1 } },
            { "O_MRAP_02_F", { "", "", -1 } },
            { "B_T_LSV_01_unarmed_F", { "", "", -1 } },
			{ "B_G_Offroad_01_armed_F", { "", "", -1 } },
            { "B_Heli_Light_01_stripped_F", { "", "", -1 } },
            { "O_Heli_Transport_04_box_F", { "", "", -1 } }, //Taru Box
            { "O_Heli_Transport_04_F", { "", "", -1 } }, //Taru
            { "O_Heli_Transport_04_bench_F", { "", "", -1 } }, //Taru Ławka
			{ "B_Heli_Transport_03_unarmed_F", { "", "", -1 } },//huron
			{ "O_Heli_Light_02_unarmed_F", { "", "", -1} },
			{ "B_Heli_Light_01_F", { "", "", -1} }
		};
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "B_Quadbike_01_F", { "life_medicLevel", "SCALAR", 1 } },
			{ "C_Offroad_01_F", { "life_medicLevel", "SCALAR", 1 } },
            { "C_SUV_01_F", { "life_medicLevel", "SCALAR", 2 } },
			{ "C_Hatchback_01_F", { "life_medicLevel", "SCALAR", 3 } },
			{ "C_Van_02_medevac_F", { "life_medicLevel", "SCALAR", 3 } },
            { "C_Van_01_box_F", { "life_medicLevel", "SCALAR", 4 } },
			{ "C_IDAP_Van_02_medevac_F", { "life_medicLevel", "SCALAR", 4 } },
			{ "C_Hatchback_01_sport_F", { "life_medicLevel", "SCALAR", 5 } },
			{ "B_MRAP_01_F", { "life_medicLevel", "SCALAR", 7 } }
		};
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
			{ "B_Heli_Light_01_F", { "life_medicLevel", "SCALAR", 2 } },
            { "O_Heli_Light_02_unarmed_F", { "life_medicLevel", "SCALAR", 4 } },
			{ "I_Heli_Transport_02_F", { "life_medicLevel", "SCALAR", 5 } },
			{ "I_heli_light_03_unarmed_f", { "life_medicLevel", "SCALAR", 6 } },
			{ "O_Heli_Transport_04_medevac_F", { "life_medicLevel", "SCALAR", 7 } }
		};
    };

    class cop_car_fbi {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 1 } },
			{ "B_GEN_Van_02_transport_F", { "life_coplevel", "SCALAR", 3 } },
			{ "O_T_LSV_02_unarmed_black_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 6 } },
            { "I_MRAP_03_F", { "life_coplevel", "SCALAR", 13 } } //straider
			
		};
    };
	
	class cop_car {
        side = "cop";
        vehicles[] = {
            { "B_Quadbike_01_F", { "life_coplevel", "SCALAR", 1 } },
			{ "C_Offroad_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_SUV_01_F", { "life_coplevel", "SCALAR", 1 } },
            { "C_Hatchback_01_F", { "life_coplevel", "SCALAR", 1 } },
			{ "C_Hatchback_01_sport_F", { "life_coplevel", "SCALAR", 2 } },
			{ "B_GEN_Van_02_transport_F", { "life_coplevel", "SCALAR", 3 } },
			{ "O_T_LSV_02_unarmed_black_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_MRAP_01_F", { "life_coplevel", "SCALAR", 6 } },
			{ "I_MRAP_03_F", { "life_coplevel", "SCALAR", 9 } } //straider
		
		};
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", { "life_coplevel", "SCALAR", 2 } },
			{ "O_heli_light_02_unarmed_F", { "life_coplevel", "SCALAR", 4 } },
			{ "B_Heli_Transport_01_F", { "life_coplevel", "SCALAR", 6 } },
			{ "I_Heli_Transport_02_F", { "life_coplevel", "SCALAR", 6 } },
            { "I_heli_light_03_unarmed_f", { "life_coplevel", "SCALAR", 8 } }
			
			
		};
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", { "life_coplevel", "SCALAR", 3 } },
            { "C_Boat_Civil_01_police_F", { "life_coplevel", "SCALAR", 4 } },
            { "B_SDV_01_F", { "life_coplevel", "SCALAR", 6 } }
			//{ "B_Boat_Armed_01_minigun_F", { "life_coplevel", "SCALAR", 5 } }
		};
    };
	
	class med_ship {
        side = "med";
        vehicles[] = {
            { "C_Boat_Transport_02_F", { "life_medicLevel", "SCALAR", 2 } },
            { "B_SDV_01_F", { "life_medicLevel", "SCALAR", 6 } }

		};
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: ARRAY (license required)
    *         Ex: { "driver", "" , "" , "" } //civilian, west, independent, east
    *         licenses[] = { {"CIV"}, {"COP"}, {"MEDIC"}, {"EAST"} };
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

	class I_MRAP_03_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "FBI", "fbi", {
                "textures\Policja\Strider_Fbi.jpg"
            } },
            { "swat", "cop", {
                "textures\Policja\strider_swat.paa"
            } }
		};
    };
	
	class C_IDAP_Van_02_medevac_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_medevac_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 20000;
        textures[] = {};
    };
	
	class B_T_LSV_01_unarmed_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 48000;
		textures[] = {
            { "Lowca glow", "bh", {
                "textures\lowcyglow\prowlerbh1.jpg",
                "textures\lowcyglow\prowlerbh2.jpg",
                "textures\lowcyglow\prowlerbh3.jpg",
                "textures\lowcyglow\prowlerbh4.jpg"
            } },
			{ "SHIELD", "eddard", {
                "textures\vip\prowler1_eddard.jpg",
                "textures\vip\prowler2_eddard.jpg",
                "textures\vip\prowler3_eddard.jpg",
                "textures\vip\prowler4_eddard.jpg"
            } }
		};
		};
		
		class B_T_LSV_01_unarmed_CTRG_F {
        vItemSpace = 50;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 120000;
		textures[] = {};
		};
    
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 800;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 850000;
        textures[] = {};
    };
	
	class O_T_LSV_02_unarmed_black_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 80000;
        textures[] = {};
    };
	
	class I_Truck_02_medical_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 40000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 35000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 30000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 12500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 100;
        licenses[] = { {""}, {"cAir"}, {""}, {""} };
        price = 550000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 60;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 490000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 150;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 48000;
        textures[] = { };
    };

     class B_Truck_01_ammo_F {
        vItemSpace = 850;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 750000;
        textures[] = { };
    };
	
	class O_Truck_03_transport_F {
        vItemSpace = 620;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 400;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 360000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 6500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 60;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };

    class C_Van_02_vehicle_F {
        vItemSpace = 310;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 52000;
        textures[] = { };
    };
	
	class C_Van_02_transport_F {
        vItemSpace = 220;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 30000;
        textures[] = { };
    };
   
    class C_Offroad_02_unarmed_F {
        vItemSpace = 180;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 15000;
        textures[] = { };
    };
   
   class C_Boat_Civil_01_F {
        vItemSpace = 250;
        licenses[] = { {"boat"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        licenses[] = { {""}, {"cg"}, {""}, {""} };
        price = 45000;
        textures[] = { };
    };

    class O_Heli_Transport_04_box_F {
        vItemSpace = 600;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 601542;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_F {
        vItemSpace = 100;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 350000;
        textures[] = {};
    };
	
	 class O_Heli_Transport_04_bench_F {
        vItemSpace = 150;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {};
    };
	
	class B_Truck_01_box_F {
        vItemSpace = 1100;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 1000000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 700;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 300000;
        textures[] = { };
    };

     class C_Plane_Civil_01_F {
        vItemSpace = 50;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 130000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
			{ "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
			{ "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
			{ "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
			{ "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
			{ "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
			{ "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } }
		};
    };
	
	class O_MRAP_02_F {
        vItemSpace = 250;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1350000;
        textures[] = { 
			{ "Ifryt", "civ", {
                "textures\cywil\ifrit\IFRIT1.jpeg",
                "textures\cywil\ifrit\IFRIT2.jpeg"
			} }
        };
    };

    class C_Offroad_01_F {
        vItemSpace = 150;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 2400;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Policja", "cop", {
                "textures\Policja\offroad.jpg"
            } },
            { "Medyczny", "med", {
                "textures\Medycy\offroad_Medyk.paa"
			} }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 5500;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 84000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Policyjny", "cop", {
                "textures\policja\hatchback.jpg"
			} },
            { "Medyczny", "med", {
                "textures\policja\hatchback_med.jpg"
			} },
            { "Castrol", "civ", {
                "textures\cywil\hatchback\hatchback_01.paa"
			} },
		    { "Martini", "civ", {
                "textures\cywil\hatchback\hatchback_02.paa"
			} }
		};
    };

    class B_Quadbike_01_F {
        vItemSpace = 75;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 1800;
        textures[] = {
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
			{ "Czarny", "cop", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
			} },
			{ "Nibieski", "cop", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Medyczny", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
			} }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 520;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 160000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Fajny", "civ", {
                "textures\cywil\zamak\zamak_01.paa",
                "textures\cywil\zamak\zamak_02.paa"
			} }
		};
    };

    class C_Van_02_medevac_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 15200;
        textures[] = {
            { "Medyczny", "med", {
                "textures\Policja\van_medyk.jpg"
            } }
		};
    };
	
	class B_GEN_Van_02_transport_F {
        vItemSpace = 250;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 34000;
        textures[] = {
            { "Policyjny", "cop", {
                "textures\Policja\van_policja.jpg"
			} }
		};
    };
	
	class I_Truck_02_transport_F {
        vItemSpace = 400;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 800;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 340000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 90;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 300;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
			{ "Policyjny", "cop", {
                "textures\policja\hatchback.jpg"
			} },
			{ "Medyczny", "med", {
                "textures\policja\hatchback_med.jpg"
			} }
		};
    };

    class C_SUV_01_F {
        vItemSpace = 100;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 4500;
        textures[] = {
            { "Policyjny", "cop", {
                "textures\Policja\suv.jpg"
            } },
            { "Policyjny", "cop", {
                "textures\Policja\suv_dark.jpg"
			} },
			{ "Medyczny", "med", {
                "textures\Policja\suv_med.jpg"
			} },
			//{ "Suvnaklejki", "reb", {
               // "textures\suvSTICKER.paa"
			//} },
			{ "Czerwone camo", "civ", {
                "textures\skinyadama\SUF RED2-min.jpg"
			} },
			{ "Ogien", "civ", {
                "textures\skinyadama\SUV FIRE-min.jpg"
			} },
			{ "Flara", "civ", {
                "textures\skinyadama\SUVBLACKHOLE-min.jpg"
			} },
			{ "Epicki", "civ", {
                "textures\skinyadama\SUVCUSTOME3-min.jpg"
			} },
			{ "Monster", "civ", {
                "textures\skinyadama\SUVMonster2-min.jpg"
			} },
		    { "Camo1", "reb",{ 
                "textures\skinyadama\SUV1-min.jpg"
			} },
			{ "Camo2", "reb", {
                "textures\skinyadama\SUV2-min.jpg"
			} },
			{ "Camo1", "bh",{ 
                "textures\skinyadama\SUV1-min.jpg"
			} },
			{ "Camo2", "bh", {
                "textures\skinyadama\SUV2-min.jpg"
			} },
			{ "Nasiu", "nasiu", {
                "textures\vip\suv_nasiu.jpg"
			} },
			{ "Broda", "broda", {
                "textures\vip\suv_broda.jpg"
			} },
			{ "SHIELD", "eddard", {
                "textures\vip\suv_eddard.jpg"
			} },
			{ "Cezary", "cezary", {
                "textures\vip\suv_cezary.jpg"
			} },
			{ "Ferrari", "civ", {
                "textures\cywil\suv\suv_01.paa"
			} },
			{ "Monster 2", "civ", {
                "textures\cywil\suv\suv_02.paa"
			} }
		};
    };

    class C_Van_01_transport_F {
        vItemSpace = 200;
        licenses[] = { {"driver"}, {""}, {""}, {""} };
        price = 48000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
		};
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 900;
        licenses[] = { {"pilot"}, {""}, {""}, {""} };
        price = 1250000;
        textures[] = {
			{ "Ion", "civ", {
				"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
			} },
			{ "Dahoman", "civ", {
				"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
				"A3\Air_F_Beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
			} },
			{ "Policyjny", "cop", {
				"#(ai,64,64,1)Fresnel(1.3,7)",
				"#(argb,8,8,3)color(1,1,1,0.8)",
				"#(ai,64,64,1)Fresnel(1.3,7)"
			} },
			{ "Medyczny", "med", {
				"textures\Medycy\seaking1_co.paa",
				"textures\Medycy\seaking2_co.paa",
				"textures\Medycy\seaking3_co.paa"
			} }
		};
    };
	
	class C_Van_01_box_F {
        vItemSpace = 320;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
            { "Medyczny", "med", {
                "textures\Policja\furgon_med.jpg",
                "textures\Policja\furgon_2_med.jpg"
			} },
            { "Burger", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa",
				"textures\cywil\van\van_burger.paa"
            } },
		    { "Lodziarnia", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa",
				"textures\cywil\van\van_ice.paa"
			} }
		};
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 150000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Policyjny", "cop", {
                "textures\Policja\hunter1.jpg",
                "textures\Policja\hunter2.jpg"
			} },
			{ "Medyczny", "med", {
                "textures\Policja\hunter_med.jpg",
                "textures\Policja\hunter2_med.jpg"
			} }
        };
    };

    class B_Heli_Light_01_stripped_F {
        vItemSpace = 115;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 200000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
           	} }
			      
        };
    };
  
	class I_heli_light_03_unarmed_f {
        vItemSpace = 200;
        licenses[] = { {""}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
			
            { "Policja", "cop", {
                "textures\Policja\hellcat_policja.jpg"
            } },
			{ "Medyczny", "med", {
				"textures\Medycy\hellcatmed.jpg"
			} },
			{ "Zielony", "civ", {
                "\A3\air_f_epb\Heli_Light_03\data\Heli_Light_03_base_CO.paa"
            } }
        };
    };
	
	class B_Heli_Light_01_F {
        vItemSpace = 115;
        licenses[] = { {"pilot"}, {"cAir"}, {"mAir"}, {""} };
        price = 300000;
        textures[] = {
			{ "Policja", "cop", {
                "textures\Policja\hummingbird_policja.jpg"
            } }, 
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Czerwony", "reb", {
                "textures\skinyadama\Hm1-min.jpg"
			} },
			{ "Hex", "reb", {
                "textures\skinyadama\Hm5-min.jpg"
			} },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Medyczny", "med", {
                "textures\Policja\hummingbirg_medycy.jpg"
            } },
			{ "Czerwony", "bh", {
                "textures\skinyadama\Hm1-min.jpg"
			} },
			{ "Hex", "bh", {
                "textures\skinyadama\Hm5-min.jpg"
			} },
            { "Rebel Digital", "bh", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "bh", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
           	} }
            
            
			
			
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 250000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 400;
        licenses[] = { {"pilot" }, {""}, {"mAir"}, {""} };
        price = 450000;
        textures[] = {
            { "White ", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "textures\Policja\orca_med.jpg"
            } },
			{ "Policja", "cop", {
                "textures\Policja\orca_policja.jpg"
			} }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 80;
        licenses[] = { {"boat"}, {"cg"}, {""}, {""} };
        price = 120000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 320;
        vFuelSpace = 15500;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            } },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            } }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 20000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 110000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            } }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 80;
        vFuelSpace = 25000;
        licenses[] = { {"trucking"}, {""}, {""}, {""} };
        price = 250000;
        textures[] = {};
    };
};
