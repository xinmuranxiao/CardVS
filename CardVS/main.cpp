#include "FrameWork.h"

int main() {
	framework::R_Platform = 
		new platform::WinPF();//创建一个WinPF类型的

	tools::Out R_Out;//创建main输出对象


	R_Out.setOutPut(framework::outPut_PlatForm);//绑定Out

	player::Player Player;//创建用户

	int judge = work::Player_Judge(R_Out);

	if (judge == 1) Player.load();

	//else if (judge == 2)Player.init();

	return 0;
}