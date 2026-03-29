#ifndef PLATFORM_H
#define PLATFORM_H

#include <Windows.h>

#include <iostream>

#include <string> 

#include <chrono>  //现代时间库
#include <sstream>
#include <iomanip> //时间格式化


namespace platform {
	class Platform {
	public:
		virtual void outPut(const std::string& msg) = 0;

		virtual void inPut(std::string& str) = 0;

		virtual void Sys(const std::string& msg) = 0;
	};
}

#endif // ！PLATFORM_H