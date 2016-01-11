#define VITEMMACRO(NAME,DISPLAYNAME,VARNAME,WEIGHT,BUYPRICE,SELLPRICE,ILLEGAL,EDIBLE,ICON) class NAME { \
		variable = VARNAME; \
		weight = WEIGHT; \
		displayName = DISPLAYNAME; \
		buyPrice = BUYPRICE; \
		sellPrice = SELLPRICE; \
		illegal = ILLEGAL; \
		edible = EDIBLE; \
		icon = ICON; \
	};

#define LICENSEMACRO(NAME,DISPLAYNAME,VARNAME,PRICE,ILLEGAL,SIDE) class NAME { \
		variable = VARNAME; \
		displayName = DISPLAYNAME; \
		price = PRICE; \
		illegal = ILLEGAL; \
		side = SIDE; \
	};

#define true 1
#define false 0
#include "Config_Clothing.hpp"
#include "Config_Shops.hpp"


/*
	Master settings for various features and functionality
*/
class Life_Settings {
	/* Persistent Settings */
	save_civ_weapons = true; //Allow civilians to save weapons on them?
	save_virtualItems = true; //Save Virtual items (all sides)?

	/* Revive system settings */
	revive_cops = false; //true to enable cops the ability to revive everyone or false for only medics/ems.
	revive_fee = 100; //Revive fee that players have to pay and medics / EMS are rewarded

	/* House related settings */
	house_limit = 5; //Maximum amount of houses a player can own.

	/* Gang related settings */
	gang_price = 5000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
	gang_upgradeBase = 10000; //The base cost for upgrading slots in a gang
	gang_upgradeMultiplier = 2.5; //Not sure if in use?

	/* Player-related systems */
	enable_fatigue = true; //Set to false to disable the ARMA 3 false system.
	total_maxWeight = 10; //Static variable for the maximum weight allowed without having a backpack
	total_maxWeightT = 10;
	paycheck_period = 5; //Scaled in minutes

	/* Impound Variables */
	impound_car = 350; //Price for impounding cars
	impound_boat = 250; //Price for impounding boats
	impound_air = 850; //Price for impounding helicopters / planes

	/* Car-shop Settings */
	vehicleShop_rentalOnly[] = { "C_Van_01_transport_F","rhs_gaz66_ammo_vmf","rhs_gaz66_vmf","RHS_Ural_Open_Civ_01","RHS_Ural_Fuel_MSV_01","B_Truck_01_ammo_F" };

	/* Job-related stuff */
	delivery_points[] = { "di_1", "di_2", "di_3" ,"di_4", "di_5", "di_6", "di_7", "di_8", "di_9", "di_10", "di_11" };

	crimes[] = {
		{"STR_Crime_1","350","1"},
		{"STR_Crime_2","1500","2"},
		{"STR_Crime_3","2500","3"},
		{"STR_Crime_4","3500","4"},
		{"STR_Crime_5","10000","5"},
		{"STR_Crime_6","5000","6"},
		{"STR_Crime_7","10000","7"}
	};

	sellArray[] = {};


	allowedSavedVirtualItems[] = { "dogtag" , "wasser" , "fladen" , "getreide" , "mehl" , "bandage" , "depotwaffen" , "cola", "ziegenmilch", "fladenbrot", "burger" , "dattel", "oil_unprocessed", "oil_processed", "sulfuru" , "sulfurp",  "nitre", "potassiumnitrate", "nitroglycerin" , "gunpowder", "flask",  "altpapier", "pipe", "nitroglycerin" , "blumenerde"};
};

//Virtual Items
class VirtualItems {
	//Misc
  VITEMMACRO(fuelEmpty, "STR_Item_FuelE", "fuelEmpty", 2, -1, -1, false, -1, "icons\ico_fuelempty.paa")
  VITEMMACRO(fuelFull, "STR_Item_FuelF", "fuelFull", 5, 50, -1, false, -1, "icons\ico_fuel.paa")
  VITEMMACRO(spikeStrip, "STR_Item_SpikeStrip", "spikeStrip", 5, 15, -1, true, -1, "")
  VITEMMACRO(lockpick, "STR_Item_Lockpick", "lockpick", 3, 200, -1, true, -1, "")
  VITEMMACRO(depotwaffen, "STR_Item_depotwaffen", "depotwaffen", 10, -1, 500, true, -1, "")
  VITEMMACRO(blastingcharge, "STR_Item_BCharge", "blastingCharge", 5, 500, -1, true, -1, "icons\ico_blastingCharge.paa")
  VITEMMACRO(boltcutter, "STR_Item_BCutter", "boltCutter", 5, 250, -1, true, -1, "icons\ico_boltcutters.paa")
  VITEMMACRO(defusekit, "STR_Item_DefuseKit", "defuseKit", 2, 100, -1, false, -1, "")
  VITEMMACRO(information, "STR_Item_information", "information", 3, -1, 50, true, -1, "")
  VITEMMACRO(strahler, "STR_Item_strahler", "strahler", 3, 10, -1, true, -1, "")
  VITEMMACRO(barricade, "STR_Item_barricade", "barricade", 3, 10, -1, true, -1, "")
  VITEMMACRO(barrier, "STR_Item_barrier", "barrier", 3, 10, -1, true, -1, "")
  VITEMMACRO(dogtag, "STR_Item_dogtag", "dogtag", 2, -1, -1, true, -1, "")

