#include"gorras.h"

gorras::gorras()
{
	setPrice(800);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
	setTeam(equipo());
}

gorras::gorras(int thePrice, equipo theTeam, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	setTeam(theTeam);		
}

void gorras::setTeam(equipo theTeam)
{
	elEquipo = theTeam;
}

equipo gorras::getTeam()
{
	return elEquipo;
}
