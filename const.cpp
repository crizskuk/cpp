#include <iostream>
#define CC(s) std::cout << s << std::endl

class hacker {
public:
	mutable uint64_t dd = 1;
	static uint64_t edad;
	mutable uint64_t code = NULL;		//poude ser modificado por un metodo const, porque tiene la plabra clave mutable
	hacker() : code(1) {

	}
	hacker(uint64_t code) : code(code) {
		CC("gracias por invocarme");
	}
	uint64_t _info(uint64_t& x) {
		return (x + 0xfff);
	}

	uint64_t _info(uint64_t& y) const {
		CC(y+1);			//llamada a una macro
		return this->code;
	}

	 uint64_t what(void) const{
		 return this->code;
	}
};

uint64_t data(const hacker& h) {
	h.dd = 5;				//no podemos modificarlo porque el objeto esta en modo lectura
							//pero si el miembro esta especificado como mutable que significa que podemos modificarlo dentro de un miembro const o funcion de lectura
	return h.edad+5;
}


int main(void) {
	uint64_t edad = 21;
	const hacker h2(21);
	hacker h1;
	h1.code = 20;
	CC("edad: " << h2._info(edad));
	h2.code = 30;			//si nuestro objeto fue declarado como const no podemos modificarlo despues de  construccion
							//pero si le agregamos la palabra clave mutable significa que un metodo const podria modificarlo o una funcion
	h2.what();
	return 0;;
}