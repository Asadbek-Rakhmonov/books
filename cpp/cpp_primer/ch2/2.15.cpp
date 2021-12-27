int main() {
	int ival = 1.01; // ok
	//int &rval1 = 1.01; reference cannot be bound to literal
	int &rval2 = ival; // ok 
	//int &rval3; reference must be initialized
}