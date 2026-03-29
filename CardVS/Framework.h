#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include "Core.h"
#include "QTANDSHELL.h"

namespace framework {
	extern platform::Platform* R_Platform;

	void outPut_PlatForm(std::string msg);
	void inPut_PlatForm(std::string& msg);
}

namespace work {
	int Player_Judge(tools::Out& R_Out,
		tools::Input& R_Input,
		tools::File& log);
}

#endif //FRAMEWORK_H