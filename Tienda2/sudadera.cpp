#include"sudadera.h"

sudadera::sudadera()
{
	setPrice(400);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
	setType("Hoodie");
}

sudadera::sudadera(int thePrice, string theType, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	setType(theType);		
}

void sudadera::setType(string theType)
{
	type = theType;
}

string sudadera::getType()
{
	return type;
}
