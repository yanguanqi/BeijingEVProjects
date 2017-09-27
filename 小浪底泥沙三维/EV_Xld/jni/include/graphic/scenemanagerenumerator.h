#ifndef __SceneManagerEnumerator_H__
#define __SceneManagerEnumerator_H__
#include "graphic/graphic_config.h"
#include "scenemanager.h"
#include <core/iteratorwrapper.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 默认场景管理者类工厂
            /// </summary>
            class EV_GRAPHIC_DLL CDefaultSceneManagerFactory : public EarthView::World::Graphic::CSceneManagerFactory
            {
            protected:
                void initMetaData() const;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDefaultSceneManagerFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CDefaultSceneManagerFactory();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CDefaultSceneManagerFactory();
                ///工厂类型名称
                static const EVString FACTORY_TYPE_NAME;
                /// <summary>
                /// 创建实例
                /// </summary>
                /// <param name="instanceName">实例名称</param>
                /// <returns></returns>
                _extfree EarthView::World::Graphic::CSceneManager *createInstance(const EVString &instanceName);
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="instance">实例</param>
                /// <returns></returns>
                void destroyInstance(EarthView::World::Graphic::CSceneManager *instance);
            };
            /// <summary>
            /// 默认场景管理者
            /// </summary>
            class EV_GRAPHIC_DLL CDefaultSceneManager : public EarthView::World::Graphic::CSceneManager
            {
            private:
                ///static CDefaultSceneManager* ms_Singleton;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                CDefaultSceneManager(const EVString &name);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CDefaultSceneManager();
                /// <summary>
                /// 获取类型名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>类型名称</returns>
                EVString getTypeName() const;
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                ///static CDefaultSceneManager& getSingleton();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                ///static CDefaultSceneManager* getSingletonPtr();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CDefaultSceneManager(_in EarthView::World::Core::CNameValuePairList *pList);
            };
            /// <summary>
            /// 场景管理枚举类
            ///类聚场景管理的功能
            /// </summary>
            class EV_GRAPHIC_DLL CSceneManagerEnumerator : public EarthView::World::Core::CAllocatedObject
            {
            private:
                static EarthView::World::Graphic::CSceneManagerEnumerator *ms_Singleton;
            public:
                /// <summary>
                /// 场景管理实例，用实例名称检索
                /// typedef map<EVString, EarthView::World::Graphic::CSceneManager*> EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers;
                /// </summary>
                class EV_GRAPHIC_DLL SceneManagers : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    SceneManagers(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    SceneManagers();
                    ev_bool push(const EVString &key, EarthView::World::Graphic::CSceneManager *const &ref_val);
                    ev_bool exist(const EVString &key);
                    EarthView::World::Graphic::CSceneManager*& operator[](const EVString &key);
                    EarthView::World::Graphic::CSceneManager*& get(const EVString &key);
                    void erase(const EVString &key);
                    ev_size_t size() const;
                    void clear();
                    ev_bool empty() const;
                ev_private:
                    typedef map<EVString, EarthView::World::Graphic::CSceneManager *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
                    typedef pair<InternalList::iterator, bool> _Pairib;
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// // 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    _Pairib insert(const value_type &val);
                    iterator find(const EVString &key);
                    const_iterator find(const EVString &key) const;
                private:
                    InternalList mList;
                };
                /// <summary>
                /// 列出有效地场景管理者类型作为元数据
                /// typedef vector<const EarthView::World::Graphic::SceneManagerMetaData*> EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList;
                /// </summary>
                class EV_GRAPHIC_DLL MetaDataList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<const EarthView::World::Graphic::SceneManagerMetaData *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, const EarthView::World::Graphic::SceneManagerMetaData *const &t);
                private:
                    InternalList mList;
                ev_private:
                    MetaDataList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    MetaDataList();
                    void push_back(const EarthView::World::Graphic::SceneManagerMetaData *const &t);
                    void pop_back();

                    const EarthView::World::Graphic::SceneManagerMetaData*& front();
                    const EarthView::World::Graphic::SceneManagerMetaData*& back();
                    void insert(ev_uint32 pos, const EarthView::World::Graphic::SceneManagerMetaData *const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    const EarthView::World::Graphic::SceneManagerMetaData*& operator[](ev_size_t n);
                    const EarthView::World::Graphic::SceneManagerMetaData *const &operator[](ev_size_t n) const;
                    const EarthView::World::Graphic::SceneManagerMetaData*& at(ev_size_t n);
                    const EarthView::World::Graphic::SceneManagerMetaData *const &at(ev_size_t n) const ;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
                class EV_GRAPHIC_DLL SceneManagerIteratorPair : public EarthView::World::Core::CBaseObject
                {
                public:
                    SceneManagerIteratorPair();
                    EVString first;
                    EarthView::World::Graphic::CSceneManager *second;
                ev_private:
                    SceneManagerIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
                };
                /// <summary>
                /// 元数据迭代器
                /// typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList> EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator;
                /// </summary>
                class EV_GRAPHIC_DLL MetaDataIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::const_iterator IteratorType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    MetaDataIterator();
                    MetaDataIterator(const_iterator start, const_iterator last);
                    ~MetaDataIterator();
                    ValueType peekNext () const;
                    ValueType getNext ();

                    const IteratorType &begin();
                    const IteratorType &end();
                    const IteratorType &current();
                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator &operator=(_in const EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator &other);
                ev_private:
                    MetaDataIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    MetaDataIterator(EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList &vec);

                    MetaDataIterator(const MetaDataIterator &rhs);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext ();
                    const EarthView::World::Graphic::SceneManagerMetaData *getCurrent();
                    const EarthView::World::Graphic::SceneManagerMetaData *next();
                    const EarthView::World::Graphic::SceneManagerMetaData *getBegin();
                    const EarthView::World::Graphic::SceneManagerMetaData *getEnd();
                private:
                    InternalIterator *mIterator;
                };
                class EV_GRAPHIC_DLL SceneManagerIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CMapIterator<EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers> InternalIterator;
                    typedef InternalIterator::const_iterator const_iterator;
                    typedef InternalIterator::iterator iterator;
                    typedef InternalIterator::iterator IteratorType;
                    typedef InternalIterator::PairType PairType;
                    typedef InternalIterator::KeyType KeyType;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    SceneManagerIterator(const_iterator first, const_iterator last);
                    ~SceneManagerIterator();
                    KeyType peekNextKey() const;
                    ValueType peekNextValue (  ) const;
                    const PointerType peekNextValuePtr ();
                    ValueType getNext();

                    const IteratorType &begin();
                    IteratorType &current();
                    const IteratorType &end();
                ev_private:
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator &operator=(_in const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator &other);
                ev_private:
                    SceneManagerIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    SceneManagerIterator(EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers &lst);
                    SceneManagerIterator(const SceneManagerIterator &other);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext (  );
                    EVString nextKey() const;
                    EarthView::World::Graphic::CSceneManager *nextValue() const;
                    EarthView::World::Graphic::CSceneManager **nextValuePtr();
                    EarthView::World::Graphic::CSceneManager *next();
                    const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair &getBegin();
                    const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair &getEnd();
                    const EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair &getCurrent();

                private:
                    InternalIterator *mIterator;
                    EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair mBeginPair;
                    EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair mCurrentPair;
                    EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIteratorPair mEndPair;
                    EarthView::World::Graphic::CSceneManager *mptr;
                    ValueType mvt;
                };
            private:
                typedef list<EarthView::World::Graphic::CSceneManagerFactory *> Factories;
                Factories mFactories;
                EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagers mInstances;
                EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataList mMetaDataList;
                CDefaultSceneManagerFactory mDefaultFactory;
                ev_uint32 mInstanceCreateCount;
                EarthView::World::Graphic::CRenderSystem *mCurrentRenderSystem;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CSceneManagerEnumerator(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CSceneManagerEnumerator();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CSceneManagerEnumerator();
                /// <summary>
                /// 添加场景管理类工厂
                /// </summary>
                /// <param name="fact">工厂实例</param>
                /// <returns></returns>
                void addFactory(EarthView::World::Graphic::CSceneManagerFactory *ref_fact);
                /// <summary>
                /// 移除场景管理类工厂
                /// </summary>
                /// <param name="fact">工厂实例</param>
                /// <returns></returns>
                void removeFactory(EarthView::World::Graphic::CSceneManagerFactory *fact);
                /// <summary>
                /// 获取更多场景管理指定类型的详细信息
                /// </summary>
                /// <param name="typeName">调查的类型名称</param>
                /// <returns></returns>
                const EarthView::World::Graphic::SceneManagerMetaData *getMetaData(const EVString &typeName) const;

                /// <summary>
                /// 遍历场景管理中所有有效结构的类型，并提高它们的一些信息
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator getMetaDataIterator() const;
                /// 创建一个指定类型的场景管理实例
                /// </summary>
                /// <param name="typeName">定义一个唯一的场景管理类型</param>
                /// <param name="instanceName">新实例的名称</param>
                /// <returns>场景管理</returns>
                EarthView::World::Graphic::CSceneManager *createSceneManager(const EVString &typeName, const EVString &instanceName);
                EarthView::World::Graphic::CSceneManager *createSceneManager(const EVString &typeName);
                /// 基于场景类型支持创建一个场景管理实例
                /// 如果特殊的场景管理没有被发现，返回默认实现
                /// </summary>
                /// <param name="typeMask">场景类型标识</param>
                /// <param name="instanceName">新实例的名称</param>
                /// <returns>场景管理</returns>
                EarthView::World::Graphic::CSceneManager *createSceneManager(SceneTypeMask typeMask, const EVString &instanceName);
                EarthView::World::Graphic::CSceneManager *createSceneManager(SceneTypeMask typeMask);
                /// <summary>
                /// 销毁场景管理实例
                /// </summary>
                /// <param name="sm">场景管理</param>
                /// <returns></returns>
                void destroySceneManager(EarthView::World::Graphic::CSceneManager *sm);
                /// <summary>
                /// 获取一个场景管理实例
                /// </summary>
                /// <param name="instanceName">检索实例的名称</param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneManager *getSceneManager(const EVString &instanceName) const;
                /// <summary>
                /// 识别一个场景管理实例
                /// </summary>
                /// <param name="instanceName">检索实例的名称</param>
                /// <returns></returns>
                ev_bool hasSceneManager(const EVString &instanceName) const;

				ev_bool renameSceneManager(const EVString& oldName,const EVString& newName);
                /// <summary>
                /// 获取一个迭代器遍历所有存在的场景管理实例
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator getSceneManagerIterator();
                /// <summary>
                /// 设置渲染系统
                /// 通知所有场景管理者渲染系统的目的
                /// </summary>
                /// <param name="rs">渲染系统</param>
                /// <returns></returns>
                void setRenderSystem(EarthView::World::Graphic::CRenderSystem *ref_rs);
                /// <summary>
                /// 关闭管理者
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void shutdownAll();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Graphic::CSceneManagerEnumerator &getSingleton();
                /// <summary>
                /// 得到单体类的实现，跳过标准的单体类的检索，直接跳到需要使用的单体类的实现部分
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回单体类的引用</returns>
                static EarthView::World::Graphic::CSceneManagerEnumerator *getSingletonPtr();
            };
        }
    }
}

#endif

