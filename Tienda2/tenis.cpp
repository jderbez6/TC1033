#include"tenis.h"

tenis::tenis()
{
	setPrice(2500);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
	setSport("Basquet");
}

tenis::tenis(int thePrice, string theSport, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	setSport(theSport);		
}

void tenis::setSport(string theSport)
{
	sport = theSport;
}

string tenis::getSport()
{
	return sport;
}
