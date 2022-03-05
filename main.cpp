#include <iostream>
#include <vector>
#include <fstream>

#define CC(s) std::cout << s << std::endl;

int main(void){
	const char *cad = " hacked";
	std::string name("cristian kook");
	std::string v1();
	std::string v2(name);
	std::string vv(name + cad);
	std::string v3(name, 2,5);
	std::string v4(cad);
	std::string v5(cad, 5);
	std::string v6(0xFFF, '\x41');
	uint32_t edad = 20;
	std::string buf1(564, '\x41');
	std::string buf2("\x90\x8f\x3f\xba");
	std::string exploit(buf1+buf2);
	std::ofstream file("data");
	file << exploit;
	file.close();
	CC(exploit);
	return 0;
}