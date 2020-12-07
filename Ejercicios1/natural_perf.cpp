#include<iostream>
using namespace std;

int main()
{
	int numero = 496;
	int suma = 0;
		
		for(int i = 1; i<numero; i++)
		{
			if(numero%i==0)
			{
				suma += i;
			}
		}
		if (numero==suma)
		{
			cout << "El numero " << numero << " es un numero perfecto" << endl;
		}
		else
		{
			cout << "El numero " << numero << " no es un numero perfecto" << endl;
		}
}