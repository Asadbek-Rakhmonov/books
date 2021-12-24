#include <iostream>


int main() {
	//Exercise from 1.9 using for loop
	int sum = 0;
	for(int i = 50; i <= 100; ++i) {
		sum += i;
	}
	std::cout << "Sum from 50 to 100 is " << sum << std::endl;

	//Exercise from 1.10 using for loop
	for(int i = 10; i >= 0; --i) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	//Exercise from 1.11 using for loop
	int n1, n2;
	std::cin >> n1 >> n2;
	for(int i = n1; i <= n2; ++i) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}