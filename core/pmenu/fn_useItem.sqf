#include <macro.h>
/*
	File: fn_useItem.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Main function for item effects and functionality through the player menu.
*/
private "_item";
disableSerialization;
if(EQUAL(lbCurSel 2005,-1)) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_item = CONTROL_DATA(2005);

switch (true) do {
	case (_item in ["cola","ziegenmilch"]): {
		if(([false,_item,1] call life_fnc_handleInv)) then {
			life_thirst = 100;
		};
	};

	case (EQUAL(_item,"boltcutter")): {
		[cursorTarget] spawn life_fnc_boltcutter;
		closeDialog 0;
	};

	case (EQUAL(_item,"blastingcharge")): {
		player reveal fed_bank;
		(group player) reveal fed_bank;
		[cursorTarget] spawn life_fnc_blastingCharge;
	};

	case (EQUAL(_item,"defusekit")): {
		[cursorTarget] spawn life_fnc_defuseKit;
	};

	case (_item in ["storagesmall","storagebig"]): {
		[_item] call life_fnc_storageBox;
	};

	case (EQUAL(_item,"spikeStrip")): {
		if(!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"};
		if(([false,_item,1] call life_fnc_handleInv)) then {
			[] spawn life_fnc_spikeStrip;
		};
	};

	case (EQUAL(_item,"fuelFull")): {
		if(vehicle player != player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
		[] spawn life_fnc_jerryRefuel;
	};

	case (EQUAL(_item,"lockpick")): {
		[] spawn life_fnc_lockpick;
	};

	case (EQUAL(_item,"dogtag")): {
	 	ADD(life_gesamtexp,100);
	 	[] call life_fnc_SetupLevel;
	 	[format ["<t align='left'><t size='0.8'  shadow='1'><t color='#A9F5A9'><br /> Dogtag eingelöst <br /></t><t size='0.6'  shadow='1' color='#EFFBEF'> + 100 Erfahrung "],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
	 	[false,_item,1] call life_fnc_handleInv;
	};

	case (EQUAL(_item,"depotwaffen")): {
	    if(([false,_item,1] call life_fnc_handleInv)) then
	    {
	        [] spawn life_fnc_depotwaffen;
	    };
	};

	case (_item in ["fladenbrot","burger","dattel"]): {
		if(!(EQUAL(M_CONFIG(getNumber,"VirtualItems",_item,"edible"),-1))) then {
			if([false,_item,1] call life_fnc_handleInv) then {
				_val = M_CONFIG(getNumber,"VirtualItems",_item,"edible");
				_sum = life_hunger + _val;
				switch (true) do {
					case (_val < 0 && _sum < 1): {life_hunger = 5;}; //This adds the ability to set the entry edible to a negative value and decrease the hunger without death
					case (_sum > 100): {life_hunger = 100;};
					default {life_hunger = _sum;};
				};
			};
		};
	};

	case (EQUAL(_item,"pickaxe")): {
		[] spawn life_fnc_pickAxeUse;
	};

	case (EQUAL(_item,"abhoergeraet")): {
		[] spawn life_fnc_wiretapping;
	};

	default {};
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;
