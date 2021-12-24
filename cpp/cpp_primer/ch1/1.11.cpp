#include <iostream>

// program to print the range specified by two integers

int main() {
	int n1, n2;
	std::cout << "Enter two numbers: ";
	std::cin >> n1 >> n2;
	while(n1 <= n2) {
		std::cout << n1 << " ";
		++n1;
	}
	std::cout << std::endl;
	return 0;
}