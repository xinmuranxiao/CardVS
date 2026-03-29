#include "ToolsCommon.h"

namespace tools {
	void Storage::setOutPut(OutFunc func) {
		outPut = func;
	}

	void Storage::out(const std::string& str) {
		if (outPut != nullptr)
		{
			outPut(str);
		}
	}

	void Storage::setInPut(InputFunc func) {
		inPut = func;
	}

	void Storage::input(std::string& str) {
		if (inPut != nullptr)
		{
			inPut(str);
		}
	}

	void Storage::setSys(SysFunc func) {
		Sys = func;
	}

	void Storage::System(const std::string& str) {
		if (Sys != nullptr)
		{
			Sys(str);
		}
	}
}