#include<iostream>
using namespace std;

int main()
{
	int suma = 0;
	int superior = 1000;
	for(int i = 0; i<=superior; i++)
	{
		if((i%3==0) || (i%5==0))
		{
			suma += i;
		}
	}
	cout << "La suma de los multiplos de 3 y 5 entre 0 y " << superior << " es de " << suma << endl;
}