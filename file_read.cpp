#include <iostream>
#include <fstream>
#include <stdint.h>

int main(void){
    std::string buf;
    std::ifstream file("data.txt");
    if(!file){
        std::cout << "failed open file\n";
        exit(EXIT_FAILURE);
    }
    file >> buf;
    std::cout << buf << std::endl;
    for(auto &x : buf){
        std::cout << x << " -> " << std::hex << "0x" << (int)static_cast<uint8_t>(x) << std::endl;
    }
    return 0;
}