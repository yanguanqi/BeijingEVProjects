#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIGEOMETRY3DEXTERNSIONLISTENER_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIGEOMETRY3DEXTERNSIONLISTENER_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"


namespace EarthView{
	namespace World{
		namespace Spatial
		{
			namespace Geometry
			{
				class IGeometry;
			}

			namespace Display
			{
				class ISymbol;
			}
			
		}

	}
}

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CMultiGeometry3DExtension;

			/// <summary>
			/// 二维图形扩展自定义符号的监听类
			/// 监听二维图形扩展自定义符号
			/// </summary>
			class EV_GEOMETRY3D_DLL CMultiGeometry3DExtensionListener : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiGeometry3DExtensionListener(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMultiGeometry3DExtensionListener();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMultiGeometry3DExtensionListener();

			public:
				/// <summary>
				/// 系统构建前询问是否完全由用户构造对象
				/// 当返回true时，系统不再构建该对象，由监听者构建并改写extension对象；false，交由系统构建。
				/// </summary>
				/// <param name="extension">extension对象</param>
				/// <returns>用户是否进行了构造</returns>
				virtual ev_bool userExtension(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);

				/// <summary>
				/// 当符号不支持时，通知监听者构建
				/// </summary>
				/// <param name="extension"></param>
				/// <returns>构建是否成功</returns>
				virtual ev_bool onSymbolNotSupported(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);

				/// <summary>
				/// 每个Geometry构造开始时,调用的函数
				/// </summary>					
				/// <param name="Geometry">当前处理的geometry</param>					
				/// <returns></returns>
				virtual ev_void perGeometryExtensionBegun(EarthView::World::Spatial::Geometry::IGeometry* pGeometry, EarthView::World::Spatial::Display::ISymbol* pSymbol);

				/// <summary>
				/// 每个Geometry构造完成时,调用的函数
				/// </summary>					
				/// <param name="Geometry">当前处理的geometry</param>					
				/// <returns></returns>
				virtual ev_void perGeometryExtensionFinished(const EarthView::World::Spatial::Geometry::IGeometry* pGeometry);

				/// <summary>
				/// 渲染前调用的函数
				/// </summary>					
				/// <param name="extension">extension对象</param>				
				/// <returns></returns>
				virtual ev_void preRender(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);

				/// <summary>
				/// 渲染后调用的函数
				/// </summary>					
				/// <param name="extension">extension对象</param>				
				/// <returns></returns>
				virtual ev_void postRender(_inout EarthView::World::Geometry3D::CMultiGeometry3DExtension* extension);

			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CMultiGeometry3DExtensionListener(const CMultiGeometry3DExtensionListener& obj);
			};
		}
	}
}
#endif
