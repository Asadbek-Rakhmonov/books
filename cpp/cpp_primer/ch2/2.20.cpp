#include <iostream>

int main() {
	int i = 42;
	int *p1 = &i; // p1 points to i
	*p1 = *p1 * *p1; // *p1 = i = 42*42 = 1764
	std::cout << i << std::endl;
	
	return 0;
}