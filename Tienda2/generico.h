#include<string>
#include<iostream>

using namespace std;

#pragma once  

class generico
{
	protected:
		int size;
		string color;
		string brand;
		int price;
	
	public:
		generico();
		generico(int thePrice, int theSize, string theColor, string theBrand);
		
		void setSize(int theSize);
		int getSize();
	
		void setColor(string theColor);
		string getColor();
	
		void setBrand(string theBrand);
		string getBrand();
	
		void setPrice(int thePrice);
		int getPrice();
	
};