#include <iostream>
#include <string>

class myexception : public std::exception
{
	virtual const char* what() const throw() {
		return "ERROR! Your input is not an integer.";
	}
} exNotInt;

void menu() {
	const char* str = R"V0G0N(
=============== MENU ==============
Christ to Buddha
	1) Christ year x
	2) Christ years x-y
Buddha to Christ
	3) Buddha year x
	4) Buddha years x-y
5) EXIT Program

Enter the menu number: )V0G0N";

	std::cout << str;
}

std::pair<std::string, int> selectMenu(int number) {
	std::string year_type;

	switch (number) {
	case 5:
		return { "EXIT" ,number };
	case 1:
		year_type = "Buddha year";
		break;
	case 2:
		year_type = "Buddha years";
		break;
	case 3:
		year_type = "Christ year";
		break;
	case 4:
		year_type = "Christ years";
		break;
	default:
		year_type = "Not found.";
		break;
	}
	return { year_type, number };
}

int buddhaToChrist(int year) {
	return year - 543;
}
int christToBuddha(int year) {
	return year + 543;
}
std::string periodBtoC(int from_year, int to_year) {
	std::string fromY_toY = std::to_string(buddhaToChrist(from_year)) + "-" + std::to_string(buddhaToChrist(to_year));
	return fromY_toY;
}
std::string periodCtoB(int from_year, int to_year) {
	std::string fromY_toY = std::to_string(christToBuddha(from_year)) + "-" + std::to_string(christToBuddha(to_year));
	return fromY_toY;
}

void displaying(std::string year_type, std::string fromY_toY) {
	std::cout << year_type << " = " << fromY_toY << std::endl;
}
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

std::string calculate(int number) {
	std::string years;
	std::pair<int, int> buffer;

	switch (number) {
	case 1:
		std::cout << "Christ: ";
		years = std::to_string(christToBuddha(inputNumber()));
		break;
	case 2:
		std::cout << "Christ x-x: ";
		buffer = inputNtoN();
		years = periodCtoB(buffer.first, buffer.second);
		break;
	case 3:
		std::cout << "Buddha: ";
		years = std::to_string(buddhaToChrist(inputNumber()));
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

int notmain() {
	int number = 0;

	while (number != 5) {
		menu();
		try {
			number = inputNumber();
			std::pair<std::string, int> menu = selectMenu(number);
			if ("EXIT" == menu.first) {
				break;
			} else if ("Not found." == menu.first) {
				std::cout << "ERROR! not in the menu, Try again." << std::endl;
			} else {
				std::string result = calculate(menu.second);
				displaying(menu.first, result);
			}
		} catch (std::exception& e) {
			std::cerr << e.what();
			std::cout << " Try again." << std::endl;
		}
		number = 0;
	}
	std::cout << '\n';
	std::cout << "Thank you and goodbye.";
	return 0;
}
