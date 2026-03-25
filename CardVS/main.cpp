#include "FrameWork.h"

using namespace std;
int main() {
	framework::R_Platform = 
		new platform::WinPF();

	tools::Out R_Out;

	R_Out.setOutPut(framework::outPut_PlatForm);

	R_Out.out("³É¹¦£¡");

	return 0;
}