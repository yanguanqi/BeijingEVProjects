#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEORIGIN_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEORIGIN_H
#include "tileutility/tileutilityexports.h"
#include "tileutility/tileutilityenums.h"
#include "core/memoryallocatedobject.h"
#include "core/classfactory.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片起点信息类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileOrigin:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileOrigin();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTileOrigin();

			public:
				/// <summary>
                /// 获取角点X值
                /// </summary>
                /// <returns>角点X值</returns>
				ev_real64 getX() const;

				/// <summary>
                /// 获取角点Y值
                /// </summary>
                /// <returns>角点Y值</returns>
				ev_real64 getY() const;

				/// <summary>
                /// 获取有效宽度
                /// </summary>
                /// <returns>有效宽度</returns>
				ev_real64 getWidth() const;

				/// <summary>
                /// 获取有效高度
                /// </summary>
                /// <returns>有效高度</returns>
				ev_real64 getHeight() const;

				/// <summary>
                /// 获取角点位置
                /// </summary>
                /// <returns>角点位置</returns>
				EarthView::World::Spatial::EVOriginPositionType getOriginPosition() const;

				/// <summary>
                /// 设置角点X值
                /// </summary>
				/// <param name="dValue">角点X值</param>
                /// <returns></returns>
				ev_void setX(_in ev_real64 dValue);

				/// <summary>
                /// 设置角点Y值
                /// </summary>
				/// <param name="dValue">角点Y值</param>
                /// <returns></returns>
				ev_void setY(_in ev_real64 dValue);

				/// <summary>
                /// 设置有效宽度
                /// </summary>
				/// <param name="dWidth">有效宽度</param>
                /// <returns></returns>
				ev_void setWidth(_in ev_real64 dWidth);

				/// <summary>
                /// 设置有效高度
                /// </summary>
				/// <param name="dHeight">有效高度</param>
                /// <returns></returns>
				ev_void setHeight(_in ev_real64 dHeight);

				/// <summary>
                /// 设置角点位置
                /// </summary>
				/// <param name="type">角点位置</param>
                /// <returns></returns>
				ev_void setOriginPosition(_in EarthView::World::Spatial::EVOriginPositionType type);

				/// <summary>
                /// 获取地理范围
                /// </summary>
				/// <param name="left">左边界</param>
				/// <param name="top">上边界</param>
				/// <param name="right">右边界</param>
				/// <param name="bottom">下边界</param>
                /// <returns></returns>
				ev_void getGeographicExtent(_out ev_real64& left, _out ev_real64& top, _out ev_real64& right , _out ev_real64& bottom);

				/// <summary>
                /// 深度拷贝
                /// </summary>
                /// <returns>新对象指针</returns>
				_extfree EarthView::World::Spatial::CTileOrigin * clone() const;
			ev_private:
				CTileOrigin(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				C_DISABLE_COPY( CTileOrigin );
			private:
				///起始点坐标，水平方向
				ev_real64 mX;
				///起始点坐标，竖直方向
				ev_real64 mY;
				///瓦片宽度
				ev_real64 mWidth;
				///瓦片高度
				ev_real64 mHeight;
				///起始点所在方位
				EarthView::World::Spatial::EVOriginPositionType mnPos;
			};
		}
	}
}
#endif

