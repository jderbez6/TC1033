#include"gas_car.h"

gas_car::gas_car()
{
	
	setMax_v(200);
	setYear(2010);
	setBrand("Toyota");
	setModel("Corolla");
	setMotor(gas_motor());
}



gas_car::gas_car(int theMax_v, int theYear, string theBrand, string theModel, gas_motor theMotor)
{
	setMax_v(theMax_v);
	setYear(theYear);
	setBrand(theBrand);
	setModel(theModel);
	setMotor(theMotor);
}
void gas_car::setMotor(gas_motor theMotor)
{
	motor = theMotor;
}

gas_motor gas_car::getMotor()
{
	return motor;
}