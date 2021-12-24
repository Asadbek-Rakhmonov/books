#include <iostream>

// program to count occurance of numbers
int main() {
	int val, currVal, cnt = 0;
	if(std::cin >> currVal) {
		++cnt;
		while(std::cin >> val) {
			if(currVal == val) {
				++cnt;
			} else {
				std::cout << currVal << " occured " << cnt << " times." << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
	} else {
		std::cout << "incorrect input" << std::endl;
	}
	std::cout << currVal << " occured " << cnt << " times." << std::endl;
	return 0;
}