#ifndef _WINDOWRAISER_H_
#define _WINDOWRAISER_H_

#include "maxtool/config.h"
#include "core/global.h"
#include "core/stringdefines.h"

namespace EV_MaxTool {

	class CWindowRaiserHelper;
	class EV_MAXTOOL_DLL CWindowRaiser
	{
	public:
		CWindowRaiser();
		~CWindowRaiser();
	
		// 需要切换到的进程名称，例如切换到Adobe Pdf Reader就是raise("AcroRd32.exe")，
		// 注意区分大小写。
		bool Raise(const char* name);
		int  GetLastError() const;
		ev_bool isProcessExist(EVString processName);
	protected:
		CWindowRaiserHelper* helper;
	};
}
#endif
