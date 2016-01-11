class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "RDS_Lada_Civ_01", 150, "", { "life_levelshop", 1 }},
      { "RDS_S1203_Civ_01", 250, "", { "life_levelshop", 2 }},
      { "RDS_Gaz24_Civ_01", 300, "", { "life_levelshop", 4 }},
      { "rhs_uaz_open_MSV_01", 400, "", { "life_levelshop", 5 }},
      { "C_Van_01_transport_F", 500, "", { "life_levelshop", 6 }},
      { "UAZ_Unarmed", 550, "", { "life_levelshop", 7 }},
      { "RDS_Octavia_Civ_01", 500, "", { "life_levelshop", 8 }},
      { "C_Quadbike_01_F", 350, "", { "life_levelshop", 9 }}
		};
	};


	class med_shop {
		side = "med";
		vehicles[] = {
			{ "RDS_S1203_Civ_02", 100, "", { "life_mediclevel", 1 }},
      { "B_mas_cars_Hilux_Unarmed", 125, "", { "life_mediclevel", 2 }},
      { "UAZ_Unarmed", 150, "", { "life_mediclevel", 3 }},
      { "B_mas_cars_LR_Unarmed", 175, "", { "life_mediclevel", 3 }},
      { "B_mas_HMMWV_UNA_des", 200, "", { "life_mediclevel", 4 }}
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "GR_Bell412_1", 500, "", { "life_mediclevel", 2 }},
			{ "GR_UH1H_4", 750, "", { "life_mediclevel", 3 }},
      { "RHS_UH60M_MEV_d", 100, "", { "life_mediclevel", 4 }}
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "RDS_Ikarus_Civ_01", 500, "", { "life_levelshop", 10 }},
      { "B_mas_cars_Hilux_Unarmed", 850, "", { "life_levelshop", 13 }},
      { "B_mas_cars_LR_Unarmed", 1000, "", { "life_levelshop", 15 }},
      { "rhs_gaz66_ammo_vmf", 1000, "", { "life_levelshop", 16 }},
      { "rhs_gaz66_vmf", 1000, "", { "life_levelshop", 16 }},
      { "I_mas_cars_UAZ_M2", 1500, "", { "life_levelshop", 18 }},
      { "B_mas_cars_Hilux_M2", 1750, "", { "life_levelshop", 19 }},
      { "I_mas_cars_LR_soft_M2", 2000, "", { "life_levelshop", 20 }},
      { "I_mas_cars_UAZ_MG", 2250, "", { "life_levelshop", 22 }},
      { "B_mas_cars_Hilux_MG", 2500, "", { "life_levelshop", 23 }},
      { "RHS_Ural_Open_Civ_01", 2000, "", { "life_levelshop", 26 }},
      { "RHS_Ural_Fuel_MSV_01", 2000, "", { "life_levelshop", 27 }},
      { "B_G_Offroad_01_armed_F", 2000, "", { "life_levelshop", 29 }},
      { "rhs_tigr_vdv", 4500, "", { "life_levelshop", 30 }},
      { "C_Hatchback_01_F", 2500, "", { "life_levelshop", 33 }},
      { "C_SUV_01_F", 3500, "", { "life_levelshop", 36 }},
      { "max_Dodge_multy", 3750, "", { "life_levelshop", 39 }},
      { "I_mas_cars_UAZ_SPG9", 4000, "", { "life_levelshop", 40 }},
      { "B_mas_cars_Hilux_SPG9", 4500, "", { "life_levelshop", 42 }},
      { "O_MRAP_02_F", 5000, "", { "life_levelshop", 44 }},
      { "_Truck_01_ammo_F", 3500, "", { "life_levelshop", 47 }}
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "rhsusf_m998_d_2dr", 100, "", { "life_coplevel", 1 }},
      { "rhsusf_m998_d_4dr", 125, "", { "life_coplevel", 2 }},
      { "DAR_M1152", 150, "", { "life_coplevel", 4 }},
      { "rhsusf_m1025_d", 175, "", { "life_coplevel", 5 }},
      { "rhsusf_m1025_d_m2", 200, "", { "life_coplevel", 6 }},
      { "DAR_M1165_GMV", 225, "", { "life_coplevel", 7 }},
      { "DAR_M1151", 250, "", { "life_coplevel", 9 }},
      { "DAR_M1151_Deploy", 250, "", { "life_coplevel", 11 }},
      { "DAR_M1167", 275, "", { "life_coplevel", 13 }},
      { "rhsusf_m113d_usarmy", 1337, "", { "life_coplevel", 16 }}
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "GR_Bell412_3", 7500, "", { "life_levelshop", 24 }},
      { "GR_Mi8_1", 15000, "", { "life_levelshop", 32 }},
      { "GR_Mi_171_2", 30000, "", { "life_levelshop", 49 }}
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "GR_UH1H_6", 1000, "", { "life_coplevel", 5 } },
      { "GR_UH1H_3", 2000, "", { "life_coplevel", 6 } },
      { "GR_UH1H_2", 3000, "", { "life_coplevel", 8 } },
      { "GR_AW101_1", 5000, "", { "life_coplevel", 9 } },
      { "GR_UH60_1", 6000, "", { "life_coplevel", 10 } },
      { "B_Heli_Light_01_armed_F", 20000, "", { "life_coplevel", 16 } }
		};
	};

};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = 10;
		storageFee[] = { 50, 50, 50, 50 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class RDS_Lada_Civ_01 {
		vItemSpace = 15;
		storageFee[] = { 20, 0, 20, 0 };
		chopShop = 3000;
    insurance = 2500;
	};

	class RDS_S1203_Civ_01 {
		vItemSpace = 17;
		storageFee[] = { 25, 0, 3000, 0 };
		chopShop = 7500;
	};

	class RDS_Gaz24_Civ_01 {
		vItemSpace = 17;
		storageFee[] = { 35, 0, 6500, 0 };
		chopShop = 12500;
	};

	class rhs_uaz_open_MSV_01 {
		vItemSpace = 15;
		storageFee[] = { 45, 0 , 0, 0 };
		insurance = 16000;
		chopShop = 45000;
	};

	class C_Van_01_transport_F {
		vItemSpace = 40;
		storageFee[] = { 0, 0, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
	};

	class UAZ_Unarmed {
		vItemSpace = 17;
		storageFee[] = { 45, 0, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
	};

	class RDS_Octavia_Civ_01 {
        vItemSpace = 19;
        storageFee[] = { 50, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Quadbike_01_F {
        vItemSpace = 5;
        storageFee[] = { 20, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class RDS_Ikarus_Civ_01 {
        vItemSpace = 20;
        storageFee[] = { 55, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_mas_cars_Hilux_Unarmed {
        vItemSpace = 20;
        storageFee[] = { 60, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_mas_cars_LR_Unarmed {
        vItemSpace = 20;
        storageFee[] = { 65, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class rhs_gaz66_ammo_vmf {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class rhs_gaz66_vmf {
        vItemSpace = 20;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class I_mas_cars_UAZ_M2 {
        vItemSpace = 10;
        storageFee[] = { 85, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class B_mas_cars_Hilux_M2 {
        vItemSpace = 10;
        storageFee[] = { 90, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class I_mas_cars_LR_soft_M2 {
        vItemSpace = 10;
        storageFee[] = { 95, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_mas_cars_UAZ_MG {
        vItemSpace = 10;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_mas_cars_Hilux_MG {
        vItemSpace = 10;
        storageFee[] = { 105, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class GR_Bell412_3 {
        vItemSpace = 10;
        storageFee[] = { 750, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class RHS_Ural_Open_Civ_01 {
        vItemSpace = 80;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class RHS_Ural_Fuel_MSV_01 {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F {
        vItemSpace = 15;
        storageFee[] = { 110, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class rhs_tigr_vdv {
        vItemSpace = 10;
        storageFee[] = { 125, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class GR_Mi8_1 {
        vItemSpace = 40;
        storageFee[] = { 2000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Hatchback_01_F {
        vItemSpace = 17;
        storageFee[] = { 100, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_SUV_01_F {
        vItemSpace = 20;
        storageFee[] = { 150, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class max_Dodge_multy {
        vItemSpace = 10;
        storageFee[] = { 200, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_mas_cars_UAZ_SPG9 {
        vItemSpace = 10;
        storageFee[] = { 250, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_mas_cars_Hilux_SPG9 {
        vItemSpace = 10;
        storageFee[] = { 260, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class B_Truck_01_ammo_F {
        vItemSpace = 125;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };


  class GR_Mi_171_2 {
        vItemSpace = 10;
        storageFee[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

  class O_MRAP_02_F {
        vItemSpace = 10;
        storageFee[] = { 350, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };


};
