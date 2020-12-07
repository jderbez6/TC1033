#include"equipo.h"		

equipo::equipo()
{
	setSport("Futbol");	
	setTeam("Atelti de Madrid");
}

equipo::equipo(string theSport, string theTeam)
{
	setSport(theSport);
	setTeam(theTeam);
}

void equipo::setSport(string theSport)
{
	sport = theSport;
}

string equipo::getSport()
{
	return sport;
}

void equipo::setTeam(string theTeam)
{
	team = theTeam;
}

string equipo::getTeam()
{
	return team;
}