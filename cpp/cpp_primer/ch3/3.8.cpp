#include <iostream>
#include <string>
using std::string; using std::cin; using std::cout;
using std::endl;


int main() {
	string s;
	cin >> s;
	// range for
	/*
	for(auto &i : s)
		i = 'x';
	cout << s << endl;
	*/

	// while
	/*
	if(!s.empty()) {
		int i = 0;
		while(i < s.size()) {
			s[i] = 'x';
			++i;
		}
	}
	cout << s << endl;
	*/
	
	// for
	if(!s.empty()) {
		for(int i = 0; i != s.size(); ++i)
			s[i] = 'x';
	}
	cout << s << endl;
	return 0;
}