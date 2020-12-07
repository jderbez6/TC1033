#include <iostream>
#include <math.h>
using namespace std; 

int numdig(int num)
{
    int c = 0
    while (num > 0)
    {
        num /= 10;
        c++;
    } 
    return c; 
}
int rotar(int numero, int digitos)
{
    int suma = 0; 
    int divisor = pow(10, (digitos-1)); 
    int newnum; 
    for (int i = 0; i < 1; i++)
    {
        newnum = (numero % 10) * divisor;
        numero /= 10;
        suma = numero + newnum; 
    }
    return suma;
}
bool primos(int num)
{
    int count = 0; 
    for (int i = num; i > 0; i--)
    {
        if(num % i == 0)
        {
            count ++;
        }
    }
    if (count != 2)
    {
        return false; 
    }
    else
    {
        return true; 
    }
}


int main()
{
    int n; 
    cout << "Ingresa un numero: "; 
    cin >> n; 
    int digitos = numdig(n);
    for (int i = 0; i < digitos; i++)
    {
        int rota = rotar(n, digitos);
        n = rota; 
        if (primos(rota) == false)
        {
            cout << "No es circular primo" << endl;
            break;
        }
        if (i == (digitos - 1) && primos(rota) == true)
        {
            cout << "Es circular primo" << endl;
        }
    }
}