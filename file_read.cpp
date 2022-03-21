#include <iostream>
#include <fstream>
#include <stdint.h>
#include <vector>

void mostrar_valor(std::vector<int> &v){
    for(auto &i : v){
        std::cout << i << std::endl;
    }
}

int main(void){
    std::vector<int> vbuf;
    std::string buf;
    std::ifstream file("data.txt");
    if(!file){
        std::cout << "failed open file\n";
        exit(EXIT_FAILURE);
    }
    uint16_t elemnts = 18;
    uint16_t valor;
    vbuf.reserve(elemnts);
    for(uint16_t i = 0; i < elemnts; i++){
        file >> valor;
        vbuf.push_back(valor);
    }
    mostrar_valor(vbuf);
    return 0;
}