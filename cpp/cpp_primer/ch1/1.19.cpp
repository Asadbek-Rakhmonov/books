#include <iostream>

// program to print range between numbers so that first number smaller than second
int main() {
	int n1, n2;
	std::cin >> n1 >> n2;
	if(n1 < n2) {
		for(int i = n1; i <= n2; ++i)
			std::cout << i << " ";
	} else
		std::cout << "First number has to be smaller than the second" << std::endl;
	return 0;
}