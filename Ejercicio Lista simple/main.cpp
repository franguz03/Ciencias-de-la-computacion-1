#include <iostream>
#include "lista.h"

using namespace std;

struct Estud{
	string nombre;
	int cod;	
};

int main(int argc, char** argv) {
	lista<int> a;
	lista<float> b;
	lista<char> c;
	lista<Estud> d;
	
	a.insertar_inicio(1);
	a.insertar_inicio(3);
	a.insertar_inicio(6);
	a.insertar_final(29);
	a.imprimir_datos();
	
	cout << "Tamaño: " << a.getSize();
	
	return 0;
}
