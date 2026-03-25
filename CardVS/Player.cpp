#include "player.h"
#include "File.h"

namespace player{
	Player::Player() {
		tools::File file;
		player = file.load_player();
		if (player.first.first == -1) {
			file.out(std::string
			("未初始化，请初始化或者文件打开失败"));
			player = file.init_player();
		}
	} 
}