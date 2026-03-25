#ifndef PLATFORMCOMMON_H
#define PLATFORMCOMMON_H

#include "PlatformCommon.h"

namespace platform {
	class Platform {
	public:
		virtual void output(std::string) = 0;
	};
}

#endif // ! PLATFORMCOMMON_H
