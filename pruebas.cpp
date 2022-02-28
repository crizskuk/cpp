#include <iostream>


using namespace std;

class idol {
public:
	int edad;
	idol() : edad(77) {
		std::cout << "i'am idol:: gracias" << std::endl;
	}
	void info_(void) {
		std::cout << "code: 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a" << std::endl;
	}
};

class hacker {
private:
	int code = 0xFACC;
	idol* v1;		//se declara un puntero a la clase v1 pero no se llama al constructor
public:
	hacker(idol* i1) : v1(i1){
		cout << "i'am hacker:: gracias" << endl;
	}
	void print(void) const{
		std::cout << "hello!" << std::endl;
	}

	idol* obj_(void) const{
		return v1;
	}
};

int main(void) {
	hacker v1(new idol());
	cout << v1.obj_()->edad << endl;
	v1.obj_()->info_();
	return 0;
}