#include<string>

using namespace std;

#pragma once  

class procesadores
{
	protected:
		string type;
		int speed;

	
	public:
		procesadores();
		procesadores(string theType, int theSpeed);
		
		void setType(string theType);
		string getType();
	
		void setSpeed(int theSpeed);
		int getSpeed();
		
};
