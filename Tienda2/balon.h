#include<string>
#include"generico.h"

using namespace std;

#pragma once  

class balon : public generico
{
	protected:
		string sport;
	
	public:
		balon();
		balon(int thePrice, string theSport, int theSize, string theColor, string theBrand);
		
		void setSport(string theSport);
		string getSport();
	
};