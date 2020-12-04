#include"cv.h"
using namespace std;

cv::cv()
{
	setDate(fecha());
	setBrand("Marca");
	setModel("Modelo");
	setPrice(0);
	setResolution(0);
	setMemoryCard(memory());
	setGPU(gpu());
}

cv::cv(fecha theDate, string theBrand, string theModel, int thePrice, int theResolution, memory theMemoryCard, gpu theGPU)
{
	setDate(theDate);
	setBrand(theBrand);
	setModel(theModel);
	setPrice(thePrice);
	setResolution(theResolution);
	setMemoryCard(theMemoryCard);
	setGPU(theGPU);
}

void cv::setPrice(int thePrice)
{
	price = thePrice;
}

int cv::getPrice()
{
	return price;
}

void cv::setResolution(int theResolution)
{
	resolution = theResolution;
}

int cv::getResolution()
{
	return resolution;
}

void cv::setMemoryCard(memory theMemoryCard)
{
	MemoryCard = theMemoryCard;
}

memory cv::getMemoryCard()
{
	return MemoryCard;
}

void cv::setGPU(gpu theGPU)
{
	GPU = theGPU;
}

gpu cv::getGPU()
{
	return GPU;
}

void cv::printDateC()
{
	date.printDate();
}

void cv::printMCC()
{
	MemoryCard.printMC();
}

void cv::printGPUC()
{
	GPU.printGPU();
}