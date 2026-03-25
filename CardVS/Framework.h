#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include "Core.h"

#include "Platform.h"

namespace framework {
	extern platform::Platform* g_platform;

	void platformLogBridge(std::string msg);
}

#endif //FRAMEWORK_H