#include "WindowsPlatform.h"

namespace platform {
	void WinPF::Sys(const std::string& str) {
		system(str.c_str());
	}
}