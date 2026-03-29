#ifndef WINDOWSPLATFORM_H
#define WINDOWSPLATFORM_H

#include "PlatformCommon.h"
#include <Windows.h>

namespace platform {
	class WinPF:public Platform {
	public:
		void Sys(const std::string& str);
	};
}

#endif // !WINDOWSPLATFORM_H
