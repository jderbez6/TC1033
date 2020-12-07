#include <iostream> 
#include <cstring>
#include <math.h>
using namespace std; 

int binario(string str, int size)
{
    int suma = 0; 
    int c = (size - 1); 
    int i = 0; 
    while (i <= (size - 1))
    {        
        if (str[i] == '1')
		{
			
            int potencia = pow(2, count); 
            suma += potencia;
		}     
    c --; 
    i ++; 
    } 
    cout << suma << endl; 
}


int main()
{
    string binary; 
    cout << "Ingresa un numero binario: "; 
    getline(cin, binary); 
    int tamaño = binary.length();
    binario(binary, tamaño); 
}

