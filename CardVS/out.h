#ifndef OUT_H
#define OUT_H

#include "Tools.h"

namespace tools {
	class Out:public Storage{
	public:
		PlayerType init_player() override;

		PlayerType load_player() override;
	};
}

#endif // !OUT_H
