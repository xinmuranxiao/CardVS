#ifndef SHELL_H
#define SHELL_H

#include "Platform.h"

namespace platform {
	class Shell :public WinPF {
	public:
		void outPut(std::string) override;

		void inPut(std::string& str) override;
	};
}

#endif // !SHELL_H