	//MEDIKRAM
  VITEMMACRO(bandage, "STR_Item_bandage", "bandage", 1, 20, -1, false, -1, "")
  VITEMMACRO(traumakit, "STR_Item_traumakit", "traumakit", 3, 50, -1, false, -1, "")
  VITEMMACRO(kochsalz, "STR_Item_kochsalz", "kochsalz", 2, 50, -1, false, -1, "")
  VITEMMACRO(morphin, "STR_Item_morphin", "morphin", 3, 150, -1, false, -1, "")
  VITEMMACRO(epikit, "STR_Item_epikit", "epikit", 3, 100, -1, false, -1, "")

	//Mined Items
  VITEMMACRO(oil_unprocessed, "STR_Item_OilU", "oilUnprocessed", 5, -1, -1, false, -1, "")
  VITEMMACRO(oil_processed, "STR_Item_Oilp", "oilProcessed", 4, -1, 20, false, -1, "")
  VITEMMACRO(mehl, "STR_Item_mehl", "mehl", 1, -1, 4, false, -1, "")
  VITEMMACRO(getreide, "STR_Item_getreide", "getreide", 2, -1, -1, false, -1, "")
  VITEMMACRO(wasser, "STR_Item_wasser", "wasser", 1, -1, -1, false, -1, "")
  VITEMMACRO(fladen, "STR_Item_fladen", "fladen", 2, -1, 11, false, -1, "")

	//Drugs & Illegal Farm
  VITEMMACRO(heroin_unprocessed, "STR_Item_HeroinU", "heroinUnprocessed", 4, -1, -1, true, -1, "")
  VITEMMACRO(heroin_processed, "STR_Item_HeroinP", "heroinProcessed", 3, -1, 25, true, -1, "")
  VITEMMACRO(heroin_refined, "STR_Item_heroinr", "heroinRefined", 3, -1, 30, true, -1, "")
  VITEMMACRO(cannabis, "STR_Item_Cannabis", "cannabis", 3, -1, -1, true, -1, "")
  VITEMMACRO(marijuana, "STR_Item_Marijuana", "marijuana", 2, -1, 20, true, -1, "icons\ico_marijuana.paa")
  VITEMMACRO(marijuana_refined, "STR_Item_Marijuanar", "marijuanaRefined", 2, -1, 25, true, -1, "icons\ico_marijuana.paa")
  VITEMMACRO(goldore, "STR_Item_goldore", "goldore", 10, -1, -1, true, -1, "")
  VITEMMACRO(goldbar, "STR_Item_goldbar", "goldbar", 5, -1, 50, true, -1, "")
  VITEMMACRO(coalp, "STR_Item_coalp", "coalPerfined", 3, 10, -1, true, -1, "")

  // Illegale Items (Transporte etc)
  VITEMMACRO(pistolenlieferung, "STR_Item_pistolenlieferung", "pistolenlieferung", 5, -1, -1, true, -1, "")
  VITEMMACRO(nahrungsmittel, "STR_Item_nahrungsmittel", "nahrungsmittel", 5, -1, -1, false, -1, "")
  VITEMMACRO(munitionslieferung, "STR_Item_munitionslieferung", "munitionslieferung", 5, -1, -1, true, -1, "")
  VITEMMACRO(aklieferung, "STR_Item_aklieferung", "aklieferung", 10, -1, -1, true, -1, "")
  VITEMMACRO(gestohlenevisiere, "STR_Item_gestohlenevisiere", "gestohlenevisiere", 10, -1, -1, true, -1, "")
  VITEMMACRO(uniformen, "STR_Item_uniformen", "uniformen", 10, -1, -1, true, -1, "")
  VITEMMACRO(koran, "STR_Item_koran", "koran", 15, -1, -1, true, -1, "")
  VITEMMACRO(kondome, "STR_Item_kondome", "kondome", 15, -1, -1, true, -1, "")
  VITEMMACRO(sniperkiste, "STR_Item_sniperkiste", "sniperkiste", 15, -1, -1, true, -1, "")


