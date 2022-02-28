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

//using namespace std;
//#define CC(s) std::cout << s << std::endl
//
//template <class T>
//class smart_p {
//public:
//	T* ptr;
//	explicit smart_p(T* p = NULL) : ptr(p) {
//		CC("object: " << p);
//	}
//	~smart_p() {
//		CC(*ptr);
//		CC("objeto eliminado");
//		delete(ptr);
//	}
//	T& operator*() {
//		return (*ptr);
//	}
//
//};
//
//void __func(void) {
//	smart_p<int> v1(new(int));
//	*v1 = 50;
//}
//
//int main(void) {
//	__func();
//	return 0;
//}


//#include <memory>
//
//using namespace std;
//
//class hack {
//public:
//    int x, y;
//    explicit hack(int y = 0, int x = 0) : x(y), y(y) {
//        cout << "hello" << endl;
//    }
//    void info(void) {
//        cout << "suma: x,y >> " << this->x + this->y <<endl;
//    }
//    ~hack() {
//        cout << "object "<<this<< " delete" << endl;
//    }
//};
//
//
//
//int main(void) {
//    std::unique_ptr<hack> v1(new hack(5, 7));
//    cout << "v1:" << v1 << endl;
//    std::unique_ptr<hack> p2;
//    p2 = std::move(v1);
//
//    return 0;
//}


#include <iostream>

class hack {
public:
	int x, y;
	hack(int x = 0, int y = 0) : x(x), y(y) {
		std::cout << "entity created" << std::endl;
	}
};

int main(void) {
	std::shared_ptr<hack> v1 = std::make_shared<hack>();
	std::shared_ptr<hack> v2 = v1;
	std::cout << "contador: " << v1.use_count() << std::endl;
	return 0;
}