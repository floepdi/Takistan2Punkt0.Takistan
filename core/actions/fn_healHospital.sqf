#include <macro.h>
/*
	File: fn_healHospital.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Doesn't matter, will be revised later.
*/
if(CASH < 25) exitWith {hint format[localize "STR_NOTF_HS_NoCash",100];};
titleText[localize "STR_NOTF_HS_Healing","PLAIN"];

uiSleep 8;
if(player distance (_this select 0) > 5) exitWith {titleText[localize "STR_NOTF_HS_ToFar","PLAIN"]};

_pos = position player;
_radius = 10;
_units = nearestObjects[_pos,["Man"],_radius];
	{
	_unit = _x;
	if (_x isKindOf "Man") then{
		if((_x distance _pos) > 10) exitWith {titleText["Du hast den Radius verlassen!","PLAIN"]};
		if ((alive _x)  && (isPlayer _x)) then {remoteExec ["life_fnc_healme",_x]};
		};
	} foreach _units;

titleText["Alle Spieler im Radius wurden behandelt!","PLAIN"];
SUB(CASH,25);