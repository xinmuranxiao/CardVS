#include "FrameWork.h"

int main() {
	framework::R_Platform = 
		new platform::Shell();//创建一个WinPF类型的

	tools::Out R_Out;//创建main输出对象
	tools::Input R_Input;


	R_Out.setOutPut(framework::outPut_PlatForm);//绑定Out

	R_Input.setInPut(framework::inPut_PlatForm);

	std::string test;

	R_Input.input(test);

	R_Out.out(test);

 //	player::Player Player;//创建用户

	//int judge = work::Player_Judge(R_Out);

	//if (judge == 1) Player.load(R_Out);

	//else if (judge == 2)Player.init();

	return 0;
}