#include "File.h"


namespace tools {
	PlayerType File::load_player() {
		std::ifstream file(address);//打开文件
		if (!file.is_open()) {//判断文件是否有问题
			out("file error or file haven't");
			return { {-1,"error"},0};
		}
		PlayerType player;//临时存储变量
		file >> player.first.first 
			>> player.first.second 
			>> player.second;//读取
		file.close();//关闭文件
		return player;//返回用户
	}

	PlayerType File::init_player() {//初始化
		PlayerType newPlayer = { {0,std::string("name")},0 };//初始化
		outPut(std::string("请输入用户名称"));
		std::cin >> newPlayer.first.first;//输入名称
		outPut(std::string());
		return newPlayer;//返回生成的用户
	}

	void File::change(const std::string address_) {
		address = address_;
	}

	void File::log(const std::string& str) {
		
		//输出
		std::ofstream log("log.txt", std::ios::app);
		if (!log.is_open()) {
			std::cout << ss.str() << "no log.txt" << std::endl;
		}
		log << ss.str() << " " << str << std::endl;
	}
}