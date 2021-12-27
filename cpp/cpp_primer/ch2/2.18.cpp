#include <iostream>

int main() {
	int a = 10, b = 2;
	int *p = &a;
	*p = 1;
	p = &b;
	std::cout << a << " " << *p << std::endl;

	return 0;
}