#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_PATH_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_PATH_H

#include "display/display_config.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Display{
			/// <summary>
			/// path类
			/// </summary>
			class EV_DISPLAY_DLL CDataPath:
				public EarthView::World::Core::CAllocatedObject 
			{	
				friend class CImageRender;
				friend class CDataRegion;
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				 
				CDataPath();
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				 
				~CDataPath();
			public:
				/// <summary>
				/// 增加贝塞尔样条
				/// </summary>
				/// <param name="x1">起点x1坐标</param>
				/// <param name="y1">起点y1坐标</param>
				/// <param name="x2">终点x2坐标</param>
				/// <param name="y2">终点y2坐标</param>
				/// <returns></returns>
				
				virtual ev_void addPathLine(ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2);

				/// <summary>
				///  增加弧线
				/// </summary>
				/// <param name="x">弧中心x</param>
				/// <param name="y">弧中心y</param>
				/// <param name="width">长半轴</param>
				/// <param name="height">短半轴</param>
				/// <param name="startAngle">开始角度</param>
				/// <param name="sweepAngle">扫描角度</param>
				/// <returns></returns>
				 
				virtual ev_void addPathArc(ev_real64 x, ev_real64 y, ev_real64 majorAxe,
					ev_real64 minorAxe,ev_real64 startAngle, ev_real64 sweepAngle);
				/// <summary>
				/// 增加饼图
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="majorAxe">长半轴</param>
				/// <param name="minorAxe">短半轴</param>
				/// <param name="startAngle">开始角度</param>
				/// <param name="sweepAngle">扫描角度</param>
				/// <returns></returns>
				 
				virtual ev_void addPathPie(ev_real64 x, ev_real64 y, ev_real64 majorAxe, ev_real64 minorAxe, ev_real64 startAngle, ev_real64 sweepAngle);
				/// <summary>
				/// 增加椭圆
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="majorAxe">长半轴</param>
				/// <param name="minorAxe">短半轴</param>
				/// <returns></returns>
				 
				virtual ev_void addPathEllipse(ev_real64 x, ev_real64 y, ev_real64 majorAxe,ev_real64 minorAxe);
				/// <summary>
				/// 增加圆
				/// </summary>
				/// <param name="x">圆心x坐标</param>
				/// <param name="y">圆心y坐标</param>
				/// <param name="radius">圆半径</param>
				/// <returns></returns>
				 
				virtual ev_void addPathCircle(ev_real64 x, ev_real64 y, ev_real64 radius);
				/// <summary>
				/// 增加贝塞尔样条
				/// </summary>
				/// <param name="x1">起点x1坐标</param>
				/// <param name="y1">起点y1坐标</param>
				/// <param name="x2">控制点x2坐标</param>
				/// <param name="y2">控制点y2坐标</param>
				/// <param name="x3">控制点x3坐标</param>
				/// <param name="y3">控制点y3坐标</param>
				/// <param name="x4">终点x4坐标</param>
				/// <param name="y4">终点y4坐标</param>
				/// <returns></returns>
				 
				virtual ev_void addPathBezier(ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2,
					ev_real64 x3, ev_real64 y3, ev_real64 x4, ev_real64 y4);
				/// <summary>
				/// 增加矩形
				/// </summary>
				/// <param name="x">起点x坐标</param>
				/// <param name="y">起点y坐标</param>
				/// <param name="w">矩形宽度</param>
				/// <param name="h">矩形高度</param>
				/// <returns></returns>
				 
				ev_void addRect( ev_real64 x, ev_real64 y, ev_real64 w, ev_real64 h );
				/// <summary>
				/// 获取外包矩形大小
				/// </summary>
				/// <param name="width">宽度</param>
				/// <param name="height">高度</param>
				/// <returns></returns>
				 
				virtual ev_void getBound(_out ev_real64& x,_out ev_real64& y,_out ev_real64& width,_out ev_real64& height) const;

				/// <summary>
				/// 闭合Path
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				 
				virtual ev_bool closePath() const;
				/// <summary>
				/// 清空所有Path
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				 
				virtual ev_bool clearPath();
				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="rotateAngle">旋转角度</param>
				/// <returns></returns>
				 
				virtual ev_void setRotateAngle(const ev_real64 rotateAngle);
				/// <summary>
				/// 获取旋转角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回旋转角度</returns>
				 
				virtual ev_real64 getRotateAngle() const;
				/// <summary>
				/// 获取path
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回path指针</returns>
				 
				void* getNativePath() const{ return m_pPath; }
ev_private:
				CDataPath( void* path );
				CDataPath( EarthView::World::Core::CNameValuePairList* pList );
			private:
				C_DISABLE_COPY(CDataPath);
				ev_void* m_pPath;
				ev_real64 m_dRotatedAngle;
			};

			enum EVCombineMode
			{
				CM_Replace,
				CM_Intersect,
				CM_ModeUnion,
				CM_Xor,
				CM_Exclude,
				CM_Complement
			};

			class EV_DISPLAY_DLL CDataRegion : public EarthView::World::Core::CAllocatedObject 
			{
				friend class CImageRender;
ev_private:
				CDataRegion( EarthView::World::Core::CNameValuePairList* pList );
			public:
				CDataRegion();
				~CDataRegion();

				ev_void addRect( ev_real64 x, ev_real64 y, ev_real64 w, ev_real64 h, EarthView::World::Display::EVCombineMode mode );
				ev_void addPath( CDataPath* path, EarthView::World::Display::EVCombineMode mode );
				ev_void addRegion( CDataRegion* region, EarthView::World::Display::EVCombineMode mode );
				ev_void makeEmpty();
			private:
				C_DISABLE_COPY(CDataRegion);
				ev_void* mpRegion;
			};
		}
	}
}
#endif
