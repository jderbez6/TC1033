#include"procesadores.h"
#include"generico.h"
#include<iostream>

using namespace std;

#pragma once  

class memory : public generico, public procesadores
{
	protected:
		int size;
	
	public:
		memory();
		memory(fecha theDate, string theBrand, string theModel, string theType, int theSpeed, int theSize);
		
		void setSize(int theSize);
		int getSize();
		
		void printMC();


};

