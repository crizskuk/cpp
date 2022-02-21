#include <iostream>
#include <Windows.h>
using namespace std;

class pro {
public:
	pro() {
		cout << "pro le desea unos buenos exploits jejej" << endl;
		//system("pause");
	}

	virtual void info_ctf(void) = 0 {
		cout << "pro: hola soy abstract" << endl;
	};		//un metodo declarado puro y la clase se vuelve abstract
	
	virtual void edad_(int y) {
		cout << "pro: mi edad es siempre la misma 21" << endl;
	}

	~pro(void) {
		cout << "pro: se despide de usted " << endl;
	}

};



class medio_pro : public pro {
private:
	uint32_t coode = NULL;
public:
	friend void hackzs(medio_pro &h);
	medio_pro() {
		cout << "medio_pro: gracias por crear medio-pro" << endl;
	}

	void info_ctf(void) {
		cout << "medio_pro: lo sentimos pero los medio-pro no pueden participar" << endl;
	}

	void edad_(int x){
		cout << "medio_pro: soy " << x << endl;
	}

	~medio_pro(void) {	
		//edad_();		//lamamos a un metodo de la clase abstract
		cout << "medio_pro: adios jefe " << endl;
	}

};

class hacker {
private:
	uint64_t pass;
public:
	static uint8_t x;
	uint32_t edad;
	uint64_t code;
	hacker() : pass(77), edad(0), code(0) {
	}
	hacker(uint32_t &eda, uint64_t &cod) : edad(eda), code(cod), pass(5) {
		cout << "hi i'am principal construct" << endl;
		cout << "you age is: " << this->edad << endl;
	}

	/*virtual void __ctf(void) const{				//esta clase es diferente porque tiene el especificador const
		cout << "hacker::__ctf: fat-44" << endl;
	}*/

	virtual void __ctf(void){
		cout << "hacker::__ctf: fat-44" << endl;
	}

	uint64_t getPass(void) const{
		return this->pass;
	}
};

class nop : public hacker {
public:
	nop() {

	}
	uint64_t __ingo(void) {
		cout << "la pass in nop is: " << this->getPass() << endl;
		return this->getPass();
	}

	void __ctf(void) override{
		cout << "nop::__ctf_ fake nop" << endl;
	}
};

uint8_t hacker::x;


void hackzs(medio_pro& h) {
	h.coode = 7;
	cout << "hackzs funcion amiga de ,medio_pro ha modificado coode: " << h.coode << endl;
}

int main(void) {
	hacker::x = 777;
	uint32_t edad = 21;
	uint64_t code = 0xfff;
	hacker h(edad,code);
	//printf("passwd is: %d\n", h.getPass());
	//cout << "password is " << h.getPass() << endl;
	nop h2;
	h2.__ingo();
	hacker* h3 = new nop;
	h3->__ctf();
	h2.__ctf();
	medio_pro h4;
	pro* h5 = new medio_pro;
	h4.edad_(12);
	//h5->edad_(12);		// pro: virtual edad_(void)... porque no se llama el de la subclase porque no lo esta reemplazando como metodo virtual
							// medio_pro void edad_(int x)... no son iguales por eso no se llama
	h5->edad_(80);			//ahora funciona por los 2 metodos son iguales	
	hackzs(h4);
	h5->info_ctf();
	return 0;
}