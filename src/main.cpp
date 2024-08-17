#include <iostream>
#include <string>
#include "menu.hpp"
#include "logic.hpp"
#include "io.hpp"

std::string calculate(int);

int main() {
	int number = 0;

	while (number != 5) {
		menu();
		try {
			number = inputNumber();
			std::pair<std::string, int> menu = selectMenu(number);
			if ("EXIT" == menu.first) {
				break;
			}
			else if ("Not found." == menu.first) {
				std::cout << "ERROR! not in the menu, Try again." << std::endl;
			}
			else {
				std::string result = calculate(menu.second);
				displaying(menu.first, result);
			}
		}
		catch (std::exception& e) {
			std::cerr << e.what();
			std::cout << " Try again." << std::endl;
		}
		number = 0;
	}
	std::cout << '\n';
	std::cout << "Thank you and goodbye.";
	return 0;
}

std::string calculate(int number) {
	std::string years;
	std::pair<int, int> buffer;

	switch (number) {
	case 1:
		std::cout << "Christ: ";
		years = christToBuddha(inputNumber());
		break;
	case 2:
		std::cout << "Christ x-x: ";
		buffer = inputNtoN();
		years = periodCtoB(buffer.first, buffer.second);
		break;
	case 3:
		std::cout << "Buddha: ";
		years = buddhaToChrist(inputNumber());
		break;
	case 4:
		std::cout << "Buddha x-x: ";
		buffer = inputNtoN();
		years = periodBtoC(buffer.first, buffer.second);
		break;
	default:
		break;
	}

	return years;
}
