#include<iostream>

using namespace std;

int main()
{
	int suma = 0;
	int numero;
	int max = 0;
	int n;
	cout<<"Cuantos numeros se cuentan? " << endl;
	cin >> n;
	for(n; n>0; n--)
	{
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		if(numero>max)
		{
			max = numero;
		}
	}
	cout << "El numero maximo que ingreso fue: " << max << endl;
}