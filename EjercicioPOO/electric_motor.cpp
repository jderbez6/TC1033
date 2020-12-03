#include"electric_motor.h"

electric_motor::electric_motor()
{
	setNum_batteries(4);
	setHorsepower(200);
}

electric_motor::electric_motor(int theNum_batteries, int theHorsepower)
{
	setNum_batteries(theNum_batteries);
	setHorsepower(theHorsepower);
}

void electric_motor::setNum_batteries(int theNum_batteries)
{
	num_batteries = theNum_batteries;
}

int electric_motor::getNum_batteries()
{
	return num_batteries;
}