#include <iostream>
#define CC(s) std::cout << s << std::endl

struct Nodo{
	int id;
	struct Nodo* next;
};

struct Lista{
	Nodo* head = nullptr;
	unsigned int cont = NULL;
}_lista;

Nodo* CrearNodo(Lista *lista, int id){
	Nodo* nodo = new Nodo;
	// std::cout << "id: " << id <<" offset: " << nodo << std::endl;
	nodo->next = lista->head;
	lista->head = nodo;
	nodo->id = id;
	lista->cont += 1;
	return nodo;
}

void DeleteNodoStart(Lista*lista){
	Nodo*tmp = lista->head;
	lista->head = lista->head->next;
	delete tmp;
	lista->cont -= 1;
}

void DeleteNodoEnd(Lista*lista){
	Nodo*tmp = lista->head;
	if(lista->head == nullptr){
		std::cout << "la lista esta vacia" << std::endl;
		return;
	}

	else if(tmp->next == nullptr){
		delete tmp;
		lista->head = nullptr;
		lista->cont -= 1;
		return;
	}

	else{
		while(tmp->next->next != nullptr){
			tmp = tmp->next;
		}
		delete tmp->next;
		tmp->next = nullptr;
		lista->cont -= 1;

		return;
	}
}

void MostrarDatos(Lista* lista){
	for(Nodo* nodo = lista->head; nodo != nullptr; nodo = nodo->next){
		std::cout << "nodo: " << nodo << " id: " << nodo->id << std::endl;
	}
}

void InfoLista(Lista*lista){
	if(lista->cont == 0){
		CC("la lista se encuentra vacia");
		return;
	}
	std::cout << "head: " << lista->head << std::endl;
	std::cout << "id: " << lista->head->id << std::endl;
	std::cout << "next: " << lista->head->next << std::endl;
	CC("cantidad de nodos actualmente: " << lista->cont);
}

int main(void){
	// InfoLista(&_lista);
	Nodo* v1 = CrearNodo(&_lista, 2);
	Nodo* v2 = CrearNodo(&_lista, 4);
	Nodo* v3 = CrearNodo(&_lista, 8);
	Nodo* v4 = CrearNodo(&_lista, 16);
	Nodo* v5 = CrearNodo(&_lista, 32);
	Nodo* v6 = CrearNodo(&_lista, 124);
	// InfoLista(&_lista);
	// DeleteNodoStart(&_lista);
	// DeleteNodoEnd(&_lista);
	Nodo* v7 = CrearNodo(&_lista, 64);
	MostrarDatos(&_lista);
	return 0;
}