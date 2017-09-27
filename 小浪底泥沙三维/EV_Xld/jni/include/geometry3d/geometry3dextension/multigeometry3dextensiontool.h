#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIGEOMETRY3DEXTERNSIONTOOL_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIGEOMETRY3DEXTERNSIONTOOL_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"

#include "geometry3d/geometry3d_config.h"
#include "spatialobject/geometry/linestring.h"
////#include "geometry3dextension/multigeometry3dextension.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CMultiPoint3DExtension;
			class CMultiPolyline3DExtension;
			class CMultiPolygon3DExtension;

			/// <summary>
			/// 二维图形扩展工具类
			/// 管理图形扩展方法
			/// </summary>
			class EV_GEOMETRY3D_DLL CMultiGeometry3DExtensionTool : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMultiGeometry3DExtensionTool();

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiGeometry3DExtensionTool(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMultiGeometry3DExtensionTool();

			public:
				/// <summary>
				/// 将点用公告板符号拉伸成公告板
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionPointToBillboard(const EarthView::World::Geometry3D::CMultiPoint3DExtension* pointExtension);
				/// <summary>
				/// 将点用图标符号拉伸成图标元素
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionPointToIcon(const EarthView::World::Geometry3D::CMultiPoint3DExtension* pointExtension);
				/// <summary>
				/// 将点用图片符号拉伸成图片元素
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionPointToPhoto(const EarthView::World::Geometry3D::CMultiPoint3DExtension* pointExtension);
				/// <summary>
				/// 将点用模型符号拉伸成模型
				/// </summary>
				/// <param name="pointExtension">点扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionPointToModel(const EarthView::World::Geometry3D::CMultiPoint3DExtension* pointExtension);
				/// <summary>
				/// 将线用线符号拉伸成立方体
				/// </summary>
				/// <param name="lineExtension">线扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionLineToSquard(const EarthView::World::Geometry3D::CMultiPolyline3DExtension* lineExtension);
				/// <summary>
				/// 将线用线符号拉伸成墙
				/// </summary>
				/// <param name="lineExtension">线扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionLineToSurface(const EarthView::World::Geometry3D::CMultiPolyline3DExtension* lineExtension);
				/// <summary>
				/// 将线用线符号拉伸成管道
				/// </summary>
				/// <param name="lineExtension">线扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionLineToConduit(const EarthView::World::Geometry3D::CMultiPolyline3DExtension* lineExtension);
				/// <summary>
				/// 将面用面符号拉伸成体
				/// </summary>
				/// <param name="ploygonExtension">面扩展的存储信息</param>
				/// <returns></returns>
				static ev_void extensionPolygonToCuboid(const EarthView::World::Geometry3D::CMultiPolygon3DExtension* ploygonExtension);
			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CMultiGeometry3DExtensionTool(const CMultiGeometry3DExtensionTool& obj);
			};
		}
	}
}
#endif
