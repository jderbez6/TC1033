#include <iostream> 
using namespace std; 

int numdig(int num)
{
    int c = 0;
    while (num > 0)
    {
        num /= 10;
        c++;
    } 
    return c; 
}

int voltear(int numero, int digitos)
{
    int suma = 0; 
    int multi = pow(10, (digitos-1));
    int new_num; 
    for (int i = 0; i < digitos; i++)
    {
        new_num = (numero % 10) * multi;
        numero /= 10;
        multi /= 10;
        suma += new_num; 
    }
    return suma;
}

void palindromo(int num1, int num2)

    if (num1 == num2)
    {
        cout << "Es palíndromo" << endl;
    }
    else
    {
        cout << "No es palíndromo" << endl;
    }
}

int main()
{
    int n; 
    cout << "Ingresa un número: ";
    cin >> n;
    int digitos = numdig(n); 
    int new_n; 
    int voltea = voltear(n, digitos);
    new_n = voltea;  
    palindromo(n, new_n);
}

