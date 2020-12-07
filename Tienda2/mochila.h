#include<string>
#include"generico.h"

using namespace std;

#pragma once  

class mochila : public generico
{
	protected:
		string type;
	
	public:
		mochila();
		mochila(int thePrice, string theType, int theSize, string theColor, string theBrand);
		
		void setType(string theType);
		string getType();
	
};