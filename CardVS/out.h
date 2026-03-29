#ifndef OUT_H
#define OUT_H

#include "ToolsCommon.h"

namespace tools {
	class Out:public Storage{
	public:
		void save_Player(const PlayerType& player);

		PlayerType load_player() override;

		void log(const std::string& str)override;
	};
}

#endif // !OUT_H
