#include <iostream>
#include <string>
using namespace std;

struct hack {
	int y;
	int x;
};

class idol {
private:
	unsigned int my_size;
	char* my_buffer;
public:
	idol(const char* cad) {
		my_size = strlen(cad);
		cout << "size: "<< my_size << endl;
		my_buffer = new char[my_size+1];
		memcpy(my_buffer, cad, my_size+1);
	}

	friend std::ostream& operator<<(std::ostream& o, const idol& objeto);

	~idol() {
		delete[] my_buffer;
	}
};

std::ostream& operator<<(std::ostream& o, const idol& objeto){
//  Se puede llamar como prefieras --> ^
	std::cout << "hello" << endl;
	o << objeto.my_buffer;
	return o ;
}

int main(void) {
	hack* h1 = new(hack);
	hack* h2 = h1;	//aqui no estamos creando una copia solo estamos apuntando a la misma dirrecion de v3
	//const char* i2 = "zsombr4";
	//std::string name = "cristian";
	//cout << name << endl;
	//idol* i1 = new idol(i2);
	//idol* i3 = i1;
	//std::string name("cristian");			//declaracion correcta
	std::string name = "cristian";		//declaracion explicita
	std::string v3 = name;
	std::cout << name << endl;
	std::cout << v3 << endl;
    return 0;
}