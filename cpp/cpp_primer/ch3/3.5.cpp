#include <iostream>
#include <string>
using std::cin; using std::cout; using std::string; using std::getline; using std::endl;

int main() {
	string s, sum;
	while(cin >> s)
		sum += " " + s;
	cout << sum << endl;

	return 0;
}