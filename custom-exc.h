#pragma once
#include <exception>

class myexception : public std::exception
{
	virtual const char* what() const throw() {
		return "ERROR! Your input is not an integer.";
	}
} exNotInt;
