#include <iostream>
using namespace std;
#include"Pelicula.h"
#include"Funciones.h"

//TP_2

int main()
{
    const int tam = 10;
    Pelicula peliculas[tam];
    cargarPeliculas(peliculas, tam);
    cout << "Hello World!\n";
}