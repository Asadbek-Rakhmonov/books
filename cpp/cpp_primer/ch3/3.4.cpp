#include <iostream>
#include <string>
using std::cin; using std::cout; using std::string; using std::getline; using std::endl; 

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	if(s1 == s2)
		cout << "Strings are equal" << endl;
	else if(s1 > s2)
		cout << "s1 is larger than s2" << endl;
	else if(s1 < s2)
		cout << "s2 is larger than s1" << endl;

	if(s1.size() == s2.size()) 
		cout << "Strings are equal" << endl;
	else if(s1.size() > s2.size()) 
		cout << "size of s1 is larger than s2" << endl;
	else if(s1.size() < s2.size()) 
		cout << "size of s2 is larger than s1" << endl;

	return 0;
}