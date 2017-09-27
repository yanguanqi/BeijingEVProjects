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
#ifndef _INTERFACEQUERIER_INCLUDE__
#define _INTERFACEQUERIER_INCLUDE__

#include "interfaceunknown.h"

template<class T>
class InterfaceQuerier
{
public:
	~InterfaceQuerier() {}

	InterfaceQuerier(InterfaceUnknown* unknown)
	{
		if (unknown)
		{
			this->unknown = dynamic_cast<T*>(unknown->queryInterface<T>());
		}
		else
		{
			this->unknown = 0;
		}
	}

	operator bool() const
	{
		return (unknown != 0);
	}

	T* operator->() const
	{
		return unknown;
	}

private:
	T* unknown;
};

#endif // _INTERFACEQUERIER_INCLUDE__
