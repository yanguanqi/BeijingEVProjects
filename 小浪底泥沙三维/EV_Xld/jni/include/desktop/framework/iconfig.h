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
// 0			2014/01/10		赵玻恩		类定义
//
#ifndef _ICONFIG_INCLUDE__
#define _ICONFIG_INCLUDE__

#include "../interfacequerier.h"
#include "frameworkdefs.h"

class IConfigWidget
{
public:
	~IConfigWidget(){}

	/// <summary>
	/// 获取配置界面的widget。
	/// !!! 需要注意的是该接口可能被调用多次，所以要保证多次调用该函数返回的QWidget是同一个。
	/// </summary>
	/// <returns>QWidget对象。</returns>
	virtual FrameworkDefines::WindowHandle widget() = 0;

	/// <summary>
	/// 返回配置界面名称。
	/// </summary>
	/// <returns>界面名称。</returns>
	virtual const char* name() const = 0;

	/// <summary>
	/// 更新配置界面。该函数一般在配置改变、需要更新界面元素时被调用。
	/// </summary>
	/// <returns></returns>
	virtual void updateContents() = 0;

	/// <summary>
	/// 保存配置信息。将界面上的配置信息保存到配置文件。
	/// </summary>
	/// <returns>保存是否成功。</returns>
	virtual bool save() = 0;

	/// <summary>
	/// 返回界面上的配置信息是否改变。
	/// </summary>
	/// <returns>配置信息是否改变。</returns>
	virtual bool isChanged() = 0;

	/// <summary>
	/// 设置配置界面接口，该接口提供配置界面和必要的信息。
	/// </summary>
	/// <param name="IConfigWidget">配置界面接口对象。</param>
	/// <returns></returns>
	virtual bool isRestartRequired() = 0;

	/// <summary>
	/// 重置设置，恢复默认值。
	/// </summary>
	/// <returns></returns>
	virtual void reset() = 0;
};

class IConfig : public InterfaceUnknown
{
	PluginInterface(IConfig)
public:
	virtual ~IConfig(){}
	
	/// <summary>
	/// 显示配置窗口，这里显示的是插件自己的配置界面。
	/// </summary>
	/// <returns></returns>
	virtual void showConfigDialog() = 0;

	/// <summary>
	/// 获取配置文件路径，这里获取的是每个插件自己的配置文件存放路径。
	/// *** 该函数不可重入。
	/// </summary>
	/// <returns>配置文件路径。</returns>
	virtual const char* configPath() const = 0;

	/// <summary>
	/// 设置配置界面接口，该接口由使用者实现，提供配置界面和必要的信息。
	/// </summary>
	/// <param name="IConfigWidget">配置界面接口对象。</param>
	/// <returns></returns>
	virtual void setConfigWidget(IConfigWidget* cw) = 0;

	/// <summary>
	/// 获取配置信息是否改变（用户是否点击应用或者确定），
	/// 返回的结果在调用此函数之后会被重置（即每次保存之后第一次调用返回的结果为true）。
	/// </summary>
	/// <returns>配置信息是否改变。</returns>
	virtual bool isConfigChanged() const = 0;
};

#endif // _ICONFIG_INCLUDE__

