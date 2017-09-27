/**
* Copyright (C) 2004-2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称: mapcontrolspace.h
* 摘    地图控件空间
*
* 版    本：1.0.0
* 创建日期：[4/1/2013]
* 作    者：李翔
*
* 修改历史：
* [修改序列]    [修改日期]       [修改者]   [修改内容]
*  1        4/1/2013   李翔    1.0.0版本的内容声明
**/
#ifndef _MAP_CONTROL_SPACE_H_
#define _MAP_CONTROL_SPACE_H_

#include "frameworkproxy_config.h"
#include "spatialframeworkproxy/controlspace.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ISpatialControl;
			}
		}
	}
}
class EV_FRAMEWORKPROXY_DLL CMapControlSpace : public CControlSpace
{
public:
	CMapControlSpace( EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl );
	~CMapControlSpace();

protected:
	/// <summary>
	/// 初始化事件响应
	/// </summary>
	/// <returns></returns>
	/// <memo></memo>
	ev_void onInitialize();
	virtual ev_void onInitialize( _in ev_uint32 toolbarEnabled );
ev_private:
	CMapControlSpace( _in EarthView::World::Core::CNameValuePairList* list );
};

#endif
