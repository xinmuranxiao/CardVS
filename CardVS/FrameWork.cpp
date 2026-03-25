#include "FrameWork.h"

namespace framework {
	platform::Platform* R_Platform = nullptr;

	void outPut_PlatForm(std::string msg) {
		if (R_Platform != nullptr) R_Platform->outPut(msg);
	}

	void set_Storage_setOutPut(
		tools::Storage* storage) {
		if (storage == nullptr) {
			if (R_Platform != nullptr) {
				R_Platform->outPut("NULL");
				return;
			}
		}
		storage->setOutPut(
			outPut_PlatForm);
	}
}