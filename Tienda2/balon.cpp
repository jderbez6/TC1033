#include"balon.h"

balon::balon()
{
	setPrice(500);
	setSize(7);
	setColor("Negro");
	setBrand("Nike");
	setSport("Basquet");
}

balon::balon(int thePrice, string theSport, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	setSport(theSport);		
}

void balon::setSport(string theSport)
{
	sport = theSport;
}

string balon::getSport()
{
	return sport;
}
