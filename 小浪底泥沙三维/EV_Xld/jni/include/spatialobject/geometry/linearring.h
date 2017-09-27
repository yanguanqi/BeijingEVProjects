/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：CGeometry.h
* 摘    要：该文件是Geometry类声明
*
* 当前版本：1.0
* 作    者：王 威
* 完成日期：2012年09月21日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2012-09-21		王  威   1.0.0版本的内容声明
* 
**/

#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRY_LINEARRING_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRY_LINEARRING_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "linestring.h"
#include "point.h"
#include "coordinate.h"

// using namespace EarthView::World::Core;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				class EV_GEOMETRY_DLL CLinearRing
					:public CLineString
				{
				public:
					CLinearRing();
					virtual ~CLinearRing();
					CLinearRing(const CPoint* points,ev_uint32 size);					
ev_private:
					CLinearRing(const CCoordinate* coords,ev_uint32 size);
					CLinearRing(CNameValuePairList* pList);
				public:
					ev_bool isClockWise() const;
				private:
					CLinearRing(CLinearRing& obj);
				};
			}
		}
	}
}

#endif