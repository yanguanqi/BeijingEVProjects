/// Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
// All rights reserved.
//
// IInitializer类的声明。
//
// 作 者：赵玻恩
// 完成日期：-
//
// 修改历史：
// [修改序列]	[修改日期]		[修改者]		[修改内容]
// 0			2014/01/13		赵玻恩		类定义
//
#ifndef _IINITIALIZER_INCLUDE__
#define _IINITIALIZER_INCLUDE__

#include "../interfacequerier.h"

class IInitializer : public InterfaceUnknown
{
	PluginInterface(IInitializer);
	virtual ~IInitializer() {}
	
	/// <summary>
	/// 初始化插件。
	/// </summary>
	/// <returns>是否成功。</returns>
	virtual bool initialize() = 0;

	/// <summary>
	/// 插件已准备就绪（所有插件已加载完毕）。
	/// 因为此时所有插件的initialize已执行完毕，所以可以正确获取到在initialize里注册的插件接口。
	/// 该函数不是必须实现。
	/// </summary>
	/// <returns></returns>
	virtual void ready(){}

	/// <summary>
	/// 反初始化插件。
	/// </summary>
	/// <returns>是否成功。</returns>
	virtual bool unInitialize() = 0;
};

#endif // _IINITIALIZER_INCLUDE__

