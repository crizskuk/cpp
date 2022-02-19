#include <iostream>

#define kaosumi std::cout << "hola soy la novia de cristian" << std::endl
#define EDAD \
	80
#define MSG "hola soy cristian y mi edad es: "

#define MAX (x,y) ((x) > (y) ? (x) : (y))
#define INFO(s) std::cout << s << std::endl
#define END << endl
#define LE 1,\
			2,\
			5
#define CC std::cout << 
using namespace std;


int main(void) {
	kaosumi;
	cout << MSG << EDAD << endl;;
	int x = MAX(5, 8);
	cout << x END;
	INFO("zsombr4") END;
	int data[] = { LE };
	for (auto i : data) {
		CC i END;
	}
	return 0;
}