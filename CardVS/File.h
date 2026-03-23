#ifndef FILE_H
#define FILE_H

#include "Tools.h"

namespace tools {
	class File :public Storage {//file ผฬณะ stronge 
	public:
		int init()override;

		int _load()override;
		std::vector<int> ___load() override;

		int save()override;
	};
}

#endif // !FILE_H
