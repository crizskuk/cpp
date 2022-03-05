#include <iostream>

namespace zs{
    namespace crizskuk{
        uint8_t edad = 8;
        class idol{
            public:
            idol(uint16_t v1){
                std::cout << "edad+5*2: " << v1+5*2 << std::endl;
            }
            void func(void){
                std::cout << "i'am hacker" << std::endl;
            }
        };
    }
}

using bts = zs::crizskuk::idol;     //namespace alias
namespace twic = zs::crizskuk;      //solo desbe apuntar a namespace

int main(void){
    twic::idol v1(8);
    bts v2(7);
    std::cout << twic::edad << std::endl;
    v1.func();
    return 0;
}