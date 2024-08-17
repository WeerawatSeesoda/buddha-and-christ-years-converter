#include "logic.h"

std::string periodBtoC(int from_year, int to_year) {
	std::string fromY_toY = buddhaToChrist(from_year) + "-" + buddhaToChrist(to_year);
	return fromY_toY;
}
std::string periodCtoB(int from_year, int to_year) {
	std::string fromY_toY = christToBuddha(from_year) + "-" + christToBuddha(to_year);
	return fromY_toY;
}

std::string buddhaToChrist(int year) {
	return std::to_string(year - 543);
}
std::string christToBuddha(int year) {
	return std::to_string(year + 543);
}
