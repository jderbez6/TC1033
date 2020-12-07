#include<string>
#include"generico.h"

using namespace std;

#pragma once  

class espinilleras : public generico
{
	protected:
		string type;
	
	public:
		espinilleras();
		espinilleras(int thePrice, string theType, int theSize, string theColor, string theBrand);
		
		void setType(string theType);
		string getType();
	
};