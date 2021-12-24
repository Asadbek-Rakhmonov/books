#include <iostream>

// the sum of integers read from cin
int main() {
	int n, sum = 0;
	while(std::cin >> n) {
		sum += n;
	}
	std::cout << sum << std::endl;
	return 0;
}