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
#ifndef _INTERFACEUNKNOWN_INCLUDE__
#define _INTERFACEUNKNOWN_INCLUDE__

#include "interfacefactory.h"
#include "interfacequerier.h"

#define PluginInterface(x) \
	public: \
	virtual const char* onInterfaceName() {\
	return typeid(x).name(); \
	}

class InterfaceUnknown
{
public:
	InterfaceUnknown()
	{
		this->factory = 0;
	}

	virtual ~InterfaceUnknown() {}

	virtual const char* onInterfaceName() = 0;

	template<class T>
	InterfaceUnknown* queryInterface()
	{
		if (factory)
		{
			return factory->queryInterface<T>();
		}

		return 0;
	}

	void attachFactory(InterfaceFactory* factory)
	{
		this->factory = factory;
	}

private:
	InterfaceFactory* factory;
};

#endif // _INTERFACEUNKNOWN_INCLUDE__
