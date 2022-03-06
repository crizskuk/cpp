#include <iostream>
#include <stdint.h>

struct Nodo{
    uint16_t id;
    struct Nodo* next;
};

struct Lista{
    Nodo* head = nullptr;
}_lista;

Nodo* CrearNodo(Lista* lista, uint8_t id){
    Nodo* nodo = new(Nodo);
    nodo->next = lista->head;
    nodo->id = id;
     lista->head = nodo;
    return nodo;
}

void EliminarNodo(Lista* lista){
    if(lista->head == nullptr){
        std::cout << "la lista esta vacia" << std::endl;
        return;
    }
    Nodo* tmp = lista->head;
    lista->head = lista->head->next;
    tmp->next = nullptr;
    delete tmp;

}

void EliminarId(Lista *lista, uint8_t id){
    Nodo* tmp = lista->head;
    //si la lista esta vacia
    if(lista->head == nullptr){
        std::cout << "failed lista vacia" << std::endl;
        return;
    }
    //unico nodo
    else if(tmp->next == nullptr && tmp->id == id){
        std::cout << "se encontro en la primera lista" << std::endl;
        delete tmp;
        lista->head = nullptr;
        return;
    }
    //en la primera pocision
    else if(tmp->next != nullptr && tmp->id == id){
        std::cout << "nodo eliminado 2 else if" << std::endl;
        lista->head = tmp->next;
        delete tmp;
    }
    //en cualquier posicion
    while(tmp->next != nullptr && tmp->next->id != id){
        tmp = tmp->next;
    }
    if(tmp->next != nullptr && tmp->next->id == id){
        Nodo* nodo_delete = tmp->next;
        tmp->next = tmp->next->next;
        delete nodo_delete;
        std::cout << "nodo eliminado de la lista" << std::endl;
        return;
    }
    std::cout << "elemento no encontrado en la lista" << std::endl;
}

void InfoNodos(Lista* lista){
    //comprobar lista vacia
    if(lista->head == nullptr){
        std::cout << "InfoNodos() failed lista vacia" << std::endl;
        return;
    }
    for(Nodo* tmp = lista->head; tmp != nullptr; tmp = tmp->next){
        std::cout << "nodo " << tmp << " id: " << tmp->id << std::endl;
    }
}

int main(void){
    Nodo* v1 = CrearNodo(&_lista, 2);
    Nodo* v2 = CrearNodo(&_lista, 4); 
    Nodo* v3 = CrearNodo(&_lista, 8);
    Nodo* v4 = CrearNodo(&_lista, 16);
    EliminarNodo(&_lista);
    Nodo* v5 = CrearNodo(&_lista, 32);
    EliminarId(&_lista, 2);
    Nodo* v6 = CrearNodo(&_lista, 16);
    EliminarId(&_lista, 24);
    InfoNodos(&_lista);
    return 0;
}
