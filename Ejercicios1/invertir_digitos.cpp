#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int num = 350039;
	int inv = 0;
	
	for(int i = 0; i<6; i++)
	{
		int digito = num%10;
		num = num/10;
		digito = digito*(pow(10, 5-i));
		inv += digito;
		
	}
	cout << "el invertido es: " << inv << endl;
}