#include"generico.h"

generico::generico()
{
	setDate(fecha());
	setBrand("Marca");
	setModel("Modelo");
}
	
generico::generico(fecha theDate, string theBrand, string theModel)
{
	setDate(theDate);
	setBrand(theBrand);
	setModel(theModel);
}
		
void generico::setDate(fecha theDate)
{
	date = theDate;
}

fecha generico::getDate()
{
	return date;
}
	
void generico::setBrand(string theBrand)
{
	brand = theBrand;
}

string generico::getBrand()
{
	return brand;
}

void generico::setModel(string theModel)
{
	model = theModel;
}

string generico::getModel()
{
	return model;
}