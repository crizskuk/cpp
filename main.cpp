#include <iostream>
using namespace std;

class hacker {
public:
	uint32_t x, y;
	hacker(uint32_t x, uint32_t y) : x(x), y(y) {
	}

	hacker add(const hacker& h) const {
		//return *this + h;
		return operator+(h);
		//return hacker(x + h.x, y + h.y);
	}

	hacker mult(const hacker& h) const {
		return hacker(x * 2, y * 3);
	}

	hacker operator*(const hacker& h) {
		return hacker(x * h.x, y * h.y);
	}

	hacker operator+(const hacker& h) const {		//el objeto con que se llama esta funcion es level
		cout << "this->x: " << this->x << endl;		//level.x = 7
		cout << "x: " << x << endl;
		cout << "y: " << y << endl;					
		cout << "h.x: " << h.x << endl;
		cout << "h.y: " << h.y << endl;
		return hacker(x + h.x, y + h.y);			//h.<miembro>	seria edad
		//return add(h);								//h.<miembro>	seria edad
	}

	bool operator==(const hacker& h) {
		return bool(x == h.x);
	}

};

int main(void) {
	hacker level(7,777);
	hacker edad(7,555);
	hacker supe(2, 3);
	hacker result = level.add(edad*supe);
	//hacker result = level + edad;
	//cout << "hacker::result x: " << result.x << "\ny: " << result.y << endl;
	cout << "hacker::result x: " << result.x << "\ny: " << result.y << endl;
	if (edad.x == level.x) {
		cout << "son iguales" << endl;
	}
	else {
		cout << "no son iguales flase fake " << endl;
	}
	return 0;
}