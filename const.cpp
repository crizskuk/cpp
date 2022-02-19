#include <iostream>
#define CC(s) std::cout << s << std::endl

class hacker {
public:
	static uint64_t edad;
	mutable uint64_t code = NULL;		//poude ser modificado por un metodo const
	hacker() : code(1) {

	}
	hacker(uint64_t code) : code(code) {
		CC("gracias por invocarme");
	}
	uint64_t _info(uint64_t& x) {
		return x + 0xfff;
	}

	uint64_t _info(uint64_t& y) const {
		//CC(y+1);
		return this->code;
	}

	 uint32_t what(uint32_t x) const{
		 this->edad = 12;
		 return this->code;
	}
};



int main(void) {
	uint64_t edad = 21;
	const hacker h2(21);
	hacker h1;
	h1.code = 20;
	CC("edad: " << h2._info(edad));
	h2.code = 30;			//si nuestro objeto fue declarado como const no podemos modificarlo despues de  construccion
							//pero si le agregamos la palabra clave mutable significa que un metodo const podria modificarlo o una funcion
	h2.what(5);
	return 0;;
}