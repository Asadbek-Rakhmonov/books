#include <iostream>
#include <string>

int main() {
	double d = 10.2;
	const int &a = d;
	std::cout << a;
}