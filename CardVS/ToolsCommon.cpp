#include "ToolsCommon.h"

namespace tools {
	void Storage::setOutPut(OutFunc func) {
		outPut = func;
	}

	void Storage::out(std::string str) {
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
}