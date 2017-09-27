#ifndef _RenderOperation_H__
#define _RenderOperation_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "vertexindexdata.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CRenderable;
            /// <summary>
            /// 用于顶点缓冲的渲染操作
            /// </summary>
            class EV_GRAPHIC_DLL CRenderOperation : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CRenderOperation(EarthView::World::Core::CNameValuePairList *pList) :
                    vertexData(0), operationType(OT_TRIANGLE_LIST), useIndexes(true),
                    indexData(0), srcRenderable(0), numberOfInstances(1),
                    useGlobalInstancingVertexBufferIsAvailable(true) {}
            public:

                ////执行渲染操作的类型
                enum OperationType
                {
                    ////点链表，每一个点有一个顶点
                    OT_POINT_LIST = 1,
                    ////线链表，每条线有两个顶点
                    OT_LINE_LIST = 2,
                    ////连接线的带，每条线有一个顶点加上一个起始顶点
                    OT_LINE_STRIP = 3,
                    ////三角形链表，每个三角形有三个顶点
                    OT_TRIANGLE_LIST = 4,
                    ////三角形带，第一个三角形有三个顶点，之后每一个三角形有一个
                    OT_TRIANGLE_STRIP = 5,
                    ////三角形扇区，第一个三角形有三个顶点，之后每个三角形有一个
                    OT_TRIANGLE_FAN = 6
                };
                ////顶点源数据
                EarthView::World::Graphic::CVertexData *vertexData;
                ////执行操作的类型
                EarthView::World::Graphic::CRenderOperation::OperationType operationType;
                ///指定是否用索引来确定用于输入的顶点。如果为false，顶点按照原始定义的顺序简单的被读出，如果为true，索引被用来代替缓冲区
                ///中统一的顶点，而且允许顶点被超过一次的使用。同时，indexBuffer,indexStart and numIndexes属性必须可用。
                ev_bool useIndexes;
                ///索引数据，只有当useIndexes为true时可用
                EarthView::World::Graphic::CIndexData *indexData;
                ///Debug指针返回renderable时创建的
                const EarthView::World::Graphic::CRenderable *srcRenderable;

                ///zxt updatefor v1.8
                //// The number of instances for the render operation - this option is supported
                //// in only a part of the render systems.
                size_t numberOfInstances;
                /** A flag to indicate that it is possible for this operation to use a global
                    vertex instance buffer if available.*/
                bool useGlobalInstancingVertexBufferIsAvailable;
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderOperation() :
                    vertexData(0), operationType(OT_TRIANGLE_LIST), useIndexes(true),
                    indexData(0), srcRenderable(0), numberOfInstances(1),
                    useGlobalInstancingVertexBufferIsAvailable(true) {}

            };
            /** @} */
            /** @} */
        }
    }
}


#endif

