#include <iostream>
#define CC(d) std::cout << d << std::endl;
#define TM template

template <typename T>
T max(T x, T y) {
	return (x > y) ? x : y;
}

TM <typename SA>
SA name(SA na) {
	//std::string msg = "capuyo";
	return (na + '\x01');
}

int main(void) {
	CC(max<int>(5,6));
	CC(name<char>('a'));
	return 0;
}