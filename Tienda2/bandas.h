#include<string>
#include"generico.h"

using namespace std;

#pragma once  

class bandas : public generico
{

	public:
		bandas();
		bandas(int thePrice, int theSize, string theColor, string theBrand);
		
	
};