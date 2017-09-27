#ifndef __ParticleSystemManager_H__
#define __ParticleSystemManager_H__
#include "graphic/graphic_config.h"
#include <core/iteratorwrapper.h>
#include "scriptloader.h"
#include "movableobject.h"
#include <core/stringvector.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {            
            class CParticleSystemFactory;
            /// <summary>
            /// 粒子系统管理器
            /// </summary>
            class EV_GRAPHIC_DLL CParticleSystemManager : public EarthView::World::Graphic::CScriptLoader  /*,public CSingleton<EarthView::World::Graphic::CParticleSystemManager> */
            {
                friend class CParticleSystemFactory;
                ///public:
                /// typedef map<EVString, EarthView::World::Graphic::CParticleSystem*> EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap;
                ///typedef map<EVString, EarthView::World::Graphic::CParticleAffectorFactory*> EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap;
                ///typedef map<EVString, EarthView::World::Graphic::CParticleEmitterFactory*> EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap;
                ///typedef map<EVString, EarthView::World::Graphic::CParticleSystemRendererFactory*> EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap;
            private:
                static EarthView::World::Graphic::CParticleSystemManager *ms_Singleton;
            public:
                class EV_GRAPHIC_DLL ParticleTemplateMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleTemplateMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ParticleTemplateMap();
                    /// <summary>
                    /// 在map容器中添加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CParticleSystem *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(const EVString &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleSystem*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleSystem*& get(const EVString &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(const EVString &key);
                    /// <summary>
                    /// 返回容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断容器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器为空返回true，否则false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CParticleSystem *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 容器中插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(const value_type &val);
                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    iterator find(const EVString &key);

                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL ParticleAffectorFactoryMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleAffectorFactoryMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ParticleAffectorFactoryMap();
                    /// <summary>
                    /// 在map容器中添加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CParticleAffectorFactory *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(const EVString &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleAffectorFactory*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleAffectorFactory*& get(const EVString &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(const EVString &key);
                    /// <summary>
                    /// 返回容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断容器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器为空返回true，否则false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CParticleAffectorFactory *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 容器中插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(const value_type &val);
                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    iterator find(const EVString &key);

                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL ParticleEmitterFactoryMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleEmitterFactoryMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ParticleEmitterFactoryMap();
                    /// <summary>
                    /// 在map容器中添加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CParticleEmitterFactory *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(const EVString &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleEmitterFactory*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleEmitterFactory*& get(const EVString &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(const EVString &key);
                    /// <summary>
                    /// 返回容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断容器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器为空返回true，否则false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CParticleEmitterFactory *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 容器中插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(const value_type &val);
                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    iterator find(const EVString &key);

                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
                class EV_GRAPHIC_DLL ParticleSystemRendererFactoryMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleSystemRendererFactoryMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ParticleSystemRendererFactoryMap();
                    /// <summary>
                    /// 在map容器中添加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CParticleSystemRendererFactory *const &ref_val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(const EVString &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleSystemRendererFactory*& operator[](const EVString &key)
                    {
                        return get(key);
                    }
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Graphic::CParticleSystemRendererFactory*& get(const EVString &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(const EVString &key);
                    /// <summary>
                    /// 返回容器的大小
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器的大小</returns>
                    ev_size_t size() const;
                    /// <summary>
                    /// 清空容器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void clear();
                    /// <summary>
                    /// 判断容器是否为空
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器为空返回true，否则false</returns>
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CParticleSystemRendererFactory *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    /// <summary>
                    /// 容器中插入元素
                    /// </summary>
                    /// <param name="val">值</param>
                    /// <returns>插入后的键值对</returns>
                    _Pairib insert(const value_type &val);
                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    iterator find(const EVString &key);

                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };

            protected:
                EV_AUTO_MUTEX

                //// Templates based on scripts
                EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap mSystemTemplates;

                EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap mEmitterFactories;
                EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap mAffectorFactories;
                //// Map of renderer types to factories
                EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap mRendererFactories;
                EarthView::World::Core::StringVector mScriptPatterns;
                /// Factory instance
                EarthView::World::Graphic::CParticleSystemFactory *mFactory;
                /** Internal script parsing method. */
                void parseNewEmitter(const EVString &type, EarthView::World::Core::DataStreamPtr &chunk, EarthView::World::Graphic::CParticleSystem *sys);
                /** Internal script parsing method. */
                void parseNewAffector(const EVString &type, EarthView::World::Core::DataStreamPtr &chunk,  EarthView::World::Graphic::CParticleSystem *sys);
                /** Internal script parsing method. */
                void parseAttrib(const EVString &line,  EarthView::World::Graphic::CParticleSystem *sys);
                /** Internal script parsing method. */
                void parseEmitterAttrib(const EVString &line, EarthView::World::Graphic::CParticleEmitter *sys);
                /** Internal script parsing method. */
                void parseAffectorAttrib(const EVString &line, EarthView::World::Graphic::CParticleAffector *sys);
                /** Internal script parsing method. */
                void skipToNextCloseBrace(EarthView::World::Core::DataStreamPtr &chunk);
                /** Internal script parsing method. */
                void skipToNextOpenBrace(EarthView::World::Core::DataStreamPtr &chunk);
                //// Internal implementation of createSystem
                _extfree EarthView::World::Graphic::CParticleSystem *createSystemImpl(const EVString &name, ev_size_t quota,
                        const EVString &resourceGroup);
                //// Internal implementation of createSystem
                _extfree EarthView::World::Graphic::CParticleSystem *createSystemImpl(const EVString &name, const EVString &templateName);
                //// Internal implementation of destroySystem
                void destroySystemImpl( EarthView::World::Graphic::CParticleSystem *sys);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleSystemManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleSystemManager();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CParticleSystemManager();
                /// <summary>
                /// 添加一个新的发射器对象工厂到可用的发射器类型列表中
                /// </summary>
                /// <param name="factory">指向EarthView::World::Graphic::CParticleEmitterFactory的指针</param>
                /// <returns></returns>
                void addEmitterFactory(EarthView::World::Graphic::CParticleEmitterFactory *ref_factory);
                /// <summary>
                /// 添加一个新的效果器对象工厂到可用的发射器类型列表中
                /// </summary>
                /// <param name="factory">指向EarthView::World::Graphic::CParticleEmitterFactory的指针</param>
                /// <returns></returns>
                void addAffectorFactory(EarthView::World::Graphic::CParticleAffectorFactory *ref_factory);
                /// <summary>
                /// 注册一个工厂类来创建EarthView::World::Graphic::CParticleSystemRenderer实例
                /// </summary>
                /// <param name="factory">指向EarthView::World::Graphic::CParticleSystemRendererFactory的指针</param>
                /// <returns></returns>
                void addRendererFactory( EarthView::World::Graphic::CParticleSystemRendererFactory *ref_factory);
                /// <summary>
                /// 添加一个新的粒子系统模板到可用的模板列表中
                /// </summary>
                /// <param name="name">模板的名称</param>
                /// <param name="sysTemplate">指向粒子系统的指针</param>
                /// <returns></returns>
                void addTemplate(const EVString &name, EarthView::World::Graphic::CParticleSystem *ref_sysTemplate);
                /// <summary>
                /// 从粒子系统管理中去除掉一个已给的模板
                /// </summary>
                /// <param name="name">去除模板的名称</param>
                /// <param name="deleteTemplate ">如果为ture删除模板，否则不删除</param>
                /// <returns></returns>
                void removeTemplate(const EVString &name, ev_bool deleteTemplate );
                /// <summary>
                /// 从粒子系统管理中去除掉一个已给的模板
                /// </summary>
                /// <param name="name">去除模板的名称</param>
                /// <returns></returns>
                void removeTemplate(const EVString &name);
                /// <summary>
                /// 从粒子系统管理中去除所有的模板
                /// </summary>
                /// <param name="deleteTemplate">如果为ture删除模板，否则不删除</param>
                /// <returns></returns>
                void removeAllTemplates(ev_bool deleteTemplate);
                /// <summary>
                /// 从粒子系统管理中去除所有的模板
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllTemplates();
                /// <summary>
                /// 去除指定资源组的所有模板
                /// </summary>
                /// <param name="resourceGroup">删除模板的资源组</param>
                /// <returns></returns>
                void removeTemplatesByResourceGroup(const EVString &resourceGroup);
                /// <summary>
                /// 创建一个新的粒子系统模板
                /// </summary>
                /// <param name="name">模板的名称</param>
                /// <param name="resourceGroup">资源组的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleSystem *createTemplate(const EVString &name, const EVString &resourceGroup);
                /// <summary>
                /// 获得粒子系统模板
                /// </summary>
                /// <param name="name">模板的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleSystem *getTemplate(const EVString &name);
                /// <summary>
                /// 创建一个新的发射器
                /// </summary>
                /// <param name="emitterType">创建的发射器类型的名称</param>
                /// <param name="psys"><指向粒子系统的指针/param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleEmitter *_createEmitter(const EVString &emitterType, EarthView::World::Graphic::CParticleSystem *psys);
                /// <summary>
                /// 销毁一个发射器
                /// </summary>
                /// <param name="emitter">指向被销毁发射器的指针</param>
                /// <returns></returns>
                void _destroyEmitter( EarthView::World::Graphic::CParticleEmitter *emitter);
                /// <summary>
                /// 创建一个新的效果器
                /// </summary>
                /// <param name="affectorType">创建的效果器类型的名称</param>
                /// <param name="psys"><指向粒子系统的指针/param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleAffector *_createAffector(const EVString &affectorType, EarthView::World::Graphic::CParticleSystem *psys);
                /// <summary>
                /// 销毁一个效果器
                /// </summary>
                /// <param name="affector">指向被销毁效果器的指针</param>
                /// <returns></returns>
                void _destroyAffector( EarthView::World::Graphic::CParticleAffector *affector);
                /// <summary>
                /// 创建一个新的渲染器
                /// </summary>
                /// <param name="rendererType">创建的渲染器类型的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleSystemRenderer *_createRenderer(const EVString &rendererType);
                /// <summary>
                /// 销毁一个渲染器
                /// </summary>
                /// <param name="renderer">指向被销毁渲染器的指针</param>
                /// <returns></returns>
                void _destroyRenderer( EarthView::World::Graphic::CParticleSystemRenderer *renderer);
                /// <summary>
                /// 初始化方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _initialise();
                /// <summary>
                /// 获得用来查找脚本文件的文件样式
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Core::StringVector &getScriptPatterns() const;

                /// <summary>
                /// 解析脚本文件
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void parseScript(EarthView::World::Core::DataStreamPtr &stream, const EVString &groupName);
                /// <summary>
                /// 获得文件的下载顺序
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real getLoadingOrder() const;

                ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap> EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator;
                class EV_GRAPHIC_DLL StringParticleAffectorFactoryPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    StringParticleAffectorFactoryPair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    StringParticleAffectorFactoryPair();
                    EVString first;
                    EarthView::World::Graphic::CParticleAffectorFactory *second;
                };
                class EV_GRAPHIC_DLL ParticleAffectorFactoryIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ParticleAffectorFactoryIterator(const_iterator first, const_iterator last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator &operator=(_in const EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ParticleAffectorFactoryIterator();
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext();

                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();

                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleAffectorFactoryIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    ParticleAffectorFactoryIterator(const ParticleAffectorFactoryIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs">迭代器对应集合</param>
                    /// <returns></returns>
                    ParticleAffectorFactoryIterator(EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryMap &lst);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    EVString nextKey() const
                    {
                        return mIterator->peekNextKey();
                    }
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleAffectorFactory *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CParticleAffectorFactory **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleAffectorFactory *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair mBeginPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair mCurrentPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleAffectorFactoryPair mEndPair;
                    EarthView::World::Graphic::CParticleAffectorFactory *mptr;
                    ValueType mvt;
                };
                ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap> EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator;
                class EV_GRAPHIC_DLL StringParticleEmitterFactoryPair :  public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    StringParticleEmitterFactoryPair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    StringParticleEmitterFactoryPair();
                    EVString first;
                    EarthView::World::Graphic::CParticleEmitterFactory *second;
                };
                class EV_GRAPHIC_DLL ParticleEmitterFactoryIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ParticleEmitterFactoryIterator(const_iterator first, const_iterator last);


                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator &operator=(_in const EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ParticleEmitterFactoryIterator();
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext();

                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleEmitterFactoryIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    ParticleEmitterFactoryIterator(const ParticleEmitterFactoryIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs">迭代器对应集合</param>
                    /// <returns></returns>
                    ParticleEmitterFactoryIterator(EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryMap &lst);

                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    EVString nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleEmitterFactory *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CParticleEmitterFactory **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleEmitterFactory *next()
                    {
                        return mIterator->getNext();
                    }
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair mBeginPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair mCurrentPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleEmitterFactoryPair mEndPair;
                    EarthView::World::Graphic::CParticleEmitterFactory *mptr;
                    ValueType mvt;
                };
                ///typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap> EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator;
                class EV_GRAPHIC_DLL StringParticleSystemRendererFactoryPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    StringParticleSystemRendererFactoryPair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    StringParticleSystemRendererFactoryPair();
                    EVString first;
                    EarthView::World::Graphic::CParticleSystemRendererFactory *second;
                };
                class EV_GRAPHIC_DLL ParticleRendererFactoryIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ParticleRendererFactoryIterator(const_iterator first, const_iterator last);

                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator &operator=(_in const EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ParticleRendererFactoryIterator();
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext();

                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();

                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleRendererFactoryIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    ParticleRendererFactoryIterator(const ParticleRendererFactoryIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs">迭代器对应集合</param>
                    /// <returns></returns>
                    ParticleRendererFactoryIterator(EarthView::World::Graphic::CParticleSystemManager::ParticleSystemRendererFactoryMap &lst);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    EVString nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleSystemRendererFactory *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CParticleSystemRendererFactory **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleSystemRendererFactory *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair mBeginPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair mCurrentPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleSystemRendererFactoryPair mEndPair;
                    EarthView::World::Graphic::CParticleSystemRendererFactory *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 获得效果器工厂的一个迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>迭代器</returns>
                EarthView::World::Graphic::CParticleSystemManager::ParticleAffectorFactoryIterator getAffectorFactoryIterator();

                /// <summary>
                /// 获得发射器工厂的一个迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>迭代器</returns>
                EarthView::World::Graphic::CParticleSystemManager::ParticleEmitterFactoryIterator getEmitterFactoryIterator();

                /// <summary>
                /// 获得渲染器工厂的一个迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>迭代器</returns>
                EarthView::World::Graphic::CParticleSystemManager::ParticleRendererFactoryIterator getRendererFactoryIterator();

                /// typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap> EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator;
                class EV_GRAPHIC_DLL StringParticleTemplateMapPair : public  EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    StringParticleTemplateMapPair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    StringParticleTemplateMapPair();
                    EVString first;
                    EarthView::World::Graphic::CParticleSystem *second;
                };
                class EV_GRAPHIC_DLL ParticleSystemTemplateIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="first">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    ParticleSystemTemplateIterator(const_iterator first, const_iterator last);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~ParticleSystemTemplateIterator();
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator &operator=(_in const EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator &other);
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的键</returns>
                    KeyType peekNextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType peekNextValue (  ) const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值指针</returns>
                    const PointerType peekNextValuePtr ();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext()
                    {
                        return mIterator->getNext() ;
                    }

                    /// <summary>
                    /// 返回容器首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回容器当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器当前迭代器</returns>
                    IteratorType &current();
                    /// <summary>
                    /// 返回容器尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>容器尾迭代器</returns>
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    ParticleSystemTemplateIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    ParticleSystemTemplateIterator(const ParticleSystemTemplateIterator &other);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs">迭代器对应集合</param>
                    /// <returns></returns>
                    ParticleSystemTemplateIterator(EarthView::World::Graphic::CParticleSystemManager::ParticleTemplateMap &lst);
                    /// <summary>
                    /// 判断迭代器是否到达容器末尾
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>是返回true，否则false</returns>
                    ev_bool hasMoreElements ( ) const;
                    /// <summary>
                    /// 迭代器位置后移
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    void moveNext (  );
                    /// <summary>
                    /// 返回容器当前的键
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>键</returns>
                    EVString nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleSystem *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CParticleSystem **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CParticleSystem *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair mBeginPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair mCurrentPair;
                    EarthView::World::Graphic::CParticleSystemManager::StringParticleTemplateMapPair mEndPair;
                    EarthView::World::Graphic::CParticleSystem *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 获得粒子系统模板迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleSystemManager::ParticleSystemTemplateIterator getTemplateIterator();

                /// <summary>
                /// 获得EarthView::World::Graphic::CParticleSystemFactory类的实例
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CParticleSystemFactory *_getFactory()
                {
                    return mFactory;
                }

                static EarthView::World::Graphic::CParticleSystemManager &getSingleton();

                static EarthView::World::Graphic::CParticleSystemManager *getSingletonPtr();
            };
            /// <summary>
            /// 创建EarthView::World::Graphic::CParticleSystem实例的工厂对象
            /// </summary>
            class EV_GRAPHIC_DLL CParticleSystemFactory : public EarthView::World::Graphic::CMovableObjectFactory
            {
            ev_internal:
                EarthView::World::Graphic::CMovableObject *createInstanceImpl(const EVString &name, const EarthView::World::Core::NameValuePairList *params);
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CParticleSystemFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CParticleSystemFactory();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CParticleSystemFactory();

                static EVString FACTORY_TYPE_NAME;
                EVString getType() const;
                void destroyInstance( EarthView::World::Graphic::CMovableObject *obj);

            };
            /** @} */
            /** @} */
        }
    }
}

#endif

