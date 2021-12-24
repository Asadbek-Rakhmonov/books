#include <iostream>

// program to print numbers from 10 down to 0
int main() {
	int val = 10;
	while(val >= 0) {
		std::cout << val << " ";
		--val;
	}
	return 0;
}