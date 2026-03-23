#ifndef PLAYER_H
#define PLAYER_H

#include"common.h"

namespace player {
	class player {
	public:
		player();
	protected:
		int uid;
		int coin;
		std::string name;
	};
}

#endif //PLAYER_H