#include "File.h"


namespace tools {
	PlayerType File::load_player() {
		std::ifstream file(address);
		if (!file.is_open()) {
			out("file error or file haven't");
			return { {-1,"error"},0};
		}
		PlayerType player;
		file >> player.first.first 
			>> player.first.second 
			>> player.second;
		file.close();
		return player;
	}

	PlayerType File::init_player() {
		PlayerType newPlayer = { {0,std::string("name")},0 };
		outPut(std::string("请输入用户名称"));
		return newPlayer;
	}
}