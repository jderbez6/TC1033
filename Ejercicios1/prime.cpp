#include<iostream>
using namespace std;

int main()
{
	cout << "los numeros primos entre el 1 y el 1000 son:" << endl;
	int num = 2;
	while (num < 1000)
	{	
		int c  = 0;
		for(int i = 2; i<num; ++i)
		{
			if(num%i==0)
			{
				c = 1;
				break;
			}
		}
		if(c==0)
		{
			cout << num << ", ";
		}
		++num;
	}
}