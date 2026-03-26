#ifndef WINDOWSPLATFORM_H
#define WINDOWSPLATFORM_H

#include "PlatformCommon.h"

namespace platform {
	class WinPF:public Platform {
	public:
		void outPut(std::string) override;

	};
}

#endif // !WINDOWSPLATFORM_H
