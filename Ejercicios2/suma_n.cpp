#include<iostream>

using namespace std;

int main()
{
	int suma = 0;
	int numero;
	int n;
	cout<<"Cuantos numeros se suman? " << endl;
	cin >> n;
	for(n; n>0; n--)
	{
		cout << "Ingrese un numero a sumar: " << endl;
		cin >> numero;
		suma += numero;
	}
	cout << "La suma es: " << suma << endl;
}