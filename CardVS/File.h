#ifndef FILE_H
#define FILE_H

#include "Tools.h"

namespace tools {
	class File :public Storage {//file 继承 stronge 
	public:
		File(const std::string address_ = 
			std::string("player.txt"))
			:address(address_) {};//获取地址

		PlayerType init_player()override;

		PlayerType load_player()override;
		std::vector<int> _load()override;

		int save()override;
	private:
		std::string address;//文件地址
	};
}

#endif // !FILE_H
