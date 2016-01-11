class WeaponShops {
    //Armory Shops
    class tankstellegebraucht {
        name = "Tankstellenshop";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "ToolKit", "", 150 },
            { "ACE_Flashlight_XL50", "", 20 },
            { "ACE_EarPlugs", "", 5 }
        };
    };
    class genstore {
        name = "Synced Gemischtwaren";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "ItemGPS", "", 30 },
            { "ItemMap", "", 20 },
            { "ItemCompass", "", 30 },
            { "ToolKit", "", 100 },
            { "Chemlight_red", "", 20 },
            { "Chemlight_yellow", "", 20 },
            { "ACE_EarPlugs", "", 20 },
            { "ACE_MapTools", "", 15 }
        };
    };
    class med_basic {
        name = "PJ Ausrüstung";
        side = "med";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "ItemGPS", "", 10 },
            { "ItemCompass", "", 10 },
            { "ToolKit", "", 10 },
						{"NVGoggles","",50},
            { "Binocular", "", 10 },
            { "Chemlight_green", "", 10 },
            { "Chemlight_blue", "", 10 },
            { "SmokeShell", "", 10 },
            { "SmokeShellRed", "", 10 },
            { "SmokeShellGreen", "", 10 },
            { "acc_flashlight", "", 10 },
            { "ACE_TacticalLadder_Pack", "", 10 },
            { "ACE_EarPlugs", "", 10 },
            { "ACE_Flashlight_KSF1", "", 10 },
            { "ACE_Flashlight_MX991", "", 10 },
            { "ACE_MapTools", "", 10 }
        };
    };

    //Cop Shops
    class army_equipment {
        name = "Grundausrüstung";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
						{"tf_anprc152","",10},
            {"ItemGPS","",10},
            {"ItemCompass","",10}, 
            {"NVGoggles" ,"",50},
            {"ToolKit","",10},
            {"Binocular","",10},
            {"Chemlight_green","",10},
            {"Chemlight_blue","",10},
            {"SmokeShell","",10},
            {"SmokeShellRed","",10},
            {"SmokeShellGreen","",10},
            {"acc_flashlight","",10},
						{"ACE_CableTie","",10},
						{"ACE_SpareBarrel","",10},
						{"ACE_Altimeter","",10},
						{"ACE_TacticalLadder_Pack","",10},
						{"ACE_EarPlugs","",10},
						{"ACE_DefusalKit","",10},
						{"ACE_Flashlight_KSF1","",10},
						{"ACE_Flashlight_MX991","",10},
						{"ACE_MapTools","",10}
        };
    };
    class coplevel1 {
        name = "Recruit Waffenspind";
        side = "cop";
        license = "";
        level = 1;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"arifle_mas_m16","",200},

                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"FHQ_optic_MicroCCO_tan","",50}
        };
    };
    class coplevel2 {
        name = "Private Waffenspind";
        side = "cop";
        license = "";
        level = 2;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},

                        {"30Rnd_mas_556x45_Stanag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                          
												{"NONE","Equipment",0},
                        {"NVGoggles","",10}
        };
    };

   class coplevel3 {
        name = "Private 1st Waffenspind";
        side = "cop";
        license = "";
        level = 3;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},

                        {"30Rnd_mas_556x45_Stanag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                          
												{"NONE","Equipment",0},
                        {"NVGoggles","",50}
        };
    };

   class coplevel4 {
        name = "Specialist Waffenspind";
        side = "cop";
        license = "";
        level = 4;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                          
												{"NONE","Equipment",0},
                        {"MiniGrenade","",50},
                        {"NVGoggles","",50}
        };
    };


   class coplevel5 {
        name = "Corporal Waffenspind";
        side = "cop";
        license = "";
        level = 5;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},

                        {"NONE","Equipment",0},  
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"NVGoggles","",50}
        };
    };

     class coplevel6 {
        name = "Sergeant Waffenspind";
        side = "cop";
        license = "";
        level = 6;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",10},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_SOS","",50},
                          
												{"NONE","Equipment",0}, 
                        {"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"NVGoggles","",50}
        };
    };
	
	     class coplevel7 {
        name = "Staff Sergeant Waffenspind";
        side = "cop";
        license = "";
        level = 7;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",10},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_SOS","",50},

                        {"NONE","Equipment",0},   
                        {"ACE_RangeCard","",50},                              
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"ACE_Vector","",50},
                        {"NVGoggles","",50}
        };
    };
	
	     class coplevel8 {
        name = "Sergeant First Class Waffenspind";
        side = "cop";
        license = "";
        level = 8;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",10},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},

                        {"NONE","Equipment",0},  
												{"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"NVGoggles","",50},
												{"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };

		class coplevel9 {
        name = "Master Sergeant Waffenspind";
        side = "cop";
        license = "";
        level = 9;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",10},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
                        {"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},

                        {"NONE","Equipment",0},  
												{"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50},                        
                        {"NVGoggles","",50},
												{"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };

		class coplevel10 {
        name = "Sergeant Major Waffenspind";
        side = "cop";
        license = "";
        level = 10;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",10},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},

                        {"NONE","Equipment",0},   
                        {"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
                        {"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
												{"ACE_Kestrel4500","",50},
												{"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };

	
		class coplevel11 {
        name = "Command Sgt Major Waffenspind";
        side = "cop";
        license = "";
        level = 11;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",10},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},
                          
												{"NONE","Equipment",0},  
                        {"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
												{"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
												{"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };
	
		class coplevel12 {
        name = "Second Lieutenant Waffenspind";
        side = "cop";
        license = "";
        level = 12;
        msg = "Du bist hier falsch!";
        items[] = {
                        {"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",200},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"srifle_mas_ebr","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},
    
                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},

                        {"NONE","Equipment",0},  
												{"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
												{"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
												{"ACE_Kestrel4500","",50},
												{"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };
	
	class coplevel13 {
        name = "First Lieutenant Waffenspind";
        side = "cop";
        license = "";
        level = 13;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",200},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"srifle_mas_ebr","",200},
                        {"srifle_mas_m110","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},
                        {"optic_LRPS","",50},

                        {"NONE","Equipment",0},   
												{"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
												{"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
												{"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };
	
		class coplevel14 {
        name = "Captain Waffenspind";
        side = "cop";
        license = "";
        level = 14;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",200},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"srifle_mas_ebr","",200},
                        {"srifle_mas_m110","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_XM2010_d","",200},
                        {"rhsusf_5Rnd_300winmag_xm2010","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"optic_AMS_snd","",50},
												{"rhsusf_acc_ACOG3","",50},
												{"rhsusf_acc_LEUPOLDMK4_2","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},
                        {"optic_LRPS","",50},
                          
												{"NONE","Equipment",0},
												{"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
												{"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
												{"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };
	
		class coplevel15 {
        name = "Major Waffenspind";
        side = "cop";
        license = "";
        level = 15;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",200},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"srifle_mas_ebr","",200},
                        {"srifle_mas_m110","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_XM2010_d","",200},
                        {"rhsusf_5Rnd_300winmag_xm2010","",10},

                        {"srifle_mas_lrr","",200},
                        {"10Rnd_mas_338_Stanag","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
                        {"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"rhsusf_acc_ACOG3","",50},
												{"rhsusf_acc_LEUPOLDMK4_2","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},
                        {"optic_LRPS","",50},
                          
												{"NONE","Equipment",0},
                        {"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
												{"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
                        {"ACE_Kestrel4500","",50},
												{"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };
	
		class coplevel16 {
        name = "Colonel Waffenspind";
        side = "cop";
        license = "";
        level = 16;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",200},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"srifle_mas_ebr","",200},
                        {"srifle_mas_m110","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_XM2010_d","",200},
                        {"rhsusf_5Rnd_300winmag_xm2010","",10},

                        {"srifle_mas_lrr","",200},
                        {"10Rnd_mas_338_Stanag","",10},

                        {"MMG_02_sand_F","",200},
                        {"130Rnd_338_Mag","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
												{"rhsusf_acc_ACOG3","",50},
												{"rhsusf_acc_LEUPOLDMK4_2","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},
                        {"optic_LRPS","",50},
                          
												{"NONE","Equipment",0},
                        {"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
                        {"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
												{"ACE_Banana","",100},
												{"ACE_Kestrel4500","",50},
												{"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };

		class coplevel17 {
        name = "General Waffenspind";
        side = "cop";
        license = "";
        level = 17;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",200},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"srifle_mas_ebr","",200},
                        {"srifle_mas_m110","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_XM2010_d","",200},
                        {"rhsusf_5Rnd_300winmag_xm2010","",10},

                        {"srifle_mas_lrr","",200},
                        {"10Rnd_mas_338_Stanag","",10},

                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},

                        {"srifle_LRR_camo_F","",200},
                        {"7Rnd_408_Mag","",10},

                        {"MMG_02_sand_F","",200},
                        {"130Rnd_338_Mag","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
												{"rhsusf_acc_ACOG3","",50},
												{"rhsusf_acc_LEUPOLDMK4_2","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},
                        {"optic_LRPS","",50},
                          
												{"NONE","Equipment",0},
												{"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
												{"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
                        {"ACE_ATragMX","",50},
                        {"ACE_Banana","",100},
												{"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
												{"ACE_HuntIR_M203","",50}
        };
    };
	
	class coplevel18 {
        name = "Commander in Chief Waffenspind";
        side = "cop";
        license = "";
        level = 18;
        msg = "Du bist hier falsch!";
        items[] = {
          							{"NONE","Waffen",0},
                        {"arifle_mas_m16","",200},
                        {"arifle_mas_m4c","",200},
                        {"arifle_mas_m4","",200},
                        {"arifle_mas_g36c","",200},
                        {"arifle_mas_m4_m203_d","",200},
                        {"arifle_mas_mk16_l_gl","",200},
                        {"30Rnd_mas_556x45_Stanag","",10},

                        {"LMG_mas_M249_F","",200},
                        {"200Rnd_mas_556x45_Stanag","",200},

                        {"hlc_rifle_SAMR","",200},
                        {"30Rnd_556x45_Stanag","",10},

                        {"arifle_mas_g3","",200},
                        {"arifle_mas_g3_m203","",200},
                        {"arifle_mas_mk17","",200},
                        {"arifle_mas_mk17_gl","",200},
                        {"srifle_mas_sr25_d","",200},
                        {"arifle_mas_hk417c_d","",200},
                        {"srifle_mas_hk417_d","",200},
                        {"srifle_mas_ebr","",200},
                        {"srifle_mas_m110","",200},
                        {"20Rnd_mas_762x51_Stanag","",10},

                        {"LMG_mas_mk48_F_d","",200},
                        {"100Rnd_mas_762x51_Stanag","",10},

                        {"srifle_mas_m24_d","",200},
                        {"5Rnd_mas_762x51_Stanag","",10},

                        {"rhs_weap_XM2010_d","",200},
                        {"rhsusf_5Rnd_300winmag_xm2010","",10},

                        {"srifle_mas_lrr","",200},
                        {"10Rnd_mas_338_Stanag","",10},

                        {"srifle_DMR_05_tan_f","",200},
                        {"10Rnd_93x64_DMR_05_Mag","",10},

                        {"srifle_LRR_camo_F","",200},
                        {"7Rnd_408_Mag","",10},

                        {"srifle_DMR_04_Tan_F","",200},
                        {"10Rnd_127x54_Mag","",10},

                        {"MMG_02_sand_F","",200},
                        {"130Rnd_338_Mag","",10},

                        {"rhs_weap_M136_hedp","",200},
                        {"rhs_m136_hedp_mag","",10},

                        {"hgun_mas_bhp_F","",200},
                        {"15Rnd_mas_9x21_Mag","",10},
                          
												{"NONE","Aufsätze",0},
                        {"FHQ_optic_MicroCCO_tan","",50},
                        {"FHQ_optic_AIM_tan","",50},
                        {"FHQ_optic_AimM_TAN","",50},
                        {"FHQ_optic_HWS_tan","",50},
                        {"FHQ_optic_ACOG","", 50},
                        {"FHQ_optic_HWS_G33_tan","",50},
                        {"FHQ_optic_ACOG_tan","",50},
                        {"rhsusf_acc_ACOG3","",50},
												{"rhsusf_acc_LEUPOLDMK4_2","",50},
                        {"optic_AMS_snd","",50},
                        {"optic_SOS","",50},
                        {"FHQ_optic_LeupoldERT_tan","",50},
                        {"optic_LRPS","",50},
                          
												{"NONE","Equipment",0},
												{"ACE_RangeCard","",50},
                        {"MiniGrenade","",50},
                        {"1Rnd_HE_Grenade_shell","",50},
                        {"HandGrenade","",50},
                        {"rhs_mag_mk84","",50},
                        {"bipod_01_F_snd","",50},
                        {"ACE_Vector","",50},
                        {"Rangefinder","",50}, 
                        {"ACE_Yardage450","",50},
                        {"NVGoggles","",50},
												{"ACE_ATragMX","",50},
												{"ACE_Banana","",100},
												{"ACE_Kestrel4500","",50},
                        {"ACE_HuntIR_monitor","",50},
              					{"ACE_HuntIR_M203","",50}
        };
    };
	
	      class weapon3 {
        name = "Level3 Shop";
        side = "civ";
        license = "";
        level = ;
        msg = "Du hast noch nicht das richtige Level";
        items[] = {
           {"NONE","Waffen",0},
		   {"hgun_mas_mak_F","",300},
           {"8Rnd_mas_9x18_Mag","",20},
             
           {"NONE","Equipment",0},
           {"Binocular","",200},  
           {"ACE_EarPlugs","",25},
           {"ItemGPS","",35}
        };
    };
  
  class weapon4 {
        name = "Level4 Shop";
        side = "civ";
        license = "";
        level = 4;
        msg = "Du hast noch nicht das richtige Level";
        items[] = {
             {"NONE","Waffen",0},
			 {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
               
             {"NONE","Equipment",0},
             {"Binocular","",200},  
             {"ACE_EarPlugs","",25},
             {"ItemGPS","",35} 
        };
    };
  
    class weapon5 {
        name = "Level5 Shop";
        side = "civ";
        license = "";
        level = 5;
        msg = "Du hast noch nicht das richtige Level";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
               
             {"NONE","Equipment",0},
             {"Binocular","",200},
             {"rhsusf_ANPVS_14" ,"",400},
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}   
        };
    };
  
    class weapon6 {
        name = "Level6/7 Shop";                                // und 7
        side = "civ";
        license = "";
        level = 6;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"30Rnd_mas_545x39_mag","",55},
               
             {"NONE","Equipment",0},
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200}, 
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}    
        };
    };  
  
      class weapon8 {
        name = "Level8/9 Shop";                  // und 9
        side = "civ";
        license = "";
        level = 8;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
			{"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"30Rnd_mas_545x39_mag","",55},
               
             {"NONE","Equipment",0},
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
        class weapon10 {
        name = "Level10/11 Shop";                   // und 11
        side = "civ";
        license = "";
        level = 10;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
			 {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"30Rnd_mas_545x39_mag","",55},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Equipment",0},
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon12 {
        name = "Level12 Shop";                   
        side = "civ";
        license = "";
        level = 12;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
			 {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},  
             {"30Rnd_mas_545x39_mag","",55},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon13 {
        name = "Level13 Shop";                   
        side = "civ";
        license = "";
        level = 13;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},  
             {"30Rnd_mas_545x39_mag","",55},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };
  
        class weapon14 {
        name = "Level14 Shop";                   
        side = "civ";
        license = "";
        level = 14;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},  
             {"30Rnd_mas_545x39_mag","",55},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon15 {
        name = "Level15/16 Shop";                                 // und 16
        side = "civ";
        license = "";
        level = 15;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},  
             {"30Rnd_mas_545x39_mag","",55},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon17 {
        name = "Level17 Shop";                                
        side = "civ";
        license = "";
        level = 17;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},  
             {"30Rnd_mas_545x39_mag","",55},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon18 {
        name = "Level18 Shop";                                
        side = "civ";
        license = "";
        level = 18;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},  
             {"30Rnd_mas_545x39_mag","",55},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
        class weapon19 {
        name = "Level19 Shop";                                
        side = "civ";
        license = "";
        level = 19;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
			 {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},  
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},  
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };   
  
        class weapon20 {
        name = "Level20 Shop";                                
        side = "civ";
        license = "";
        level = 20;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},  
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},  
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon21 {
        name = "Level21 Shop";                                
        side = "civ";
        license = "";
        level = 21;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},  
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},  
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},  
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon22 {
        name = "Level22 Shop";                                
        side = "civ";
        license = "";
        level = 22;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},  
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},  
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},  
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon23 {
        name = "Level23 Shop";                                
        side = "civ";
        license = "";
        level = 23;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},  
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},  
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},  
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
        class weapon24 {
        name = "Level24 Shop";                                
        side = "civ";
        license = "";
        level = 24;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},  
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},  
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},  
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
        class weapon25 {
        name = "Level25 Shop";                                
        side = "civ";
        license = "";
        level = 25;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},  
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},  
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},  
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150}, 
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},  
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},  
               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };  
  
  class weapon26 {
        name = "Level26 Shop";                                
        side = "civ";
        license = "";
        level = 26;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon27 {
        name = "Level27 Shop";                                
        side = "civ";
        license = "";
        level = 27;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},


               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ItemGPS","",35}  
        };
    }; 
  
  class weapon28 {
        name = "Level28 Shop";                              
        side = "civ";
        license = "";
        level = 28;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon29 {
        name = "Level29 Shop";                               
        side = "civ";
        license = "";
        level = 29;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon30 {
        name = "Level30 Shop";                               
        side = "civ";
        license = "";
        level = 30;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"10Rnd_mas_762x54_mag","",300},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon31 {
        name = "Level31 Shop";                               
        side = "civ";
        license = "";
        level = 31;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon32 {
        name = "Level32 Shop";                               
        side = "civ";
        license = "";
        level = 32;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon33 {
        name = "Level33 Shop";                               
        side = "civ";
        license = "";
        level = 33;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
             {"arifle_mas_akm","",5500},
             {"30Rnd_mas_762x39_mag","",250},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
    class weapon34 {                                           
        name = "Level34 Shop";                               
        side = "civ";
        license = "";
        level = 34;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"srifle_mas_m91","",4750},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
             {"arifle_mas_akm","",5500},
             {"30Rnd_mas_762x39_mag","",250},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon35 {                                           
        name = "Level35 Shop";                               
        side = "civ";
        license = "";
        level = 35;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"srifle_mas_m91","",4750},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
             {"arifle_mas_akm","",5500},
             {"30Rnd_mas_762x39_mag","",250},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},  
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon36 {                                           
        name = "Level36 Shop";                               
        side = "civ";
        license = "";
        level = 36;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"srifle_mas_m91","",4750},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
             {"arifle_mas_akm","",5500},
             {"arifle_mas_akm_gl","",6500},
             {"30Rnd_mas_762x39_mag","",250},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon37 {                                           
        name = "Level37 Shop";                               
        side = "civ";
        license = "";
        level = 37;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"srifle_mas_m91","",4750},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
             {"arifle_mas_akm","",5500},
             {"arifle_mas_akm_gl","",6500},
             {"30Rnd_mas_762x39_mag","",250},
             {"LMG_mas_pkm_F","",7250},
             {"100Rnd_mas_762x54_mag","",550},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon38 {                                           
        name = "Level38 Shop";                               
        side = "civ";
        license = "";
        level = 38;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"srifle_mas_m91","",4750},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
             {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
             {"arifle_mas_akm","",5500},
             {"arifle_mas_akm_gl","",6500},
             {"30Rnd_mas_762x39_mag","",250},
             {"LMG_mas_pkm_F","",7250},
             {"100Rnd_mas_762x54_mag","",550},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon39 {                                           
        name = "Level39 Shop";                               
        side = "civ";
        license = "";
        level = 39;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					   {"hgun_mas_mak_F","",300},
             {"8Rnd_mas_9x18_Mag","",20},
             {"hgun_mas_acp_F","",350},
             {"12Rnd_mas_45acp_Mag","",20},
             {"hgun_mas_sa61_F","",425},
             {"20Rnd_mas_765x17_Mag","",30},
             {"arifle_mas_aks74u","",1100},
             {"arifle_mas_ak74","",1350},
             {"arifle_mas_aks_74_sf","",1250},
             {"arifle_mas_ak_74m","",1400},
             {"arifle_mas_ak_74m_sf","",1500},
             {"arifle_mas_ak_74m_gl","",1800},
             {"arifle_mas_ak_74m_sf_gl","",1950},
             {"30Rnd_mas_545x39_mag","",55},
             {"1Rnd_HE_Grenade_shell","",450},
             {"arifle_mas_lee","",1850},
             {"5Rnd_mas_762x51_Stanag","",75},
             {"LMG_mas_rpk_F","",2250},
             {"100Rnd_mas_545x39_mag","",300},
             {"srifle_DMR_01_F","",2750},
             {"10Rnd_762x54_Mag","",250},
             {"arifle_mas_fal_m203","",3250},
             {"20Rnd_mas_762x51_Stanag","",300},
             {"rhs_weap_svdp","",3750},
             {"rhs_10Rnd_762x54mmR_7N1","",300},
             {"srifle_mas_svd","",4250},
             {"srifle_mas_m91","",4750},
             {"10Rnd_mas_762x54_mag","",300},
             {"rhs_weap_rpg7","",7500},
             {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
             {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
             {"arifle_mas_akm","",5500},
             {"arifle_mas_akm_gl","",6500},
             {"arifle_mas_m70_gl","",7250},
             {"30Rnd_mas_762x39_mag","",250},
             {"LMG_mas_pkm_F","",7250},
             {"100Rnd_mas_762x54_mag","",550},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700}, 
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon40 {                                           
        name = "Level40 Shop";                               
        side = "civ";
        license = "";
        level = 40;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon41 {                                           
        name = "Level41 Shop";                               
        side = "civ";
        license = "";
        level = 41;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon42 {                                           
        name = "Level42 Shop";                               
        side = "civ";
        license = "";
        level = 42;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon43 {                                           
        name = "Level43 Shop";                               
        side = "civ";
        license = "";
        level = 43;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon44 {                                           
        name = "Level44 Shop";                               
        side = "civ";
        license = "";
        level = 44;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"muzzle_mas_snds_SVD","",2250},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  
  class weapon45 {                                           
        name = "Level45 Shop";                               
        side = "civ";
        license = "";
        level = 45;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
            {"srifle_mas_ksvk","",8750},
            {"5Rnd_mas_127x108_T_mag","",850},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"muzzle_mas_snds_SVD","",2250},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  
  class weapon46 {                                           
        name = "Level46 Shop";                               
        side = "civ";
        license = "";
        level = 46;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
            {"srifle_mas_ksvk","",8750},
            {"5Rnd_mas_127x108_T_mag","",850},
            {"srifle_DMR_04_Tan_F","",8500},
            {"10Rnd_127x54_Mag","",700},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"muzzle_mas_snds_SVD","",2250},
             {"optic_ACO_grn_smg","",400},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon47 {                                           
        name = "Level47 Shop";                               
        side = "civ";
        license = "";
        level = 47;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
            {"srifle_mas_ksvk","",8750},
            {"5Rnd_mas_127x108_T_mag","",850},
            {"5Rnd_mas_127x108_mag","",950},
            {"srifle_DMR_04_Tan_F","",8500},
            {"10Rnd_127x54_Mag","",700},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"muzzle_mas_snds_SVD","",2250},
             {"optic_ACO_grn_smg","",400},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  
  class weapon48 {                                           
        name = "Level48 Shop";                               
        side = "civ";
        license = "";
        level = 48;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
            {"srifle_mas_ksvk","",8750},
            {"5Rnd_mas_127x108_T_mag","",850},
            {"5Rnd_mas_127x108_mag","",950},
            {"srifle_DMR_04_Tan_F","",8500},
            {"10Rnd_127x54_Mag","",700},
            {"LMG_mas_mg3_F","",8750},
            {"150Rnd_762x51_Box","",1000},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"muzzle_mas_snds_SVD","",2250},
             {"optic_ACO_grn_smg","",400},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
   class weapon49 {                                           
        name = "Level49 Shop";                               
        side = "civ";
        license = "";
        level = 49;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
            {"srifle_mas_ksvk","",8750},
            {"5Rnd_mas_127x108_T_mag","",850},
            {"5Rnd_mas_127x108_mag","",950},
            {"5Rnd_mas_127x108_dem_mag","",2000},
            {"srifle_DMR_04_Tan_F","",8500},
            {"10Rnd_127x54_Mag","",700},
            {"LMG_mas_mg3_F","",8750},
            {"150Rnd_762x51_Box","",1000},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"muzzle_mas_snds_SVD","",2250},
             {"optic_ACO_grn_smg","",400},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
  
  class weapon50 {                                           
        name = "Level50 Shop";                               
        side = "civ";
        license = "";
        level = 50;
        msg = "";
        items[] = {
             {"NONE","Waffen",0},
					  {"hgun_mas_mak_F","",300},
            {"8Rnd_mas_9x18_Mag","",20},
            {"hgun_mas_acp_F","",350},
            {"12Rnd_mas_45acp_Mag","",20},
            {"hgun_mas_sa61_F","",425},
            {"20Rnd_mas_765x17_Mag","",30},
            {"arifle_mas_aks74u","",1100},
            {"arifle_mas_ak74","",1350},
            {"arifle_mas_aks_74_sf","",1250},
            {"arifle_mas_ak_74m","",1400},
            {"arifle_mas_ak_74m_sf","",1500},
            {"arifle_mas_ak_74m_gl","",1800},
            {"arifle_mas_ak_74m_sf_gl","",1950},
            {"30Rnd_mas_545x39_mag","",55},
            {"1Rnd_HE_Grenade_shell","",450},
            {"arifle_mas_lee","",1850},
            {"5Rnd_mas_762x51_Stanag","",75},
            {"LMG_mas_rpk_F","",2250},
            {"100Rnd_mas_545x39_mag","",300},
            {"srifle_DMR_01_F","",2750},
            {"10Rnd_762x54_Mag","",250},
            {"arifle_mas_fal_m203","",3250},
            {"20Rnd_mas_762x51_Stanag","",300},
            {"rhs_weap_svdp","",3750},
            {"rhs_10Rnd_762x54mmR_7N1","",300},
            {"srifle_mas_svd","",4250},
            {"srifle_mas_m91","",4750},
            {"10Rnd_mas_762x54_mag","",300},
            {"rhs_weap_rpg7","",7500},
            {"rhs_rpg7_PG7VL_mag","Anti-Fahrzeug Munition I",1250},
            {"rhs_rpg7_OG7V_mag","Anti-Personen Munition I",2500},
            {"rhs_rpg7_PG7VR_mag","Anti-Fahrzeug Munition II",3000},
            {"rhs_rpg7_TBG7V_mag","Anti-Personen NUKE",4000},
            {"arifle_mas_akm","",5500},
            {"arifle_mas_akm_gl","",6500},
            {"arifle_mas_m70_gl","",7250},
            {"30Rnd_mas_762x39_mag","",250},
            {"LMG_mas_pkm_F","",7250},
            {"100Rnd_mas_762x54_mag","",550},
            {"srifle_DMR_06_olive_F","",7250},
            {"20Rnd_762x51_Mag","",350},
            {"LMG_mas_m72_F","",8500},
            {"100Rnd_mas_762x39_mag","",600},
            {"srifle_mas_ksvk","",8750},
            {"5Rnd_mas_127x108_T_mag","",850},
            {"5Rnd_mas_127x108_mag","",950},
            {"5Rnd_mas_127x108_dem_mag","",2000},
            {"srifle_DMR_04_Tan_F","",8500},
            {"10Rnd_127x54_Mag","",700},
            {"LMG_mas_mg3_F","",8750},
            {"150Rnd_762x51_Box","",1000},
               
             {"NONE","Aufsätze",0},
             {"optic_ACO_grn","",150},
             {"FHQ_optic_AC12136","",200},
             {"optic_mas_acog","",300},
             {"optic_mas_PSO_day","",400},
             {"optic_mas_PSO_eo","",500},
             {"rhs_acc_pso1m2","",600},
             {"optic_mas_PSO_nv_day","",850},
             {"optic_mas_PSO_nv","",1250},
             {"optic_KHS_old","",1750},
             {"ACE_optic_LRPS_PIP","",2250},
             {"muzzle_mas_snds_SVD","",2250},
             {"optic_ACO_grn_smg","",400},
               
             {"NONE","Aufstellbare Geschütze",0},  
             {"I_mas_DShkM_h_Gun_Bag","",400},
             {"I_mas_Kord_h_Gun_Bag","",350},
             {"I_mas_M2_h_Gun_Bag","",500},
             {"I_mas_Tripod_h_Bag","",300},
             {"I_mas_DShkM_Gun_Bag","",400},
             {"I_mas_Kord_Gun_Bag","",500},
             {"I_mas_M2_Gun_Bag","",700},
             {"I_mas_SPG9_Gun_Bag","",900},
             {"I_mas_Tripod_Bag","",300},

               
             {"NONE","Equipment",0},
             {"ACE_DeadManSwitch","",500},
             {"ACE_Cellphone","",300}, 
             {"ACE_Clacker","",1000},
             {"ACE_M26_Clacker","",2000},
             {"rhsusf_ANPVS_14","",400},
             {"rhsusf_ANPVS_15","",650},  
             {"Binocular","",200},
             {"Rangefinder","",2000},
             {"tf_anprc148jem","",200},
             {"ACE_CableTie","",20},  
             {"ACE_EarPlugs","",25},
             {"ACE_Flashlight_XL50","",40},
             {"ACE_RangeCard","",300},
             {"rhs_mag_zarya2","",200},
             {"ItemGPS","",35}  
        };
    };
};