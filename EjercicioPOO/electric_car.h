#include"generic_car.h"
#include"electric_motor.h"

class electric_car : public generic_car
{
	protected:
		electric_motor motor;
	
	public:
		electric_car();
		electric_car(int theMax_v, int theYear, string theBrand, string theModel, electric_motor theMotor);
		
		void setMotor(electric_motor theMotor);
		electric_motor getMotor();
};