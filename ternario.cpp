#include <iostream>

using namespace std;

class hacker {
public:
	int code = NULL;
	hacker() {
	}
	virtual const string info(int x) const {
		return (x == 12) ? "ok" : "false";
	}

};

int main(void) {
	hacker h1;
	cout << h1.info(12) << endl;
	return 0;
}