#include <iostream>
#include <stdint.h>

class hacker{
    public:
    void info(void);
    hacker() = default;     //eliminamos el const del compilador por este
    hacker(const hacker&) = delete; //bloquaer copia de objetos
    hacker& operator=(const hacker&) = delete;      //bloqueamos la copia de objectos
    uint16_t Edad(void) = delete;       //estafuncion no podra ser llamada
};

void hacker::info(){
    std::cout << "hello i'am constructor";
}

uint32_t code = NULL;

uint32_t& chang(void){
    return code;
}

int main(void){
    hacker v1;
    v1.info();
    chang() = 0x414141;     //rquivalente ha code = 0x414141;
    // hacker v2 = v1;          //failed porque estamos intentando copia el objeto
                                //con el operador = que nos dara delete
    return 0;
}
