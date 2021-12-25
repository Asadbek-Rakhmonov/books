#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item curItem, item;
	int cnt = 0;
	if(std::cin >> curItem) {
		++cnt;
		while(std::cin >> item) {
			if(curItem.isbn() == item.isbn())
				++cnt;
			else {
				std::cout << "The book " << curItem.isbn() << " counted "<< cnt << " times" << std::endl;
				curItem = item;
				cnt = 1;
			}
		}
		std::cout << "This book counted " << curItem.isbn() << " counted " << cnt << " times" << std::endl;
	}

	return 0;
}