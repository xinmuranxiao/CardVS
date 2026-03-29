#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"

#include "Tools.h"

namespace player {
	class Player {
	public:
		void load(tools::Out& R_Out,
			tools::Input& R_Input,
			tools::File& log);

		//void init();

		bool judge_yn(tools::Out& R_Out,
			tools::Input& R_Input,
			tools::File& log);

	protected:
		PlayerType player;
	};
}

#endif //PLAYER_H