#include"motor.h"

motor::motor()
{
	setHorsepower(200);
}

motor::motor(int theHorsepower)
{
	setHorsepower(theHorsepower);
}

void motor::setHorsepower(int theHorsepower)
{
	horsepower = theHorsepower;
}

int motor::getHorsepower()
{
	return horsepower;
}