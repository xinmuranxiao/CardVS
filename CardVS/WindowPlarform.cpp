#include "WindowsPlatform.h"

namespace platform{
	void WinPF::outPut(std::string str) {
		std::cout << str << std::endl;
	}

	template<typename T>
	T WinPF::inGet() {
		T inData;
		std::cin >> inData;
		return T;
	}
}