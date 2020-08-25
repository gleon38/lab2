// Puntero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "---------------- Punteros -----------------"<< endl;

    //declaro un entero
    int entero;
    entero = 5;
    
    //declaro un puntero
    int* puntero;
    
    //le asigno LA DIRECCIÓN DE ENTERO
    puntero = &entero;

    cout << "entero : "<< entero<<endl;
    cout << "puntero de variable entero : "<<puntero<<" <-- direccion de la variable"<<endl;

    //en la parte de memoria apuntada por puntero (contenido de entero) asigno valor
    *puntero = 10;
    cout <<"accedo a la direccion de variable y le asino 10 : "<< entero<<endl;


    cout << "---------------- Punteros en funciones -----------------" << endl;

    system("pause");
    return 0;
}