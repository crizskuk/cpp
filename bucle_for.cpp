#include <iostream>
#include <vector>	
#include <algorithm>
using namespace std;

void ler(std::vector<int>& v1) {
	for (int x : v1) {
		std::cout << "datos enviados: " << x << std::endl;
	}
}

void func(int x) {
	std::cout << "x: " << x * 5 << std::endl;
}

int main(void) {
	std::vector<int> data = { 1,2,3,4,5 };
	data[0] = 5;
	data.push_back(2);
	std::cout << "bucle for each" << std::endl;
	for (auto x : data) {
		std::cout << "data: " << x << std::endl;
	}
	std::cout << "enviar elemntos de un array atraves de una referencia" << std::endl;
	ler(data);
	int datos[5] = { 1,2,3,4,5 };
	std::cout << "funcion for_each" << std::endl;
	for_each(datos, datos + 5, func);
	for_each(data.begin(), data.end(), func);
	std::cout << "funcion for_each sobre una funcion lambada" << std::endl;
	for_each(data.begin(), data.end(),
		[](int a) { cout << a << "<-" << endl; });

	std::cout << "funcion for sobre std::string" << std::endl;
	std::string name("cristian");
	for (char c : name) {
		if (c == 'i') {
			std::cout << "vocal -> " << c << std::endl;
			continue;
		}
		std::cout << c << std::endl;
	}
	return 0;
}