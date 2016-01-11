#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	All survival? things merged into one thread.
*/
private["_fnc_food","_fnc_water","_foodTime","_waterTime","_bp","_walkDis","_lastPos","_curPos"];
_fnc_food =  {
	if(life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";}
	else
	{
		SUB(life_hunger,10);
		[] call life_fnc_hudUpdate;
		if(life_hunger < 2) then {player setDamage 1; hint localize "STR_NOTF_EatMSG_Death";};
		switch(life_hunger) do {
			case 30: {hint localize "STR_NOTF_EatMSG_1";};
			case 20: {hint localize "STR_NOTF_EatMSG_2";};
			case 10: {
				hint localize "STR_NOTF_EatMSG_3";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};

_fnc_water = {
	if(life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";}
	else
	{
		SUB(life_thirst,10);
		[] call life_fnc_hudUpdate;
		if(life_thirst < 2) then {player setDamage 1; hint localize "STR_NOTF_DrinkMSG_Death";};
		switch(life_thirst) do  {
			case 30: {hint localize "STR_NOTF_DrinkMSG_1";};
			case 20: {
				hint localize "STR_NOTF_DrinkMSG_2";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
			case 10: {
				hint localize "STR_NOTF_DrinkMSG_3";
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};

//Setup the time-based variables.
_foodTime = time;
_waterTime = time;
_walkDis = 0;
_bp = "";
_lastPos = visiblePosition player;
_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
_lastState = vehicle player;

 [] spawn
 {
 	private ["_oldpos","_newpos"];
 	_oldpos = getPos player;
 	sleep (60 * 15);
 	_newpos = getPos player;
 	if (_oldpos == _newpos) then { endMission "AFK" };

 };


while {true} do {
	/* Thirst / Hunger adjustment that is time based */
	if((time - _waterTime) > 600) then {[] call _fnc_water; _waterTime = time;};
	if((time - _foodTime) > 850) then {[] call _fnc_food; _foodTime = time;};
	private ["_load"];
    if (backpack player != "") then {
    	_load = 5;
		if (backpack player == "rhs_sidor") then { _load = 10; };
    	if (backpack player == "B_AssaultPack_khk") then { _load = 14; };
   		if (backpack player == "B_FieldPack_khk") then { _load = 18; };// LARGO HIER - 40 ist die zusätzliche Größe, also + 24 Standart = 64
		if (backpack player == "B_TacticalPack_oli") then { _load = 25; };
		if (backpack player == "B_mas_Kitbag_rng") then { _load = 28; };
		if (backpack player == "TRYK_B_Coyotebackpack_OD") then { _load = 33; };
		if (backpack player == "B_Carryall_khk") then { _load = 40; };
		if (backpack player == "B_mas_AssaultPack_rng_AT4") then { _load = 55; };

    //Army Backpacks
		if (backpack player == "B_AssaultPack_cbr") then { _load = 16; };
		if (backpack player == "TRYK_B_AssaultPack_MARPAT_Desert") then { _load = 22; };
		if (backpack player == "B_mas_Kitbag_des") then { _load = 28; };
		if (backpack player == "TRYK_B_Coyotebackpack") then { _load = 35; };
		if (backpack player == "B_mas_Kitbag_black") then { _load = 40; };
		if (backpack player == "B_TacticalPack_blk") then { _load = 40; };
		if (backpack player == "TRYK_B_Medbag_BK") then { _load = 40; };
   		if (backpack player == "B_Carryall_cbr") then { _load = 42; };
   		if (backpack player == "tf_rt1523g") then { _load = 20;};
   		if (backpack player == "tf_rt1523g_big_rhs") then { _load = 35;};

		life_maxWeight = life_maxWeightT + _load;
		};


     	if !(call TFAR_fnc_isTeamSpeakPluginEnabled) then {endMission "NOTFAR";};
	/* Check if the player's state changed? */


	if (life_blood == 1) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.1, 0, 0, 1.0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		"dynamicBlur" ppEffectEnable true; "dynamicBlur" ppEffectAdjust [3]; "dynamicBlur" ppEffectCommit 2; enableCamShake true;
		player SVAR ["unconscious",false,true];
		};
	if (life_blood > 1 && life_blood < 10) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.3, 0, 0, 1.0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		"dynamicBlur" ppEffectEnable true; "dynamicBlur" ppEffectAdjust [1]; "dynamicBlur" ppEffectCommit 2; enableCamShake true;
		};
	if (life_blood > 10 && life_blood < 20) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0], [1, 1, 1, 0], [0.6, 0, 0, 1.0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		"dynamicBlur" ppEffectEnable true; "dynamicBlur" ppEffectAdjust [1]; "dynamicBlur" ppEffectCommit 2; enableCamShake true;
		};
	if (life_blood > 20 && life_blood < 30) then {
		"colorCorrections" ppEffectAdjust [0.6, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		player SVAR ["unconscious",false,true];
		};
	if (life_blood > 30 && life_blood < 40) then {
		"colorCorrections" ppEffectAdjust [0.7, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 40 && life_blood < 50) then {
		"colorCorrections" ppEffectAdjust [0.9, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 50 && life_blood < 60) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.2], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 60 && life_blood < 70) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.4], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 70 && life_blood < 80) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.6], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 80 && life_blood < 90) then {
		"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [1, 1, 1, 0.8], [0.299, 0.587, 0.114, 0]];  "colorCorrections" ppEffectCommit 1;  "colorCorrections" ppEffectEnable TRUE;
		};
	if (life_blood > 90 && life_blood < 100) then {
		"colorCorrections" ppEffectEnable false;
		"dynamicBlur" ppEffectEnable false;
		player SVAR ["unconscious",false,true];
	};
	if (life_blood == 100) then {
		"colorCorrections" ppEffectEnable false;
		"dynamicBlur" ppEffectEnable false;
		player SVAR ["unconscious",false,true];
	};

	if (isNil "life_atmbank") exitWith {endMission "SPYGLASSGELD"};

	if(vehicle player != _lastState OR {!alive player}) then {
		[] call life_fnc_updateViewDistance;
		_lastState = vehicle player;
	};

	/* Check if the weight has changed and the player is carrying to much */
	if(life_carryWeight > life_maxWeight && {!isForcedWalk player}) then {
		player forceWalk true;
		if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
		hint localize "STR_NOTF_MaxWeight";
	} else {
		if(isForcedWalk player) then {
			player forceWalk false;
		};
	};
	if(cameraView == "GROUP") then { vehicle player switchCamera "EXTERNAL";};

	/* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
	if(!alive player) then {_walkDis = 0;} else {
		_curPos = visiblePosition player;
		_curPos = (SEL(_curPos,0)) + (SEL(_curPos,1));
		if(!(EQUAL(_curPos,_lastPos)) && {(vehicle player == player)}) then {
			ADD(_walkDis,1);
			if(EQUAL(_walkDis,650)) then {
				_walkDis = 0;
				SUB(life_thirst,5);
				SUB(life_hunger,5);
				[] call life_fnc_hudUpdate;
			};
		};
		_lastPos = visiblePosition player;
		_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
	};
	uiSleep 1;


};



