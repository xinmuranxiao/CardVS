#ifndef PLATFORM_H
#define PLATFORM_H

#include <Windows.h>

#include <iostream>

#include <string> 


namespace platform {
	class Platform {
	public:
		virtual void outPut(std::string) = 0;

		virtual std::string inPut() = 0;
	};
}

#endif // £¡PLATFORM_H