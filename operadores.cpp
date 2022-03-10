#include <iostream>
#include <stdint.h>
#include "colores.h"
#include <Windows.h>

using namespace std;

class Idol{
    private:
        uint32_t pass = 0xfff;
    public:
        uint32_t valor = 0; 
        uint32_t y = 0; 
        std::string name;
        Idol(std::string _name) : name(_name){
            cout << _ROJO << "gracias por usar esta clase" << _NORMAL << endl;
        }

        void Display(void){
            cout << "valor: " << _CELESTE << valor << _NORMAL << std::endl;
        }

        uint32_t operator+(uint16_t x){
            cout << _VERDE <<  "sobrecarga  " << _NORMAL << _PURPURACLA << this->name << _NORMAL << endl;;
            return (this->pass + x); 
        }

        void operator++(void){
            cout << "++" << endl;
            ++valor;
        }
};

int main(void){
    system("cls");
    Idol v3("zsombr4");
    Idol v1("cristian");
    Idol v2("fabian");
    uint32_t r = v1 + 5;
    v1.y = 50;
    v2.y = 10;
    cout << "suma de (v1.y + v2.y): " << _ROJO << v1.y+v2.y << _NORMAL << endl;
    cout << v2+8 << endl;
    cout <<"---------------------"<<std::endl;
    cout << "la suma total es: " << _PURPURA << r << _NORMAL << endl;
    ++v3;
    ++v3;
    ++v3;
    cout << "++v3 is: " << _MARRON << v3.valor << _NORMAL << endl;
    return 0;
}
