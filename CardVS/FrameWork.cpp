#include "FrameWork.h"

namespace framework {
	platform::Platform* R_Platform = nullptr;

	void outPut_PlatForm(std::string msg) {
		if (R_Platform != nullptr) R_Platform->outPut(msg);
	}

	/*void set_Storage_setOutPut(
		tools::Storage* storage) {
		if (storage == nullptr) {
			if (R_Platform != nullptr) {
				R_Platform->outPut("NULL");
				return;
			}
		}
		storage->setOutPut(outPut_PlatForm);
	}*/
}


namespace work {
	int Player_Judge(tools::Out& R_Out) {

		R_Out.out(std::string("请输入"));
		R_Out.out(std::string("1.读取"));
		R_Out.out(std::string("2.创建"));
		R_Out.out(std::string("请输入对应编号"));

		int judge;
		std::cin >> judge;
		return judge;
	}
}
