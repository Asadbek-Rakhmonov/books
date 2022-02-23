#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout;
using std::endl;

int main() {
	string s;
	cin >> s;
	for(auto &i : s)
		i = 'x';
	cout << s << endl;
	return 0;
}