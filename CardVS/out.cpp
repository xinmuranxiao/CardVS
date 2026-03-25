#include "out.h"

namespace tools {
	PlayerType Out::init_player() {
		return PlayerType{};
	}

	PlayerType Out::load_player() {
		return PlayerType{};
	}

	void Out::out(std::string str) {
		if (outPut != nullptr)
		{
			outPut(str);
		}
	}

}