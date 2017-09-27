#ifndef __ParticleSystem_H__
#define __ParticleSystem_H__
#include "graphic/graphic_config.h"
#include "mathengine/vector4.h"
#include "graphic/particleiterator.h"
#include "core/stringinterface.h"
#include "graphic/movableobject.h"
#include "graphic/radixsort.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 定义了一个基于特殊效果的粒子系统
            /// </summary>
            class EV_GRAPHIC_DLL CParticleSystem : public EarthView::World::Graphic::CMovableObject
            {
                friend class CParticleSystemInternalStringInterface;
            public:
                class EV_GRAPHIC_DLL CParticleSystemInternalStringInterface : public EarthView::World::Core::CStringInterface
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CParticleSystemInternalStringInterface(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="parent">指向外部类的指针</param>
                    /// <returns></returns>
                    CParticleSystemInternalStringInterface(CParticleSystem *ref_parent);

                };
                /// <summary>
                /// 获得内部类的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回内部类的指针</returns>
                virtual EarthView::World::Graphic::CParticleSystem::CParticleSystemInternalStringInterface *getStringInterfacePtr();
                /// <summary>
                /// 获得内部类的指针的地址
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回内部类指针的地址</returns>
                ///virtual const EarthView::World::Graphic::CParticleSystem::CParticleSystemInternalStringInterface& getStringInterface();
            private:
                EarthView::World::Graphic::CParticleSystem::CParticleSystemInternalStringInterface *mpStringInterface;

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleSystem(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 粒子数目的命令对象
                /// 获得/设置粒子系统中一次活跃粒子的最大数目
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdQuota : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获得EVString类型的一次活跃粒子的最大数目
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的一次活跃粒子的最大数目</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置系统中一次活跃粒子的最大数目
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };

                /// <summary>
                /// 发射器发射粒子数目的命令对象
                /// 获得/设置粒子系统中允许发射器一次发射活跃粒子的最大数目
                class EV_GRAPHIC_PRIVATE CCmdEmittedEmitterQuota : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获得EVString类型的一次发射活跃粒子的最大数目
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的一次发射活跃粒子的最大数目</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置系统中一次发射活跃粒子的最大数目
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };
                /// <summary>
                /// 材质的命令对象
                /// 获得/设置公告板使用的材质的名称
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdMaterial : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获得公告板使用的材质的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回的公告板使用的材质的名称</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置公告板使用的材质的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子的裁剪模式的命令对象
                /// 获得/设置粒子的裁剪模式是否使用单个粒子裁剪
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdCull : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获得EVString类型的粒子的裁剪模式是否使用单个粒子裁剪
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子的裁剪模式是否使用单个粒子裁剪</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子的裁剪模式是否使用单个粒子裁剪
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子宽度值的命令对象
                /// 获得/设置粒子的宽度值
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdWidth : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获得EVString类型的粒子的默认宽度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子的默认宽度值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子的默认宽度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子高度值的命令对象
                /// 获得/设置粒子的高度值
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdHeight : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获得EVString类型的粒子的默认高度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子的默认高度值</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子的默认高度值
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子渲染器的命令对象
                /// 获得/设置粒子渲染器的名称
                /// </summary>
                class EV_GRAPHIC_PRIVATE CCmdRenderer : public EarthView::World::Core::CParamCommand
                {
                public:
                    /// <summary>
                    /// 获得粒子渲染器的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回粒子渲染器的名称</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子渲染器的名称
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };

                /// <summary>
                /// 粒子分类的命令对象
                /// 获得/设置粒子是否根据摄像器进行分类
                /// </summary>
                class EV_GRAPHIC_DLL CCmdSorted : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdSorted(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdSorted();
                    /// <summary>
                    /// 获得EVString类型的粒子是否根据摄像机进行分类
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子是否根据摄像机进行分类</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子是否根据摄像机进行分类
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子本地空间的命令对象
                /// 获得/设置粒子是否和粒子系统挂接的节点保持关联性
                /// </summary>
                class EV_GRAPHIC_DLL CCmdLocalSpace : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdLocalSpace(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdLocalSpace();
                    /// <summary>
                    /// 获得EVString类型的粒子是否和粒子系统挂接的节点保持关联性
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子是否和粒子系统挂接的节点保持关联性</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子是否和粒子系统挂接的节点保持关联性
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子系统重复间隔时间的命令对象
                /// 获得/设置粒子粒子系统重复间隔时间
                /// </summary>
                class EV_GRAPHIC_DLL CCmdIterationInterval : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdIterationInterval(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdIterationInterval();
                    /// <summary>
                    /// 获得EVString类型的粒子系统重复间隔的时间
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子系统重复间隔时间</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子系统重复间隔的时间
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };
                /// <summary>
                /// 粒子系统不可见时间的命令对象
                /// 获得/设置粒子系统不可见停止更新的时间
                /// </summary>
                class EV_GRAPHIC_DLL CCmdNonvisibleTimeout : public EarthView::World::Core::CParamCommand
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CCmdNonvisibleTimeout(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CCmdNonvisibleTimeout();
                    /// <summary>
                    /// 获得EVString类型的粒子系统不可见停止更新的时间
                    /// </summary>
                    /// <param name="target"></param>
                    /// <returns>返回EVString类型的粒子系统不可见停止更新的时间</returns>
                    EVString doGet(const void *target) const;
                    /// <summary>
                    /// 设置粒子系统不可见停止更新的时间
                    /// </summary>
                    /// <param name="target"></param>
                    /// <param name="val"></param>
                    /// <returns></returns>
                    void doSet(_inout void *target, const EVString &val);
                };
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleSystem();

                /// <summary>
                /// 构造函数
                /// 创建一个没有发射器或效果器的粒子系统
                /// </summary>
                /// <param name="name">对象的名称</param>
                /// <param name="resourceGroupName">资源组的名称</param>
                /// <returns></returns>
                CParticleSystem(const EVString &name, const EVString &resourceGroupName);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CParticleSystem();

				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);

				/// <summary>
				/// 设置此粒子系统是否被选中               
				/// </summary>
				/// <param name="val">被选中</param>
				/// <returns></returns>
				void setSelected(ev_bool val);
                /// <summary>
                /// 设置渲染粒子系统的渲染器
                /// </summary>
                /// <param name="typeName">渲染器类型的名称</param>
                /// <returns></returns>
                void setRenderer(const EVString &typeName);
                /// <summary>
                /// 获得渲染粒子系统的渲染器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleSystemRenderer *getRenderer() const;

                /// <summary>
                /// 获得渲染粒子系统的粒子渲染器的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getRendererName() const;
                /// <summary>
                /// 向粒子系统中添加一个发射器
                /// </summary>
                /// <param name="emitterType">创建的发射器的类型</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleEmitter *addEmitter(const EVString &emitterType);
                /// <summary>
                /// 通过发射器的索引获得发射器
                /// </summary>
                /// <param name="index">发射器的索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleEmitter *getEmitter(ev_uint16 index) const;
                /// <summary>
                /// 返回粒子系统发射器的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumEmitters() const;
                /// <summary>
                /// 从粒子系统中去除掉一个发射器
                /// </summary>
                /// <param name="index">发射器的索引</param>
                /// <returns></returns>
                void removeEmitter(ev_uint16 index);
                /// <summary>
                /// 从粒子系统中去除掉所有的发射器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllEmitters();
                /// <summary>
                /// 向粒子系统中添加一个效果器
                /// </summary>
                /// <param name="affectorType">效果器的类型</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleAffector *addAffector(const EVString &affectorType);
                /// <summary>
                /// 通过索引获得一个效果器
                /// </summary>
                /// <param name="index">效果器的索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleAffector *getAffector(ev_uint16 index) const;
                /// <summary>
                /// 获得粒子系统中效果器的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumAffectors() const;
                /// <summary>
                /// 从粒子系统中去除掉一个效果器
                /// </summary>
                /// <param name="index">效果器的索引</param>
                /// <returns></returns>
                void removeAffector(ev_uint16 index);
                /// <summary>
                /// 从粒子系统中去除掉所有的效果器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllAffectors();
                /// <summary>
                /// 清空所有的粒子
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 获得活跃粒子的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t getNumParticles() const;
                /// <summary>
                /// 手动添加粒子到系统中
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticle *createParticle();
                /// <summary>
                /// 手动添加发射器到系统中
                /// </summary>
                /// <param name="emitterName">发射器的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticle *createEmitterParticle(const EVString &emitterName);
                /// <summary>
                /// 手动从粒子系统中获得粒子
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticle *getParticle(ev_size_t index);
                /// <summary>
                /// 获得粒子系统中允许一次活跃粒子的最大数目
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t getParticleQuota() const;
                /// <summary>
                /// 设置粒子系统中允许一次活跃粒子的最大数目
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setParticleQuota(ev_size_t quota);
                /// <summary>
                /// 获得粒子系统中允许发射器一次发射活跃粒子的最大数目
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t getEmittedEmitterQuota() const;
                /// <summary>
                /// 设置粒子系统中允许发射器一次发射活跃粒子的最大数目
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setEmittedEmitterQuota(ev_size_t quota);
                /// <summary>
                /// 重载'='操作符
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleSystem &operator=(const EarthView::World::Graphic::CParticleSystem &rhs);
                /// <summary>
                /// 更新系统中的粒子
                /// </summary>
                /// <param name="timeElapsed">消耗的时间</param>
                /// <returns></returns>
                void _update(Real timeElapsed);
                /// <summary>
                /// 获得系统中遍历所有粒子的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleIterator _getIterator();
                /// <summary>
                /// 设置公告板使用的材质的名称
                /// </summary>
                /// <param name="name">材质的名称</param>
                /// <param name="groupName">资源组的名称</param>
                /// <returns></returns>
                virtual void setMaterialName( const EVString &name, const EVString &groupName );
                /// <summary>
                /// 设置公告板使用的材质的名称
                /// </summary>
                /// <param name="name">材质的名称</param>
                /// <returns></returns>
                virtual void setMaterialName( const EVString &name);
                /// <summary>
                /// 获得公告板使用的材质名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getMaterialName() const;
                /// <summary>                
                /// 通报当前摄像机
                /// </summary>
                /// <param name="cam">摄像机指针</param>
                /// <returns></returns>
                virtual void _notifyCurrentCamera( EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 通报被挂接                
                /// </summary>
                /// <param name="parent">父节点名称</param>
                /// <param name="isTagPoint">是否挂接在节点下</param>
                /// <returns></returns>
                void _notifyAttached( EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint );
                /// <summary>                
                /// 通报被挂接
                /// </summary>
                /// <param name="parent">父节点名称</param>
                /// <returns></returns>
                void _notifyAttached( EarthView::World::Graphic::CNode *ref_parent);
                /// <summary>
                /// 获取模型坐标系下的边框盒                
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
                /// <summary>                
                /// 获取当前对象的球体限定半径
                /// </summary>
                /// <param name=""></param>
                /// <returns>边框盒</returns>
                virtual Real getBoundingRadius() const;
                /// <summary>
                /// 更新渲染队列                
                /// 内部方法
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue);
                /// <summary>
                /// 访问可渲染对象                
                /// </summary>
                /// <param name="visitor"></param>
                /// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
                /// <returns></returns>
                void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor,
                                       ev_bool debugRenderables );
                /// <summary>
                /// 访问可渲染对象                
                /// </summary>
                /// <param name="visitor"></param>
                /// <returns></returns>
                void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor);
                /** Fast-forwards this system by the required number of seconds.
                @remarks
                    This method allows you to fast-forward a system so that it effectively looks like
                    it has already been running for the time you specify. This is useful to avoid the
                    'startup sequence' of a system, when you want the system to be fully populated right
                    from the start.
                @param
                    time The number of seconds to fast-forward by.
                @param
                    interval The sampling interval used to generate particles, apply affectors etc. The lower this
                    is the more realistic the fast-forward, but it takes more iterations to do it.
                */
                void fastForward(Real time, Real interval /*= 0.1*/);
                void fastForward(Real time);
                /// <summary>
                /// 设置粒子系统的速度因子
                /// </summary>
                /// <param name="speedFactor">速度因素</param>
                /// <returns></returns>
                void setSpeedFactor(Real speedFactor);
                /// <summary>
                /// 获得粒子系统的速度因子
                /// </summary>
                /// <param name=""></param>
                /// <returns>速度因素</returns>
                Real getSpeedFactor() const;
                /// <summary>
                /// 设置粒子系统重复的间隔
                /// </summary>
                /// <param name="iterationInterval">重复间隔，默认值为0</param>
                /// <returns></returns>
                void setIterationInterval(Real iterationInterval);
                /// <summary>
                /// 获得粒子系统重复的间隔
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getIterationInterval() const;
                /// <summary>
                /// 设置粒子系统实例默认的重复的间隔
                /// </summary>
                /// <param name="iterationInterval">重复间隔，默认值为0</param>
                /// <returns></returns>
                static void setDefaultIterationInterval(Real iterationInterval);
                /// <summary>
                /// 获得粒子系统实例默认的重复间隔
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static Real getDefaultIterationInterval();
                /// <summary>
                /// 设置当粒子系统不可见一段时间之后其应该停止更新
                /// </summary>
                /// <param name="timeout">粒子系统不可用的时间</param>
                /// <returns></returns>
                void setNonVisibleUpdateTimeout(Real timeout);

                /// <summary>
                /// 获得粒子系统不可见停止更新的时间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getNonVisibleUpdateTimeout() const;
                /// <summary>
                /// 设置所有粒子系统实例不可见的时间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static void setDefaultNonVisibleUpdateTimeout(Real timeout);
                /// <summary>
                /// 获得所有粒子系统实例不可见的时间
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static Real getDefaultNonVisibleUpdateTimeout();
                /// <summary>
                /// 获取移动对象类型的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                EVString getMovableType() const;
                /// <summary>
                /// 通知尺寸已经被调整
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyParticleResized();
                /// <summary>
                /// 通知尺寸被旋转
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyParticleRotated();
                /// <summary>
                /// 设置粒子默认的大小
                /// </summary>
                /// <param name="width">粒子的默认宽度</param>
                /// <param name="height">粒子的默认高度</param>
                /// <returns></returns>
                virtual void setDefaultDimensions(Real width, Real height);
                /// <summary>
                /// 设置粒子的默认宽度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setDefaultWidth(Real width);

                /// <summary>
                /// 获得粒子的默认宽度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getDefaultWidth() const;
                /// <summary>
                /// 设置粒子的默认高度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setDefaultHeight(Real height);
                /// <summary>
                /// 获得粒子的默认高度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getDefaultHeight() const;

                /// <summary>
                /// 判断粒子的裁剪模式是否采用单个粒子裁剪
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getCullIndividually() const;

                /// <summary>
                /// 设置粒子裁剪的方式是单个裁剪还是整体包围盒裁剪
                /// </summary>
                /// <param name="cullIndividual"></param>
                /// <returns></returns>
                virtual void setCullIndividually(ev_bool cullIndividual);

                /// <summary>
                /// 获得资源组的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getResourceGroupName() const;
                /// <summary>
                /// 获得粒子系统脚本文件的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getOrigin() const;
                //// Notify this particle system of it's origin
                void _notifyOrigin(const EVString &origin);
                /// <summary>
                /// 设置渲染实体的渲染队列组
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setRenderQueueGroup(ev_uint8 queueID);
                /// <summary>
                /// 设置粒子是否根据摄像机进行排序
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setSortingEnabled(ev_bool enabled);
                /// <summary>
                /// 获得粒子是否根据摄像机被排序
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getSortingEnabled() const;
                /// <summary>
                /// 设置粒子系统的包围盒
                /// </summary>
                /// <param name="aabb">本地空间的范围</param>
                /// <returns></returns>
                void setBounds(const EarthView::World::Spatial::Math::CAxisAlignedBox &aabb);
                /// <summary>
                /// 设置是否自动更新粒子系统的包围盒
                /// </summary>
                /// <param name="autoUpdate">如果为true粒子系统会自动更新每一个帧，否则停止范围更新</param>
                /// <param name="stopIn">如果第一个参数为true，则它是自动更新停止的时间</param>
                /// <returns></returns>
                void setBoundsAutoUpdated(ev_bool autoUpdate, Real stopIn );

                /// <summary>
                /// 设置是否自动更新粒子系统的包围盒
                /// </summary>
                /// <param name="autoUpdate">如果为true粒子系统会自动更新每一个帧，否则停止范围更新</param>               
                /// <returns></returns>
                void setBoundsAutoUpdated(ev_bool autoUpdate);
                /// <summary>
                /// 设置是否粒子和粒子系统挂接的节点保持关联性
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setKeepParticlesInLocalSpace(ev_bool keepLocal);
                /// <summary>
                /// 获得是否粒子和粒子系统挂接的节点保持关联性
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getKeepParticlesInLocalSpace() const;
                /// <summary>
                /// 更新粒子系统的范围
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _updateBounds();
                /// <summary>
                /// 打开或者关闭粒子系统的发射器
                /// </summary>
                /// <param name="v"></param>
                /// <returns></returns>
                void setEmitting(ev_bool v);
                /// <summary>
                /// 判断粒子系统的发射器是否打开
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果打开返回ture，关闭返回false</returns>
                ev_bool getEmitting() const;
                /// <summary>
                /// 获得专门的类型标识
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint32 getTypeFlags() const;

				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);				

				/// <summary>
				/// 获得选中的对象				
				/// <param name=""></param>				
				/// <returns>选中的对象集合</returns>
				EarthView::World::Core::IntVector getSelected()const;	

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				/// <summary>
                /// 盒选择
                /// </summary>
                /// <param name="aabb">盒</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定盒相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec);
                /// <summary>
                /// 球选择
                /// </summary>
                /// <param name="sphere">球</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定球相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CSphere& sphere,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec);

				/// <summary>
				/// 选择组件
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
				/// <param name="objIndex">物体序号</param>
				/// <param name="submeshIndex">submesh序号</param>
				/// <param name="instanceIndex">instance序号</param>
				/// <param name="segmentIndex">索引分段序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:组件与射线相交;false:不相交</returns>
				virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport,ev_bool prepareToRenderSelection,_out ev_int32& objIndex,_out ev_int32& submeshIndex,_out ev_int32& instanceIndex,_out ev_int32& segmentIndex,_out EarthView::World::Spatial::Math::CVector3& point)
				{
					return false;
				}



                /// <summary>
                /// 绘制选择对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void renderSelection();

                /// <summary>
                /// 清除选择
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void clearSelection();

				/// <summary>
				/// 开始编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool startEditing(ev_uint32 objectIndex);
				/// <summary>
				/// 结束编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void endEditing();
				/// <summary>
				/// 获得编辑包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox();

				/// <summary>
				/// 获得选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex,EarthView::World::Spatial::Math::CMatrix4& matrix);
				/// <summary>
				/// 设置选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex,const EarthView::World::Spatial::Math::CMatrix4& matrix);
				/// <summary>
				/// 配置渲染器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void configureRenderer();
            protected:
                //// Command objects
                static CCmdCull msCullCmd;
                static CCmdHeight msHeightCmd;
                static CCmdMaterial msMaterialCmd;
                static CCmdQuota msQuotaCmd;
                static CCmdEmittedEmitterQuota msEmittedEmitterQuotaCmd;
                static CCmdWidth msWidthCmd;
                static CCmdRenderer msRendererCmd;
                static CCmdSorted msSortedCmd;
                static CCmdLocalSpace msLocalSpaceCmd;
                static CCmdIterationInterval msIterationIntervalCmd;
                static CCmdNonvisibleTimeout msNonvisibleTimeoutCmd;

                EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
                Real mBoundingRadius;
                ev_bool mBoundsAutoUpdate;
                Real mBoundsUpdateTime;
                Real mUpdateRemainTime;
                //// World AABB, only used to compare world-space positions to calc bounds
                EarthView::World::Spatial::Math::CAxisAlignedBox mWorldAABB;
                //// Name of the resource group to use to load materials
                EVString mResourceGroupName;
                //// Name of the material to use
                EVString mMaterialName;
                //// Have we set the material etc on the renderer?
                ev_bool mIsRendererConfigured;
                //// Pointer to the material to use
                CMaterialPtr mpMaterial;
                //// Default width of each particle
                Real mDefaultWidth;
                //// Default height of each particle
                Real mDefaultHeight;
                //// Speed factor
                Real mSpeedFactor;
                //// Iteration interval
                Real mIterationInterval;
                //// Iteration interval set? Otherwise track default
                ev_bool mIterationIntervalSet;
                //// Particles sorted according to camera?
                ev_bool mSorted;
                //// Particles in local space?
                ev_bool mLocalSpace;
                //// Update timeout when nonvisible (0 for no timeout)
                Real mNonvisibleTimeout;
                //// Update timeout when nonvisible set? Otherwise track default
                ev_bool mNonvisibleTimeoutSet;
                //// Amount of time non-visible so far
                Real mTimeSinceLastVisible;
                //// Last frame in which known to be visible
                ev_uint32 mLastVisibleFrame;
                //// CController for time update
                CController *mTimeController;
                //// Indication whether the emitted emitter pool (= pool with particle emitters that are emitted) is initialised
                ev_bool mEmittedEmitterPoolInitialised;
                //// Used to control if the particle system should emit particles or not.
                ev_bool mIsEmitting;
                typedef ParticleList ActiveParticleList;
                typedef ParticleList FreeParticleList;
                typedef vector<EarthView::World::Graphic::CParticle *> ParticlePool;
                /** Sort by direction functor */
                struct SortByDirectionFunctor
                {
                    //// Direction to sort in
                    EarthView::World::Spatial::Math::CVector3 sortDir;
                    SortByDirectionFunctor(const EarthView::World::Spatial::Math::CVector3 &dir);
                    ev_real32 operator()( EarthView::World::Graphic::CParticle *p) const;
                };
                /** Sort by distance functor */
                struct SortByDistanceFunctor
                {
                    //// Position to sort in
                    EarthView::World::Spatial::Math::CVector3 sortPos;
                    SortByDistanceFunctor(const EarthView::World::Spatial::Math::CVector3 &pos);
                    ev_real32 operator()( EarthView::World::Graphic::CParticle *p) const;
                };
                static CRadixSort<ActiveParticleList, EarthView::World::Graphic::CParticle *, ev_real32> mRadixSorter;
                /** Active particle list.
                    @remarks
                        This is a linked list of pointers to particles in the particle pool.
                    @par
                        This allows very fast insertions and deletions from anywhere in
                        the list to activate / deactivate particles as well as reuse of
                        CParticle instances in the pool without construction & destruction
                        which avoids memory thrashing.
                */
                ActiveParticleList mActiveParticles;
                /** Free particle queue.
                    @remarks
                        This contains a list of the particles free for use as new instances
                        as required by the set. CParticle instances are preconstructed up
                        to the estimated size in the mParticlePool vector and are
                        referenced on this deque at startup. As they get used this list
                        reduces, as they get released back to to the set they get added
                		back to the list.
                */
                FreeParticleList mFreeParticles;
                /** CPool of particle instances for use and reuse in the active particle list.
                    @remarks
                        This vector will be preallocated with the estimated size of the set,and will extend as required.
                */
                ParticlePool mParticlePool;
                typedef list<EarthView::World::Graphic::CParticleEmitter *> FreeEmittedEmitterList;
                typedef list<EarthView::World::Graphic::CParticleEmitter *> ActiveEmittedEmitterList;
                typedef vector<EarthView::World::Graphic::CParticleEmitter *> EmittedEmitterList;
                typedef map<EVString, FreeEmittedEmitterList> FreeEmittedEmitterMap;
                typedef map<EVString, EmittedEmitterList> EmittedEmitterPool;
                /** CPool of emitted emitters for use and reuse in the active emitted emitter list.
                @remarks
                	The emitters in this pool act as particles and as emitters. The pool is a map containing lists
                	of emitters, identified by their name.
                @par
                	of the EarthView::World::Graphic::CParticleSystem.
                */
                EmittedEmitterPool mEmittedEmitterPool;
                /** Free emitted emitter list.
                    @remarks
                        This contains a list of the emitters free for use as new instances as required by the set.
                */
                FreeEmittedEmitterMap mFreeEmittedEmitters;
                /** Active emitted emitter list.
                    @remarks
                        This is a linked list of pointers to emitters in the emitted emitter pool.
                		Emitters that are used are stored (their pointers) in both the list with active particles and in
                		the list with active emitted emitters.        */
                ActiveEmittedEmitterList mActiveEmittedEmitters;
                typedef vector<EarthView::World::Graphic::CParticleEmitter *> ParticleEmitterList;
                typedef vector<EarthView::World::Graphic::CParticleAffector *> ParticleAffectorList;

                //// List of particle emitters, ie sources of particles
                ParticleEmitterList mEmitters;
                //// List of particle affectors, ie modifiers of particles
                ParticleAffectorList mAffectors;
                //// The renderer used to render this particle system
                EarthView::World::Graphic::CParticleSystemRenderer *mRenderer;
                //// Do we cull each particle individually?
                ev_bool mCullIndividual;
                //// The name of the type of renderer used to render this system
                EVString mRendererType;

                //// The number of particles in the pool.
                ev_size_t mPoolSize;
                //// The number of emitted emitters in the pool.
                ev_size_t mEmittedEmitterPoolSize;
                //// Optional origin of this particle system (eg script name)
                EVString mOrigin;
                //// Default iteration interval
                static Real msDefaultIterationInterval;
                //// Default nonvisible update timeout
                static Real msDefaultNonvisibleTimeout;
                
                ev_bool mbSelected;
                ev_bool mRenderSelection;
				EarthView::World::Graphic::CEditBoundingBox* mpEditBox;

                /// <summary>
                /// 终止死亡的粒子
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _expire(Real timeElapsed);
                /// <summary>
                /// 基于自由粒子的数目和发射的需要产生新的粒子
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _triggerEmitters(Real timeElapsed);
                /// <summary>
                /// 执行粒子的发射
                /// </summary>
                /// <param name="emitter">指向粒子发射器的指针</param>
                /// <param name="requested"></param>
                /// <param name="timeElapsed"></param>
                /// <returns></returns>
                void _executeTriggerEmitters(EarthView::World::Graphic::CParticleEmitter *emitter, ev_uint32 requested, Real timeElapsed);
                /// <summary>
                /// 更新已存在的粒子
                /// </summary>
                /// <param name="timeElapsed"></param>
                /// <returns></returns>
                void _applyMotion(Real timeElapsed);
                /// <summary>
                /// 使用效果器
                /// </summary>
                /// <param name="timeElapsed"></param>
                /// <returns></returns>
                void _triggerAffectors(Real timeElapsed);
                /// <summary>
                /// 分类粒子
                /// </summary>
                /// <param name="cam">指向摄像机的指针</param>
                /// <returns></returns>
                void _sortParticles(EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 调整粒子池的大小
                /// </summary>
                /// <param name="size">大小</param>
                /// <returns></returns>
                void increasePool(ev_size_t size);
                /// <summary>
                /// 调整发射器池的大小
                /// </summary>
                /// <param name="size">大小</param>
                /// <returns></returns>
                void increaseEmittedEmitterPool(ev_size_t size);
                /// <summary>
                /// 初始化string接口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void initParameters();
                
                /// <summary>
                /// 为粒子池创建CParticleVisualData实例
                /// </summary>
                /// <param name="poolstart"></param>
                /// <param name="poolend"></param>
                /// <returns></returns>
                void createVisualParticles(ev_size_t poolstart, ev_size_t poolend);
                /// <summary>
                /// 销毁CParticleVisualData实例
                /// </summary>
                /// <param name="poolstart"></param>
                /// <param name="poolend"></param>
                /// <returns></returns>
                void destroyVisualParticles(ev_size_t poolstart, ev_size_t poolend);
                /// <summary>
                /// 创建一个发射器池，并将他们分配到自由发生器列表中
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void initialiseEmittedEmitters();
                /// <summary>
                /// 确定粒子系统中哪一个发射器可以作为创建发射器池的模板
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void initialiseEmittedEmitterPool();
                /// <summary>
                /// 从发射器池向发射器队列中添加发射器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void addFreeEmittedEmitters();
                /// <summary>
                /// 从粒子系统中去除掉所有的发射器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllEmittedEmitters();
                /// <summary>
                /// 从粒子系统中去除掉所有的发射器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                FreeEmittedEmitterList *findFreeEmittedEmitter (const EVString &name);
                /// <summary>
                /// 从活跃的发射器列表中删除一个发射器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeFromActiveEmittedEmitters (  EarthView::World::Graphic::CParticleEmitter *emitter);
                /// <summary>
                /// 从发射器列表中去除掉所有的发射器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void addActiveEmittedEmittersToFreeList ();
                /// <summary>
                /// 这个函数用来清空所有结合发射器和标记发射器池进行初始化标志的所有数据结构
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _notifyReorganiseEmittedEmitterData ();
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

