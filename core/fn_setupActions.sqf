#include <macro.h>
/*
	File: fn_setupActions.sqf

	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\bandage.paa'/> <t color ='#F5A9A9'>Selbst-Bandagieren",life_fnc_bandage,"",0,false,false,"",'(life_blood < 100) && speed player < 5 && (life_bloodmulti > 0) && !(life_ishealing) && (life_inv_bandage > 0)  && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\bandage.paa'/> <t color ='#A9F5BC'>Kamerad bandagieren",life_fnc_bandagemate,"",0,false,false,"",'!isNull cursorTarget && (cursorTarget getVariable ["blood",100] < 100) && (cursorTarget getVariable ["bloodmulti",0] > 0) && speed cursorTarget < 2 && speed player < 5 && !(life_ishealing) && (life_inv_bandage > 0) && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\kochsalz.paa'/> <t color ='#A9F5BC'>Kochsalz verabreichen",life_fnc_kochsalzmate,"",0,false,false,"",'!isNull cursorTarget && (cursorTarget getVariable ["blood",100] < 100)  && speed cursorTarget < 2 && speed player < 5 && !(life_ishealing) && (life_inv_kochsalz > 0) && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\morphin.paa'/> <t color ='#A9F5BC'>Morphin benutzen",life_fnc_morphin,"",0,false,false,"",'(((damage player > 0) OR (life_blood < 100)) && speed player < 5 && !(life_ishealing) && !(life_morphin_cd)) && (life_inv_morphin > 0) && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\epi.paa'/> <t color ='#FE2E2E'>Epinephrin-Kit benutzen",life_fnc_epimate,"",0,false,false,"",'!isNull cursorTarget  && (cursorTarget getVariable ["unconscious",false]) && speed cursorTarget < 2 && speed player < 5 && (life_inv_epikit > 0) && !(life_ishealing)']];
		life_actions = life_actions + [player addAction["Fahrzeug reparieren",life_fnc_repairTruck,"",0,false,false,"",'(damage cursorTarget == 0) && ((cursorTarget getHit "wheel_1_1_steering" != 0) OR (cursorTarget getHit "wheel_1_2_steering" != 0) OR (cursorTarget getHit "wheel_2_1_steering" != 0) OR (cursorTarget getHit "wheel_2_2_steering" != 0)) && !isNull cursorTarget && cursorTarget isKindOf "LandVehicle" && speed cursorTarget < 2 && speed player < 5 && ("ToolKit" in items player)']];
		life_actions = life_actions + [player addAction["Fahrzeug flippen",life_fnc_flipaction,"",0,false,false,"",'!isNull cursorTarget  && cursortarget isKindOf "Landvehicle"  && speed cursorTarget < 2 && speed player < 5 && (vectorUp cursorTarget select 2 < 0)']];
		life_actions = life_actions + [player addAction["Aktiviere Bombe",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "V_HarnessOGL_brn" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']];



		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && ((animationState cursorTarget == "Incapacitated") OR (animationState cursorTarget == "amovpercmstpsnonwnondnon_amovpercmstpssurwnondnon")) && !(cursorTarget GVAR["robbed",FALSE]) ']];
	};

		case independent:
	{
	life_actions = life_actions + [player addAction["<img size= '1' image='icons\bandage.paa'/> <t color ='#A9F5BC'>Patient bandagieren",life_fnc_medicbandage,"",0,false,false,"",'!isNull cursorTarget && (cursorTarget getVariable ["blood",100] < 100) && (cursorTarget getVariable ["bloodmulti",0] > 0) && speed cursorTarget < 2 && speed player < 5 && !(life_ishealing) && !(player getVariable ["unconscious",false])']];
	life_actions = life_actions + [player addAction["<img size= '1' image='icons\kochsalz.paa'/> <t color ='#A9F5BC'>Transfusion verabreichen",life_fnc_medictrans,"",0,false,false,"",'!isNull cursorTarget && (cursorTarget getVariable ["blood",100] < 100)  && speed cursorTarget < 2 && speed player < 5 && !(life_ishealing) && !(player getVariable ["unconscious",false])']];
	life_actions = life_actions + [player addAction["<img size= '1' image='icons\morphin.paa'/> <t color ='#A9F5BC'>Surgical-Kit benutzen",life_fnc_medicsurgical,"",0,false,false,"",'(damage cursorTarget >= 0.45) && speed player < 5 && !(life_ishealing) && !(player getVariable ["unconscious",false])']];
	life_actions = life_actions + [player addAction["<img size= '1' image='icons\epi.paa'/> <t color ='#FE2E2E'>Herz-Lungen-Massage",life_fnc_medichlw,"",0,false,false,"",'!isNull cursorTarget  && (cursorTarget getVariable ["unconscious",false]) && speed cursorTarget < 2 && speed player < 5 && !(life_ishealing)']];
	};

	case west: {
	life_actions = life_actions + [player addAction["<img size= '1' image='icons\bandage.paa'/> <t color ='#F5A9A9'>Selbst-Bandagieren",life_fnc_bandage,"",0,false,false,"",'(life_blood < 100) && speed player < 5 && (life_bloodmulti > 0) && !(life_ishealing) && (life_inv_bandage > 0)  && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\bandage.paa'/> <t color ='#A9F5BC'>Kamerad bandagieren",life_fnc_bandagemate,"",0,false,false,"",'!isNull cursorTarget && (cursorTarget getVariable ["blood",100] < 100) && (cursorTarget getVariable ["bloodmulti",0] > 0) && speed cursorTarget < 2 && speed player < 5 && !(life_ishealing) && (life_inv_bandage > 0) && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\kochsalz.paa'/> <t color ='#A9F5BC'>Kochsalz verabreichen",life_fnc_kochsalzmate,"",0,false,false,"",'!isNull cursorTarget && (cursorTarget getVariable ["blood",100] < 100)  && speed cursorTarget < 2 && speed player < 5 && !(life_ishealing) && (life_inv_kochsalz > 0) && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\morphin.paa'/> <t color ='#A9F5BC'>Morphin benutzen",life_fnc_morphin,"",0,false,false,"",'(((damage player > 0) OR (life_blood < 100)) && speed player < 5 && !(life_ishealing) && !(life_morphin_cd)) && (life_inv_morphin > 0) && !(player getVariable ["unconscious",false])']];
		life_actions = life_actions + [player addAction["<img size= '1' image='icons\epi.paa'/> <t color ='#FE2E2E'>Epinephrin-Kit benutzen",life_fnc_epimate,"",0,false,false,"",'!isNull cursorTarget  && (cursorTarget getVariable ["unconscious",false]) && speed cursorTarget < 2 && speed player < 5 && (life_inv_epikit > 0) && !(life_ishealing)']];
		life_actions = life_actions + [player addAction["Fahrzeug reparieren",life_fnc_repairTruck,"",0,false,false,"",'(damage cursorTarget == 0) && ((cursorTarget getHit "wheel_1_1_steering" != 0) OR (cursorTarget getHit "wheel_1_2_steering" != 0) OR (cursorTarget getHit "wheel_2_1_steering" != 0) OR (cursorTarget getHit "wheel_2_2_steering" != 0)) && !isNull cursorTarget && cursorTarget isKindOf "LandVehicle" && speed cursorTarget < 2 && speed player < 5 && ("ToolKit" in items player)']];
		life_actions = life_actions + [player addAction["Objekte Beschlagnahmen",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'count(nearestObjects [player,["CamoNet_OPFOR_F","Land_Razorwire_F","Land_PortableLight_double_F","TapeSign_F","RoadBarrier_small_F","WeaponHolderSimulated","weaponholder","GroundWeaponHolder","Land_BottlePlastic_V1_F","Land_TacticalBacon_F","Land_Can_V3_F","Land_CanisterFuel_F", "Land_Can_V3_F","Land_Money_F","Land_Suitcase_F"],3])>0']];

		life_actions = life_actions + [player addAction["Fahrzeug impounden",life_fnc_impoundAction,"",0,false,false,"",'!isNull cursorTarget && (cursorTarget isKindOf "Air" OR cursorTarget isKindOf "LandVehicle") && speed cursorTarget < 2 && speed player < 5']];
		life_actions = life_actions + [player addAction["Fahrzeug flippen",life_fnc_flipaction,"",0,false,false,"",'!isNull cursorTarget  && cursortarget isKindOf "Landvehicle"  && speed cursorTarget < 2 && speed player < 5 && (vectorUp cursorTarget select 2 < 0)']];
		life_actions = life_actions + [player addAction["Fahrzeug durchsuchen",life_fnc_vehInvSearch,"",0,false,false,"",'!isNull cursorTarget  && cursortarget isKindOf "Landvehicle"  && speed cursorTarget < 2 && speed player < 5 && (vectorUp cursorTarget select 2 < 0)']];
		life_actions = life_actions + [player addAction["Person durchsuchen",life_fnc_searchAction,"",0,false,false,"",'!isNull cursorTarget  && cursortarget isKindOf "Man"  && speed cursorTarget < 2 && speed player < 5 && (vectorUp cursorTarget select 2 < 0)']];


	};

};
