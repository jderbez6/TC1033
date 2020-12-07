#include <iostream>
#include <math.h>
using namespace std;

bool circular(int numero)
{
    int digitos = numdig(numero);
    for (int i = 0; i < digitos; i++)
    {
        int rota = rotar(numero, digitos);
        numero = rota; 
        if (primos(rota) == false)
        {
            break;
        }
        if (i == (digitos - 1) && primos(rota) == true)
        {
            return true;
        }
    }
    return false;
}

int numdig(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    } 
    return count; 
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
    int numero = 100000;
    int count = 0;
    for (int i = numero; i > 0; i--)
    {
        if (circular(i) == true)
        {
            count++; 
        }
    }
	
    cout << count << endl;
}
