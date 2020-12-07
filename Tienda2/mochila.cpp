#include"mochila.h"

mochila::mochila()
{
	setPrice(1000);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
	setType("Espalda");
}

mochila::mochila(int thePrice, string theType, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	setType(theType);		
}

void mochila::setType(string theType)
{
	type = theType;
}

string mochila::getType()
{
	return type;
}
