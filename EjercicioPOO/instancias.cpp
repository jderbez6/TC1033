#include"gas_car.h"
#include"electric_car.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	electric_motor MotorElectrico(6, 200);
	electric_car MiCocheElectrico(110, 2016, "Toyota", "Corolla", MotorElectrico);
	gas_car MiCocheNormal();
	
	cout << "El año de mi coche elecico es" << MiCocheElectrico.getYear() << endl;
}