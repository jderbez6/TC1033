using namespace std;

#pragma once  

class motor
{
	protected:
		int horsepower;

	
	public:
		motor();
		motor(int theHorsepower);
		
		void setHorsepower(int theHorsepower);
		int getHorsepower();

};