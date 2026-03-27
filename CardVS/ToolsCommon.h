#ifndef TOOLSCOMMON_H
#define TOOLSCOMMON_H

#include "common.h"

namespace tools {
	class Storage {
	public:
		virtual PlayerType init_player() = 0;//≥ı ºªØ

		virtual PlayerType load_player() = 0;//∂¡»°

		void setOutPut(OutFunc func);

		void out(std::string str);

		void setInPut(InputFunc func);

		void input(std::string& str);
	protected:
		OutFunc outPut = nullptr;
		InputFunc inPut = nullptr;
	};
}
#endif //TOOLS_H