#include"electric_car.h"

electric_car::electric_car()
{
	
	setMax_v(200);
	setYear(2010);
	setBrand("Toyota");
	setModel("Corolla");
	setMotor(electric_motor());
}



electric_car::electric_car(int theMax_v, int theYear, string theBrand, string theModel, electric_motor theMotor)
{
	setMax_v(theMax_v);
	setYear(theYear);
	setBrand(theBrand);
	setModel(theModel);
	setMotor(theMotor);
}

void electric_car::setMotor(electric_motor theMotor)
{
	motor = theMotor;
}

electric_motor electric_car::getMotor()
{
	return motor;
}