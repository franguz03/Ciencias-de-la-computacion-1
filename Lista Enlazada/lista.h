#ifndef LISTA_H
#include <iostream>
#define LISTA_H
#include <cstddef>

template <class T>
struct nodo {	//Estructura que consta de un dato y apunta a otra estructura de su misma naturaleza
	T Dato;
    nodo<T> * sig;
};


template <class T>
class lista{
	nodo <T> *firstNode;	//Apunta al primer elemento del nodo
	int size;	//Corresponde al tama�o de la lista enlazada, Es decir cantidad de elementos.
			
	public: lista(){	//Inicializa la lista con tama�o 0 y ningun "primer nodo"
		firstNode = NULL; 
		size = 0;
	}
		
	int getSize(){
		return size;
	}
	
	bool lista_vacia();
	void insertar(T dato, int pos);
	void insertar_final(T dato);
	void insertar_inicio(T dato);
	bool borrar(int pos);
	T buscar (int pos);
	bool modificar(T infoNueva,int pos);	
	void imprimir_datos();
};

template <class T>
bool lista<T>::lista_vacia(){ //Indica si la lista enlazada esta vacia o no
	if(firstNode == NULL)
    	return true; 
 	else
 		return false;
}

template <class T>
void lista<T>::insertar(T dato, int pos){ // Inserta un dato en una posici�n especifica de la lista entrelazada contando las posiciones desde el 0
	nodo<T> *newNode = new nodo<T>;
	newNode->Dato = dato;
	if(pos > this->size || pos < 0){
		return;
	}else{
		nodo<T> *searchedNode = this->firstNode;
        for(int i = 1; i < pos; i++){
            searchedNode = searchedNode->sig;
        }
        newNode->sig = searchedNode->sig; // Setea como siguiente del nuevo nodo el nodo ubicado en el siguiente a la posici�n buscada 
        searchedNode->sig = newNode; //le indica al nodo que estaba antes de la posici�n buscada que el siguiente es el nuevo nodo,
	}
	size++;
}

template <class T>
void lista<T>::insertar_final(T dato){ // Inserta un dato al final de la lista enlazada
	nodo<T> *newNode = new nodo<T>;
	newNode->Dato = dato;
	newNode->sig = NULL;
	
	if(firstNode == NULL){
		this->firstNode = newNode;
	}else{
		nodo<T> *lastNode = this->firstNode;
        while (lastNode->sig != NULL) {
            lastNode = lastNode->sig;
        }
        lastNode->sig = newNode;
	}
	size++;
}

template <class T>
void lista<T>::insertar_inicio(T dato){	//Inserta un dato al inicio de la lista  enlazada
	nodo<T> *newNode = new nodo<T>;
	newNode->Dato = dato;
	newNode->sig = this->firstNode;
	this->firstNode = newNode; 
	this->size++;
}

template <class T>
bool lista<T>::borrar(int pos){
	
}

template <class T>
T lista<T>::buscar (int pos){
	
}

template <class T>
bool lista<T>::modificar(T infoNueva,int pos){
	
}

template <class T>
void lista<T>::imprimir_datos() { //Imprime los datos guardados en la lista conforme van apareciendo
    nodo<T> *temp = firstNode;
    while (temp != NULL) {
        std::cout << temp->Dato << " ";
        temp = temp->sig;
    }
    std::cout << std::endl;
}

#endif
