#include <iostream>

using namespace std;

struct hacker {
	int code;
	int edad;
	string name;
	void _info() const {
		cout << "hola " << this->name << endl;
		cout << "edad is: " << this->edad << endl;
	}
	explicit hacker(int x, int y, string n) : code(x), edad(y), name(n) {
		cout << "gracias por usarme" << endl;
	}
};

void info(const hacker& h) {
	cout << "the edad is: " << h.edad << endl;
}

int main(void) {
	hacker h1{ 0xffaa,21,"cristian" };
	info(h1);
	h1._info();
	return 0;
}