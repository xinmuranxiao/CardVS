#ifndef TOOLSCOMMON_H
#define TOOLSCOMMON_H

#include "common.h"

namespace tools {
	class Storage {
	public:
		virtual PlayerType load_player() = 0;//∂¡»°

		virtual void log(const std::string& str) = 0;

		void setOutPut(OutFunc func);

		void out(std::string str);

		void setInPut(InputFunc func);

		void input(std::string& str);
	protected:
		OutFunc outPut = nullptr;
		InputFunc inPut = nullptr;
		TimeFunc time = nullptr;
	};
}
#endif //TOOLS_H