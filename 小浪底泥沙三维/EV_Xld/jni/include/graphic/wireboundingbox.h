#ifndef _WireBoundingBox_H__
#define _WireBoundingBox_H__
#include "graphic/graphic_config.h"
#include "simplerenderable.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 线框盒类
            /// </summary>
            class EV_GRAPHIC_DLL CWireBoundingBox : public EarthView::World::Graphic::CSimpleRenderable
            {
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
                void setupBoundingBoxVertices(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &aab);
                Real mRadius;
                /*
                [7/3/2012 WangJian]
                  add for 1.8
                */
                void _initWireBoundingBox();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CWireBoundingBox(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CWireBoundingBox();
                /*
                [7/3/2012 WangJian]
                  add for 1.8
                */
                CWireBoundingBox(const EVString &name);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CWireBoundingBox();
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
            };
        }
    }
}

#endif


