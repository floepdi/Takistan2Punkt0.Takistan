/*
	File: fn_wiretapping.sqf
	Author: synced-gaming.de - xydra

	Description:
	Main functionality for gathering information (wiretapping a military car).
*/

private["_car","_spy"];
_spy = _this select 0;
_car = cursorTarget;
_weight = 0;


/* Check if it is possible wiretap the vehicle */
if( !(typeOf cursorTarget in ["rhsusf_m998_d_2dr","rhsusf_m998_d_4dr","DAR_M1152","rhsusf_m1025_d_m2","DAR_M1165_GMV","DAR_M1151","DAR_M1151_Deploy","DAR_M1167","rhsusf_m113d_usarmy"])) exitWith {hint "Du kannst nur Militärfahrzeuge abhören"};
if(player distance _car > 4) exitWith {hint "Du bist zu weit entfernt!"};
closeDialog 0;

/* place wiretapping device on car */
life_action_inUse = true;

player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
sleep 1.5;
waitUntil {animationState player != "ainvpknlmstpsnonwnondnon_medic_1"};

life_action_inUse = false;

if(player distance _car > 7) exitWith {hint "Du bist zu weit entfernt!"};

_bomb = "Land_TinContainer_F" createVehicle position _car;
_bomb attachTo [_car, [0, -3, -0.5], "Bombe"];
_spotted = false;
[format ["<t align='left'><t size='0.6' shadow='1'><t color='#F78181'><br /> Abhörgerät angebracht"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;


/* gather info */
while {true} do {
		/* give player 1 information if they have place in inv */
		if(([true,"information",1]call life_fnc_handleInv)) then {
			hint "Du hast eine Information aufgeschnappt";
		};


	/* check if wiretapping device is spotted (10% chance)*/
	_rand = random 100;
	if(_rand <= 10) exitWith{hint "Dein Abhörgerät wurde entdeckt!";deleteVehicle _bomb;};
	sleep 60;
};