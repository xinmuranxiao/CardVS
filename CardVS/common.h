#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include <time.h>

using OutFunc = void(*)(const std::string&);
using InputFunc = void(*)(std::string&);
using TimeFunc = void(*)(std::string&);
using SysFunc = void(*)(const std::string&);

using PlayerType = std::pair<
	std::pair<uint64_t, std::string>,
	long long>;

#endif //COMMON_H