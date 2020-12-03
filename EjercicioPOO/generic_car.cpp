#include"generic_car.h"

generic_car::generic_car()
{
	
	setMax_v(200);
	setYear(2010);
	setBrand("Toyota");
	setModel("Corolla");
	
}



generic_car::generic_car(int theMax_v, int theYear, string theBrand, string theModel)
{
	setMax_v(theMax_v);
	setYear(theYear);
	setBrand(theBrand);
	setModel(theModel);
	
}

void generic_car::setMax_v(int theMax_v)
{
	max_v = theMax_v;
}

void generic_car::setYear(int theYear)
{
	year = theYear;
}

void generic_car::setModel(string theModel)
{
	model = theModel;
}

void generic_car::setBrand(string theBrand)
{
	brand = theBrand;
}

int generic_car::getMax_v()
{
	return max_v;
}

int generic_car::getYear()
{
	return year;
}

string generic_car::getModel()
{
	return model;
}

string generic_car::getBrand()
{
	return brand;
}

