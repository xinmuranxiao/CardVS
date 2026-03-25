#ifndef TOOLS_H
#define TOOLS_H

#include "common.h"

using OutFunc = void(*)(std::string);

namespace tools {
	class Storage {
	public:
		virtual PlayerType init_player() = 0;//初始化

		virtual PlayerType load_player() = 0;//读取
		virtual std::vector<int> _load() = 0;

		virtual int save() = 0;//保存

		void setOutPut(OutFunc func) {
			output = func;
		}

	protected:
		OutFunc output = nullptr;
	};
}

#endif //TOOLS_H