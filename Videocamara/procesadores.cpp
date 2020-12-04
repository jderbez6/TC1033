#include"procesadores.h"

procesadores::procesadores()
{
	setType("Tipo");
	setSpeed(0);
}
	
procesadores::procesadores(string theType, int theSpeed)
{
	setType(theType);
	setSpeed(theSpeed);
}
		
void procesadores::setType(string theType)
{
	type = theType;
}

string procesadores::getType()
{
	return type;
}

void procesadores::setSpeed(int theSpeed)
{
	speed = theSpeed;
}

int procesadores::getSpeed()
{
	return speed;
}
	
