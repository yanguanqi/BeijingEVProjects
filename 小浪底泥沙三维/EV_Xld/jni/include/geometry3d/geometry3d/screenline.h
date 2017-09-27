#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENLINE_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_SCREENLINE_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"

#include "geometry3d/geometry3d/screengeometry.h"
#include "geometry3d/geometry3d/wideline.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{			
			/// <summary>
			///屏幕线类
			/// </summary>
			class EV_GEOMETRY3D_DLL CScreenLine : public EarthView::World::Geometry3D::CScreenGeometry
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CScreenLine(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="estimatedVertexCount">预估的点数(不要求非常精准)</param>
				/// <param name="isWideline">是否是宽线，否为简单线</param>				
				/// <returns></returns>
				CScreenLine(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ev_uint32 estimatedCount, ev_bool isWideline);

				/// <summary>
				/// 构造函数,宽线贴纹理
				/// </summary>
				/// <param name="estimatedVertexCount">预估的点数(不要求非常精准)</param>				
				/// <param name="texture">纹理</param>
				/// <returns></returns>
				CScreenLine(EarthView::World::Graphic::CSceneManager* ref_scenemanager,ev_uint32 estimatedCount, EarthView::World::Core::DataStreamPtr& texture);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CScreenLine();

			public:	

				/// <summary>
				/// 开始一条分段线
				/// 在渲染时也可以调用此函数
				/// </summary>
				/// <param name="colour">线的颜色</param>	
				/// <param name="width">宽线的宽度,单位和要设置的坐标类型一致,为简单线时无效</param>
				/// <returns></returns>
				ev_bool begin(const EarthView::World::Graphic::CColourValue& colour,Real width);
				ev_bool begin(const EarthView::World::Graphic::CColourValue& colour);
				ev_bool begin();

				/// <summary>
				/// 往当前分段线中追加点
				/// 在渲染时也可以调用此函数(即可在渲染时追加点)
				/// </summary>
				/// <param name="position">点坐标</param>
				/// <param name="colour">线的颜色(此点与前一点之间的线段的颜色)</param>
				/// <returns></returns>
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position,const EarthView::World::Graphic::CColourValue& colour);
				ev_void appendPoint(const EarthView::World::Spatial::Math::CVector2& position);	
				/// <summary>
				/// 结束一条分段线(下次调用beginSegment则会另起一段线)
				/// 在渲染时也可以调用此函数
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_bool end();

			protected:

				void initial(ev_uint32 estimatedCount);

				void createMaterial(EarthView::World::Core::DataStreamPtr& texture);

				virtual void updateBuffer(EarthView::World::Graphic::CViewport *viewport);

				void writeIndexData(ev_uint32 beginIndex);

			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CScreenLine(const CScreenLine& obj);

			private:

				ev_uint32 mMaxPointCount;//最大点数
				ev_uint32 mCurrentPointCount;//当前点数
				ev_uint32 mPointCountOnCurrentSegment; //当前分段线上的顶点数目
				EarthView::World::Spatial::Math::CVector2 mLastPoint;//前一个点
				ev_uint32  mPointIndexInBuffer;		//顶点在顶点buffer里的索引
				ev_uint32  mIndexCountInBuffer;		//顶点在顶点buffer里的索引

				ev_bool mbWideline;
				Real mCurrentWidth;
				Real mSizeRadio;//纹理宽高比
				Real mCurrentSegmentAddupLength;

				struct Color_Point;
				struct Width_ColorPoints;
				list<Width_ColorPoints> mWidthPoints;

				list<Color_Point> mTempPoints;

				EarthView::World::Graphic::CColourValue mCurrentColor;
			};
		}
	}
}
#endif
