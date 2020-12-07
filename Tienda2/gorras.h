#include<string>
#include"generico.h"
#include"equipo.h"

using namespace std;

#pragma once  

class gorras : public generico
{
	protected:
		equipo elEquipo;
	
	public:
		gorras();
		gorras(int thePrice, equipo theTeam, int theSize, string theColor, string theBrand);
		
		void setTeam(equipo theTeam);
		equipo getTeam();
	
};