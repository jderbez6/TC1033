#include<iostream>
using namespace std;

int main()
{
	int anio = 2020;
	
	if ((anio%4==0) && (~( anio%100==0) ||(anio%400==0)))
	{
		cout << "Es anio bisiesto" << endl;
		
	}
	else
	{
		cout << "no es anio bisiesto" << endl;
	}
}