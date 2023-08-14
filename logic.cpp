#include "logic.h"

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
