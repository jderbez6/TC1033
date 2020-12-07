#include"shorts.h"

shorts::shorts()
{
	setPrice(500);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
}

shorts::shorts(int thePrice, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);	
}

