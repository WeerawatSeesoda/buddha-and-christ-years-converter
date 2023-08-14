#include "io.h"
#include <iostream>
#include "custom-exc.h"

int inputNumber() {
	int number = 0;

	if (!(std::cin >> number)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)
		throw exNotInt;
	}
	return number;
}

std::pair<int, int> inputNtoN() {
	int fromYear = 0;
	int toYear = 0;
	char to = ' ';

	if (!(std::cin >> fromYear >> to >> toYear)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)
		throw exNotInt;
	}
	return { fromYear, toYear };
}

void displaying(std::string year_type, std::string fromY_toY) {
	std::cout << year_type << " = " << fromY_toY << std::endl;
}
