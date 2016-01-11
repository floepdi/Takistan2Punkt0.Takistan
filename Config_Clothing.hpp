/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_BK", "T-Shirt und Jeans", 25, {  "life_levelshop", "SCALAR", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 25, {  "life_levelshop", "SCALAR", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blau", 25, {  "life_levelshop", "SCALAR", -1 } },
			{ "rds_uniform_citizen2", "Billigklamotten", 30, {  "life_levelshop", "SCALAR", 2 } },
			{ "rds_uniform_citizen3", "Billigklamotten", 30, {  "life_levelshop", "SCALAR", 2 } },
			{ "U_C_Journalist", "Presseoutfit", 35, {  "life_levelshop", "SCALAR", 2 } },
			{ "U_BG_Guerilla2_2", "Guerilla Outfit", 60, {  "life_levelshop", "SCALAR", 4 } },
			{ "TRYK_U_taki_wh", "Einheimischen Klamotten Weiß", 60, {  "life_levelshop", "SCALAR", 5 } },
			{ "U_BG_Guerilla2_3", "Guerilla Outfit (hell)", 70, {  "life_levelshop", "SCALAR", 6 } },
			{ "TRYK_U_taki_COY", "Einheimischen Klamotten Coyote", 65, {  "life_levelshop", "SCALAR", 7 } },
			{ "U_BG_Guerilla2_1", "Guerilla Outfit (dunkel)", 75, {  "life_levelshop", "SCALAR", 8 } }


		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "rds_worker_cap1", "", 10, {  "life_levelshop", "SCALAR", -1 } },
			{ "rds_Woodlander_cap3", "", 10, {  "life_levelshop", "SCALAR", -1 } },
			{ "rds_Villager_cap4", "", 10, {  "life_levelshop", "SCALAR", -1 } },
			{ "rds_Profiteer_cap3", "", 15, {  "life_levelshop", "SCALAR", 2 } },
			{ "rds_worker_cap3", "", 15, {  "life_levelshop", "SCALAR", 3 } },
			{ "rds_Villager_cap2", "", 15, {  "life_levelshop", "SCALAR", 3 } },
			{ "rds_Woodlander_cap1", "", 15, {  "life_levelshop", "SCALAR", 3 } },
			{ "H_Booniehat_khk", "", 25, { life_level"", "SCALAR", 4 } },
			{ "rds_worker_cap2", "", 20, {  "life_levelshop", "SCALAR", 5 } },
			{ "rds_Villager_cap3", "", 20, {  "life_levelshop", "SCALAR", 5 } },
			{ "rds_Woodlander_cap4", "", 20, {  "life_levelshop", "SCALAR", 5 } },
			{ "H_Hat_tan", "", 25, {  "life_levelshop", "SCALAR", 6 } },
			{ "rds_worker_cap4", "", 25, {  "life_levelshop", "SCALAR", 7 } },
			{ "rds_Villager_cap1", "", 25, {  "life_levelshop", "SCALAR", 7 } },
			{ "rds_Woodlander_cap2", "", 25, {  "life_levelshop", "SCALAR", 7 } },
			{ "TRYK_H_pakol2", "", 30, {  "life_levelshop", "SCALAR", 8 } }

		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "SFG_Tac_BeardD", "", 50, {  "life_levelshop", "SCALAR", 5 } },
			{ "SFG_Tac_BeardO", "", 50, {  "life_levelshop", "SCALAR", 5 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
      { "rhs_6sh46", "", 25, {  "life_levelshop", "SCALAR", -1 } },
			{ "UO_AK_VEST_Tan", "", 50, {  "life_levelshop", "SCALAR", 3 } },
			{ "V_Chestrig_khk", "", 100, {  "life_levelshop", "SCALAR", 5 } },
			{ "V_HarnessO_brn", "", 200, {  "life_levelshop", "SCALAR", 8 } }

		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "rhs_sidor", "", 25, {  "life_levelshop", "SCALAR", -1 } },
			{ "B_AssaultPack_khk", "", 50, {  "life_levelshop", "SCALAR", 3 } },
			{ "B_FieldPack_khk", "", 75, {  "life_levelshop", "SCALAR", 6 } },
			{ "B_TacticalPack_oli", "", 100, {  "life_levelshop", "SCALAR", 9 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "TRYK_B_TRYK_OCP_T", "Ausbildungsuniform", 25, {  "life_coplevel", "SCALAR", 1 } },
			{ "TRYK_U_B_3c", "Mannschaftsuniform I", 25, { "life_coplevel", "SCALAR", 2 } },
			{ "TRYK_U_B_3cr", "Mannschaftsuniform II", 25, { "life_coplevel", "SCALAR", 3 } },
			{ "TRYK_U_B_ARO1_CombatUniform", "Mannschaftsuniform III", 25, { "life_coplevel", "SCALAR", 4 } },
			{ "TRYK_U_B_ARO1R_CombatUniform", "Mannschaftsuniform IV", 25, { "life_coplevel", "SCALAR", 5 } },
			{ "TRYK_U_B_3CD_Delta_BDU", "Unteroffiziersuniform I", 25, { "life_coplevel", "SCALAR", 7 } },
			{ "TRYK_U_B_3CD_Delta_BDUTshirt", "Unteroffiziersuniform II", 25, { "life_coplevel", "SCALAR", 10 } },
			{ "TRYK_U_B_MARPAT_Desert_Tshirt", "Offiziersuniform I", 25, { "life_coplevel", "SCALAR", 12 } },
			{ "TRYK_U_B_MARPAT_Desert", "Offiziersuniform II", 25, { "life_coplevel", "SCALAR", 13 } },
			{ "TRYK_U_B_BLKTAN_CombatUniform", "Captain Uniform", 25, { "life_coplevel", "SCALAR", 14 } },
      { "TRYK_U_B_BLKBLK_CombatUniform", "Leitungsuniform", 25, { "life_coplevel", "SCALAR", 17 } },
      { "TRYK_U_B_BLK", "Leitungsuniform", 25, { "life_coplevel", "SCALAR", 17 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "Recruiten Kappe", 10, { "life_coplevel", "SCALAR", 1 } },
			{ "rhsusf_ach_bare_tan", "Mannschaftshelm I", 10, { "life_coplevel", "SCALAR", 2 } },
      { "H_HelmetB_sand", "Mannschaftshelm II", 10, { "life_coplevel", "SCALAR", 3 } },
      { "H_HelmetSpecB_sand", "Mannschaftshelm III", 10, { "life_coplevel", "SCALAR", 4 } },
      { "rhsusf_ach_helmet_ESS_ocp", "Mannschaftshelm IV", 10, { "life_coplevel", "SCALAR", 5 } },
      { "TRYK_H_Booniehat_CC", "Mannschaftshelm V", 10, { "life_coplevel", "SCALAR", 6 } },
      { "H_PilotHelmetHeli_O", "Unteroffiziershelm I", 10, { "life_coplevel", "SCALAR", 7 } },
      { "TRYK_H_Helmet_3C", "Unteroffiziershelm I", 10, { "life_coplevel", "SCALAR", 7 } },
      { "H_Beret_blk", "Unteroffiziersbarett", 10, { "life_coplevel", "SCALAR", 7 } },
      { "TRYK_H_ghillie_top_headless", "Ghillie nur Oberkörper", 10, { "life_coplevel", "SCALAR", 9 } },
      { "TRYK_H_AOR1", "Unteroffiziershelm II", 10, { "life_coplevel", "SCALAR", 10 } },
      { "TRYK_H_ghillie_top", "Ghillie Oberkörper&Kopf", 10, { "life_coplevel", "SCALAR", 10 } },
      { "TRYK_H_ghillie_over", "Ghillie Ganzkörper", 10, { "life_coplevel", "SCALAR", 11 } },
      { "H_Beret_02", "Offiziersbarett", 10, { "life_coplevel", "SCALAR", 12 } },
      { "TRYK_H_Helmet_MARPAT_Desert", "Offiziershelm I", 10, { "life_coplevel", "SCALAR", 12 } },
      { "TRYK_H_Helmet_CC", "Offiziershelm II", 10, { "life_coplevel", "SCALAR", 15 } },
      { "H_Beret_Colonel", "Leitungsbarett", 10, { "life_coplevel", "SCALAR", 16 } },
      { "Kio_No1_Hat", "LARGO HUT", 10, { "life_coplevel", "SCALAR", 17} },
      { "Kio_Spinning_Hat", "MOERTI HUT", 10, { "life_coplevel", "SCALAR", 17 } },
			{ "Kio_Capital_Hat", "PHIL HUT", 10, { "life_coplevel", "SCALAR", 17 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_mas_wpn_gog_m", "Taktischer Bart", 10, { "life_coplevel", "SCALAR", 2 } },
			{ "SFG_Tac_moustacheD", "Taktischer Bart", 10, { "life_coplevel", "SCALAR", 2 } },
			{ "SFG_Tac_moustacheB", "Taktischer Bart", 10, { "life_coplevel", "SCALAR", 2 } },
			{ "SFG_Tac_BeardD", "Taktischer Bart", 10, { "life_coplevel", "SCALAR", 2 } },
			{ "SFG_Tac_BeardB", "Taktischer Bart", 10, { "life_coplevel", "SCALAR", 2 } },
			{ "SFG_Tac_smallBeardD", "Taktischer Bart", 10, { "life_coplevel", "SCALAR", 2 } },
			{ "SFG_Tac_smallBeardB", "Taktischer Bart", 10, { "life_coplevel", "SCALAR", 2 } },
			{ "G_mas_wpn_mask", "Taktische Maske", 10, { "life_coplevel", "SCALAR", 3 } },
			{ "TRYK_Shemagh_ESS", "Taktisches Shemag", 10, { "life_coplevel", "SCALAR", 4 } },
			{ "G_Aviator", "Fliegerbrille für Moertini", 10, { "life_coplevel", "SCALAR", 17 } },
			{ "TRYK_kio_balaclava_BLK", "Balaclava Schwarz", 10, { "life_coplevel", "SCALAR", 17 } },
			{ "TRYK_kio_balaclavas", "Balaclava Geist", 10, { "life_coplevel", "SCALAR", 17 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_HarnessO_gry", "Ausbildungsweste", 10, { "life_coplevel", "SCALAR", 1 } },
      { "V_TacVest_khk", "Mannschaftsweste I", 10, { "life_coplevel", "SCALAR", 2 } },
      { "rhsusf_iotv_ocp_Repair", "Mannschaftsweste II", 10, { "life_coplevel", "SCALAR", 4 } },
      { "rhsusf_iotv_ocp_Grenadier", "Mannschaftsweste III", 10, { "life_coplevel", "SCALAR", 5 } },
      { "rhsusf_iotv_ocp_Squadleader", "Mannschaftsweste IV", 10, { "life_coplevel", "SCALAR", 6 } },
      { "V_PlateCarrier_Kerry", "Unteroffiziersweste I", 10, { "life_coplevel", "SCALAR", 7 } },
      { "TRYK_V_PlateCarrier_coyo_L", "Unteroffiziersweste II", 10, { "life_coplevel", "SCALAR", 8 } },
      { "TRYK_V_tacv1LC_CY", "Unteroffiziersweste III", 10, { "life_coplevel", "SCALAR", 10 } },
      { "TRYK_V_ArmorVest_tan", "Offiziersweste", 10, { "life_coplevel", "SCALAR", 12 } },
      { "TRYK_V_ArmorVest_Delta", "Leitungsweste I", 10, { "life_coplevel", "SCALAR", 17 } },
			{ "TRYK_V_ArmorVest_Delta2", "Leitungsweste II", 1500, { "life_coplevel", "SCALAR", 17 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "tf_rt1523g", "Funkrucksack I", 0, { "", "", -1 } },
			{ "tf_rt1523g_big_rhs", "Funkrucksack II", 0, { "", "", -1 } },
			{ "rhs_sidor", "Ausbildungsrucksack", 10, { "life_coplevel", "SCALAR", 1 } },
      { "B_AssaultPack_cbr", "Mannschaftsrucksack I", 10, { "life_coplevel", "SCALAR", 2 } },
      { "TRYK_B_AssaultPack_MARPAT_Desert", "Mannschaftsrucksack II", 10, { "life_coplevel", "SCALAR", 3 } },
      { "B_mas_Kitbag_des", "Mannschaftsrucksack III", 10, { "life_coplevel", "SCALAR", 4 } },
      { "TRYK_B_Coyotebackpack", "Mannschaftsrucksack IV", 10, { "life_coplevel", "SCALAR", 5 } },
      { "B_Carryall_cbr", "Mannschaftsrucksack V", 10, { "life_coplevel", "SCALAR", 6 } },
      { "B_mas_Kitbag_black", "Leitungsrucksack I", 10, { "life_coplevel", "SCALAR", 14 } },
      { "B_TacticalPack_blk", "Leitungsrucksack II", 10, { "life_coplevel", "SCALAR", 14 } }



		};
	};

	class warlord {
		title = "STR_Shops_Warlord";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "TRYK_OVERALL_flesh", "Overall", 75, {  "life_levelshop", "SCALAR", 9 } },
			{ "rds_uniform_Profiteer1", "Billiganzug", 80, {  "life_levelshop", "SCALAR", 10 } },
			{ "TRYK_SUITS_BLK_F", "Schwarzer Anzug", 100, {  "life_levelshop", "SCALAR", 11 } },
      { "TRYK_SUITS_BR_F", "Brauner Anzug", 100, {  "life_levelshop", "SCALAR", 11 } },
			{ "TRYK_U_denim_jersey_blk", "Gestreifte Jacke Schwarz", 80, {  "life_levelshop", "SCALAR", 12 } },
			{ "TRYK_U_denim_jersey_blu", "Gestreifte Jacke Blau", 80, {  "life_levelshop", "SCALAR", 12 } },
			{ "TRYK_U_denim_hood_mc", "Tarnklamotten mit Jeans", 80, {  "life_levelshop", "SCALAR", 13 } },
			{ "U_BG_Guerilla1_1", "Guerilla Guarnment", 120, {  "life_levelshop", "SCALAR", 15 } },
			{ "IS_uniform_squad_leader_o", "Kampfanzug weiße Hose", 150, {  "life_levelshop", "SCALAR", 17 } },
			{ "TRYK_U_taki_BLK", "Einheimischen Klamotten Schwarz", 85, {  "life_levelshop", "SCALAR", 18 } },
			{ "U_BG_Guerrilla_6_1", "Guerilla Apparell", 125, {  "life_levelshop", "SCALAR", 20 } },
			{ "U_Marshal", "Marshall Uniform", 100, {  "life_levelshop", "SCALAR", 21 } },
      { "TRYK_C_AOR2_T", "AOIR T-Shirt", 110, {  "life_levelshop", "SCALAR", 22 } },
      { "U_BG_leader", "Guerilla Uniform Anführer", 130, {  "life_levelshop", "SCALAR", 24 } },
			{ "TRYK_U_B_AOR2_Rollup_CombatUniform", "Kampfunifrom hochgekrempelt", 140, {  "life_levelshop", "SCALAR", 25 } },
			{ "TRYK_U_B_AOR2_BLK_R_CombatUniform", "Kampfuniform", 145, {  "life_levelshop", "SCALAR", 26 } },
			{ "rhs_uniform_mflora_patchless", "Uniform Mountain Flora", 160, {  "life_levelshop", "SCALAR", 27 } },
			{ "U_I_FullGhillie_ard", "Full Ghuillie Arid", 250, {  "life_levelshop", "SCALAR", 29 } },
			{ "TRYK_U_B_fleece", "Fließ Anzug", 180, {  "life_levelshop", "SCALAR", 31 } },
			{ "SAA_uniform_medic_o", "SAA Uniform", 190, {  "life_levelshop", "SCALAR", 32 } },
			{ "U_O_OfficerUniform_ocamo", "Hex Uniform Anführer", 200, {  "life_levelshop", "SCALAR", 33 } },
			{ "TRYK_U_B_PCUGs_gry", "Jacke Denim", 175, {  "life_levelshop", "SCALAR", 35 } },
      { "TRYK_U_pad_hood_Blk", "Kapuzenhoodie", 195, {  "life_levelshop", "SCALAR", 37 } },
      { "IS_uniform_irregular_o", "Kampfanzug schwarz", 225, {  "life_levelshop", "SCALAR", 38 } },
			{ "TRYK_U_B_PCUGHs", "Kapuzenhoodie (Kapuze oben)", 230, {  "life_levelshop", "SCALAR", 40 } },
      { "rds_uniform_Villager2", "ULTIMATIVE KAMPFUNIFORM", 1, {  "life_levelshop", "SCALAR", 50 } }

};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
      		{ "H_Bandanna_camo", "", 35, {  "life_levelshop", "SCALAR", 9 } },
			{ "H_ShemagOpen_tan", "", 65, {  "life_levelshop", "SCALAR", 12 } },
			{ "TRYK_H_Bandana_H", "", 50, {  "life_levelshop", "SCALAR", 14 } },
			{ "H_Shemag_olive", "", 85, {  "life_levelshop", "SCALAR", 24 } },
     		 { "TRYK_H_woolhat", "", 100, {  "life_levelshop", "SCALAR", 30 } },
			{ "IS_shemag_black", "Schwarzes Shemag", 150, {  "life_levelshop", "SCALAR", 38 } }

		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
      { "rhs_scarf", "", 25, {  "life_levelshop", "SCALAR", 10 } },
			{ "TRYK_Shemagh", "", 65, {  "life_levelshop", "SCALAR", 12 } },
			{ "SFG_Tac_moustacheD", "", 50, {  "life_levelshop", "SCALAR", 13 } },
			{ "SFG_Tac_moustacheO", "", 50, {  "life_levelshop", "SCALAR", 13 } },
			{ "G_mas_wpn_shemag_gog", "", 85, {  "life_levelshop", "SCALAR", 18 } },
			{ "G_Balaclava_oli", "", 100, {  "life_levelshop", "SCALAR", 26 } },
			{ "TRYK_Shemagh_G", "", 125, {  "life_levelshop", "SCALAR", 31 } },
			{ "G_mas_wpn_wrap_b", "", 150, {  "life_levelshop", "SCALAR", 38 } }

		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
     		 { "V_HarnessO_brn", "", 200, {  "life_levelshop", "SCALAR", 8 } },
			{ "V_TacVest_khk", "", 350, {  "life_levelshop", "SCALAR", 13 } },
			{ "TRYK_V_tacv1_CY", "", 450, {  "life_levelshop", "SCALAR", 20 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
     		{ "B_TacticalPack_oli", "", 100, {  "life_levelshop", "SCALAR", 9 } },
			{ "B_mas_Kitbag_rng", "", 125, {  "life_levelshop", "SCALAR", 11 } },
			{ "TRYK_B_Coyotebackpack_OD", "", 150, {  "life_levelshop", "SCALAR", 13 } },
			{ "B_Carryall_khk", "", 175, {  "life_levelshop", "SCALAR", 16 } },
			{ "B_mas_AssaultPack_rng_AT4", "", 200, {  "life_levelshop", "SCALAR", 35 } }
		};
	};
};