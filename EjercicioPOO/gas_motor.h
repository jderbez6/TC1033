#include"motor.h"

class gas_motor : public motor
{
	protected:
		int num_cylinders;
		
	public:
		gas_motor();
		gas_motor(int theNum_cylinders, int theHorsepower);
		
		void setNum_cylinders(int theNum_cylinders);
		int getNum_cylinders();

};
	