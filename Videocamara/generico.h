#include"fecha.h"
#include<string>

using namespace std;

#pragma once  

class generico
{
	protected:
		fecha date;
		string brand;
		string model;

	
	public:
		generico();
		generico(fecha theDate, string theBrand, string theModel);
		
		void setDate(fecha theDate);
		fecha getDate();
	
		void setBrand(string theBrand);
		string getBrand();
		
		void setModel(string theModel);
		string getModel();

};
