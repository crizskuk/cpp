#include <iostream>
#define	END << std::endl					//declaramos una macro function
#define CC(s) std::cout << s << std::endl	//macro funcion que recibe un argumento y lo imprime (s) es el argumento


uint64_t secret = 0xa55a;				//variable static significa que no sera visible por otros modulos y solo en el archivo que se declara

class hacker {
public:
	static uint64_t code;
	uint8_t edad = NULL;							//
	static uint64_t __info(uint64_t& x) {
		//edad = 20;									//los metodos static no pueden aceder a miembros no static
		//this->code = 12;									//solo se puede usar this en una funcion no static
		std::cout << "__info() hala orden" << std::endl;
		std::cout << "__info() usted solicito el servicio: " << x << std::endl;

		return (x + code);
	}
};

uint64_t hacker::code;						//tenemos que definirla para que le compilador sepa que existe


int main(void) {
	static uint8_t age = 21;				//no creara en el marco de pila en la funcion sera declarada en una region de memoria de datos inicialzizados
	hacker::code = 20;						//modificamos la variable mienbro de la clase hacker osea solo habra una copia en todo el programa, para todas las instancias
	uint64_t edad = 21;
	CC("codigo retornado "<< hacker::__info(edad));			//aqui llamamos a una funcion static osea aestic con una macro funcion

	//#importante en el standat c++ en especial el cimpilador de visual studio
	//#no se puede crear arrays sin saber el tamaño final, significa que la variable size debe ser const
	//lo que nos perite que ya el array se debe conocer antes de la ejecucion del programa

	const uint64_t size = 0xff;			//debe ser const porque el tamaño final debe saberse en tiempo de compilacion no de ejecucion
	char data[size];					//si desea declarar el tamaño en tiempo de ejecucion usa la clase o objeto vector

	char eip[] = "\x42\x42\x42\x42";	//aqui nosucede nada porque el compilador lo rellenara el tamaño automaticamente con la cantidad de elemtos que hay en la matriz
	for (int i = 0; i < size; i++) {
		data[i] = '\x41';
		std::cout <<data[i];
	}
	printf("%s", eip);
	
	std::cout END << "hacker::code = " << hacker::code END;
	return 0;
}