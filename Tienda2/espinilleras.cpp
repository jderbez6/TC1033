#include"espinilleras.h"

espinilleras::espinilleras()
{
	setPrice(600);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
	setType("Normales");
}

espinilleras::espinilleras(int thePrice, string theType, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	setType(theType);		
}

void espinilleras::setType(string theType)
{
	type = theType;
}

string espinilleras::getType()
{
	return type;
}
