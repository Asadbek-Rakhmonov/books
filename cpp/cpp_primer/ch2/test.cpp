#include <iostream>
#include <string>
using std::string; using std::cout; using std::getline; using std::cin;

using namespace std;
int main() {
	string s;
	//cin >> s;
	getline(cin, s);
	//if(!s.empty()) cout << "empty";
	auto size = s.size();
	cout << s << '\n' << size;
}