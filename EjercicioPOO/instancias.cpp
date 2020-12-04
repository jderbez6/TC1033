#include"gas_car.h"
#include"electric_car.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	electric_motor MotorElectrico; (6, 200);
	electric_car MiCocheElectrico(150, 2018, "Tesla", "Model 3", MotorElectrico);
	gas_car MiCocheNormal;
	
	cout << "El año de mi coche electrico es " << MiCocheElectrico.getYear() << endl;
	cout << "Su marca es " << MiCocheElectrico.getBrand() << endl;
	cout << "El modelo de mi coche normal es " << MiCocheNormal.getModel() << endl;
	cout << "Y su velocidad maxima es " << MiCocheNormal.getMax_v() << endl;
	
}