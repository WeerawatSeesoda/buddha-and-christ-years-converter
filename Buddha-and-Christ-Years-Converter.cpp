#include <iostream>

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

int main() {
	int year;
	int fromYear, toYear;
	int menuNumber;
	char to;

	do {
		menu();
		std::cout << "Select number then press ENTER : ";
		std::cin >> menuNumber;
		std::cin.clear(); // clear error state
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard 'bad' character(s)

		if (5 == menuNumber) { break; }

		switch (menuNumber) {
		case 1:
			std::cout << "Chirst year = ";
			std::cin >> year;
			std::cout << "Buddha year = " << year + 543 << std::endl;
			break;
		case 2:
			std::cout << "Chirst year x-x = ";
			std::cin >> fromYear >> to >> toYear;
			std::cout << "Buddha year = " << fromYear + 543 << "-" << toYear + 543 << std::endl;
			break;
		case 3:
			std::cout << "Buddha year = ";
			std::cin >> year;
			std::cout << "Christ year = " << year - 543 << std::endl;
			break;
		case 4:
			std::cout << "Buddha year x-x = ";
			std::cin >> fromYear >> to >> toYear;
			std::cout << "Christ year = " << fromYear - 543 << "-" << toYear - 543 << std::endl;
			break;
		default:
			std::cout << "Wrong number please select correctly number" << std::endl;
			break;
		}
	} while (menuNumber != 5);

	std::cout << '\n';
	std::cout << "Thank you and Good bye." << std::endl;

	system("pause");	// Windows
	//system("read");	// Linux
	return 0;
}
