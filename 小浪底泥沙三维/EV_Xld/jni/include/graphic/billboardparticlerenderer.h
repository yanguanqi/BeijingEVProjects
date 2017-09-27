#ifndef __BillboardParticleRenderer_H__
#define __BillboardParticleRenderer_H__
#pragma once
#include "graphic/graphic_config.h"
#include "particlesystemrenderer.h"
#include "billboardset.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            
            /// <summary>
            /// 广告板粒子渲染类
            /// 定义广告板粒子渲染相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CBillboardParticleRenderer : public EarthView::World::Graphic::CParticleSystemRenderer
            {
            protected:
                //// The billboard set that's doing the rendering
                EarthView::World::Graphic::CBillboardSet *mBillboardSet;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBillboardParticleRenderer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CBillboardParticleRenderer();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CBillboardParticleRenderer();
                
                /// <summary>
                /// 广告板类型
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdBillboardType : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <returns>渲染目标</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <param name="val">目标的值</param>
                    /// <returns></returns>
                    void doSet( _out void *target, const EVString &val);
                };
                
                /// <summary>
                /// 广告板原点类型
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdBillboardOrigin : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <returns>渲染目标</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <param name="val">目标的值</param>
                    /// <returns></returns>
                    void doSet( _out void *target, const EVString &val);
                };

                
                class EV_GRAPHIC_PRIVATE CCmdBillboardRotationType : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <returns>渲染目标</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <param name="val">目标的值</param>
                    /// <returns></returns>
                    void doSet( _out void *target, const EVString &val);
                };
                
                class EV_GRAPHIC_PRIVATE CCmdCommonDirection : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <returns>渲染目标</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <param name="val">目标的值</param>
                    /// <returns></returns>
                    void doSet(_out void *target, const EVString &val);
                };
               
                class EV_GRAPHIC_PRIVATE CCmdCommonUpVector : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <returns>渲染目标</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <param name="val">目标的值</param>
                    /// <returns></returns>
                    void doSet( _out void *target, const EVString &val);
                };
                
                class EV_GRAPHIC_PRIVATE CCmdPointRendering : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <returns>渲染目标</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <param name="val">目标的值</param>
                    /// <returns></returns>
                    void doSet(_out void *target, const EVString &val);
                };
               
                class EV_GRAPHIC_PRIVATE CCmdAccurateFacing : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <returns>渲染目标</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 获取渲染目标
                    /// </summary>
                    /// <param name="target">渲染目标</param>
                    /// <param name="val">目标的值</param>
                    /// <returns></returns>
                    void doSet(_out void *target, const EVString &val);
                };



                /** Sets the type of billboard to render.
                @remarks
                    The default sort of billboard (BBT_POINT), always has both x and y axes parallel to
                    the camera's local axes. This is fine for 'point' style billboards (e.g. flares,
                    smoke, anything which is symmetrical about a central point) but does not look good for
                    billboards which have an orientation (e.g. an elongated raindrop). In this case, the
                    oriented billboards are more suitable (BBT_ORIENTED_COMMON or BBT_ORIENTED_SELF) since they retain an independant Y axis
                    and only the X axis is generated, perpendicular to both the local Y and the camera Z.
                @param bbt The type of billboard to render
                */
                /// <summary>
                /// 设置广告板类型
                /// </summary>
                /// <param name="bbt">广告板类型</param>
                /// <returns></returns>
                void setBillboardType(BillboardType bbt);
               
                /// <summary>
                /// 获得使用的广告板类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>广告板类型</returns>
                EarthView::World::Graphic::BillboardType getBillboardType() const;
                
                /// <summary>
                /// 设置广告板是否精确对准摄像机
                /// </summary>
                /// <param name="acc">是否精确</param>
                /// <returns></returns>
                void setUseAccurateFacing(ev_bool acc);

                //// @copydoc CBillboardSet::getUseAccurateFacing
                /// <summary>
                /// 获得广告板是否精确对准摄像机
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果精确返回true，否则false</returns>
                ev_bool getUseAccurateFacing() const;
                /** Sets the point which acts as the origin point for all billboards in this set.
                @remarks
                This setting controls the fine tuning of where a billboard appears in relation to it's
                position. It could be that a billboard's position represents it's center (e.g. for fireballs),
                it could mean the center of the bottom edge (e.g. a tree which is positioned on the ground),
                the top-left corner (e.g. a cursor).
                @par
                The default setting is BBO_CENTER.
                @param
                origin A member of the BillboardOrigin enum specifying the origin for all the billboards in this set.
                */
                /// <summary>
                /// 设置广告板原点
                /// </summary>
                /// <param name="origin">原点</param>
                /// <returns></returns>
                void setBillboardOrigin(BillboardOrigin origin);

                /** Gets the point which acts as the origin point for all billboards in this set.
                @returns
                A member of the BillboardOrigin enum specifying the origin for all the billboards in this set.
                */
                /// <summary>
                /// 获得广告板起点
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::BillboardOrigin getBillboardOrigin() const;

                /** Sets billboard rotation type.
                    @remarks
                        This setting controls the billboard rotation type, you can deciding rotate the billboard's vertices
                        around their facing direction or rotate the billboard's texture coordinates.
                    @par
                        The default settings is BBR_TEXCOORD.
                    @param
                        rotationType A member of the BillboardRotationType enum specifying the rotation type for all the billboards in this set.
                */
                /// <summary>
                /// 设置广告板旋转类型
                /// </summary>
                /// <param name="rotationType">旋转类型</param>
                /// <returns></returns>
                void setBillboardRotationType(BillboardRotationType rotationType);
                /** Sets billboard rotation type.
                    @returns
                        A member of the BillboardRotationType enum specifying the rotation type for all the billboards in this set.
                */
                /// <summary>
                /// 获得广告板旋转类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>旋转类型</returns>
                EarthView::World::Graphic::BillboardRotationType getBillboardRotationType() const;
                /** Use this to specify the common direction given to billboards of type BBT_ORIENTED_COMMON.
                @remarks
                    Use BBT_ORIENTED_COMMON when you want oriented billboards but you know they are always going to
                    be oriented the same way (e.g. rain in calm weather). It is faster for the system to calculate
                    the billboard vertices if they have a common direction.
                @param vec The direction for all billboards.
                */
                /// <summary>
                /// 设置通用的方向
                /// </summary>
                /// <param name="vec">三维向量</param>
                /// <returns></returns>
                void setCommonDirection(const EarthView::World::Spatial::Math::CVector3 &vec);
                /** Gets the common direction for all billboards (BBT_ORIENTED_COMMON) */
                /// <summary>
                /// 获得通用的方向
                /// </summary>
                /// <param name="">三维向量</param>
                /// <returns>三维向量</returns>
                const EarthView::World::Spatial::Math::CVector3 &getCommonDirection() const;
                /** Use this to specify the common up-vector given to billboards of type BBT_PERPENDICULAR_SELF.
                @remarks
                    Use BBT_PERPENDICULAR_SELF when you want oriented billboards perpendicular to their own
                    direction vector and doesn't face to camera. In this case, we need an additional vector
                    to determine the billboard X, Y axis. The generated X axis perpendicular to both the own
                    direction and up-vector, the Y axis will coplanar with both own direction and up-vector,
                    and perpendicular to own direction.
                @param vec The up-vector for all billboards.
                */
                /// <summary>
                /// 设置通用的上方向
                /// </summary>
                /// <param name="vec">三维向量</param>
                /// <returns></returns>
                void setCommonUpVector(const EarthView::World::Spatial::Math::CVector3 &vec);
                /** Gets the common up-vector for all billboards (BBT_PERPENDICULAR_SELF) */
                /// <summary>
                /// 获得通用的上方向
                /// </summary>
                /// <param name="">三维向量</param>
                /// <returns>三维向量</returns>
                const EarthView::World::Spatial::Math::CVector3 &getCommonUpVector() const;
                
                /// <summary>
                /// 设置是否启用点渲染
                /// </summary>
                /// <param name="enabled">是否使用点渲染</param>
                /// <returns></returns>
                void setPointRenderingEnabled(ev_bool enabled);
                
                /// <summary>
                /// 获取是否启用点渲染
                /// </summary>
                /// <param name=""></param>
                /// <returns>使用点渲染返回true，否则返回false</returns>
                ev_bool isPointRenderingEnabled() const;

                
                /// <summary>
                /// 获得类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getType() const;
                
                /// <summary>
                /// 更新渲染队列
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <param name="currentParticles">当前粒子列表</param>
                /// <param name="cullIndividually">是否是单个</param>
                /// <returns></returns>
                virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue,
                                                 _inout EarthView::World::Graphic::ParticleList &currentParticles, ev_bool cullIndividually);
               
                /// <summary>
                /// 访问可渲染的物体
                /// </summary>
                /// <param name="visitor">访问者</param>
                /// <param name="debugRenderables">是否调试可渲染的物体</param>
                /// <returns></returns>
                virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                               ev_bool debugRenderables /*= false*/);
                /// <summary>
                /// 访问可渲染的物体
                /// </summary>
                /// <param name="visitor">访问者</param>
                /// <returns></returns>
                virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                
                /// <summary>
                /// 设置材质
                /// </summary>
                /// <param name="mat">相关材质</param>
                /// <returns></returns>
                void _setMaterial(_inout EarthView::World::Graphic::CMaterialPtr &mat);
                
                /// <summary>
                /// 通报当前摄像机
                /// </summary>
                /// <param name="cam">当前摄像机</param>
                /// <returns></returns>
                void _notifyCurrentCamera( EarthView::World::Graphic::CCamera *ref_cam);
                
                /// <summary>
                /// 通报粒子旋转信息
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _notifyParticleRotated();
                
                /// <summary>
                /// 通报粒子尺寸改变
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _notifyParticleResized();
                
                /// <summary>
                /// 通报粒子额度信息
                /// </summary>
                /// <param name="quota">额度</param>
                /// <returns></returns>
                void _notifyParticleQuota(ev_size_t quota);
                
                /// <summary>
                /// 通报挂接
                /// </summary>
                /// <param name="parent">父结点</param>
                /// <param name="isTagPoint">是否在骨骼下</param>
                /// <returns></returns>
                void _notifyAttached(_in EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint /*= false*/);
                
                /// <summary>
                /// 通报挂接
                /// </summary>
                /// <param name="parent">父结点</param>
                /// <returns></returns>
                void _notifyAttached(_in EarthView::World::Graphic::CNode *ref_parent);

                
                /// <summary>
                /// 通报默认宽高
                /// </summary>
                /// <param name="width">宽度</param>
                /// <param name="height">高度</param>
                /// <returns></returns>
                void _notifyDefaultDimensions(Real width, Real height);
                
                /// <summary>
                /// 设置渲染队列组ID
                /// </summary>
                /// <param name="queueID">队列ID号</param>
                /// <returns></returns>
                void setRenderQueueGroup(ev_uint8 queueID);
                
                /// <summary>
                /// 设置保持粒子本地空间
                /// </summary>
                /// <param name="keepLocal">保存空间</param>
                /// <returns></returns>
                void setKeepParticlesInLocalSpace(ev_bool keepLocal);
                
                /// <summary>
                /// 获得分类模式信息
                /// </summary>
                /// <param name=""></param>
                /// <returns>分类模式</returns>
                EarthView::World::Graphic::SortMode _getSortMode() const;
                
                /// <summary>
                /// 获得广告板集
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CBillboardSet *getBillboardSet() const;

            protected:
                static CCmdBillboardType msBillboardTypeCmd;
                static CCmdBillboardOrigin msBillboardOriginCmd;
                static CCmdBillboardRotationType msBillboardRotationTypeCmd;
                static CCmdCommonDirection msCommonDirectionCmd;
                static CCmdCommonUpVector msCommonUpVectorCmd;
                static CCmdPointRendering msPointRenderingCmd;
                static CCmdAccurateFacing msAccurateFacingCmd;

            };
            /** Factory class for CBillboardParticleRenderer */
            /// <summary>
            /// CBillboardParticleRenderer类工厂
            /// 定义类工厂及相关操作
            /// </summary>
            class EV_GRAPHIC_DLL CBillboardParticleRendererFactory : public EarthView::World::Graphic::CParticleSystemRendererFactory
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBillboardParticleRendererFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CBillboardParticleRendererFactory();
                ///增加的
                //// @copydoc FactoryObj::getType
                /// <summary>
                /// 获得类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getType() const;
                //// @copydoc FactoryObj::createInstance
                /// <summary>
                /// 创建实例
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns>实例</returns>
                EarthView::World::Graphic::CParticleSystemRenderer *createInstance( const EVString &name );

                //// @copydoc FactoryObj::destroyInstance
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="inst">实例</param>
                /// <returns></returns>
                void destroyInstance( EarthView::World::Graphic::CParticleSystemRenderer *inst);
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

