#ifndef _EditBoundingBox_H__
#define _EditBoundingBox_H__
#include "graphic/graphic_config.h"
#include "simplerenderable.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 编辑包围盒类
            /// </summary>
            class EV_GRAPHIC_DLL CEditBoundingBox : public EarthView::World::Graphic::CSimpleRenderable
            {
			public:
				enum AxisType
				{
					AT_Unknown,
					AT_X,
					AT_Y,
					AT_Z
				};
				enum TrackingType
				{
					TT_Unknown,

					TT_WithinBox,

					TT_OnAxisX,
					TT_OnAxisY,
					TT_OnAxisZ,

					TT_TouchArrowX,
					TT_TouchArrowY,
					TT_TouchArrowZ,

					TT_OnCircleX,
					TT_OnCircleY,
					TT_OnCircleZ,

				};
            public:
                /// <summary>
                /// 获得世界变换矩阵
                /// </summary>
                /// <param name="xform">世界变换矩阵</param>
                /// <returns></returns>
                void getWorldTransforms(  EarthView::World::Spatial::Math::CMatrix4 *xform ) const;

            protected:
                /// <summary>
                /// 创建线框盒
                /// </summary>
                /// <param name="aab">平行轴边框盒对象</param>
                /// <returns></returns>
                void fillVertexBuffer(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &aab);                
                void fillIndexBuffer(_in EarthView::World::Graphic::CEditBoundingBox::AxisType type);

                void _initBoundingBox();

				void highlight(EarthView::World::Graphic::CEditBoundingBox::TrackingType type);

				Real mRadius;
				Real mAxisLength;				

				CHardwareIndexBufferSharedPtr mDefaultIndexBuffer;
				CHardwareIndexBufferSharedPtr mAxisXIndexBuffer;
				CHardwareIndexBufferSharedPtr mAxisYIndexBuffer;
				CHardwareIndexBufferSharedPtr mAxisZIndexBuffer;				

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CEditBoundingBox(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CEditBoundingBox();               
                
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CEditBoundingBox();
                /// <summary>
                /// 创建线框盒
                /// </summary>
                /// <param name="aab">平行轴边框盒对象</param>
                /// <returns></returns>
                void setupBoundingBox(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &aabb);
                /// <summary>
                /// 观察纵深的平方
                /// </summary>
                /// <param name="cam">相机对象</param>
                /// <returns>观察纵深的平方</returns>
                Real getSquaredViewDepth(_in const EarthView::World::Graphic::CCamera *cam) const;
                /// <summary>
                /// 获得线框盒半径
                /// </summary>
                /// <param name=""></param>
                /// <returns>线框盒半径</returns>
                Real getBoundingRadius() const;

				/// <summary>
				/// 显示轴旋转圆周
				/// </summary>
				/// <param name=""></param>
				/// <returns>线框盒半径</returns>
				ev_void showCircle(EarthView::World::Graphic::CEditBoundingBox::AxisType type);

				/// <summary>
				/// 射线跟踪
				/// </summary>
				/// <param name="ray">世界坐标系下的射线</param>				
				/// <returns>线框盒半径</returns>
				EarthView::World::Graphic::CEditBoundingBox::TrackingType trackRay(const EarthView::World::Spatial::Math::CRay& ray);

				/// <summary>
				/// 返回坐标轴的长度(局部坐标系下的长度)
				/// </summary>							
				/// <returns></returns>
				Real getAxisLength() const
				{
					return mAxisLength;
				}
            };
        }
    }
}

#endif


