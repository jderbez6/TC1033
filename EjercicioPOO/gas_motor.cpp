#include"gas_motor.h"

gas_motor::gas_motor()
{
	setNum_cylinders(6);
	setHorsepower(200);
}

gas_motor::gas_motor(int theNum_cylinders, int theHorsepower)
{
	setNum_cylinders(theNum_cylinders);
	setHorsepower(theHorsepower);
}

void gas_motor::setNum_cylinders(int theNum_cylinders)
{
	num_cylinders = theNum_cylinders;
}

int gas_motor::getNum_cylinders()
{
	return num_cylinders;
}