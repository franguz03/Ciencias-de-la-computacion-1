#ifndef LISTA_H
#define LISTA_H

template <class T>
struct nodo {T Dato;
             nodo<T> * sig;};

template <class T>
class lista{nodo <T> *cab;
			int tam;
			
	public: lista(){cab=NULL; tam=0;}
	        int getTam(){return tam;}
			bool lista_vacia();
			void insertar(T dato, int pos);
			void insertar_final(T dato);
			void insertar_inicio(T dato);
			bool borrar(int pos);
			T buscar (int pos);
			bool modificar(T infoNueva,int pos);	
};

template <class T>
bool lista<T>::lista_vacia()
{if(cab==NULL)
    return true;
 else
 	return false;
}




#endif
