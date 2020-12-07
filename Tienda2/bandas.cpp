#include"bandas.h"

bandas::bandas()
{
	setPrice(100);
	setSize(2);
	setColor("Negro");
	setBrand("Nike");
}

bandas::bandas(int thePrice, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);	
}

