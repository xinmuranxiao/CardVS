#include "SHELL.h"

namespace platform{
	void Shell::outPut(const std::string& str) {
		std::cout << str << std::endl;
	}

	void Shell::inPut(std::string& str) {
		std::cin >> str;
	}
}