#include"playera.h"

playera::playera()
{
	setPrice(1500);
	setSize(6);
	setColor("Negro");
	setBrand("Nike");
	setTeam(equipo());
}

playera::playera(int thePrice, equipo theTeam, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	setTeam(theTeam);		
}

void playera::setTeam(equipo theTeam)
{
	elEquipo = theTeam;
}

equipo playera::getTeam()
{
	return elEquipo;
}
