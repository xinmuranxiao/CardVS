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

	void File::change(const std::string address_) {
		address = address_;
	}

	void File::log(const std::string& str) {
		std::ofstream log("log.txt",std::ios::app);

		//获取unix时间
		std::time_t now = std::time(nullptr);//后续可能会使用20xx_xx_xx

		//输出
		log << now << " " << str << std::endl;
	}
}