#include "WindowsPlatform.h"

namespace platform {
	void WinPF::time(std::string& str) {
		//获取系统时钟当前时间点
		auto now = std::chrono::system_clock::now();
		//转换为 time_t
		std::time_t now_time = std::chrono::system_clock::to_time_t(now);
		//本地时间 + 格式化
		std::stringstream ss;
		ss << std::put_time(std::localtime(&now_time), "%Y-%m-%d %H:%M:%S");
	}
}