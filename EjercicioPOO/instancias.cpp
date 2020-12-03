#include"gas_car.h"
#include"electric_car.h"
#include<iostream>
using namespace std;
int main()
{
	electric_car MiCocheElectrico();
	gas_car MiCocheNormal();
	
	cout << "El año de mi coche elecico es" << MiCocheElectrico.getYear() << endl;
}