#include<string>
#include"generico.h"

using namespace std;

#pragma once  

class calcetas : public generico
{
	protected:
	
	public:
		calcetas();
		calcetas(int thePrice, int theSize, string theColor, string theBrand);
		
};