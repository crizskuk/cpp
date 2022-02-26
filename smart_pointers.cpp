//#include <iostream>
//
//class smart_pointer {
//public:
//	int* ptr;
//	explicit smart_pointer(int* p = NULL) : ptr(p) {
//		std::cout << "offset puntero: " << p << std::endl;
//	}
//
//	~smart_pointer() {
//		std::cout << "objeto destruido: "<<ptr << std::endl;
//		delete (ptr);
//	}
//};
//
//void func(void) {
//	smart_pointer v2(new(int));
//}
//
//void main(void) {
//	while (true) {
//		func();
//	}
//	smart_pointer v1(new(int));
//
//}

#include <iostream>

using namespace std;
#define CC(s) std::cout << s << std::endl

template <class T>
class smart_p {
public:
	T* ptr;
	explicit smart_p(T* p = NULL) : ptr(p) {
		CC("object: " << p);
	}
	~smart_p() {
		CC(*ptr);
		CC("objeto eliminado");
		delete(ptr);
	}
	T& operator*() {
		return (*ptr);
	}

};

void __func(void) {
	smart_p<int> v1(new(int));
	*v1 = 50;
}

int main(void) {
	__func();
	return 0;
}



