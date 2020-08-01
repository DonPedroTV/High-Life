#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private["_skinName"];

switch (playerSide) do {
    case civilian: {
            if (uniform player isEqualTo "U_I_CombatUniform") then {
                player setObjectTextureGlobal [0, "textures\Mafia.paa"];
			};

            if ((uniform player isEqualTo "U_B_CombatUniform_mcam_vest") && (license_civ_broda)) then {
            player setObjectTextureGlobal [0, "textures\vip\ubranie_broda.jpg"];
        };

        if ((uniform player isEqualTo "U_B_CombatUniform_mcam_vest") && (license_civ_eddard)) then {
            player setObjectTextureGlobal [0, "textures\vip\ubranie_eddard.jpg"];
        };

            if ((backpack player) == "B_Bergen_hex_F") then {
            (unitbackpack player) setObjectTextureGlobal [0,""];
    };
    };

    case west: {

        unitBackpack player setObjectTextureGlobal [0,""];

		if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\cop_uniform.jpg"];
        };
			if ((FETCH_CONST(life_coplevel) <= 5) && ((uniform player) == "U_B_CombatUniform_mcam")) then {
			player setObjectTextureGlobal [0, "textures\Policja\mundur_3.jpg"];
			};

            if ((FETCH_CONST(life_coplevel) >= 6) && (FETCH_CONST(life_coplevel) <= 9) &&  ((uniform player) == "U_B_CombatUniform_mcam")) then {
            player setObjectTextureGlobal [0, "textures\Policja\mundur_1.jpg"];
            };

            if ((FETCH_CONST(life_coplevel) >= 10) && ((uniform player) == "U_B_CombatUniform_mcam")) then {
            player setObjectTextureGlobal [0, "textures\Policja\mundur_2.jpg"];
            };

			if ((FETCH_CONST(life_coplevel) >= 13) && ((uniform player) == "U_B_CombatUniform_mcam")) then {
            player setObjectTextureGlobal [0, "textures\Policja\FBI_A2.jpg"];
            };
			
			if ((FETCH_CONST(life_coplevel) >= 13) && ((uniform player) == "U_marshal")) then {
            player setObjectTextureGlobal [0, "textures\Policja\FBI.jpg"];
            };
		};

    case independent: {

        if ((FETCH_CONST(life_mediclevel) == 1) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\stazysta.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 2) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\pielegniarz.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 3) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\ratownik.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 4) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\lekarz_rez.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 5) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\lekarz.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 6) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\doktor.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 7) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\doktor_hab.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 8) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\zcaord.jpg"];
            };

        if ((FETCH_CONST(life_mediclevel) == 9) && ((backpack player) == "B_Kitbag_mcamo")) then {
            (unitbackpack player) setObjectTextureGlobal [0, "textures\plecaki\ordynator.jpg"];
            };

        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };

        if (uniform player isEqualTo "U_C_Paramedic_01_F") then {
            player setObjectTextureGlobal [0, "textures\uniform_medyk.jpg"];
        };

        if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform1.jpg"];
        };

        if (uniform player isEqualTo "U_B_CombatUniform_mcam_vest") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform1.jpg"];
        };
    };
};
