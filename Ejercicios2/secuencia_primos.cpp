#include<iostream>
using namespace std;

int main()
{
	int primo = 0; 
	int n = 1; 
	while (primo < 10001)
	{
		int i = n; 
		int c = 0; 
		for (int j = i; j > 0; j--)
		{
			if(i % j == 0)
			{
				c++;
			}
		}
		if (c == 2)
		{
			primo++; 
		}
		n++;  
	}
	cout << "El término " << primo << " de la secuencia es " << n - 1 << endl;
}