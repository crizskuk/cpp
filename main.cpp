#include <iostream>
void info_(const kpop& k);

class kpop {
public:
	uint8_t x, y;
	kpop(uint8_t x, uint8_t y) : x(x), y(y) {
	}

	uint8_t info(void) const{
		const kpop *e = this;
		info_(*this);
	}
};

void info_(const kpop& k) {
	std::cout << "x: " << k.x << std::endl;
}

int main(void) {
	kpop kp(12,5);
	return 0;
}