#include<string>
#include"generico.h"

using namespace std;

#pragma once  

class tenis : public generico
{
	protected:
		string sport;
	
	public:
		tenis();
		tenis(int thePrice, string theSport, int theSize, string theColor, string theBrand);
		
		void setSport(string theSport);
		string getSport();
	
};