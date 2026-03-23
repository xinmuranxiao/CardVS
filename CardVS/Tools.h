#ifndef TOOLS_H
#define TOOLS_H

#include "common.h"

namespace tools {
	class Storage {
	public:
		Storage(const std::string address_) :address(address_) {};//获取地址
		
		virtual int _load() = 0;//读取
		virtual std::vector<int> ___load() = 0;

		virtual int save() = 0;//保存
		virtual int init() = 0;//初始化
	protected:
		std::string address;//文件地址

		//mysql
	};
}

#endif //TOOLS_H