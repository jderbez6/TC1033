#include"memory.h"

using namespace std;

memory::memory()
{
	setDate(fecha());
	setBrand("Marca");
	setModel("Modelo");
	setType("Tipo");
	setSpeed(0);
	setSize(0);
}
	
memory::memory(fecha theDate, string theBrand, string theModel, string theType, int theSpeed, int theSize)
{
	setDate(theDate);
	setBrand(theBrand);
	setModel(theModel);
	setType(theType);
	setSpeed(theSpeed);
	setSize(theSize);
}

void memory::setSize(int theSize)
{
	size = theSize;
}

int memory::getSize()
{
	return size;
}

void memory::printMC()
{
	cout << "--Fecha de compra: ";
	date.printDate();
	cout << endl;
	cout << "--La marca: " << brand << endl;
	cout << "--El modelo: " << model << endl;
	cout << "--Capacidad en gigas: " << size << endl;
	cout << "--El tipo: " << type << endl;
	cout << "--Velocidad en gigas: " << speed << endl;
}