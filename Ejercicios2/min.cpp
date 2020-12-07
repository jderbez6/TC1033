#include<iostream>

using namespace std;

int main()
{
	int suma = 0;
	int numero;
	int min;
	int n;
	cout<<"Cuantos numeros se cuentan? " << endl;
	cin >> n;
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	min = numero;
	for(n; n>1; n--)
	{
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		if(numero<min)
		{
			min = numero;
		}
	}
	cout << "El numero minimo que ingreso fue: " << min << endl;
}