#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"

#include "Tools.h"

namespace player {
	class Player {
	public:
		void load(tools::Out& R_Out);

		//void init();

		bool judge_yn();

	protected:
		PlayerType player;
	};
}

#endif //PLAYER_H