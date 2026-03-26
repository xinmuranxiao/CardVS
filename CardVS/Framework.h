#ifndef FRAMEWORK_H
#define FRAMEWORK_H

#include "Core.h"
#include "Platform.h"

namespace framework {
	extern platform::Platform* R_Platform;

	void outPut_PlatForm(std::string msg);

	//void set_Storage_setOutPut(
	//	tools::Storage* storage);
}

namespace work {
	int Player_Judge(tools::Out& R_Out);
}

#endif //FRAMEWORK_H