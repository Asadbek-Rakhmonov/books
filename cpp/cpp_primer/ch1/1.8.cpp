#include <iostream>

int main() {
std::cout<< "/*"; // legal
std::cout << "*/"; // legal
// missing " character
std::cout << /* "*/" */; 
std::cout << /*  "*/" /* "/*"  */; // comment does not work inside " ".
}