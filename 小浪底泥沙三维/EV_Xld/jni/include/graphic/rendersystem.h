#ifndef __RenderSystem_H_
#define __RenderSystem_H_
#include "graphic/graphic_config.h"
#include <mathengine/plane.h>
#include "textureunitstate.h"
#include "rendersystemcapabilities.h"
#include "gpuprogramparams.h"
#include "hardwarevertexbuffer.h"
#include "rendersystem_def.h"
#include "materialmanager.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class ConfigOptionMap;
            class CHardwareOcclusionQuery;
            class CMultiRenderTarget;
            class CGpuProgram;
            class CRenderTarget;
            class CViewport;
            class CRenderOperation;
            class CCamera;
            class CViewport;
            class CDepthBuffer;            
           
            class EV_GRAPHIC_DLL DepthBufferVec : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                DepthBufferVec(_in EarthView::World::Core::CNameValuePairList *pList) {}
            ev_private:
                typedef vector<EarthView::World::Graphic::CDepthBuffer *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList);
                iterator insert(iterator pos, EarthView::World::Graphic::CDepthBuffer *const &ref_t)
                {
                    return mList.insert(pos, ref_t);
                }
            private:
                InternalList mList;
            public:
                DepthBufferVec() {}
                void push_back(EarthView::World::Graphic::CDepthBuffer *const &ref_t)
                {
                    mList.push_back(ref_t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                EarthView::World::Graphic::CDepthBuffer*& front()
                {
                    return mList.front();
                }
                EarthView::World::Graphic::CDepthBuffer*& back()
                {
                    return mList.back();
                }
                void insert(ev_uint32 pos, EarthView::World::Graphic::CDepthBuffer *const &ref_t)
                {
                    mList.insert(begin() + pos, ref_t);
                }
                void remove(ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                EarthView::World::Graphic::CDepthBuffer*& operator[](ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::CDepthBuffer *const &operator[](ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                EarthView::World::Graphic::CDepthBuffer*& at(ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::CDepthBuffer *const &at(ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void reserve(ev_size_t count)
                {
                    mList.reserve(count);
                }
                void clear()
                {
                    mList.clear();
                }
            };
            ///typedef map< uint16, EarthView::World::Graphic::DepthBufferVec >::type DepthBufferMap;
            class EV_GRAPHIC_DLL DepthBufferMap : public EarthView::World::Core::CBaseObject
            {
            public:
                ev_bool push(const ev_uint16 &key, EarthView::World::Graphic::DepthBufferVec const &val)
                {
                    if(mList.find(key) == mList.end())
                    {
                        mList[key] = (EarthView::World::Graphic::DepthBufferVec)val;
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                ev_bool exist(const ev_uint16 &key)
                {
                    return mList.find(key) != mList.end();
                }
                EarthView::World::Graphic::DepthBufferVec &operator[](const ev_uint16 &key)
                {
                    return get(key);
                }
                EarthView::World::Graphic::DepthBufferVec &get(const ev_uint16 &key)
                {
                    return mList[key];
                }
                void erase(const ev_uint16 &key)
                {
                    if(exist(key))
                        mList.erase(key);
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void clear()
                {
                    mList.clear();
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                DepthBufferMap() {}
            ev_private:
                DepthBufferMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
            ev_private:
                typedef map<ev_uint16, EarthView::World::Graphic::DepthBufferVec> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);
                _Pairib insert(const value_type &val)
                {
                    return mList.insert(val);
                }
                iterator find(const ev_uint16 &key)
                {
                    return mList.find(key);
                }
                const_iterator find(const ev_uint16 &key) const
                {
                    return mList.find(key);
                }
            private:
                InternalList mList;
            };
            /*typedef map< EVString, EarthView::World::Graphic::CRenderTarget * > EarthView::World::Graphic::RenderTargetMap;*/
            class EV_GRAPHIC_DLL RenderTargetMap : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderTargetMap(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderTargetMap();
                /// <summary>
                /// 在map容器中添加元素
                /// </summary>
                /// <param name="key">键</param>
                /// <param name="val">值</param>
                /// <returns>成功增加true，否则false</returns>
                ev_bool push(const EVString &key, EarthView::World::Graphic::CRenderTarget *const &ref_val);
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
                EarthView::World::Graphic::CRenderTarget*& operator[](const EVString &key)
                {
                    return get(key);
                }
                /// <summary>
                /// 获得键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回键对应的值</returns>
                EarthView::World::Graphic::CRenderTarget*& get(const EVString &key);
                /// <summary>
                /// 删除键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns></returns>
                void erase(const EVString &key);
                /// <summary>
                /// 返回集合的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>集合的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 清空集合
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
                /// <summary>
                /// 判断集合是否为空
                /// </summary>
                /// <param name=""></param>
                /// <returns>集合为空返回true，否则false</returns>
                ev_bool empty() const;
            ev_private:
                typedef map<EVString, EarthView::World::Graphic::CRenderTarget *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);
                /// <summary>
                /// 集合插入元素
                /// </summary>
                /// <param name="val">值</param>
                /// <returns>插入后的键值对</returns>
                _Pairib insert(const value_type &val);
                /// <summary>
                /// 查找元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>查找后返回对应迭代器</returns>
                iterator find(const EVString &key);

                /// <summary>
                /// 查找元素
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>查找后返回对应迭代器</returns>
                const_iterator find(const EVString &key) const;
            private:
                InternalList mList;
            };

            /*typedef multimap<ev_uchar, EarthView::World::Graphic::CRenderTarget * > RenderTargetPriorityMap;*/
            class EV_GRAPHIC_DLL RenderTargetPriorityMap : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                RenderTargetPriorityMap(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                RenderTargetPriorityMap();

                /// <summary>
                /// 在map容器中添加元素
                /// </summary>
                /// <param name="key">键</param>
                /// <param name="val">值</param>
                /// <returns>成功增加true，否则false</returns>
                void push(const ev_uchar &key, EarthView::World::Graphic::CRenderTarget *const &ref_val);
                /// <summary>
                /// 判断元素是否存在
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>存在true，否则false</returns>
                ev_bool exist(const ev_uchar &key);

                /// <summary>
                /// 删除键对应的值
                /// </summary>
                /// <param name="key">键</param>
                /// <returns></returns>
                void erase(const ev_uchar &key);
                /// <summary>
                /// 返回容器的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns>容器的大小</returns>
                ev_size_t size() const;
                /// <summary>
                /// 返回容器中键出现的次数
                /// </summary>
                /// <param name=""></param>
                /// <returns>次数</returns>
                ev_size_t count(const ev_uchar &key);
                ///获取指定键值的第几项
                EarthView::World::Graphic::CRenderTarget*& get(const ev_uchar &key, ev_size_t index)
                {
                    iterator it = mList.find(key);
                    if(it == mList.end())
                    {
                        static EarthView::World::Graphic::CRenderTarget *ptr = NULL;
                        return ptr;
                    }
                    ev_size_t count = mList.count(key);
                    for (ev_uint32 i = 0; i < index && index < count; i++)
                    {
                        it++;
                    }
                    return it->second;
                }
                ///删除指定键值的第几项
                void erase(const ev_uchar &key, ev_size_t index);
                void clear();
                ev_bool empty() const;
            ev_private:
                typedef multimap<ev_uchar, EarthView::World::Graphic::CRenderTarget *> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MULTIMAP(mList);
                /// <summary>
                /// 容器中插入元素
                /// </summary>
                /// <param name="val">值</param>
                /// <returns>插入后的值</returns>
                iterator insert(const value_type &val);
                /// <summary>
                /// 如果容器中存在看key索引存在的元素，则返回指向该元素的迭代器
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回指向该元素的迭代器</returns>
                iterator find(const ev_uchar &key);

                /// <summary>
                /// 如果容器中存在看key索引存在的元素，则返回指向该元素的迭代器
                /// </summary>
                /// <param name="key">键</param>
                /// <returns>返回指向该元素的迭代器</returns>
                const_iterator find(const ev_uchar &key) const;
            private:
                InternalList mList;
            };
            class CTextureManager;

            /// <summary>
            /// 定义了3D应用程序接口的功能性
            /// </summary>
            class EV_GRAPHIC_DLL CRenderSystem : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CRenderSystem(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderSystem();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderSystem();
                ///EarthView::World::Graphic::CHardwareVertexBufferSharedPtr getGlobalInstanceVertexBuffer() const;
                ///void setGlobalInstanceVertexBuffer( const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr val );
                ///size_t getGlobalNumberOfInstances() const;
                ///void setGlobalNumberOfInstances( const size_t val );
                ///EarthView::World::Graphic::CVertexDeclaration* getGlobalInstanceVertexBufferVertexDeclaration() const;
                ///void setGlobalInstanceVertexBufferVertexDeclaration( EarthView::World::Graphic::CVertexDeclaration* val );
                /// <summary>
                /// 返回渲染系统的名字
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getName() const;
                /// <summary>
                /// 返回配置项
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::ConfigOptionMap &getConfigOptions();
                /// <summary>
                /// 设置配置项
                /// </summary>
                /// <param name="name">改变选项的名字</param>
                /// <param name="value">设置选项的值</param>
                /// <returns></returns>
                virtual void setConfigOption(const EVString &name, const EVString &value);
                /// <summary>
                /// 创建一个硬件阻塞查询对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CHardwareOcclusionQuery *createHardwareOcclusionQuery();
                /// <summary>
                /// 销毁硬件阻塞查询对象
                /// </summary>
                /// <param name="hp"></param>
                /// <returns></returns>
                virtual void destroyHardwareOcclusionQuery(_inout EarthView::World::Graphic::CHardwareOcclusionQuery *hq);
                /// <summary>
                /// 使配置项生效
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString validateConfigOptions();
                /// <summary>
                /// 使用配置项进行初始化
                /// </summary>
                /// <param name="autoCreateWindow"></param>
                /// <param name="windowTitle "></param>
                /// <returns>如果需要自动创建一个渲染窗体，否则null</returns>
                virtual EarthView::World::Graphic::CRenderWindow *_initialise(ev_bool autoCreateWindow, const EVString &windowTitle );

                /// <summary>
                /// 使用配置项进行初始化
                /// </summary>
                /// <param name="autoCreateWindow"></param>
                /// <returns>如果需要自动创建一个渲染窗体，否则null</returns>
                virtual EarthView::World::Graphic::CRenderWindow *_initialise(ev_bool autoCreateWindow);
                /// <summary>
                /// 创建渲染系统能力
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderSystemCapabilities *createRenderSystemCapabilities() const;
                ///zxt add for 1.8v
                /** Get a pointer to the current capabilities being used by the RenderSystem.
                @remarks
                before the RenderSystem has been initialised. It's intended use is to allow a
                listener of the RenderSystemCapabilitiesCreated event to customise the capabilities
                on the fly before the RenderSystem is initialised.
                */
                EarthView::World::Graphic::CRenderSystemCapabilities *getMutableCapabilities()
                {
                    return mCurrentCapabilities;
                }

                /// <summary>
                /// 强制渲染系统使用指定的能力
                /// </summary>
                /// <param name="capabilities"></param>
                /// <returns></returns>
                virtual void useCustomRenderSystemCapabilities(_inout EarthView::World::Graphic::CRenderSystemCapabilities *ref_capabilities);
                /// <summary>
                /// 重新开始渲染
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void reinitialise();
                /// <summary>
                /// 停止渲染，清空资源
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void shutdown();
                /// <summary>
                /// 设置环境光的颜色
                /// </summary>
                /// <param name="r">红色</param>
                /// <param name="g">绿色</param>
                /// <param name="b">蓝色</param>
                /// <returns></returns>
                virtual void setAmbientLight(ev_real32 r, ev_real32 g, ev_real32 b);
                /// <summary>
                /// 设置光照的类型
                /// </summary>
                /// <param name="so"></param>
                /// <returns></returns>
                virtual void setShadingType(EarthView::World::Graphic::ShadeOptions so);
                /// <summary>
                /// 设置动态灯光是否可用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                virtual void setLightingEnabled(ev_bool enabled);
                /// <summary>
                /// 设置W-buffers是否可用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setWBufferEnabled(ev_bool enabled);
                /// <summary>
                /// 返回W-buffers是否可用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getWBufferEnabled() const;
                /// <summary>
                /// 创建一个新的渲染窗体
                /// </summary>
                /// <param name="name">窗体的名字</param>
                /// <param name="width">窗体的宽度</param>
                /// <param name="height">窗体的高度</param>
                /// <param name="fullScreen">全屏</param>
                /// <param name="miscParams">新渲染窗体的其它参数</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderWindow *_createRenderWindow(const EVString &name, ev_uint32 width, ev_uint32 height,
                        ev_bool fullScreen, const EarthView::World::Core::NameValuePairList *miscParams);
                /// <summary>
                /// 创建一个新的渲染窗体
                /// </summary>
                /// <param name="name">窗体的名字</param>
                /// <param name="width">窗体的宽度</param>
                /// <param name="height">窗体的高度</param>
                /// <param name="fullScreen">全屏</param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderWindow *_createRenderWindow(const EVString &name, ev_uint32 width, ev_uint32 height,
                        ev_bool fullScreen);

                /// <summary>
                /// 创建多渲染窗体
                /// </summary>
                /// <param name="renderWindowDescriptions">结构数组包含每一个渲染窗体的描述</param>
                /// <param name="createdWindows">创建渲染窗体</param>
                /// <returns></returns>
                virtual ev_bool _createRenderWindows(const EarthView::World::Graphic::RenderWindowDescriptionList &renderWindowDescriptions,
                                                     _out EarthView::World::Graphic::RenderWindowList &createdWindows);
                /// <summary>
                /// 创建一个多重渲染目标
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CMultiRenderTarget *createMultiRenderTarget(const EVString &name);
                /// <summary>
                /// 销毁渲染窗体
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                virtual void destroyRenderWindow(const EVString &name);
                /// <summary>
                /// 销毁渲染纹理
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                virtual void destroyRenderTexture(const EVString &name);

                /// <summary>
                /// 销毁渲染目标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void destroyRenderTarget(const EVString &name);
                /// <summary>
                /// 通过通路名连接渲染目标和渲染系统
                /// </summary>
                /// <param name="target"></param>
                /// <returns></returns>
                virtual void attachRenderTarget(_inout EarthView::World::Graphic::CRenderTarget &target );
                /// <summary>
                /// 获得渲染目标
				/// 如果渲染目标没有找到，返回NULL
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderTarget *getRenderTarget( const EVString &name );

                /// <summary>
                /// 从渲染系统中用通道名分开渲染目标，并返回一个指针
                /// 如果渲染目标没有找到，返回NULL
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderTarget *detachRenderTarget( const EVString &name );
                /*typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::RenderTargetMap> EarthView::World::Graphic::CRenderSystem::RenderTargetIterator;*/
                class EV_GRAPHIC_DLL StringRenderTargetMapPair : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    StringRenderTargetMapPair(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    StringRenderTargetMapPair();

                    EVString first;
                    EarthView::World::Graphic::CRenderTarget *second;
                };
                class EV_GRAPHIC_DLL RenderTargetIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::RenderTargetMap> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
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
                    RenderTargetIterator(const_iterator first, const_iterator last);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst">迭代器对应集合</param>
                    /// <returns></returns>
                    RenderTargetIterator(EarthView::World::Graphic::RenderTargetMap &lst);
                    /// <summary>
                    /// 复制构造函数
                    /// </summary>
                    /// <param name="other">其它迭代器</param>
                    /// <returns></returns>
                    RenderTargetIterator(const RenderTargetIterator &other);
                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">NodeTrackIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CRenderSystem::RenderTargetIterator &operator=(_in const EarthView::World::Graphic::CRenderSystem::RenderTargetIterator &other);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~RenderTargetIterator();
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
                    RenderTargetIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:

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
                    ev_uint16 nextKey() const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderTarget *nextValue() const;
                    /// <summary>
                    /// 返回容器当前的值指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值地址</returns>
                    EarthView::World::Graphic::CRenderTarget **nextValuePtr();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CRenderTarget *next();
                    /// <summary>
                    /// 返回容器首键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair &getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair &getEnd();
                    /// <summary>
                    /// 返回容器当前键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前键值对</returns>
                    const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair mBeginPair;
                    EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair mCurrentPair;
                    EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair mEndPair;
                    EarthView::World::Graphic::CRenderTarget *mptr;
                    ValueType mvt;
                };
                /// <summary>
                /// 返回一个渲染目标的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderSystem::RenderTargetIterator getRenderTargetIterator();

                /// <summary>
                /// 返回一个错误代码的描述
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EVString getErrorDescription(ev_int32 errorNumber) const;
                /// <summary>
                /// 在flipping缓冲之前设置是否渲染窗体等待垂直消隐
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setWaitForVerticalBlank(ev_bool enabled);
                /// <summary>
                /// 如果垂直消隐监控和帧是同步的返回true
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getWaitForVerticalBlank() const;
                ///zxt add for 1.8v
                /** Returns the global instance vertex buffer.
                */
                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr getGlobalInstanceVertexBuffer() const;
                /** Sets the global instance vertex buffer.
                */
                ev_void setGlobalInstanceVertexBuffer(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr val);
                /** Gets vertex declaration for the global vertex buffer for the global instancing
                */
                EarthView::World::Graphic::CVertexDeclaration *getGlobalInstanceVertexBufferVertexDeclaration() const;
                /** Sets vertex declaration for the global vertex buffer for the global instancing
                */
                ev_void setGlobalInstanceVertexBufferVertexDeclaration( EarthView::World::Graphic::CVertexDeclaration *ref_val);
                /** Gets the global number of instances.
                */
                ev_size_t getGlobalNumberOfInstances() const;
                /** Sets the global number of instances.
                */
                ev_void setGlobalNumberOfInstances(const ev_size_t val);
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
                /** Sets if fixed pipeline rendering is enabled on the system.
                */
                ev_void setFixedPipelineEnabled(ev_bool enabled);
                /** Returns true if fixed pipeline rendering is enabled on the system.
                */
                ev_bool getFixedPipelineEnabled() const;
#endif
                /** Retrieves an existing DepthBuffer or creates a new one suited for the given RenderTarget
                	and sets it.
                	@remarks
                		RenderTarget's pool ID is respected. @see RenderTarget::setDepthBufferPool()
                */
                virtual ev_void setDepthBufferFor( EarthView::World::Graphic::CRenderTarget *renderTarget );


                /// <summary>
                /// 使用光照
                /// </summary>
                /// <param name="lights">光源列表</param>
                /// <param name="limit"></param>
                /// <returns></returns>
                virtual void _useLights(const EarthView::World::Graphic::LightList &lights, ev_uint16 limit);
                /// <summary>
                /// 判断是否在视口空间里提供固定功能的光照
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool areFixedFunctionLightsInViewSpace() const;
                /// <summary>
                /// 设置世界转换矩阵
                /// </summary>
                /// <param name="m"></param>
                /// <returns></returns>
                virtual void _setWorldMatrix(const EarthView::World::Spatial::Math::CMatrix4 &m);
                /// <summary>
                /// 设置多世界矩阵
                /// </summary>
                /// <param name="m"></param>
                /// <param name="count"></param>
                /// <returns></returns>
                virtual void _setWorldMatrices(const EarthView::World::Spatial::Math::CMatrix4 *m, ev_uint16 count);
                /// <summary>
                /// 设置观察矩阵
                /// </summary>
                /// <param name="m"></param>
                /// <returns></returns>
                virtual void _setViewMatrix(const EarthView::World::Spatial::Math::CMatrix4 &m);
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getViewMatrix()const{return mViewMatrix;}
                /// <summary>
                /// 设置投影矩阵
                /// </summary>
                /// <param name="m"></param>
                /// <returns></returns>
                virtual void _setProjectionMatrix(const EarthView::World::Spatial::Math::CMatrix4 &m);
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getProjectMatrix()const{return mProjectMatrix;}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getProjectMatrixDepth()const{return mProjectMatrixDepth;}
                /// <summary>
                /// 一次性设置纹理单元的特性
                /// </summary>
                /// <param name="texUnit"></param>
                /// <param name="tl"></param>
                /// <returns></returns>
                virtual void _setTextureUnitSettings(ev_size_t texUnit, _inout EarthView::World::Graphic::CTextureUnitState &tl);
                /// <summary>
                /// 使纹理单元失效
                /// </summary>
                /// <param name="texUnit"></param>
                /// <returns></returns>
                virtual void _disableTextureUnit(ev_size_t texUnit);

                /// <summary>
                /// 使从指定序号开始的所有纹理单元失效
                /// </summary>
                /// <param name="texUnit"></param>
                /// <returns></returns>
                virtual void _disableTextureUnitsFrom(ev_size_t texUnit);

                /// <summary>
                /// 设置物体表面的参数
                /// </summary>
                /// <param name="ambient">环境光的反射系数</param>
                /// <param name="diffuse">漫射光的反射系数</param>
                /// <param name="specular">镜面光的反射系数</param>
                /// <param name="emissive">自发光的反射系数</param>
                /// <param name="shininess">镜面反射光的亮度值</param>
                /// <param name="tracking">顶点颜色跟踪类型</param>
                /// <returns></returns>
                virtual void _setSurfaceParams(const EarthView::World::Graphic::CColourValue &ambient,
                                               const EarthView::World::Graphic::CColourValue &diffuse, const EarthView::World::Graphic::CColourValue &specular,
                                               const EarthView::World::Graphic::CColourValue &emissive, Real shininess,
                                               TrackVertexColourType tracking );
                virtual void _setSurfaceParams(const EarthView::World::Graphic::CColourValue &ambient,
                                               const EarthView::World::Graphic::CColourValue &diffuse, const EarthView::World::Graphic::CColourValue &specular,
                                               const EarthView::World::Graphic::CColourValue &emissive, Real shininess);

                /// <summary>
                /// 设置是否启用点精灵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _setPointSpritesEnabled(ev_bool enabled);
                /// <summary>
                /// 设置点精灵参数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _setPointParameters(Real size, ev_bool attenuationEnabled,
                                                 Real constant, Real linear, Real quadratic, Real minSize, Real maxSize);
                /// <summary>
                /// 设置纹理
                /// </summary>
                /// <param name="unit">纹理单元的索引</param>
                /// <param name="enabled"></param>
                /// <param name="texPtr"></param>
                /// <returns></returns>
                virtual void _setTexture(ev_size_t unit, ev_bool enabled,
                                         const EarthView::World::Graphic::CTexturePtr &texPtr);

                /// <summary>
                /// 设置纹理
                /// </summary>
                /// <param name="unit">将要修改的纹理单元的索引</param>
                /// <param name="enabled"></param>
                /// <param name="texname">纹理的名字</param>
                /// <returns></returns>
                virtual void _setTexture(ev_size_t unit, ev_bool enabled, const EVString &texname);
                /// <summary>
                /// 绑定纹理到顶点
                /// </summary>
                /// <param name="unit"></param>
                /// <param name="tex"></param>
                /// <returns></returns>
                virtual void _setVertexTexture(ev_size_t unit, const EarthView::World::Graphic::CTexturePtr &tex);
                /// <summary>
                /// 设置纹理坐标索引
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="index">纹理坐标的索引</param>
                /// <returns></returns>
                virtual void _setTextureCoordSet(ev_size_t unit, ev_size_t index);
                /// <summary>
                /// 设置一种自动计算纹理坐标的方法
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="m">计算方法</param>
                /// <param name="frustum">平截头体选项</param>
                /// <returns></returns>
                virtual void _setTextureCoordCalculation(ev_size_t unit, TexCoordCalcMethod m,
                        const EarthView::World::Graphic::CFrustum *ref_frustum );
                /// <summary>
                /// 设置一种自动计算纹理坐标的方法
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="m">计算方法</param>
                /// <param name="frustum">平截头体选项</param>
                /// <returns></returns>
                virtual void _setTextureCoordCalculation(ev_size_t unit, TexCoordCalcMethod m);
                /// <summary>
                /// 设置纹理混合方式
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="bm">混合模型的细节</param>
                /// <returns></returns>
                virtual void _setTextureBlendMode(ev_size_t unit, const EarthView::World::Graphic::CLayerBlendModeEx &bm);
                /// <summary>
                /// 设置纹理过滤方式
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="minFilter"></param>
                /// <param name="magFilter"></param>
                /// <param name="mipFilter"></param>
                /// <returns></returns>
                virtual void _setTextureUnitFiltering(ev_size_t unit, EarthView::World::Graphic::FilterOptions minFilter,
                                                      EarthView::World::Graphic::FilterOptions magFilter, EarthView::World::Graphic::FilterOptions mipFilter);
                /// <summary>
                /// 设置纹理过滤方式
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="ftype">过滤器的类型</param>
                /// <param name="filter">使用的过滤器</param>
                /// <returns></returns>
                virtual void _setTextureUnitFiltering(ev_size_t unit, EarthView::World::Graphic::FilterType ftype, EarthView::World::Graphic::FilterOptions filter);
                /// <summary>
                /// 设置纹理的各向异性值
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="maxAnisotropy"></param>
                /// <returns></returns>
                virtual void _setTextureLayerAnisotropy(ev_size_t unit, ev_uint32 maxAnisotropy);
                /// <summary>
                /// 设置纹理单元的寻址模式
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="uvw"></param>
                /// <returns></returns>
                virtual void _setTextureAddressingMode(ev_size_t unit, const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode &uvw);
                /** Sets the texture border colour for a texture unit.*/
                /// <summary>
                /// 设置纹理单元的纹理边界颜色
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="colour"></param>
                /// <returns></returns>
                virtual void _setTextureBorderColour(ev_size_t unit, const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 设置纹理单元的mipmap偏移值
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="bias"></param>
                /// <returns></returns>
                virtual void _setTextureMipmapBias(ev_size_t unit, ev_real32 bias);
                /// <summary>
                /// 设置纹理坐标变换矩阵
                /// </summary>
                /// <param name="unit">纹理单元</param>
                /// <param name="xform">4*4的矩阵</param>
                /// <returns></returns>
                virtual void _setTextureMatrix(ev_size_t unit, const EarthView::World::Spatial::Math::CMatrix4 &xform);
                /// <summary>
                /// 设置场景混合模式
                /// </summary>
                /// <param name="sourceFactor">源因数</param>
                /// <param name="destFactor">目标因数</param>
                /// <param name="op">联合像元的混合模型</param>
                /// <returns></returns>
                virtual void _setSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendOperation op);
                /// <summary>
                /// 设置场景混合模式
                /// </summary>
                /// <param name="sourceFactor">计算的源因数</param>
                /// <param name="destFactor">计算的目标因数</param>
                /// <returns></returns>
                virtual void _setSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor);

                /// <summary>
                /// 为RGB通道和Alpha通道分别设置场景混合模式
                /// </summary>
                /// <param name="sourceFactor">计算的源因数</param>
                /// <param name="destFactor">计算的目标因数</param>
                /// <param name="sourceFactorAlpha">alpha通路的计算的源因数</param>
                /// <param name="destFactorAlpha">alpha通路的计算的目标因数</param>
                /// <param name="op">联合像元的混合模型</param>
                /// <param name="alphaOp">结合像素和alpha值的混合模型</param>
                /// <returns></returns>
                virtual void _setSeparateSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha,
                                                       EarthView::World::Graphic::SceneBlendFactor destFactorAlpha, EarthView::World::Graphic::SceneBlendOperation op , EarthView::World::Graphic::SceneBlendOperation alphaOp );
                /// <summary>
                /// 为RGB通道和Alpha通道分别设置场景混合模式
                /// </summary>
                /// <param name="sourceFactor">计算的源因数</param>
                /// <param name="destFactor">计算的目标因数</param>
                /// <param name="sourceFactorAlpha">alpha通路的计算的源因数</param>
                /// <param name="destFactorAlpha">alpha通路的计算的目标因数</param>
                /// <param name="op">联合像元的混合模型</param>
                /// <returns></returns>
                virtual void _setSeparateSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha,
                                                       EarthView::World::Graphic::SceneBlendFactor destFactorAlpha, EarthView::World::Graphic::SceneBlendOperation op);
                /// <summary>
                /// 为RGB通道和Alpha通道分别设置场景混合模式
                /// </summary>
                /// <param name="sourceFactor">计算的源因数</param>
                /// <param name="destFactor">计算的目标因数</param>
                /// <param name="sourceFactorAlpha">alpha通路的计算的源因数</param>
                /// <param name="destFactorAlpha">alpha通路的计算的目标因数</param>
                /// <returns></returns>
                virtual void _setSeparateSceneBlending(EarthView::World::Graphic::SceneBlendFactor sourceFactor, EarthView::World::Graphic::SceneBlendFactor destFactor, EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha,
                                                       EarthView::World::Graphic::SceneBlendFactor destFactorAlpha);

                /// <summary>
                /// 设置alpha通道拒绝参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <param name="value">每一个像素的alpha值</param>
                /// <param name="alphaToCoverage"></param>
                /// <returns></returns>
                virtual void _setAlphaRejectSettings(EarthView::World::Graphic::CompareFunction func, ev_uchar value, ev_bool alphaToCoverage);
                /// <summary>
                /// 设置纹理的相对投影
                /// </summary>
                /// <param name="enabled"></param>
                /// <param name="pos"></param>
                /// <returns></returns>
                virtual void _setTextureProjectionRelativeTo(ev_bool enabled, const EarthView::World::Spatial::Math::CVector3 &pos);
                ///zxt add for 1.8v
                /** Creates a DepthBuffer that can be attached to the specified RenderTarget
                	@remarks
                It doesn't attach anything, it just returns a pointer to a new DepthBuffer
                Caller is responsible for putting this buffer into the right pool, for
                attaching, and deleting it. Here's where API-specific magic happens.
                Don't call this directly unless you know what you're doing.
                */
                virtual EarthView::World::Graphic::CDepthBuffer *_createDepthBufferFor( EarthView::World::Graphic::CRenderTarget *renderTarget );
                /** Removes all depth buffers. Should be called on device lost and shutdown
                	@remarks
                		Advanced users can call this directly with bCleanManualBuffers=false to
                		remove all depth buffers created for RTTs; when they think the pool has
                		grown too big or they've used lots of depth buffers they don't need anymore,
                		freeing GPU RAM.
                */
                void _cleanupDepthBuffers();
                void _cleanupDepthBuffers( bool bCleanManualBuffers );

                /// <summary>
                /// 开始一帧的渲染
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _beginFrame();

                ///Dummy structure for render system contexts - implementing RenderSystems can extend
                ///as needed
                struct RenderSystemContext { };

                /// <summary>
                /// 暂停帧的渲染
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderSystem::RenderSystemContext *_pauseFrame();

                /// <summary>
                /// 恢复帧的渲染
                /// </summary>
                /// <param name="context"></param>
                /// <returns></returns>
                virtual void _resumeFrame(EarthView::World::Graphic::CRenderSystem::RenderSystemContext *context);
                /// <summary>
                /// 结束一帧的渲染
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _endFrame();

                /// <summary>
                /// 设置视口
                /// </summary>
                /// <param name="vp">指向适当视口的指针</param>
                /// <returns></returns>
                virtual void _setViewport( EarthView::World::Graphic::CViewport *ref_vp);
                /// <summary>
                /// 获得视口
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CViewport *_getViewport();
                /// <summary>
                /// 设置剔除方式
                /// </summary>
                /// <param name="mode">精选模型</param>
                /// <returns></returns>
                virtual void _setCullingMode(CullingMode mode);
				/// <summary>
				/// 获得剔除方式
				/// </summary>
				/// <param name="mode">精选模型</param>
				/// <returns></returns>
                virtual EarthView::World::Graphic::CullingMode _getCullingMode() const;
                /// <summary>
                /// 设置深度缓存测试的参数
                /// </summary>
                /// <param name="depthTest"></param>
                /// <param name="depthWrite"></param>
                /// <param name="depthFunction">深度测试函数</param>
                /// <returns></returns>
                virtual void _setDepthBufferParams(ev_bool depthTest , ev_bool depthWrite , EarthView::World::Graphic::CompareFunction depthFunction );
                /// <summary>
                /// 设置深度缓存测试的参数
                /// </summary>
                /// <param name="depthTest"></param>
                /// <param name="depthWrite"></param>
                /// <returns></returns>
                virtual void _setDepthBufferParams(ev_bool depthTest, ev_bool depthWrite);
                /// <summary>
                /// 设置深度缓存测试的参数
                /// </summary>
                /// <param name="depthTest"></param>
                /// <returns></returns>
                virtual void _setDepthBufferParams(ev_bool depthTest);
                /// <summary>
                /// 设置深度缓存测试的参数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _setDepthBufferParams();

                /// <summary>
                /// 设置深度缓存测试是否启用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                virtual void _setDepthBufferCheckEnabled(ev_bool enabled );
                /// <summary>
                /// 设置深度缓存测试是否启用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _setDepthBufferCheckEnabled();

                /// <summary>
                /// 设置深度缓存写入是否启用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                virtual void _setDepthBufferWriteEnabled(ev_bool enabled );
                /// <summary>
                /// 设置深度缓存写入是否启用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _setDepthBufferWriteEnabled();

                /// <summary>
                /// 设置深度缓存测试的比较函数
                /// </summary>
                /// <param name="func">新的深度和已存在深度的比较</param>
                /// <returns></returns>
                virtual void _setDepthBufferFunction(EarthView::World::Graphic::CompareFunction func);
                /// <summary>
                /// 设置深度缓存测试的比较函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _setDepthBufferFunction();

                /// <summary>
                /// 设置颜色缓存写入是否可用
                /// </summary>
                /// <param name="red">红色</param>
                /// <param name="green">绿色</param>
                /// <param name="blue">蓝色</param>
                /// <param name="alpha"></param>
                /// <returns></returns>
                virtual void _setColourBufferWriteEnabled(ev_bool red, ev_bool green, ev_bool blue, ev_bool alpha);

                /// <summary>
                /// 设置深度偏移值
                /// </summary>
                /// <param name="constantBias">常量偏移值</param>
                /// <param name="slopeScaleBias">受多边形最大坡度影响的倾斜值</param>
                /// <returns></returns>
                virtual void _setDepthBias(ev_real32 constantBias, ev_real32 slopeScaleBias);
                /// <summary>
                /// 设置深度偏移值
                /// </summary>
                /// <param name="constantBias">常量偏移值</param>
                /// <returns></returns>
                virtual void _setDepthBias(ev_real32 constantBias);
                /// <summary>
                /// 设置雾模型
                /// </summary>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <param name="expDensity">在FOG_EXP 或 FOG_EXP2模型中雾的密度</param>
                /// <param name="linearStart">距离线性雾开始变暗的距离</param>
                /// <param name="linearEnd">距离线性雾完全不透明的距离</param>
                /// <returns></returns>
                virtual void _setFog(EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour , Real expDensity , Real linearStart , Real linearEnd);
                /// <summary>
                /// 设置雾模型
                /// </summary>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <param name="expDensity">在FOG_EXP 或 FOG_EXP2模型中雾的密度</param>
                /// <param name="linearStart">距离线性雾开始变暗的距离</param>
                /// <returns></returns>
                virtual void _setFog(EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour , Real expDensity, Real linearStart);
                /// <summary>
                /// 设置雾模型
                /// </summary>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <param name="expDensity">在FOG_EXP 或 FOG_EXP2模型中雾的密度</param>
                /// <returns></returns>
                virtual void _setFog(EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour , Real expDensity );
                /// <summary>
                /// 设置雾模型
                /// </summary>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <returns></returns>
                virtual void _setFog(EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 设置雾模型
                /// </summary>
                /// <param name="mode">雾模型</param>
                /// <returns></returns>
                virtual void _setFog(EarthView::World::Graphic::FogMode mode);
                /// <summary>
                /// 设置雾模型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _setFog();
                /// <summary>
                /// 重新渲染三角面、批次、顶点数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _beginGeometryCount();
                /// <summary>
                /// 获得渲染的三角面总数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 _getFaceCount() const;
                /// <summary>
                /// 获得渲染的批次
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 _getBatchCount() const;
                /// <summary>
                /// 获得渲染的顶点总数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 _getVertexCount() const;
                /// <summary>
                /// 将颜色转换并存入指定区域
                /// </summary>
                /// <param name="colour">转换的颜色</param>
                /// <param name="pDest">指向存放结果的位置</param>
                /// <returns></returns>
                virtual void convertColourValue(const EarthView::World::Graphic::CColourValue &colour, ev_uint32 *pDest);
				/// <summary>
				/// 将32-bit颜色转换转换为colorvalue
				/// </summary>
				/// <param name="srcColor">32-bit颜色</param>
				/// <param name="colour">转换的结果颜色</param>				
				/// <returns></returns>
				virtual void toColourValue(ev_uint32 srcColor,EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 获得渲染系统中32位颜色值的顶点元素类型
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::VertexElementType getColourVertexElementType() const;
                /// <summary>
                /// 转换适应渲染系统的统一的投影矩阵
                /// </summary>
                /// <param name="matrix"></param>
                /// <param name="dest"></param>
                /// <param name="forGpuProgram"></param>
                /// <returns></returns>
                virtual void _convertProjectionMatrix(const EarthView::World::Spatial::Math::CMatrix4 &matrix,
                                                      EarthView::World::Spatial::Math::CMatrix4 &dest, ev_bool forGpuProgram );
                /// <summary>
                /// 转换适应渲染系统的统一的投影矩阵
                /// </summary>
                /// <param name="matrix"></param>
                /// <param name="dest"></param>
                /// <returns></returns>
                virtual void _convertProjectionMatrix(const EarthView::World::Spatial::Math::CMatrix4 &matrix, EarthView::World::Spatial::Math::CMatrix4 &dest);

                /// <summary>
                /// 生成一个适应渲染系统的透视投影矩阵
                /// </summary>
                /// <param name="fovy"></param>
                /// <param name="aspect"></param>
                /// <param name="nearPlane"></param>
                /// <param name="farPlane"></param>
                /// <param name="dest"></param>
                /// <param name="forGpuProgram"></param>
                /// <returns></returns>
                virtual void _makeProjectionMatrix(const EarthView::World::Spatial::Math::CRadian &fovy, Real aspect, Real nearPlane, Real farPlane,
                                                   EarthView::World::Spatial::Math::CMatrix4 &dest, ev_bool forGpuProgram );
                /// <summary>
                /// 生成一个适应渲染系统的透视投影矩阵
                /// </summary>
                /// <param name="fovy"></param>
                /// <param name="aspect"></param>
                /// <param name="nearPlane"></param>
                /// <param name="farPlane"></param>
                /// <param name="dest"></param>
                /// <returns></returns>
                virtual void _makeProjectionMatrix(const EarthView::World::Spatial::Math::CRadian &fovy, Real aspect, Real nearPlane, Real farPlane,
                                                   EarthView::World::Spatial::Math::CMatrix4 &dest);

                /// <summary>
                /// 生成一个适应渲染系统给的透视投影矩阵
                /// </summary>
                /// <param name="left"></param>
                /// <param name="right"></param>
                /// <param name="bottom"></param>
                /// <param name="top"></param>
                /// <param name="nearPlane"></param>
                /// <param name="farPlane"></param>
                /// <param name="dest"></param>
                /// <param name="forGpuProgram"></param>
                /// <returns></returns>
                virtual void _makeProjectionMatrix(Real left, Real right, Real bottom, Real top,
                                                   Real nearPlane, Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4 &dest, ev_bool forGpuProgram );
                /// <summary>
                /// 生成一个适应渲染系统给的透视投影矩阵
                /// </summary>
                /// <param name="left"></param>
                /// <param name="right"></param>
                /// <param name="bottom"></param>
                /// <param name="top"></param>
                /// <param name="nearPlane"></param>
                /// <param name="farPlane"></param>
                /// <param name="dest"></param>
                /// <returns></returns>
                virtual void _makeProjectionMatrix(Real left, Real right, Real bottom, Real top,
                                                   Real nearPlane, Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4 &dest);

                /// <summary>
                /// 生成一个适合渲染系统的正射投影矩阵
                /// </summary>
                /// <param name="fovy"></param>
                /// <param name="aspect"></param>
                /// <param name="nearPlane"></param>
                /// <param name="farPlane"></param>
                /// <param name="dest"></param>
                /// <param name="forGpuProgram"></param>
                /// <returns></returns>
                virtual void _makeOrthoMatrix(const EarthView::World::Spatial::Math::CRadian &fovy, Real aspect, Real nearPlane, Real farPlane,
                                              _inout EarthView::World::Spatial::Math::CMatrix4 &dest, ev_bool forGpuProgram );
                /// <summary>
                /// 生成一个适合渲染系统的正射投影矩阵
                /// </summary>
                /// <param name="fovy"></param>
                /// <param name="aspect"></param>
                /// <param name="nearPlane"></param>
                /// <param name="farPlane"></param>
                /// <param name="dest"></param>
                /// <returns></returns>
                virtual void _makeOrthoMatrix(const EarthView::World::Spatial::Math::CRadian &fovy, Real aspect, Real nearPlane, Real farPlane,
                                              _inout EarthView::World::Spatial::Math::CMatrix4 &dest);

                /// <summary>
                /// 更新透视投影矩阵，应用倾斜深度投影
                /// </summary>
                /// <param name="matrix">已存在的投影矩阵</param>
                /// <param name="plane">剪切平面</param>
                /// <param name="forGpuProgram"></param>
                /// <returns></returns>
                virtual void _applyObliqueDepthProjection(_inout EarthView::World::Spatial::Math::CMatrix4 &matrix, const EarthView::World::Spatial::Math::CPlane &plane,
                        ev_bool forGpuProgram);
                /** Sets how to rasterise triangles, as points, wireframe or solid polys. */
                virtual void _setPolygonMode(PolygonMode level);
                /// <summary>
                /// 设置是否启用模板缓冲测试
                /// </summary>
                /// <param name="evabled"></param>
                /// <returns></returns>
                virtual void setStencilCheckEnabled(ev_bool enabled);

                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <param name="refValue">参考值</param>
                /// <param name="mask"></param>
                /// <param name="stencilFailOp">模板检查失败时模板缓冲产生的行为</param>
                /// <param name="depthFailOp">模板检查通过，但是深度检查失败时模板缓冲产生的行为</param>
                /// <param name="passOp">模板检查和深度检查都通过时模板缓冲产生的行为</param>
                /// <param name="twoSidedOperation"></param>
                /// <returns></returns>
                virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func ,
                                                    ev_uint32 refValue , ev_uint32 mask ,
                                                    StencilOperation stencilFailOp ,
                                                    StencilOperation depthFailOp ,
                                                    StencilOperation passOp ,
                                                    ev_bool twoSidedOperation );
                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <param name="refValue">参考值</param>
                /// <param name="mask"></param>
                /// <param name="stencilFailOp">模板检查失败时模板缓冲产生的行为</param>
                /// <param name="depthFailOp">模板检查通过，但是深度检查失败时模板缓冲产生的行为</param>
                /// <param name="passOp">模板检查和深度检查都通过时模板缓冲产生的行为</param>
                /// <returns></returns>
                virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func,
                                                    ev_uint32 refValue , ev_uint32 mask ,
                                                    StencilOperation stencilFailOp ,
                                                    StencilOperation depthFailOp ,
                                                    StencilOperation passOp );
                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <param name="refValue">参考值</param>
                /// <param name="mask"></param>
                /// <param name="stencilFailOp">模板检查失败时模板缓冲产生的行为</param>
                /// <param name="depthFailOp">模板检查通过，但是深度检查失败时模板缓冲产生的行为</param>
                /// <returns></returns>
                virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func,
                                                    ev_uint32 refValue , ev_uint32 mask ,
                                                    StencilOperation stencilFailOp ,
                                                    StencilOperation depthFailOp );
                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <param name="refValue">参考值</param>
                /// <param name="mask"></param>
                /// <param name="stencilFailOp">模板检查失败时模板缓冲产生的行为</param>
                /// <returns></returns>
                virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func,
                                                    ev_uint32 refValue , ev_uint32 mask ,
                                                    StencilOperation stencilFailOp  );
                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <param name="refValue">参考值</param>
                /// <param name="mask"></param>
                /// <returns></returns>
                virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func,
                                                    ev_uint32 refValue , ev_uint32 mask   );
                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <param name="refValue">参考值</param>
                /// <returns></returns>
                virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func,
                                                    ev_uint32 refValue );
                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name="func">比较函数</param>
                /// <returns></returns>
                virtual void setStencilBufferParams(EarthView::World::Graphic::CompareFunction func );
                /// <summary>
                /// 设置模板缓冲测试参数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setStencilBufferParams( );
                /// <summary>
                /// 设置当前的顶点声明
                /// </summary>
                /// <param name="decl"></param>
                /// <returns></returns>
                virtual void setVertexDeclaration(_inout EarthView::World::Graphic::CVertexDeclaration *decl);

                /// <summary>
                /// 设定当前的顶点缓冲的绑定状态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setVertexBufferBinding(_inout EarthView::World::Graphic::CVertexBufferBinding *binding);
                /** Sets whether or not normals are to be automatically normalised.
                @remarks
                This is useful when, for example, you are scaling SceneNodes such that
                normals may not be unit-length anymore. Note though that this has an
                overhead so should not be turn on unless you really need it.
                @par
                You should not normally call this direct unless you are rendering
                world geometry; set it on the CRenderable because otherwise it will be
                overridden by material settings.
                */
                virtual void setNormaliseNormals(ev_bool normalise);
                /// <summary>
                /// 渲染
                /// </summary>
                /// <param name="op">渲染操作实例</param>
                /// <returns></returns>
                virtual void _render(const EarthView::World::Graphic::CRenderOperation &op);
                /// <summary>
                /// 获得渲染系统的能力
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CRenderSystemCapabilities *getCapabilities() const;
                /// <summary>
                /// 返回驱动的译本
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::DriverVersion &getDriverVersion() const;

				virtual void*  getActD3D9Device() { return NULL;}

                virtual EVString _getDefaultViewportMaterialScheme() const;
                /// <summary>
                /// 绑定Gpu程序
                /// </summary>
                /// <param name="prg"></param>
                /// <returns></returns>
                virtual void bindGpuProgram(_inout EarthView::World::Graphic::CGpuProgram *ref_prg);
                /// <summary>
                /// 绑定Gpu程序的参数
                /// </summary>
                /// <param name="gptype">程序的类型</param>
                /// <param name="params">参数</param>
                /// <param name="variabilityMask">标识哪些参数需要绑定</param>
                /// <returns></returns>
                virtual void bindGpuProgramParameters(EarthView::World::Graphic::GpuProgramType gptype,
                                                      EarthView::World::Graphic::GpuProgramParametersSharedPtr params, ev_uint16 variabilityMask);
                /// <summary>
                /// 绑定Gpu程序参数用于超过一次迭代渲染的通路
                /// </summary>
                /// <param name="gptype"></param>
                /// <returns></returns>
                virtual void bindGpuProgramPassIterationParameters(EarthView::World::Graphic::GpuProgramType gptype);

                /// <summary>
                /// 解绑定指定类型的Gpu程序
                /// </summary>
                /// <param name="gptype"></param>
                /// <returns></returns>
                virtual void unbindGpuProgram(EarthView::World::Graphic::GpuProgramType gptype);
                /// <summary>
                /// 获得指定类型Gpu程序是否已绑定
                /// </summary>
                /// <param name="gptype"></param>
                /// <returns></returns>
                virtual ev_bool isGpuProgramBound(EarthView::World::Graphic::GpuProgramType gptype);
                /// <summary>
                /// 设置裁剪面
                /// </summary>
                /// <param name="clipPlanes"></param>
                /// <returns></returns>
                virtual void setClipPlanes(const EarthView::World::Spatial::Math::PlaneList &clipPlanes);
                /// <summary>
                /// 添加裁剪面
                /// </summary>
                /// <param name="p"></param>
                /// <returns></returns>
                virtual void addClipPlane (const EarthView::World::Spatial::Math::CPlane &p);

                /// <summary>
                /// 添加裁剪面
                /// </summary>
                /// <param name="A"></param>
                /// <param name="B"></param>
                /// <param name="C"></param>
                /// <param name="D"></param>
                /// <returns></returns>
                virtual void addClipPlane (Real A, Real B, Real C, Real D);
                /// <summary>
                /// 重置裁剪面
                /// </summary>
                /// <param name="clipPlanes"></param>
                /// <returns></returns>
                virtual void resetClipPlanes();
                /// <summary>
                /// 初始化所有渲染目标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _initRenderTargets();
                /// <summary>
                /// 通知摄像机被移除
                /// </summary>
                /// <param name="cam"></param>
                /// <returns></returns>
                virtual void _notifyCameraRemoved(const EarthView::World::Graphic::CCamera *cam);
                /// <summary>
                /// 更新所有渲染目标
                /// </summary>
                /// <param name="swapBuffers"></param>
                /// <returns></returns>
                virtual void _updateAllRenderTargets(ev_bool swapBuffers);
                /// <summary>
                /// 更新所有渲染目标
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _updateAllRenderTargets();
                /// <summary>
                /// 如果传递了一个false参数，则交换所有渲染目标的缓存
                /// </summary>
                /// <param name="waitForVsync"></param>
                /// <returns></returns>
                virtual void _swapAllRenderTargetBuffers(ev_bool waitForVsync );
                /// <summary>
                /// 交换所有渲染目标的缓存
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _swapAllRenderTargetBuffers();

                /// <summary>
                /// 设置vertex windings设置是否被转换
                /// </summary>
                /// <param name="invert"></param>
                /// <returns></returns>
                virtual void setInvertVertexWinding(ev_bool invert);
                /// <summary>
                /// 显示是否vertex windings设置被转换成当前的渲染
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getInvertVertexWinding() const;
                /// <summary>
                /// 设置渲染目标的裁剪测试参数
                /// </summary>
                /// <param name="enabled"></param>
                /// <param name="left">左侧（长方形角的位置）</param>
                /// <param name="top">上面（长方形角的位置）</param>
                /// <param name="right">右侧（长方形角的位置）</param>
                /// <param name="bottom">下面（长方形角的位置）</param>
                /// <returns></returns>
                virtual void setScissorTest(ev_bool enabled, ev_size_t left , ev_size_t top ,
                                            ev_size_t right, ev_size_t bottom);
                /// <summary>
                /// 设置渲染目标的裁剪测试参数
                /// </summary>
                /// <param name="enabled"></param>
                /// <param name="left">左侧（长方形角的位置）</param>
                /// <param name="top">上面（长方形角的位置）</param>
                /// <param name="right">右侧（长方形角的位置）</param>
                /// <returns></returns>
                virtual void setScissorTest(ev_bool enabled, ev_size_t left, ev_size_t top,
                                            ev_size_t right);
                /// <summary>
                /// 设置渲染目标的裁剪测试参数
                /// </summary>
                /// <param name="enabled"></param>
                /// <param name="left">左侧（长方形角的位置）</param>
                /// <param name="top">上面（长方形角的位置）</param>
                /// <returns></returns>
                virtual void setScissorTest(ev_bool enabled, ev_size_t left, ev_size_t top);
                /// <summary>
                /// 设置渲染目标的裁剪测试参数
                /// </summary>
                /// <param name="enabled"></param>
                /// <param name="left">左侧（长方形角的位置）</param>
                /// <returns></returns>
                virtual void setScissorTest(ev_bool enabled, ev_size_t left);
                /// <summary>
                /// 设置渲染目标的裁剪测试参数
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                virtual void setScissorTest(ev_bool enabled);

                /// <summary>
                /// 清空活动渲染目标的帧缓存
                /// </summary>
                /// <param name="buffers">标明哪一个缓存被清空</param>
                /// <param name="colour">缓存颜色</param>
                /// <param name="depth">初始化深度缓存的值</param>
                /// <param name="stencil">初始化模板缓存的值</param>
                /// <returns></returns>
                virtual void clearFrameBuffer(ev_uint32 buffers,
                                              const EarthView::World::Graphic::CColourValue &colour , Real depth , ev_uint16 stencil );
                /// <summary>
                /// 清空活动渲染目标的帧缓存
                /// </summary>
                /// <param name="buffers">标明哪一个缓存被清空</param>
                /// <param name="colour">缓存颜色</param>
                /// <param name="depth">初始化深度缓存的值</param>
                /// <returns></returns>
                virtual void clearFrameBuffer(ev_uint32 buffers,
                                              const EarthView::World::Graphic::CColourValue &colour, Real depth );
                /// <summary>
                /// 清空活动渲染目标的帧缓存
                /// </summary>
                /// <param name="buffers">标明哪一个缓存被清空</param>
                /// <param name="colour">缓存颜色</param>
                /// <returns></returns>
                virtual void clearFrameBuffer(ev_uint32 buffers,
                                              const EarthView::World::Graphic::CColourValue &colour );
                /// <summary>
                /// 清空活动渲染目标的帧缓存
                /// </summary>
                /// <param name="buffers">标明哪一个缓存被清空</param>
                /// <returns></returns>
                virtual void clearFrameBuffer(ev_uint32 buffers );
                /// <summary>
                /// 返回纹理的水平偏移量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getHorizontalTexelOffset();

                /// <summary>
                /// 返回纹理的垂直偏移量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getVerticalTexelOffset();
                /// <summary>
                /// 当渲染应用统一的转换时获得最小的深度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getMinimumDepthInputValue();
                /// <summary>
                /// 当渲染应用统一的转换时获得最大的深度值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getMaximumDepthInputValue();

                /// <summary>
                /// 设置当前的多通路数量值
                /// </summary>
                /// <param name="count">渲染当前状态的次数</param>
                /// <returns></returns>
                virtual void setCurrentPassIterationCount(const ev_size_t count);
                /// <summary>
                /// 设置深度偏移值
                /// </summary>
                /// <param name="derive">如果为true，告诉渲染系统自动获得</param>
                /// <param name="baseValue">基本值</param>
                /// <param name="multiplier">应用到每一个迭代中深度偏差的数量</param>
                /// <param name="slopeScale">斜面偏差的常量值</param>
                /// <returns></returns>
                virtual void setDeriveDepthBias(ev_bool derive, ev_real32 baseValue,
                                                ev_real32 multiplier , ev_real32 slopeScale );
                /// <summary>
                /// 设置深度偏移值
                /// </summary>
                /// <param name="derive">如果为true，告诉渲染系统自动获得</param>
                /// <param name="baseValue">基本值</param>
                /// <param name="multiplier">应用到每一个迭代中深度偏差的数量</param>
                /// <returns></returns>
                virtual void setDeriveDepthBias(ev_bool derive, ev_real32 baseValue ,
                                                ev_real32 multiplier );
                /// <summary>
                /// 设置深度偏移值
                /// </summary>
                /// <param name="derive">如果为true，告诉渲染系统自动获得</param>
                /// <param name="baseValue">基本值</param>
                /// <returns></returns>
                virtual void setDeriveDepthBias(ev_bool derive, ev_real32 baseValue  );
                /// <summary>
                /// 设置深度偏移值
                /// </summary>
                /// <param name="derive">如果为true，告诉渲染系统自动获得</param>
                /// <returns></returns>
                virtual void setDeriveDepthBias(ev_bool derive );
                /// <summary>
                /// 设置当前渲染目标
                /// </summary>
                /// <param name="target"></param>
                /// <returns></returns>
                virtual void _setRenderTarget(_inout EarthView::World::Graphic::CRenderTarget *ref_target);
                /// <summary>
                /// 对渲染系统自定义的事件定义一个监听器
                /// </summary>
                class EV_GRAPHIC_DLL CRenderSystemListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CRenderSystemListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CRenderSystemListener();

                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CRenderSystemListener();
                    /// <summary>
                    /// 渲染系统中一个已发生的特殊的事件
                    /// </summary>
                    /// <param name="eventName">事件的名称</param>
                    /// <param name="parameters">事件的参数列表</param>
                    /// <returns></returns>
                    virtual void eventOccurred(const EVString &eventName,
                                               const EarthView::World::Core::NameValuePairList *parameters );
                    /// <summary>
                    /// 渲染系统中一个已发生的特殊的事件
                    /// </summary>
                    /// <param name="eventName">事件的名称</param>
                    /// <returns></returns>
                    virtual void eventOccurred(const EVString &eventName);
                };

                /// <summary>
                /// 给渲染系统中自定义事件添加一个监听器
                /// </summary>
                /// <param name="l"></param>
                /// <returns></returns>
                virtual void addListener( EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *ref_l);

                /// <summary>
                /// 去除掉渲染系统中自定义事件的监听器
                /// </summary>
                /// <param name="l"></param>
                /// <returns></returns>
                virtual void removeListener( EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *l);
                /// <summary>
                /// 获得渲染系统中特殊事件的列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Core::StringVector &getRenderSystemEvents() const;
                /// <summary>
                /// 告诉渲染系统直接运行任务之前，附加线程已经注册
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void preExtraThreadsStarted();
                /// <summary>
                /// 告诉渲染系统直接运行任务之后，附加线程已经注册
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void postExtraThreadsStarted();
                /// <summary>
                /// 注册一个附加线程，它可能调用渲染系统相关的对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void registerThread();
                /// <summary>
                /// 清空渲染系统命令队列，并全部执行
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void flushRenderSystem();
                /// <summary>
                /// 反注册一个附加线程
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void unregisterThread();
                /// <summary>
                /// 获得显示监听器的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getDisplayMonitorCount() const;

            protected:
                /** DepthBuffers to be attached to render targets */
                DepthBufferMap	mDepthBufferPool;

				EarthView::World::Core::CRecursiveMutex mRenderTargetsLock;
                ///渲染目标
                EarthView::World::Graphic::RenderTargetMap mRenderTargets;
                ///按属性排列的渲染目标
                RenderTargetPriorityMap mPrioritisedRenderTargets;

                ///活跃的渲染目标
                EarthView::World::Graphic::CRenderTarget *mActiveRenderTarget;

                ///活跃的GPU程序和GPU程序参数
                EarthView::World::Graphic::GpuProgramParametersSharedPtr mActiveVertexGpuProgramParameters;
                EarthView::World::Graphic::GpuProgramParametersSharedPtr mActiveGeometryGpuProgramParameters;
                EarthView::World::Graphic::GpuProgramParametersSharedPtr mActiveFragmentGpuProgramParameters;
                ///纹理管理
                CTextureManager *mTextureManager;
                ///活跃的视口
                EarthView::World::Graphic::CViewport *mActiveViewport;
                EarthView::World::Graphic::CullingMode mCullingMode;
                ev_bool mVSync;
                ev_uint32 mVSyncInterval;
                ev_bool mWBuffer;
                ev_size_t mBatchCount;
                ev_size_t mFaceCount;
                ev_size_t mVertexCount;
                ///保存手动的颜色混合
                EarthView::World::Graphic::CColourValue mManualBlendColours[EV_MAX_TEXTURE_LAYERS][2];
                ev_bool mInvertVertexWinding;
                ///向上的纹理单元不可用
                ev_size_t mDisabledTexUnitsFrom;
                ///渲染当前状态的次数
                ev_size_t mCurrentPassIterationCount;
                ev_size_t mCurrentPassIterationNum;
                //// Whether to update the depth bias per render call
                ev_bool mDerivedDepthBias;
                ev_real32 mDerivedDepthBiasBase;
                ev_real32 mDerivedDepthBiasMultiplier;
                ev_real32 mDerivedDepthBiasSlopeScale;

                EarthView::World::Graphic::CHardwareVertexBufferSharedPtr mGlobalInstanceVertexBuffer;
                EarthView::World::Graphic::CVertexDeclaration *mGlobalInstanceVertexBufferVertexDeclaration;
                size_t mGlobalNumberOfInstances;
                /// <summary>
                /// 更新通路迭代渲染状态包括GPU程序参数的范围，通路迭代常量的入口
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果需要更多次的迭代返回true</returns>
                ev_bool updatePassIterationRenderState();
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
                //// is fixed pipeline enabled
                ev_bool mEnableFixedPipeline;
