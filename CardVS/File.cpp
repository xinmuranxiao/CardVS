#include "File.h"


namespace tools {
	PlayerType File::load_player() {
		std::ifstream file(address);
		if (!file.is_open()) {
			std::cout << "file error" << std::endl;
			return { {-1,"error"},0};
		}
		PlayerType player;
		file >> player.first.first 
			>> player.first.second 
			>> player.second;
		return player;
		file.close();
	}

	PlayerType File::init_player() {
	}
}