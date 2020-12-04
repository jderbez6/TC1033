#include"procesadores.h"
#include"generico.h"

using namespace std;

#pragma once  

class gpu : public generico, public procesadores
{
	public:
		gpu();
		gpu(fecha theDate, string theBrand, string theModel, string theType, int theSpeed);
		
		void printGPU();
};
