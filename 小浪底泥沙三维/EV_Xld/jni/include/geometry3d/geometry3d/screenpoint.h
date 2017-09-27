#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOINT_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENPOINT_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"

#include "geometry3d/geometry3d/screengeometry.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// 屏幕点类型
			/// <summary>
			enum  ScreenPointType
			{
				/// <summary>
				/// 圆形
				/// <summary>
				SPT_Circle = 0,
				/// <summary>
				/// 正方形
				/// <summary>
				SPT_Quad				
			};

			/// <summary>
			///屏幕点类
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenPoint : public EarthView::World::Geometry3D::CScreenGeometry
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CScreenPoint(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="type">点类型</param>
				/// <param name="estimatedCount">预设点个数</param>
				/// <returns></returns>
				CScreenPoint(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ScreenPointType type,ev_uint32 estimatedCount);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="type">点类型</param>
				/// <param name="estimatedCount">预设点个数</param>
				/// <param name="texture">纹理图片流</param>
				/// <returns></returns>
				CScreenPoint(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ScreenPointType type,ev_uint32 estimatedCount,EarthView::World::Core::DataStreamPtr& texture);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenPoint();

			public:	

				/// <summary>
				/// 开始一类相同的点,渲染时仍可以追加点,begin和end之间只能执行appenPoint
				/// </summary>
				/// <param name="color">颜色</param>
				/// <param name="size">宽度(直径，单位和采用的坐标类型一致)</param>
				/// <returns></returns>
				ev_void begin(const EarthView::World::Graphic::CColourValue& color,Real size);
				ev_void begin(const EarthView::World::Graphic::CColourValue& color);
				ev_void begin();
				/// <summary>
				/// 追加点
				/// </summary>
				/// <param name="position">屏幕坐标</param>
				/// <param name="color">颜色</param>
				/// <param name="size">宽度(直径，单位和采用的坐标类型一致)</param>
				/// <returns></returns>
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color,Real size);
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color);
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position);
				/// <summary>
				/// 结束一类相同点
				/// </summary>
				/// <returns></returns>
				ev_void end();				

			protected:
				
				void initial(ev_uint32 pointCount);

				void writeCircleBuffer(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color,Real vw,Real vh,Real size,ev_bool onlyUpdateVertexBuffer);
				void writeQuadeBuffer(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& color,Real vw,Real vh,Real size,ev_bool onlyUpdateVertexBuffer);

				void createMaterial(EarthView::World::Core::DataStreamPtr& texture);

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);
							
			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CScreenPoint(const CScreenPoint& obj);
				
			private:

				ev_uint32 mMaxPointCount;//最大点数
				ev_uint32 mCurrentPointCount;//当前点数

				ScreenPointType mPointType;
				EarthView::World::Graphic::CColourValue mCurrentColor;
				Real mCurrentSize;

				struct Color_Size_Point;
				list<list<Color_Size_Point> > mListPoints;

				list<Color_Size_Point> mTempPoints;
			};
		}
	}
}
#endif
