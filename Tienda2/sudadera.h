#include<string>
#include"generico.h"

using namespace std;

#pragma once  

class sudadera : public generico
{
	protected:
		string type;
	
	public:
		sudadera();
		sudadera(int thePrice, string theType, int theSize, string theColor, string theBrand);
		
		void setType(string theType);
		string getType();
	
};