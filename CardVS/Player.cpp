#include "player.h"
#include "File.h"

namespace player{
	Player::Player() {
		tools::File file;
		player = file.load_player();
		if (player.first.first == -1) {
			file.out("未初始化，请初始化");
			player = file.init_player();
		}
	} 
}