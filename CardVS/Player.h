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

		void init(tools::Out& R_Out,
			tools::Input& R_Input,
			tools::File& log);

		void save(tools::Out& R_Out,
			tools::File& log);

		bool judge_yn(tools::Out& R_Out,
			tools::Input& R_Input,
			tools::File& log);
	protected:
		PlayerType player = { {0,"name"},0 };
	};
}

#endif //PLAYER_H