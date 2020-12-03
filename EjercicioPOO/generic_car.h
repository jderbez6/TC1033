#include<string>

using namespace std;

#pragma once  

class generic_car
{
	protected:
		int max_v;
		int year;
		string brand;
		string model;
	
	public:
		generic_car();
		generic_car(int theMax_v, int theYear, string theBrand, string theModel);
		
		void setMax_v(int theMax_v);
		int getMax_v();
	
		void setYear(int theYear);
		int getYear();
	
		void setBrand(string theBrand);
		string getBrand();
	
		void setModel(string theModel);
		string getModel();
};