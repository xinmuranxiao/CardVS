#ifndef TOOLS_H
#define TOOLS_H

#include "common.h"

using OutFunc = void(*)(std::string);

namespace tools {
	class Storage {
	public:
		virtual PlayerType init_player() = 0;//≥ı ºªØ

		virtual PlayerType load_player() = 0;//∂¡»°

		void setOutPut(OutFunc func);

		void out(std::string str);

	protected:
		OutFunc outPut = nullptr;
	};
}
#endif //TOOLS_H