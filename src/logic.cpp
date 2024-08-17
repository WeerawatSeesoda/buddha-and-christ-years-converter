#include <format>
#include <string>
#include "logic.hpp"

std::string getPeriod(std::string mode, int from_year, int to_year) {
	std::string str = "huh?";
	if (mode == "BtoC") {
		str = std::format("{}-{}", convertYear("BtoC", from_year), convertYear("BtoC", to_year));
	}
	if (mode == "CtoB") {
		str = std::format("{}-{}", convertYear("CtoB", from_year), convertYear("CtoB", to_year));
	}
	return str;
}

std::string convertYear(std::string mode, int year) {
	std::string str = "huh?";
	if (mode == "BtoC") {
		str = std::to_string(year - 543);
	}
	if (mode == "CtoB") {
		str = std::to_string(year + 543);
	}
	return str;
}
