#include "FrameWork.h"

int main() {
	framework::R_Platform = 
		new platform::Shell();//创建一个WinPF类型的

	tools::Out R_Out;//创建main输出对象
	tools::Input R_Input;//创建输入对象
	tools::File log;//创建日志对象

	R_Out.setOutPut(framework::outPut_PlatForm);//绑定Out
	R_Input.setInPut(framework::inPut_PlatForm);//绑定input
	R_Out.setSys(framework::Sys_Platform);

	log.log(std::string("start"));

 	player::Player Player;//创建用户

	while (1) {
		R_Out.System(std::string("cls"));

		int judge = work::Player_Judge(R_Out, R_Input, log);

		if (judge == 0)break;

		else if (judge == 1) Player.load(R_Out, R_Input, log);

		else if (judge == 2)Player.init(R_Out, R_Input, log);

		else if (judge == 3)Player.save(R_Out, log);

		else { 
			R_Out.out(std::string("error\n请重试")); 
			log.log(std::string("on error input"));
		}
	}

	log.log(std::string("stoped"));

	return 0;
}