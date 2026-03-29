#ifndef TOOLSCOMMON_H
#define TOOLSCOMMON_H

#include "common.h"

namespace tools {
	class Storage {
	public:
		virtual PlayerType load_player() = 0;//读取

		virtual void save_Player(const PlayerType& player) = 0;//保存
		
		//日志输出
		virtual void log(const std::string& str) = 0;

		//设置输出函数
		void setOutPut(OutFunc func);

		//输出函数
		void out(std::string str);

		//设置输入函数
		void setInPut(InputFunc func);

		//输入函数
		void input(std::string& str);
	protected:
		OutFunc outPut = nullptr;
		InputFunc inPut = nullptr;
		TimeFunc time = nullptr;
	};
}
#endif //TOOLS_H