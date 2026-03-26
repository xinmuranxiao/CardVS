#include "player.h"
#include "File.h"

namespace player{
	void Player::load() {//读取用户
	re:		tools::File file;//使用file工具类
		file.out(std::string("请输入文件路径\n") +
			std::string("默认exe同路径\n") +
			std::string("若使用自定义路径请输入y(不区分大小写)") +
			std::string("不使用按任意字符"));
		if (judge_yn()) { 
			std::string address_;
			std::cin >> address_;
			file.change(address_);
		}
		player = file.load_player();//调用读取
		if (player.first.first == -1) {
			file.out(std::string
			("未初始化，请初始化或者文件打开失败"));
			file.out(std::string("1.重试"));
			file.out(std::string("2.初始化"));
			file.out(std::string
			("请输入编号或者按其他任意数字退出"));
			int judge;
			std::cin >> judge;
			if (judge == 1)goto re;
			else if (judge == 2)
				player = file.init_player();
		}
	} 
	bool Player::judge_yn() {
		char YON;
		std::cin >> YON;
		return YON - 'y' == 0 || YON - 'Y' == 0;
	}
}