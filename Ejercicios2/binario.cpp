#include<iostream>
using namespace std;

void ImprimeArreglo(int* arreglo, int i)
{
	for(i = i-1; i>=0; i--)
		cout << arreglo[i];
}



int main()
{
	int numero, i;
	int binario[32];
	
	cout<< "Ingrese el numero a convertir en binario: " << endl;
	cin>> numero;
	
	for(i=0; numero>0; i++)
	{
		binario[i] = numero%2;
		numero = numero/2;
		
	}
	cout << "El numero en binario es: " << endl;
	
	ImprimeArreglo(binario, i);
	cout << endl;

	
}
	
	