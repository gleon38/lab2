#include"Pelicula.h"

void mostrarPelicula();
float calcularRentabilidad();
void cargarPeliculas();
Pelicula cargarPelicula();

void cargarPeliculas(Pelicula peliculas[], int tam) {
	for (int i = 0; i < tam; i++) {
		peliculas[i] = cargarPelicula(peliculas[i]);
	}
}

Pelicula cargarPelicula(Pelicula pelicula) {

	cout << "Id Pais" << endl;
	cin >> pelicula.IdPais;
	cout << "Titulo :" << endl;
	cin >> pelicula.Titulo;
	cout << "Costo :" << endl;
	cin >> pelicula.Costo;
	cout << "Recaudacion" << endl;
	cin >> pelicula.Recaudacion;
	return pelicula;
}