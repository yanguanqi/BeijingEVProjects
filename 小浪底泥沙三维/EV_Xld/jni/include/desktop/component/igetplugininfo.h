/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// IGetPluginInfo类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2014/01/13		赵玻恩		类定义
//
#ifndef _IGETPLUGININFO_INCLUDE__
#define _IGETPLUGININFO_INCLUDE__

#include "../interfacequerier.h"

class IGetPluginInfo : public InterfaceUnknown
{
	PluginInterface(IGetPluginInfo)
public:
	virtual ~IGetPluginInfo() {}
	
	/// <summary>
	/// 返回插件名称。
	/// </summary>
	/// <returns>插件名称。</returns>
	virtual const char* getPluginName() = 0;

	/// <summary>
	/// 返回插件描述。
	/// </summary>
	/// <returns>插件描述。</returns>
	virtual const char* getPluginDesc() = 0;

	/// <summary>
	/// 返回插件版本。
	/// </summary>
	/// <returns>插件版本。</returns>
	virtual const char* getPluginVersion() = 0;
};

#endif // _IGETPLUGININFO_INCLUDE__

