#include <macro.h>
/*
	File: fn_territoryReward.sqf
	Author: xydra
	Give that man a cookie
*/

// _pos, Spieler von Gewinnerseite

private["_pos","_side"];

_over = _this select 0;
_side = _this select 1;

if (playerSide != _side) exitWith {};
if (playerSide == civilian) then {
if(!_over) then {
  			//Minütlich
  			ADD(CASH,25);
  			ADD(life_gesamtexp,25);
  			[format ["<t align='left'><t size='0.6' shadow='1'><t color='#9FF781'><br /> + 25$ <br/> + 25 EXP"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
  } else {
  			//Ende des Territoryfights
  			ADD(CASH,500);
  			ADD(life_gesamtexp,500);
			  [format ["<t align='left'><t size='0.6' shadow='1'><t color='#9FF781'><br /> + 500$ <br/> + 500 EXP"],-0.7,0.5,15,0,0,1] spawn BIS_fnc_dynamicText;
        if (life_quest == 33) then {ADD(life_questinfo,1);};
};
[] call life_fnc_SetupLevel;
};