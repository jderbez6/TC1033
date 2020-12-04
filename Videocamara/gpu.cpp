#include"gpu.h"

gpu::gpu()
{
	setDate(fecha());
	setBrand("Marca");
	setModel("Modelo");
	setType("Tipo");
	setSpeed(0);
}
	
gpu::gpu(fecha theDate, string theBrand, string theModel, string theType, int theSpeed)
{
	setDate(theDate);
	setBrand(theBrand);
	setModel(theModel);
	setType(theType);
	setSpeed(theSpeed);
}

void gpu::printGPU()
{
	cout << "~~Fecha de compra: ";
	date.printDate();
	cout << endl;
	cout << "~~La marca: " << brand << endl;
	cout << "~~El modelo: " << model << endl;
	cout << "~~El tipo: " << type << endl;
	cout << "~~Velocidad en gigas: " << speed << endl;
}