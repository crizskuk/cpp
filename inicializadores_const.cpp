#include <iostream>

class kpop {
public:
	const uint64_t pass;		//tambien debemos inicairlo al conctruir el objeto
	uint32_t xx, yy;
	uint8_t& data;			//devemos iniciarlizarlo al iniciar el constrcutor ya que una variable de referencia no se puede modificar a otro
	kpop(uint32_t x, uint32_t y, uint8_t& edad) : xx(x), yy(y), pass(777), data(edad) {
	}
};

int main(void) {
	uint8_t edad = 21;
	kpop kp(5, 7, edad);
	std::cout << kp.xx << std::endl;
	return 0;
}
//Inicializar los sub - objetos del tipo antes de que empiecen su ciclo de vida.
//Llamar al constructor de los sub - objetos del tipo.
//Llamar al constructor de la(s) clase(s) base(s) del tipo.
//Delegar la construcción en otros constructores.