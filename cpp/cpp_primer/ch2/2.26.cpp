int main() {
	//const int buf;    // const must be initialized
	int cnt = 0; // ok;
	const int sz = cnt; // ok
	++cnt; // ok
	// ++sz; 			// Error const cannot be changed

	return 0;
}