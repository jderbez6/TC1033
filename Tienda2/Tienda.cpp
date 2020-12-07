#include"balon.h"
#include"bandas.h"
#include"calcetas.h"
#include"espinilleras.h"
#include"gorras.h"
#include"mochila.h"
#include"playera.h"
#include"shorts.h"
#include"sudadera.h"
#include"tenis.h"
#include<iostream>

using namespace std;

void impimirArticulos()
{
	balon Balon1;
	bandas Banda;
	calcetas Calceta;
	espinilleras Espinilleras;
	gorras Gorra;
	mochila Mochila;
	playera Playera;
	shorts Short;
	sudadera Sudadera;
	tenis Tenis;
	
	cout << "--------------------" << endl;
	cout << "1) Balones       -----  $ " <<  Balon1.getPrice() << endl;
	cout << "2) Bandas        -----  $ " << Banda.getPrice() <<  endl;
	cout << "3) Calcetas      -----  $ " <<  Calceta.getPrice() << endl;
	cout << "4) Espinilleras  -----  $ " << Espinilleras.getPrice() <<  endl;
	cout << "5) Gorras        -----  $ " << Gorra.getPrice() <<  endl;
	cout << "6) Mochilas      -----  $ " << Mochila.getPrice() <<  endl;
	cout << "7) Playeras      -----  $ " << Playera.getPrice() <<  endl;
	cout << "8) Shorts        -----  $ " << Short.getPrice() <<  endl;
	cout << "9) Sudaderas     -----  $ " << Sudadera.getPrice() <<  endl;
	cout << "10) Tenis        -----  $ " << Tenis.getPrice() <<  endl;
	cout << "--------------------" << endl;

}

int consultaPrecio(int articulo)
{
	if(articulo==1)
	{
	balon B1;	
	return B1.getPrice();
	}
	
	if(articulo==2)
	{
	bandas B2;	
	return B2.getPrice();
	}
	
	if(articulo==3)
	{
	calcetas C1;	
	return C1.getPrice();
	}
	
	if(articulo==4)
	{
	espinilleras E1;	
	return E1.getPrice();
	}
	
	if(articulo==5)
	{
	gorras G1;	
	return G1.getPrice();
	}
	
	if(articulo==6)
	{
	mochila M1;	
	return M1.getPrice();
	}
	
	if(articulo==7)
	{
	playera P1;	
	return P1.getPrice();
	}
	
	if(articulo==8)
	{
	shorts S1;	
	return S1.getPrice();
	}
	
	if(articulo==9)
	{
	sudadera S2;	
	return S2.getPrice();
	}

	if(articulo==10)
	{
	tenis T1;	
	return T1.getPrice();
	}
}

int main()
{
	cout << "¡Bienvenido a la tienda deportiva online!" << endl;
	cout << "Los articulos en venta son: " << endl;
	
	int art;
	char c;
	int total = 0;
	
	impimirArticulos();
	
	cout << "¿Desea comprar? (y/n) " << endl;
	cin >> c;
	if(c=='n')
	{
		cout << "¡Hasta la proxima!" << endl;
	}
	
	if(c=='y')
	{
		while(true)
		{
			impimirArticulos();
			cout << "Por favor indique el numero de articulo a comprar: " << endl;
			cin >> art;
			total += consultaPrecio(art);
			cout << "Su total ahora es de : $" << total << " ¿Desea seguir aniadiando productos? (y/n)" << endl;
			cin >> c;
			if (c=='y')
			{
				
			}
			if(c=='n')
			{
				break;
			}
		}
		
		cout << "¿Desea pagar $" << total << " y comprar sus productos(y/n)" << endl;
		cin >> c;
		if(c=='y')
		{
			cout << "Gracias por comprar los productos. ¡Hasta la proxima!" << endl;
		}
		if(c=='n')
		{
			cout << "No se compraron sus productos. ¡Hasta la proxima!" << endl;
		}
	}
}