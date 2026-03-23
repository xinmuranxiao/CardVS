#ifndef FILE_H
#define FILE_H

#include "Tools.h"

namespace tools {
	class File :public Storage {//file ผฬณะ stronge 
	public:
		int init()override;
		int save()override;
		int load()override;
	};
}

#endif // !FILE_H
