//#include <iostream>
////void info_(const kpop& k);
////
////class kpop {
////public:
////	uint8_t x, y;
////	kpop(uint8_t x, uint8_t y) : x(x), y(y) {
////	}
////
////	uint8_t info(void) const{
////		const kpop *e = this;
////		info_(*this);
////	}
////};
////
////void info_(const kpop& k) {
////	std::cout << "x: " << k.x << std::endl;
////}
////
////int main(void) {
////	kpop kp(12,5);
////	return 0;
////}
//
//class hacker{
//public:
//	int edad, x;
//	std::string& name;
//	explicit hacker(std::string &n) : edad(0), x(-1), name(n) {
//		std::cout << "gracias por crearme" << std::endl;
//	}
//
//	~hacker(){
//		std::cout << "objeto destruido; " << this->name << std::endl;
//	}
//};
//
//int data(void) {
//		std::cout << "hola soy data " << std::endl;
//		std::string name("cristian");
//		hacker* h = new hacker(name);
//	return 0;
//}
//
//int main(void){
//	std::string name("zsombr4");
//	data();
//	hacker h1(name);
//	std::cout << "tu edad is: " << h1.edad << std::endl;
//	return 0;
//}