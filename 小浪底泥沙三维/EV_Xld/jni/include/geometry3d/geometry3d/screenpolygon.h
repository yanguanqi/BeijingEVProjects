#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOLYGON_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOLYGON_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"

#include "geometry3d/geometry3d/screengeometry.h"


namespace EarthView
{
	namespace World
	{

		namespace Spatial
		{
			namespace Geometry
			{
				class CPolygon;
			}
		}

		namespace Geometry3D
		{			
			class CMultiPolygon3DExtension;
			/// <summary>
			///屏幕点类
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenPolygon : public EarthView::World::Geometry3D::CScreenGeometry
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CScreenPolygon(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="type">点类型</param>
				/// <param name="estimatedCount">预设点个数</param>
				/// <returns></returns>
				CScreenPolygon(EarthView::World::Graphic::CSceneManager* ref_scenemanager);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="type">点类型</param>
				/// <param name="estimatedCount">预设点个数</param>
				/// <param name="texture">纹理图片流</param>
				/// <returns></returns>
				CScreenPolygon(EarthView::World::Graphic::CSceneManager* ref_scenemanager,EarthView::World::Core::DataStreamPtr& texture);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenPolygon();

			public:	

				/// <summary>
				/// 开始追加多边形,render之后无效
				/// </summary>
				/// <returns></returns>
				ev_void begin();
				/// <summary>
				/// 追加多边形
				/// </summary>
				/// <param name="color">颜色</param>
				/// <param name="polygon">无参考系的二维面,坐标用x和z，坐标类型和设置的屏幕坐标类型一致</param>
				/// <returns></returns>
				ev_void appendPolygon(const EarthView::World::Spatial::Geometry::CPolygon& polygon,const EarthView::World::Graphic::CColourValue& color);
				ev_void appendPolygon(const EarthView::World::Spatial::Geometry::CPolygon& polygon);
				/// <summary>
				/// 结束追加多边形,开始进行多边形分割，创建buffer
				/// </summary>
				/// <returns></returns>
				ev_void end();

			protected:

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);

			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CScreenPolygon(const CScreenPolygon& obj);

			private:

				EarthView::World::Graphic::CColourValue mCurrentColor;

				EarthView::World::Core::DataStreamPtr mpTextureStream;

				CMultiPolygon3DExtension* mpPolygonExtension;

				struct Color_Vert;

				ev_uint32 mCurrentVertexCount;
				ev_uint32 mCurrentIndexCount;
				list<list<Color_Vert> > mPolygons;
			};
		}
	}
}
#endif
