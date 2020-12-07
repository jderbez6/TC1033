#include<string>

using namespace std;

#pragma once  

class equipo
{
	protected:
		string sport;
		string team;
	
	public:
		equipo();
		equipo(string theSport, string theTeam);
		
		void setSport(string theSport);
		string getSport();
		
		void setTeam(string theTeam);
		string getTeam();
};