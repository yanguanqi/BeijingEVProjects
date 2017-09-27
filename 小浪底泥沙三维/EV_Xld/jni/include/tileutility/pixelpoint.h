#ifndef EARTHVIEW_WORLD_SPATIAL_CPIXELPOINT_H
#define EARTHVIEW_WORLD_SPATIAL_CPIXELPOINT_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"

#define PixelPointFlag     ev_uint32
#define PPF_UNKNOWN           0
#define PPF_INSIDE            1
#define PPF_JUNCTION          2
#define PPF_JUNCTION_PRIMARY  3
#define PPF_CONER             4
#define PPF_VERTEX            7

namespace EarthView{
	namespace World{
		namespace Spatial{

			/// <summary>
            /// 像素点类
            /// </summary>
			class EV_TILEUTILITY_DLL CPixelPoint:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CPixelPoint();

				/// <summary>
                /// 获取坐标点X值
                /// </summary>
                /// <returns>坐标X值</returns>
				ev_uint32 getX() const;

				/// <summary>
                /// 获取坐标点Y值
                /// </summary>
                /// <returns>坐标Y值</returns>
				ev_uint32 getY() const;				
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CPixelPoint();

				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="pixelpoint">拷贝对象</param>
                /// <returns></returns>
				CPixelPoint(_in const CPixelPoint& pixelpoint);
			ev_private:
				CPixelPoint(_in  EarthView::World::Core::CNameValuePairList* pList );
			private:
				/// <summary>
                /// 获取坐标标识
                /// </summary>
                /// <returns>坐标标识，0未知，1内部点，2生成的边界点，3原始边界点，4辅助角点，7起始点</returns>
				ev_uint32 getFlag() const;
				//C_DISABLE_COPY( CPixelPoint );
			protected:
				///点坐标X值，单位：象素
				ev_uint32 mnX;
				///点坐标Y值，单位：象素
				ev_uint32 mnY;
				///坐标点标识，专用于组成面的点，单位：象素
				ev_uint32 mnFlag;
			friend class CGeoElement;
			};
		}
	}
}
#endif
