#include <iostream>

class hacker {
public:
	int edad, y;
	std::string h_name;
	explicit hacker(uint8_t age) : edad(age), h_name("desconodido"), y(0) {
	}
	explicit hacker(std::string name) : h_name(name), edad(-1), y(0) {
	}

	void info(void) {
		std::cout << "edad: " << this->edad << std::endl;
	}
};

void info(const hacker& h1) {
	std::cout << "hacker_edad: " << h1.edad << std::endl;
	std::cout << "offset: " << &h1 << std::endl;
}
//}void info(int f){
//	std::cout << "f_edad: " << f << std::endl;
//}

int main(void) {
	hacker h1(21);
	info(h1);
	//info(23);		//llamada implicita se pasa un int pero la funcion recibe un object, entonces porque funciona
					//pues el compilador realzia una conversion de tipo crea el obejct hacker
					//

	//hacker h2 = 21;	// 
	//h2.info();
	return 0;
}