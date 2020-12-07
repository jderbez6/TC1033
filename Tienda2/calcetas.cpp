#include"calcetas.h"

calcetas::calcetas()
{
	setPrice(200);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
}

calcetas::calcetas(int thePrice, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);		
}

