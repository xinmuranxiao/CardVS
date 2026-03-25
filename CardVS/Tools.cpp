#include "Tools.h"

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
}