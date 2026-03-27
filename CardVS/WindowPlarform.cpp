#include "WindowsPlatform.h"

namespace platform{
	void WinPF::outPut(std::string str) {
		std::cout << str << std::endl;
	}

	std::string WinPF::inPut() {
		std::string in;
		std::cin >> in;
		return in;
	}
}