#include"motor.h"

class electric_motor : public motor
{
	protected:
		int num_batteries;
		
	public:
		electric_motor();
		electric_motor(int theNum_batteries, int theHorsepower);
		
		void setNum_batteries(int theNum_batteries);
		int getNum_batteries();

};
	