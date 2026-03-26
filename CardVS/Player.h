#ifndef PLAYER_H
#define PLAYER_H

#include"common.h"

namespace player {
	class Player {
	public:
		void load();

		//void init();

		bool judge_yn();

	protected:
		PlayerType player;
	};
}

#endif //PLAYER_H