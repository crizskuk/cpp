#include <iostream>

class hacker {
public:
	int code = NULL;
	hacker() {
	}
	explicit hacker(int x) {
	}
};

int main(void) {
	hacker h1 = hacker(12);
	return 0;
}