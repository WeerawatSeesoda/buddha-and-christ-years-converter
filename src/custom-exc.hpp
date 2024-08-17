#pragma once
#include <exception>

class not_int_exception : public std::exception {
	virtual const char* what() const throw() {
		return "ERROR! Your input is not an integer.";
	}
};
