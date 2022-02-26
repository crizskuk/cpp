#include <iostream>

using namespace std;
int main(void) {
	char* v1 = new char[64];
	char* v2 = new char[64];
	char* v3 = new char[64];
	char* v4 = new char[64];
	char* v5 = new char[64];
	char* v6 = new char[64];
	char* v7 = new char[64];
	char* v8 = new char[64];
	char* v9 = new char[64];
	char* v10 = new char[64];
	printf("new v1 0x%p\n", v1);
	printf("new v2 0x%p\n", v2);
	printf("new v3 0x%p\n", v3);
	printf("new v4 0x%p\n", v4);
	printf("new v5 0x%p\n", v5);
	printf("new v6 0x%p\n", v6);
	printf("new v7 0x%p\n", v7);
	printf("new v8 0x%p\n", v8);
	printf("new v9 0x%p\n", v9);
	printf("new v10 0x%p\n", v10);

	delete[] v10;
	cout << "\ndelete(v10)" << endl;

	delete[] v1;
	cout << "delete(v1)" << endl;

	char* v11 = new char[64];
	printf("\nnew v11 %p\n", v11);
	char* v12 = new char[64];
	printf("new v12 %p\n", v12);
	return 0;
}