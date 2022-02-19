#include <iostream>
#include <Windows.h>

#ifdef OFF_DEBUG
#define CC(x) std::cout << x << std::endl
void info() {
	std::cout << "estamos en modo debugger uuiuiui" << std::endl;
	std::cout << "que comienzen los chingazos" << std::endl << std::endl;
}

#else
#define LOG "no estas en modo debugger"

void info() {
	std::cout << LOG << std::endl;
}

#endif



#define kaosumi std::cout << "hola soy la novia de cristian" << std::endl
#define EDAD \
	80
#define MSG "hola soy cristian y mi edad es: "

#define MAX(x,y) ((x) > (y) ? (x) : (y))			//esta definicion es la correcta poruqe al craer una funcion macro no debe haber espacio entre el nombre de la macro y el parentesis
//#define MAX (x,y) ((x) > (y) ? (x) : (y))			//incorrecto hay espacio entre MAX y el parentesis dara error de sintaxis#define INFO(s) std::cout << s << std::endl
#define END << endl
#define LE 1,\
			2,\
			5
//#define CC std::cout <<

#define KPOP int kpop(void) \
{\
	std::cout << "soy KPOPER" << std::endl;\
	system("start chrome https://youtube/xeUx0AN2kCA?list=RDMM&t=85"); \
	return 0;\
}

using namespace std;

	KPOP;

int main(void) {
	info();
	kaosumi;
	cout << MSG << EDAD << endl;;
	int x = MAX(5, 8);
	cout << x END;
	int data[] = { LE };
	for (auto i : data) {
		CC(i);
	}
	kpop();
	return 0;
}