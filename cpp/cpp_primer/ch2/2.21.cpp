#include <iostream>

int main() {
	int i = 0;
	double* dp  = &i; // Error: `dp` can only hold pointers to `double`
	int *ip = i; // Error: a pointer can only hold address to object.
	int *p = &i; // Ok

	return 0;
}