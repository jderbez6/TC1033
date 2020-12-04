#include"generico.h"
#include"gpu.h"
#include"memory.h"
#include<iostream>


using namespace std;

#pragma once  

class cv : public generico
{
	protected:
		int price;
		int resolution;
		memory MemoryCard;
		gpu GPU;
	
	public:
		cv();
		cv(fecha theDate, string theBrand, string theModel, int thePrice, int theResolution, memory theMemoryCard, gpu theGPU);
		
		void setPrice(int thePrice);
		int getPrice();
		
		void setResolution(int theResolution);
		int getResolution();
		
		void setMemoryCard(memory theMemoryCard);
		memory getMemoryCard();
		
		void setGPU(gpu theGPU);
		gpu getGPU();
		
		void printDateC();
		void printMCC();
		void printGPUC();
};
