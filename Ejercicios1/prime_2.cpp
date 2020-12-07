#include<iostream>
using namespace std;

int main()
{
	int num = 2;
	int primos = 0;
	int c  = 0;
	int superior = 1000000;
	while (num < superior)
	{	
		for(int i = 2; i<num; ++i)
		{
			if(num%i==0)
			{
				c += 1;
				break;
			}
		}
		++num;
	}
	primos = superior - 2 -  c;
	cout << "Hay " << primos << " primos entre el 1 y el " << superior<< endl;
}