  // Craftig Items
  VITEMMACRO(explosive, "STR_Item_explosive", "explosive", 10, -1, -1, true, -1, "")
  VITEMMACRO(guertel, "STR_Item_guertel", "guertel", 2, 50, -1, false, -1, "")
  VITEMMACRO(antenne, "STR_Item_antenne", "antenne", 2, 50, -1, false, -1, "")
  VITEMMACRO(gehaeuse, "STR_Item_gehaeuse", "gehaeuse", 3, 50, -1, false, -1, "")
  VITEMMACRO(behaelter, "STR_Item_behaelter", "behaelter", 3, 50, -1, false, -1, "")
  VITEMMACRO(battery, "STR_Item_battery", "battery", 1, 50, -1, false, -1, "")
  VITEMMACRO(abhoergeraet, "STR_Item_abhoergeraet", "abhoergeraet", 10, -1, -1, true, -1, "")
  VITEMMACRO(sulfuru, "STR_Item_sulfuru", "sulfuru", 3, -1, -1, true, -1, "")
  VITEMMACRO(sulfurp, "STR_Item_sulfurp", "sulfurp", 3, -1, -1, true, -1, "")
  VITEMMACRO(nitre, "STR_Item_nitre", "nitre", 3, -1, -1, true, -1, "")
  VITEMMACRO(potassiumnitrate, "STR_Item_potassiumnitrate", "potassiumnitrate", 3, -1, -1, true, -1, "")
  VITEMMACRO(nitroglycerin, "STR_Item_nitroglycerin", "nitroglycerin", 6, 200, -1, true, -1, "")
  VITEMMACRO(gunpowder, "STR_Item_gunpowder", "gunpowder", 6, -1, -1, true, -1, "")
  VITEMMACRO(flask, "STR_Item_flask", "flask", 1, 100, -1, false, -1, "")
  VITEMMACRO(altpapier, "STR_Item_altpapier", "altpapier", 2, 50, -1, false, -1, "")
  VITEMMACRO(pipe, "STR_Item_pipe", "pipe", 2, 20, -1, false, -1, "")
  VITEMMACRO(blumenerde, "STR_Item_blumenerde", "blumenerde", 3, 20, -1, false, -1, "")



	//Drink
  VITEMMACRO(cola, "STR_Item_cola", "cola", 1, 2, -1, false, 100, "")
  VITEMMACRO(ziegenmilch, "STR_Item_ziegenmilch", "ziegenmilch", 1, 2, -1, false, 100, "")

	//Food
  VITEMMACRO(fladenbrot, "STR_Item_fladenbrot", "fladenbrot", 1, 3, -1, false, 30, "")
  VITEMMACRO(burger, "STR_Item_burger", "burger", 1, 3, -1, false, 40, "")
  VITEMMACRO(dattel, "STR_Item_dattel", "dattel", 1, 3, -1, false, 40, "")
};


/*
	Licenses

	Params:
	CLASS ENTRY,DisplayName,VariableName,price,illegal,side indicator
*/
class Licenses {
};

class VirtualShops {
	class market {
		name = "STR_Shops_Market";
		items[] = { "ziegenmilch", "dattel", "fladenbrot", "guertel", "pipe", "behaelter", "flask", "bandage", "kochsalz", "morphin", "epikit", "coalp", "mehl" };
	};

	class tankstelle {
		name = "STR_Shops_Tankstelle";
		items[] = { "ziegenmilch", "dattel", "fladenbrot", "fuelF" };
	};

	class bandit {
		name = "STR_Shops_Bandit";
		items[] = { "ziegenmilch", "dattel", "fladenbrot", "bandage", "kochsalz", "morphin", "epikit" };
	};

	class heroin {
		name = "STR_Shops_Heroin";
		items[] = { "marijuana_refined", "marijuana", "heroin_processed", "heroin_refined" };
	};

	class dirtydoc {
		name = "STR_Shops_Dirtydoc";
		items[] = { "bandage", "kochsalz", "morphin", "epikit" };
	};

	class oil {
		name = "STR_Shops_Oil";
		items[] = { "oil_processed" };
	};

	class cop {
		name = "STR_Shops_Cop";
		items[] = { "burger", "cola", "spikeStrip", "fuelF", "strahler", "barrier", "barricade", "lockpick", "bandage", "kochsalz", "morphin", "epikit", "defusekit" };
	};

	class medic {
		name = "STR_Shops_Medic";
		items[] = { "burger", "cola", "fuelFull", "strahler", "barrier", "barricade", "lockpick" };
	};

	class electrostore {
		name = "STR_Shops_Electrostore";
		items[] = { "battery", "gehaeuse", "antenne" };
	};

	class blackstore  {
		name = "STR_Shops_Blackstore";
		items[] = { "lockpick", "blastingcharge", "depotwaffen", "nitroglycerin", "boltcutter" };
	};

	class hehler {
		name = "STR_Shops_Hehler";
		items[] = { "goldbar", "information" };
	};

	class fladen {
		name = "STR_Shops_Fladen";
		items[] = { "fladen" };
	};
};

#include "Config_Vehicles.hpp"