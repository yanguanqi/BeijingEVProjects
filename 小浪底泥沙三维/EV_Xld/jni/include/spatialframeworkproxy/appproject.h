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
// 0			2013/12/07		赵玻恩		类定义
//
#ifndef _APPPROJECT_INCLUDE__
#define _APPPROJECT_INCLUDE__

#include "frameworkproxy_config.h"
#include "core/object.h"
#include "spatialframeworkproxy/forwarddeclare.h"


namespace EarthView{namespace World{namespace Utilities{

	class AppProjectHelper;
	class EV_FRAMEWORKPROXY_DLL AppProject : public EarthView::World::Core::CBaseObject
	{
	public:
		/// <summary>
		/// 构造函数。
		/// </summary>
		/// <returns></returns>
		AppProject();

		/// <summary>
		/// 析构函数。
		/// </summary>
		/// <returns></returns>
		~AppProject();

		/// <summary>
		/// 打开工程文件。
		/// </summary>
		/// <param name="filepath">文件路径+文件名。</param>
		/// <returns>打开是否成功。</returns>
		bool open(const EVString& filepath);

		/// <summary>
		/// 关闭工程文件。
		/// </summary>
		/// <returns></returns>
		void close();

		/// <summary>
		/// 创建工程文件。
		/// </summary>
		/// <returns>创建是否成功。</returns>　　
		bool create();

		/// <summary>
		/// 保存已经打开的工程文件。
		/// </summary>
		/// <returns>保存是否成功。</returns>
		bool save();

		/// <summary>
		/// 指定文件名保存工程文件。（另存为）
		/// </summary>
		/// <param name="filepath">文件路径+文件名。</param>
		/// <returns>保存是否成功。</returns>
		bool saveAs(const EVString& filepath);

	private:
		AppProjectHelper* helper;
		// 请不要放置其他成员变量。

ev_private:
		AppProject(AppProject&);
		AppProject(_in EarthView::World::Core::CNameValuePairList *pList);
	};

}}}

#endif // _APPPROJECT_INCLUDE__

