#ifndef __RenderToVertexBuffer_H__
#define __RenderToVertexBuffer_H__
#include "graphic/graphic_config.h"
#include "material.h"
#include "renderoperation.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CSceneManager;
            class CRenderable;
            class CVertexData;
            /// <summary>
            /// 渲染几何体到顶点的对象
            /// </summary>
            class EV_GRAPHIC_DLL CRenderToVertexBuffer: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderToVertexBuffer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderToVertexBuffer();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderToVertexBuffer();
                /// <summary>
                /// 获得顶点的声明
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CVertexDeclaration *getVertexDeclaration();

                /// <summary>
                /// 获得缓存拥有顶点的最大的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 getMaxVertexCount() const;

                /// <summary>
                /// 设置缓存拥有顶点的最大的数量
                /// </summary>
                /// <param name="maxVertexCount"></param>
                /// <returns></returns>
                void setMaxVertexCount(ev_uint32 maxVertexCount);
                /// <summary>
                /// 获得这个对象产生的原始类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CRenderOperation::OperationType getOperationType() const;
                /// <summary>
                /// 设置这个对象产生的原始类型
                /// </summary>
                /// <param name="operationType"></param>
                /// <returns></returns>
                void setOperationType(EarthView::World::Graphic::CRenderOperation::OperationType operationType);
                /// <summary>
                /// 设置这个对象是否重新设置它的缓存当每次更新时
                /// </summary>
                /// <param name="resetsEveryUpdate"></param>
                /// <returns></returns>
                void setResetsEveryUpdate(ev_bool resetsEveryUpdate);
                /// <summary>
                /// 判断这个对象是否重新设置它的缓存当每次更新时
                /// </summary>
                /// <param name="mResetsEveryUpdate"></param>
                /// <returns></returns>
                ev_bool getResetsEveryUpdate() const
                {
                    return mResetsEveryUpdate;
                }
                /// <summary>
                /// 获得缓存的渲染操作
                /// </summary>
                /// <param name="op"></param>
                /// <returns></returns>
                virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                /// <summary>
                /// 更新渲染顶点缓存的内容
                /// </summary>
                /// <param name="sceneMgr"></param>
                /// <returns></returns>
                virtual void update( EarthView::World::Graphic::CSceneManager *sceneMgr);
                /// <summary>
                /// 重新设置顶点缓存的初始状态，在下一次更新时，渲染资源将最为输入值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void reset();

                /// <summary>
                /// 设置对象的渲染资源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setSourceRenderable( EarthView::World::Graphic::CRenderable *ref_source);
                /// <summary>
                /// 获得对象的渲染资源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CRenderable *getSourceRenderable() const;
                /// <summary>
                /// 获得在顶点缓冲中用来渲染几何体的材质
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CMaterialPtr &getRenderToBufferMaterial();
                /// <summary>
                /// 设置在顶点缓冲中用来渲染几何体的材质的名称
                /// </summary>
                /// <param name="materialName">材质的名称</param>
                /// <returns></returns>
                void setRenderToBufferMaterialName(const EVString &materialName);
            protected:
                EarthView::World::Graphic::CRenderOperation::OperationType mOperationType;
                ev_bool mResetsEveryUpdate;
                ev_bool mResetRequested;
                EarthView::World::Graphic::CMaterialPtr mMaterial;
                EarthView::World::Graphic::CRenderable *mSourceRenderable;
                CVertexData *mVertexData;
                ev_uint32 mMaxVertexCount;
            };
            class EV_GRAPHIC_DLL RenderToVertexBufferSharedPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CRenderToVertexBuffer>
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderToVertexBufferSharedPtr(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderToVertexBufferSharedPtr();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rep"></param>
                /// <returns></returns>
                explicit RenderToVertexBufferSharedPtr(EarthView::World::Graphic::CRenderToVertexBuffer *rep);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rep"></param>
                /// <param name="inFreeMethod"></param>
                /// <returns></returns>
                explicit RenderToVertexBufferSharedPtr(EarthView::World::Graphic::CRenderToVertexBuffer *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="r"></param>
                /// <returns></returns>
                RenderToVertexBufferSharedPtr(const RenderToVertexBufferSharedPtr &r);

                EarthView::World::Graphic::CRenderToVertexBuffer *get() const;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

