#include<iostream>
using namespace std;

int main()
{
	int num = 12245;
	
	for(int i = 0; i<5; i++)
	{
		int digito = num%10;
		num = num/10;
		cout << digito << endl;
	}
}