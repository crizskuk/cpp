#include <iostream>
#include <iomanip>
#include <sstream>
#include <bitset>

template <typename T>
void hexa(T hx){
    std::cout << hx << " -> " << std::hex <<"0x" << hx << std::endl;
}

int main(void){
    std::stringstream ss;
    long long value_hex;
    ss << std::hex << "4142434546";
    ss >> value_hex;
    std::cout << std::hex << std::uppercase << "\n0x" << value_hex << std::endl;
    hexa<int>(21);

    std::cout << std::hex << std::uppercase <<"\n0x"<< 0xabcdef << std::endl;
    std::cout << std::setfill('-') << std::setw(20) << "hackers" << std::endl;
    std::string name("cristian");

    for(const char &c : name){
        std::cout << std::hex << "0x" << int(c)<< ": " << c << std::endl;
    }
    std::cout << "cadena hex: ";
    for(const auto &x : name){
        std::cout << std::hex << int(x);
    }

    return 0;
}

// std::setfill('-') cambia el carácter de relleno
// setw(20)          cambia el ancho del siguiente campo de entrada/salida