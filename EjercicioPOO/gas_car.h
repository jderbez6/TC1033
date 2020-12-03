#include"generic_car.h"
#include"gas_motor.h"

class gas_car : public generic_car
{
	protected:
		gas_motor motor;
	
	public:
		gas_car();
		gas_car(int theMax_v, int theYear, string theBrand, string theModel, gas_motor theMotor);
		
		void setMotor(gas_motor theMotor);
		gas_motor getMotor();
};