#include"generico.h"

generico::generico()
{
	setPrice(500);
	setSize(10);
	setColor("Negro");
	setBrand("Nike");
}

generico::generico(int thePrice, int theSize, string theColor, string theBrand)
{
	setPrice(thePrice);
	setSize(theSize);
	setColor(theColor);
	setBrand(theBrand);
	
}

void generico::setPrice(int thePrice)
{
	price = thePrice;
}

void generico::setSize(int theSize)
{
	size = theSize;
}

void generico::setColor(string theColor)
{
	color = theColor;
}

void generico::setBrand(string theBrand)
{
	brand = theBrand;
}

int generico::getPrice()
{
	return price;
}

int generico::getSize()
{
	return size;
}

string generico::getColor()
{
	return color;
}

string generico::getBrand()
{
	return brand;
}

