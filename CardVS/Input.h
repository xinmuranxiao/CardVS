#ifndef INPUT_H
#define INPUT_H

#include "ToolsCommon.h"

namespace tools{
	class Input :public Storage {
	public:
		void save_Player(const PlayerType& player);

		PlayerType load_player();

		void log(const std::string& str)override;
	};
}

#endif // !INPUT_H
