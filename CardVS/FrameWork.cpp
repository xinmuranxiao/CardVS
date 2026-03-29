#include "FrameWork.h"

namespace framework {
	platform::Platform* R_Platform = nullptr;

	void outPut_PlatForm(std::string msg) {
		if (R_Platform != nullptr) R_Platform->outPut(msg);
	}

	void inPut_PlatForm(std::string& msg) {
		if (R_Platform != nullptr) R_Platform->inPut(msg);
	}

}


namespace work {
	int Player_Judge(tools::Out& R_Out, 
		tools::Input& R_Input,
		tools::File& log) {

		R_Out.out(std::string("请输入"));
		R_Out.out(std::string("1.读取"));
		R_Out.out(std::string("2.创建"));
		R_Out.out(std::string("请输入对应编号"));

		std::string judge;
		R_Input.input(judge);
		return judge[0]-'0';
	}
}
