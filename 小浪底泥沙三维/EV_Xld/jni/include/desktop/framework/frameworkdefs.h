// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// 类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2014/11/05		赵玻恩		类定义
//
#ifndef _FRAMEWORKDEFS_INCLUDE__
#define _FRAMEWORKDEFS_INCLUDE__

#ifdef _WIN32
#  include "winsock2.h"
#  include "windows.h"
#endif

namespace FrameworkDefines{

#ifdef _WIN32
	typedef HWND WindowHandle;
#else
	typedef unsigned long  WindowHandle;
#endif

}

#endif // _FRAMEWORKDEFS_INCLUDE__

