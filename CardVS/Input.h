#ifndef INPUT_H
#define INPUT_H

#include "ToolsCommon.h"

namespace tools{
	class Input :public Storage {
	public:
		PlayerType init_player();

		PlayerType load_player();
	};
}

#endif // !INPUT_H
