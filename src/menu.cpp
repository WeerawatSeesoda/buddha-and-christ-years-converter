#include "menu.hpp"
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