#endif
                //// List of names of events this rendersystem may raise
                EarthView::World::Core::StringVector mEventNames;
                typedef list<EarthView::World::Graphic::CRenderSystem::CRenderSystemListener *> ListenerList;
                ListenerList mEventListeners;
                typedef list<EarthView::World::Graphic::CHardwareOcclusionQuery *> HardwareOcclusionQueryList;
                HardwareOcclusionQueryList mHwOcclusionQueries;
                ev_bool mVertexProgramBound;
                ev_bool mGeometryProgramBound;
                ev_bool mFragmentProgramBound;
                /// Recording user clip planes
                EarthView::World::Spatial::Math::PlaneList mClipPlanes;
                /// Indicator that we need to re-set the clip planes on next render call
                ev_bool mClipPlanesDirty;
                //// Used to store the capabilities of the graphics card
                EarthView::World::Graphic::CRenderSystemCapabilities *mRealCapabilities;
                EarthView::World::Graphic::CRenderSystemCapabilities *mCurrentCapabilities;
                ev_bool mUseCustomCapabilities;
                EarthView::World::Graphic::DriverVersion mDriverVersion;
                ev_bool mTexProjRelative;
                EarthView::World::Spatial::Math::CVector3 mTexProjRelativeOrigin;

				EarthView::World::Spatial::Math::CMatrix4 mProjectMatrix;
				EarthView::World::Spatial::Math::CMatrix4 mProjectMatrixDepth;
				EarthView::World::Spatial::Math::CMatrix4 mViewMatrix;

            ev_internal:
                /// <summary>
                /// 内部方法，点燃渲染系统事件
                /// </summary>
                /// <param name="name"></param>
                /// <param name="params"></param>
                /// <returns></returns>
                virtual void fireEvent(const EVString &name, const EarthView::World::Core::NameValuePairList *params);
                /// <summary>
                /// 内部方法，点燃渲染系统事件
                /// </summary>
                /// <param name="name"></param>
                /// <returns></returns>
                virtual void fireEvent(const EVString &name);
                /// <summary>
                /// 设置潜在的切面
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setClipPlanesImpl(const EarthView::World::Spatial::Math::PlaneList &clipPlanes);
                /// <summary>
                /// 从性能初始化渲染系统
                /// </summary>
                /// <param name="caps"></param>
                /// <param name="primary"></param>
                /// <returns></returns>
                virtual void initialiseFromRenderSystemCapabilities(_inout EarthView::World::Graphic::CRenderSystemCapabilities *caps, _inout EarthView::World::Graphic::CRenderTarget *primary);

            };
            /** @} */
            /** @} */
        }
    }
}

#endif

