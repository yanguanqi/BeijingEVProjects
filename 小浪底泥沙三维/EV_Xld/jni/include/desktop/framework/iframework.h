/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// 类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2014/01/13		赵玻恩		类定义
//
#ifndef _IFRAMEWORK_INCLUDE__
#define _IFRAMEWORK_INCLUDE__

#include "../interfacequerier.h"

class IFramework : public InterfaceUnknown
{
	PluginInterface(IFramework)
public:
	virtual ~IFramework() {}
	
	/// <summary>
	/// 注册接口供其他插件使用，
	/// 注册的接口归类在本插件下，其他插件通过本插件的名称查询该接口。
	/// </summary>
	/// <param name="itfc">接口对象。</param>
	/// <returns></returns>
	virtual void registerInterface(InterfaceUnknown* itfc) = 0;

	/// <summary>
	/// 获取指定插件的接口。
	/// </summary>
	/// <param name="name">插件名称。</param>
	/// <returns>InterfaceUnknown对象，可以通过此对象配合InterfaceQuerier查询该插件的所有接口。</returns>
	virtual InterfaceUnknown* componentInterface(const char* name) = 0;
};

#endif // _IFRAMEWORK_INCLUDE__

