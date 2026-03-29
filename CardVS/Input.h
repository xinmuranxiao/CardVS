#ifndef INPUT_H
#define INPUT_H

#include "ToolsCommon.h"

namespace tools{
	class Input :public Storage {
	public:
		PlayerType load_player();

		void log(const std::string& str)override;
	};
}

#endif // !INPUT_H
