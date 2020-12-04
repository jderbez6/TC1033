#include"cv.h"
#include<iostream>

using namespace std;

void imprimirDetallesCamara(cv laCamara)
{
	cout << "La marca de la camara es: " << laCamara.getBrand() << endl;
	cout << "El modelo de la camara es: " << laCamara.getModel() << endl;
	cout << "El precio de la camara es: " << laCamara.getPrice() << endl;
	cout << "La resolucion de la camara es: " << laCamara.getResolution() << endl;
	cout << "Se grabo: ";
	laCamara.printDateC();
	cout << endl << endl;
	cout << "La tarjeta de memoria: ";
	laCamara.printMCC();
	cout << endl;
	
	cout << "El GPU: ";
	laCamara.printGPUC();
	cout << endl;
	
}

int main()
{
	cv MiCamara;
	
	imprimirDetallesCamara(MiCamara);
}