#include "io.h"
#include <iostream>
#include "custom-exc.hpp"
#include <sstream>
#include <limits>

int inputNumber() {
	int number = 0;
	std::string line;

	std::getline(std::cin, line);
	if (line.empty()) {
		not_int_exception exNotInt;
		throw exNotInt;
	}

	// In general.
	// The string-stream will find integer(s) and put it inside int-variable(s).
	// If fail to find any integer, the condition will be false.

	// In specific.
	// The "number" will consume only 1 integer (not to confuse with 1 digit) and end the string-stream immediately.
	// If the string-stream is end prematurely before reach the EOF, Throw and error.
	// But, If the "number" be able to consume all string in the stream, That's mean the string is only contain 1 integer.
	if (!(std::istringstream(line) >> number >> std::ws).eof()) {
		not_int_exception exNotInt;
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
		not_int_exception exNotInt;
		throw exNotInt;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)
	return { fromYear, toYear };
}

void displaying(std::string year_type, std::string fromY_toY) {
	std::cout << year_type << " = " << fromY_toY << std::endl;
}
