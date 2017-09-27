#ifndef _Material_H__
#define _Material_H__
#include "graphic/graphic_config.h"
#include "resource.h"
#include <core/iteratorwrapper.h>
#include "blendmode.h"
#include "common.h"
#include <core/stringdefines.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// Forward declaration
            class CMaterialPtr;
            class CLodStrategy;
            class CTechnique;
            class LodTechniques;
            class CTechnique;
            class CRenderable;
            /// <summary>
            /// 用于指定细节等级的距离列表
            /// </summary>
            class EV_GRAPHIC_DLL LodValueList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                LodValueList(EarthView::World::Core::CNameValuePairList *pList);
            ev_private:
                typedef vector<Real> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                /// <summary>
                /// 在迭代器pos所指向的元素前面插入值为t的新元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="t">插入元素的值</param>
                /// <returns>返回指向新元素的迭代器</returns>
                iterator insert(iterator pos, Real const &t);
            private:
                InternalList mList;
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                LodValueList();
                /// <summary>
                /// 在容器的尾部添加值为t的元素
                /// </summary>
                /// <param name="t">添加元素的值</param>
                /// <returns></returns>
                void push_back(Real  const &t);
                /// <summary>
                /// 删除容器的最后一个元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void pop_back();

                /// <summary>
                /// 返回容器的第一个元素的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real &front();
                /// <summary>
                /// 返回容器的最后一个元素的引用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                Real &back();
                /// <summary>
                /// 在迭代器pos所指向的元素前面插入值为t的新元素
                /// </summary>
                /// <param name="pos">插入元素的位置</param>
                /// <param name="t">插入元素的值</param>
                /// <returns></returns>
                void insert(ev_uint32 pos, Real const &t);
                /// <summary>
                /// 去掉位置pos处元素的值
                /// </summary>
                /// <param name="pos">元素的位置</param>
                /// <returns>返回容器当前的值</returns>
                void remove(ev_size_t pos);
                /// <summary>
                /// 返回标记容器大小是否为0的布尔值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool empty() const;
                /// <summary>
                /// 重载[]操作符
                /// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                Real &operator[](ev_size_t n);
                /// <summary>
                /// 重载[]操作符
                ///由const对象调用，并且返回值不能出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                Real const &operator[](ev_size_t n) const;
                /// <summary>
                /// 返回下标为n的元素的引用
                /// 只能由非const对象调用，并且返回值可以出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                Real &at(ev_size_t n);
                /// <summary>
                /// 返回下标为n的元素的引用
                /// 由const对象调用，并且返回值不能出现在赋值运算符左侧
                /// </summary>
                /// <param name="n"></param>
                /// <returns></returns>
                Real const &at(ev_size_t n) const;
                /// <summary>
                /// 返回容器中元素的个数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t size() const;
                /// <summary>
                /// 调整容器的长度大小，使其能容纳newSize个元素
                /// </summary>
                /// <param name="newSize">长度</param>
                /// <returns></returns>
                void resize(ev_size_t newSize);
                void reserve(ev_size_t count);
                /// <summary>
                /// 删除容器中的所有元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clear();
            };
            class EV_GRAPHIC_DLL LodValueIterator : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                LodValueIterator(EarthView::World::Core::CNameValuePairList *pList);
            ev_private:
                typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::LodValueList> InternalIterator;
                typedef InternalIterator::ValueType ValueType;
                typedef InternalIterator::PointerType PointerType;
                typedef LodValueList::const_iterator IteratorType;
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="start">首迭代器</param>
                /// <param name="last">尾迭代器</param>
                /// <returns></returns>
                LodValueIterator(IteratorType start, IteratorType last);
                /// <summary>
                /// 赋值符号"="的重载
                /// </summary>
                /// <param name="other">EarthView::World::Graphic::LodValueIterator类的引用</param>
                /// <returns>返回赋值后的引用</returns>
                EarthView::World::Graphic::LodValueIterator &operator=(_in const EarthView::World::Graphic::LodValueIterator &other);
                /// <summary>
                /// 返回集合中的当前元素
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ValueType peekNext () const;
                /*PointerType peekNextPtr ()  const
                {
                return mIterator->peekNextPtr();
                }*/
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回容器当前的值</returns>
                ValueType getNext ();

                /// <summary>
                /// 返回首迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>首迭代器</returns>
                const IteratorType &begin();
                /// <summary>
                /// 返回末尾迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>末尾迭代器</returns>
                const IteratorType &end();
                /// <summary>
                /// 返回当前迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前迭代器</returns>
                const IteratorType &current();
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="vec"></param>
                /// <returns></returns>
                LodValueIterator(EarthView::World::Graphic::LodValueList &vec);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                LodValueIterator(const LodValueIterator &rhs);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~LodValueIterator();
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
                void moveNext ();
                /// <summary>
                /// 返回容器当前值的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>当前值</returns>
                Real getCurrent();
                /// <summary>
                /// 返回容器当前的值
                /// </summary>
                /// <param name=""></param>
                /// <returns>值</returns>
                Real next();
                /// <summary>
                /// 返回容器首值的指针
                /// </summary>
                /// <param name=""></param>
                /// <returns>首键值对</returns>
                Real getBegin();
                /// <summary>
                /// 返回容器尾键值对
                /// </summary>
                /// <param name=""></param>
                /// <returns>尾键值对</returns>
                Real getEnd();
            private:
                InternalIterator *mIterator;
            };

            ///<summary>
            ///压缩对象的渲染属性
            ///</summary>
            class EV_GRAPHIC_DLL CMaterial : public EarthView::World::Graphic::CResource
            {
                friend class CSceneManager;
                friend class CMaterialManager;
                friend class CMesh;
            public:
                ///typedef vector<EarthView::World::Graphic::CTechnique*> EarthView::World::Graphic::CMaterial::Techniques;
                class EV_GRAPHIC_DLL Techniques : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    Techniques(_in EarthView::World::Core::CNameValuePairList *pList) {}
                ev_private:
                    typedef vector<EarthView::World::Graphic::CTechnique *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CTechnique *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                public:
                    Techniques() {}
                    void push_back(EarthView::World::Graphic::CTechnique *const &ref_t)
                    {
                        mList.push_back(ref_t);
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
                    EarthView::World::Graphic::CTechnique*& operator[](ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CTechnique *const &operator[](ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CTechnique*& at(ev_size_t n)
                    {
                        reference l = mList[n];
                        return l;
                    }
                    EarthView::World::Graphic::CTechnique *const &at(ev_size_t n) const
                    {
                        const_reference l =  mList[n];
                        return l;
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
            protected:
                /// <summary>
                /// 按照默认设置设定纹理
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void applyDefaults();


                ///所有的技术，支持的和不支持的
                EarthView::World::Graphic::CMaterial::Techniques mTechniques;
                //// Supported techniques of any sort
                EarthView::World::Graphic::CMaterial::Techniques mSupportedTechniques;
                typedef map<ev_uint16, EarthView::World::Graphic::CTechnique *> LodTechniques;
                typedef map<ev_uint16, LodTechniques *> BestTechniquesBySchemeList;
                /** Map of scheme -> list of LOD techniques.
                	Current scheme is set on CMaterialManager,
                	and can be set per CViewport for auto activation.
                */
                BestTechniquesBySchemeList mBestTechniquesBySchemeList;
                EarthView::World::Graphic::LodValueList mUserLodValues;
                EarthView::World::Graphic::LodValueList mLodValues;
                const EarthView::World::Graphic::CLodStrategy *mLodStrategy;
				ev_uint16 mRefCount;
                ev_bool mReceiveShadows;
                ev_bool mTransparencyCastsShadows;
                //// Does this material require compilation?
                ev_bool mCompilationRequired;
                //// Text description of why any techniques are not supported
                EVString mUnsupportedReasons;
                /// <summary>
                /// 插入一个支持的技术到本地的集合中
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void insertSupportedTechnique(EarthView::World::Graphic::CTechnique *t);
                /// <summary>
                /// 清空最好的技术列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clearBestTechniqueList();
            ev_internal:
                /// <summary>
                /// 从EarthView::World::Graphic::CResource类重载
                /// 内部执行'准备'行为
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void prepareImpl();
                /// <summary>
                /// 从EarthView::World::Graphic::CResource类重载
                /// 内部执行'反准备'行为
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unprepareImpl();
                /// <summary>
                /// 从EarthView::World::Graphic::CResource类重载
                /// 内部执行'加载'行为
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void loadImpl();
                /// <summary>
                /// 从EarthView::World::Graphic::CResource类重载
                /// 内部执行'卸载'行为
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void unloadImpl();
                /// <summary>
                /// 从EarthView::World::Graphic::CResource类重载
                /// 计算资源的大小
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_size_t calculateSize() const
                {
                    return 0;    /// TODO
                }

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMaterial(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// 使用资源管理的创建方法
                /// </summary>
                /// <param name="creator">指向资源管理的指针</param>
                /// <param name="name">资源的名称</param>
                /// <param name="handle"></param>
                /// <param name="group">资源组的名称</param>
                /// <param name="isManual">是否手动下载资源</param>
                /// <param name="loader">指向手动资源下载的指针</param>
                /// <returns></returns>
                CMaterial(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                          const EVString &group, ev_bool isManual, EarthView::World::Graphic::CManualResourceLoader *ref_loader);
                /// <summary>
                /// 构造函数
                /// 使用资源管理的创建方法
                /// </summary>
                /// <param name="creator">指向资源管理的指针</param>
                /// <param name="name">资源的名称</param>
                /// <param name="handle"></param>
                /// <param name="group">资源组的名称</param>
                /// <param name="isManual">是否手动下载资源</param>
                /// <returns></returns>
                CMaterial(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                          const EVString &group, ev_bool isManual);
                /// <summary>
                /// 构造函数
                /// 使用资源管理的创建方法
                /// </summary>
                /// <param name="creator">指向资源管理的指针</param>
                /// <param name="name">资源的名称</param>
                /// <param name="handle"></param>
                /// <param name="group">资源组的名称</param>
                /// <returns></returns>
                CMaterial(EarthView::World::Graphic::CResourceManager *ref_creator, const EVString &name, ResourceHandle handle,
                          const EVString &group);

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CMaterial();
                /// <summary>
                /// 操作符'='重载
                /// </summary>
                /// <param name="rhs"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterial &operator=( const EarthView::World::Graphic::CMaterial &rhs );
                /// <summary>
                /// 判断材质是否是透明的
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isTransparent() const;
                /// <summary>
                /// 设置使用材质的对象是否会接收阴影
                /// 透明对象不接收阴影
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setReceiveShadows(ev_bool enabled);

                /// <summary>
                /// 获得使用材质的对象是否接收阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getReceiveShadows() const;
                /// <summary>
                /// 设置使用材质的透明对象是否投射阴影                
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setTransparencyCastsShadows(ev_bool enabled);
                /// <summary>
                /// 获取使用材质的透明对象是否投射阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getTransparencyCastsShadows() const;
                /// <summary>
                /// 为材质创建一个新的技术
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CTechnique *createTechnique();
                /// <summary>
                /// 获得技术的索引
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CTechnique *getTechnique(ev_uint16 index);

                /// <summary>
                /// 查找技术的名称
                /// 如果技术的名称没有找到，则返回0
                /// </summary>
                /// <param name="name">技术的名称</param>
                /// <returns>技术的名称</returns>
                EarthView::World::Graphic::CTechnique *getTechnique(const EVString &name);

                /// <summary>
                /// 获得技术的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumTechniques() const;

                /// <summary>
                /// 移除指定索引的技术
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                void removeTechnique(ev_uint16 index);

                /// <summary>
                /// 去除材质中所有的技术
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllTechniques();
                /* typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CMaterial::Techniques> EarthView::World::Graphic::CMaterial::TechniqueIterator;*/
                class EV_GRAPHIC_DLL TechniqueIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    TechniqueIterator(EarthView::World::Core::CNameValuePairList *pList);
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CMaterial::Techniques> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef Techniques::iterator IteratorType;
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="start">首迭代器</param>
                    /// <param name="last">尾迭代器</param>
                    /// <returns></returns>
                    TechniqueIterator(IteratorType start, IteratorType last);

                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CMaterial::TechniqueIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CMaterial::TechniqueIterator &operator=(_in const EarthView::World::Graphic::CMaterial::TechniqueIterator &other);
                    /// <summary>
                    /// 返回集合中的当前元素
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ValueType peekNext () const;
                    /// <summary>
                    /// 返回集合中当前元素的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    PointerType peekNextPtr ()  const;
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>返回容器当前的值</returns>
                    ValueType getNext ();

                    /// <summary>
                    /// 返回首迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首迭代器</returns>
                    const IteratorType &begin();
                    /// <summary>
                    /// 返回末尾迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>末尾迭代器</returns>
                    const IteratorType &end();
                    /// <summary>
                    /// 返回当前迭代器
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前迭代器</returns>
                    const IteratorType &current();
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="lst"></param>
                    /// <returns></returns>
                    TechniqueIterator(EarthView::World::Graphic::CMaterial::Techniques &vec);
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="rhs"></param>
                    /// <returns></returns>
                    TechniqueIterator(const TechniqueIterator &rhs);
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    ~TechniqueIterator();
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
                    void moveNext ();
                    /// <summary>
                    /// 返回容器当前值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>当前值</returns>
                    EarthView::World::Graphic::CTechnique *getCurrent();
                    /// <summary>
                    /// 返回容器当前的值
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>值</returns>
                    EarthView::World::Graphic::CTechnique *next();
                    /// <summary>
                    /// 返回容器首值的指针
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>首键值对</returns>
                    EarthView::World::Graphic::CTechnique *getBegin();
                    /// <summary>
                    /// 返回容器尾键值对
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>尾键值对</returns>
                    EarthView::World::Graphic::CTechnique *getEnd();
                private:
                    InternalIterator *mIterator;
                };

                /// <summary>
                /// 获得材质中技术的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterial::TechniqueIterator getTechniqueIterator();

                /// <summary>
                /// 获得被支持的技术的迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterial::TechniqueIterator getSupportedTechniqueIterator();

                /// <summary>
                /// 获得被支持的指定索引的技术
                /// </summary>
                /// <param name="index">索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CTechnique *getSupportedTechnique(ev_uint16 index);

                /// <summary>
                /// 获得被支持的技术的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 getNumSupportedTechniques() const;

                /// <summary>
                /// 获得技术不被支持的原因
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EVString &getUnsupportedTechniquesExplanation() const;
                /// <summary>
                /// 获得已给方案中材质的细节等级的数量
                /// </summary>
                /// <param name="schemeIndex">方案索引</param>
                /// <returns></returns>
                ev_uint16 getNumLodLevels(ev_uint16 schemeIndex) const;

                /// <summary>
                /// 获得已给方案中材质的细节等级的数量
                /// </summary>
                /// <param name="schemeName">方案名称</param>
                /// <returns></returns>
                ev_uint16 getNumLodLevels(const EVString &schemeName) const;
                /// <summary>
                /// 获得最好的支持技术
                /// </summary>
                /// <param name="lodIndex">材质的细节等级索引</param>
                /// <param name="rend">指向可渲染对象的指针</param>
                /// <returns>技术</returns>
                EarthView::World::Graphic::CTechnique *getBestTechnique(ev_uint16 lodIndex , const EarthView::World::Graphic::CRenderable *rend );
                /// <summary>
                /// 获得最好的支持技术
                /// </summary>
                /// <param name="lodIndex">材质的细节等级索引</param>
                /// <returns>技术</returns>
                EarthView::World::Graphic::CTechnique *getBestTechnique(ev_uint16 lodIndex);
                /// <summary>
                /// 获得最好的支持技术
                /// </summary>
                /// <param name=""></param>
                /// <returns>技术</returns>
                EarthView::World::Graphic::CTechnique *getBestTechnique();
                /// <summary>
                /// 材质克隆
                /// </summary>
                /// <param name="newName">克隆材质的新名字</param>
                /// <param name="changeGroup">如果为true,资源组被改变，否则不改变</param>
                /// <param name="newGroup">分配的新组（如果资源组被改变）</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterialPtr clone(const EVString &newName, ev_bool changeGroup , const EVString &newGroup) const;
                /// <summary>
                /// 材质克隆
                /// </summary>
                /// <param name="newName">克隆材质的新名字</param>
                /// <param name="changeGroup">如果为true,资源组被改变，否则不改变</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterialPtr clone(const EVString &newName, ev_bool changeGroup) const;
                /// <summary>
                /// 材质克隆
                /// </summary>
                /// <param name="newName">克隆材质的新名字</param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterialPtr clone(const EVString &newName) const;
				EarthView::World::Graphic::CMaterialPtr cloneUnmanaged(const EVString &newName) const;
                /// <summary>
                /// 拷贝材质的细节到另一个材质，保留目标材质的句柄和名称
                /// </summary>
                /// <param name="mat">获得材质设置的引用</param>
                /// <returns></returns>
                void copyDetailsTo(EarthView::World::Graphic::CMaterialPtr &mat) const;
                /// <summary>
                /// 编译材质
                /// </summary>
                /// <param name="autoManageTextureUnits">如果设置为true,当固定功能通路拥有的CTextureUnitState入口超过了card拥有的纹理单元，通路就会被拆分成多个；如果设置为false,出现这个状况就会抛出异常</param>
                /// <returns></returns>
                void compile(ev_bool autoManageTextureUnits);
                /// <summary>
                /// 编译材质
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void compile();
                /// -------------------------------------------------------------------------------
                /// The following methods are to make migration from previous versions simpler
                /// and to make code easier to write when dealing with simple materials
                /// They set the properties which have been moved to CPass for all EarthView::World::Graphic::CMaterial::Techniques and all Passes
                /// <summary>
                /// 设置每个技术中每个通路里点大小的属性
                /// </summary>
                /// <param name="ps">点的大小</param>
                /// <returns></returns>
                void setPointSize(Real ps);
                /// <summary>
                /// 设置每个技术中每个通路里环境光的反射率
                /// </summary>
                /// <param name="red">红色</param>
                /// <param name="green">绿色</param>
                /// <param name="blue">蓝色</param>
                /// <returns></returns>
                void setAmbient(Real red, Real green, Real blue);
                /// <summary>
                /// 设置每个技术中每个通路里环境光的反射率
                /// </summary>
                /// <param name="ambient">环境光</param>
                /// <returns></returns>
                void setAmbient(const EarthView::World::Graphic::CColourValue &ambient);
                /// <summary>
                /// 设置每个技术中每个通路里漫反射率
                /// </summary>
                /// <param name="red">红色</param>
                /// <param name="green">绿色</param>
                /// <param name="blue">蓝色</param>
                /// <param name="alpha"></param>
                /// <returns></returns>
                void setDiffuse(Real red, Real green, Real blue, Real alpha);
                /// <summary>
                /// 设置每个技术中每个通路里漫反射率
                /// </summary>
                /// <param name="diffuse">漫反射</param>
                /// <returns></returns>
                void setDiffuse(const EarthView::World::Graphic::CColourValue &diffuse);
                /// <summary>
                /// 设置每个技术中每个通路里镜面反射率
                /// </summary>
                /// <param name="red">红色</param>
                /// <param name="green">绿色</param>
                /// <param name="blue">蓝色</param>
                /// <param name="alpha"></param>
                /// <returns></returns>
                void setSpecular(Real red, Real green, Real blue, Real alpha);
                /// <summary>
                /// 设置每个技术中每个通路里镜面反射率
                /// </summary>
                /// <param name="specular">漫反射</param>
                /// <returns></returns>
                void setSpecular(const EarthView::World::Graphic::CColourValue &specular);
                /// <summary>
                /// 设置每一个技术中每一个通路的发光属性
                /// </summary>
                /// <param name="val">漫反射</param>
                /// <returns></returns>
                void setShininess(Real val);
                /// <summary>
                /// 设置每个技术中每个通路自发光的颜色
                /// </summary>
                /// <param name="red">红色</param>
                /// <param name="green">绿色</param>
                /// <param name="blue">蓝色</param>
                /// <returns></returns>
                void setSelfIllumination(Real red, Real green, Real blue);
                /// <summary>
                /// 设置每个技术中每个通路自发光的颜色
                /// </summary>
                /// <param name="selfIllum">自我照明</param>
                /// <returns></returns>
                void setSelfIllumination(const EarthView::World::Graphic::CColourValue &selfIllum);
                /// <summary>
                /// 设置是否每个通路的深度测试是否启用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setDepthCheckEnabled(ev_bool enabled);
                /// <summary>
                /// 设置是否每个通路的深度写入是否启用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setDepthWriteEnabled(ev_bool enabled);
                /// <summary>
                /// 当进行深度检查时，深度比较函数
                /// </summary>
                /// <param name="func"></param>
                /// <returns></returns>
                void setDepthFunction( EarthView::World::Graphic::CompareFunction func );
                /// <summary>
                /// 设置是否每个通路的颜色写入是否启用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setColourWriteEnabled(ev_bool enabled);
                /// <summary>
                /// 设置每个通路的剔除模式
                /// </summary>
                /// <param name="mode">模型</param>
                /// <returns></returns>
                void setCullingMode( CullingMode mode );
                /// <summary>
                /// 设置每个通路的手动剔除模式
                /// </summary>
                /// <param name="mode"></param>
                /// <returns></returns>
                void setManualCullingMode( ManualCullingMode mode );
                /// <summary>
                /// 设置每一个通路的动态光是否可用
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setLightingEnabled(ev_bool enabled);
                /// <summary>
                /// 设置光照的类型
                /// </summary>
                /// <param name="mode">模型</param>
                /// <returns></returns>
                void setShadingMode( EarthView::World::Graphic::ShadeOptions mode );
                /// <summary>
                /// 设置每个通路应用的雾模型
                /// </summary>
                /// <param name="overrideScene">如果为true,重载场景的雾参数，如果为false,取默认设置</param>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <param name="expDensity">雾的密度，在0~1之间</param>
                /// <param name="linearStart">雾逐渐侵蚀的距离</param>
                /// <param name="linearEnd">雾变到完全不透明的距离</param>
                /// <returns></returns>
                void setFog(
                    ev_bool overrideScene,
                    EarthView::World::Graphic::FogMode mode ,
                    const EarthView::World::Graphic::CColourValue &colour ,
                    Real expDensity , Real linearStart, Real linearEnd );
                /// <summary>
                /// 设置每个通路应用的雾模型
                /// </summary>
                /// <param name="overrideScene">如果为true,重载场景的雾参数，如果为false,取默认设置</param>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <param name="expDensity">雾的密度，在0~1之间</param>
                /// <param name="linearStart">雾逐渐侵蚀的距离</param>
                /// <returns></returns>
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode, const EarthView::World::Graphic::CColourValue &colour, Real expDensity, Real linearStart );
                /// <summary>
                /// 设置每个通路应用的雾模型
                /// </summary>
                /// <param name="overrideScene">如果为true,重载场景的雾参数，如果为false,取默认设置</param>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <param name="expDensity">雾的密度，在0~1之间</param>
                /// <returns></returns>
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour, Real expDensity);
                /// <summary>
                /// 设置每个通路应用的雾模型
                /// </summary>
                /// <param name="overrideScene">如果为true,重载场景的雾参数，如果为false,取默认设置</param>
                /// <param name="mode">雾模型</param>
                /// <param name="colour">雾的颜色</param>
                /// <returns></returns>
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode , const EarthView::World::Graphic::CColourValue &colour );
                /// <summary>
                /// 设置每个通路应用的雾模型
                /// </summary>
                /// <param name="overrideScene">如果为true,重载场景的雾参数，如果为false,取默认设置</param>
                /// <param name="mode">雾模型</param>
                /// <returns></returns>
                void setFog(ev_bool overrideScene, EarthView::World::Graphic::FogMode mode );
                /// <summary>
                /// 设置每个通路应用的雾模型
                /// </summary>
                /// <param name="overrideScene">如果为true,重载场景的雾参数，如果为false,取默认设置</param>
                /// <returns></returns>
                void setFog(ev_bool overrideScene);
                /// <summary>
                /// 设置通路的深度偏移
                /// </summary>
                /// <param name="constantBias">常量偏移值</param>
                /// <param name="slopeScaleBias">相对坡度偏移值</param>
                /// <returns></returns>
                void setDepthBias(ev_real32 constantBias, ev_real32 slopeScaleBias);
                /// <summary>
                /// 设置技术和通路中每一个纹理单元的纹理过滤
                /// </summary>
                /// <param name="filterType">高级过滤类型</param>
                /// <returns></returns>
                void setTextureFiltering(EarthView::World::Graphic::TextureFilterOptions filterType);

                /// <summary>
                /// 设置纹理的各向异性程度
                /// </summary>
                /// <param name="maxAniso">最大各向差异性，在2和硬件所提供的最大值之间，默认值是1</param>
                /// <returns></returns>
                void setTextureAnisotropy(ev_int32 maxAniso);
                /** Sets the kind of blending every pass has with the existing contents of the scene.
                @note
                    This property has been moved to the CPass class, which is accessible via the
                    EarthView::World::Graphic::CTechnique. For simplicity, this method allows you to set these properties for
                    every current EarthView::World::Graphic::CTechnique, and for every current CPass within those EarthView::World::Graphic::CMaterial::Techniques. If
                    you need more precision, retrieve the EarthView::World::Graphic::CTechnique and CPass instances and set the
                    property there.
                @see CPass::setSceneBlending
                */
                void setSceneBlending( const EarthView::World::Graphic::SceneBlendType sbt );
				/*
                @note
                    This property has been moved to the CPass class, which is accessible via the
                    EarthView::World::Graphic::CTechnique. For simplicity, this method allows you to set these properties for
                    every current EarthView::World::Graphic::CTechnique, and for every current CPass within those EarthView::World::Graphic::CMaterial::Techniques. If
                    you need more precision, retrieve the EarthView::World::Graphic::CTechnique and CPass instances and set the
                    property there.
                @see CPass::setSeparateSceneBlending
                */
                void setSeparateSceneBlending( const EarthView::World::Graphic::SceneBlendType sbt, const EarthView::World::Graphic::SceneBlendType sbta );
                /** Allows very fine control of blending every CPass with the existing contents of the scene.
                @note
                    This property has been moved to the CPass class, which is accessible via the
                    EarthView::World::Graphic::CTechnique. For simplicity, this method allows you to set these properties for
                    every current EarthView::World::Graphic::CTechnique, and for every current CPass within those EarthView::World::Graphic::CMaterial::Techniques. If
                    you need more precision, retrieve the EarthView::World::Graphic::CTechnique and CPass instances and set the
                    property there.
                @see CPass::setSceneBlending
                */
                void setSceneBlending( const EarthView::World::Graphic::SceneBlendFactor sourceFactor, const EarthView::World::Graphic::SceneBlendFactor destFactor);
				/*
                @note
                    This property has been moved to the CPass class, which is accessible via the
                    EarthView::World::Graphic::CTechnique. For simplicity, this method allows you to set these properties for
                    every current EarthView::World::Graphic::CTechnique, and for every current CPass within those EarthView::World::Graphic::CMaterial::Techniques. If
                    you need more precision, retrieve the EarthView::World::Graphic::CTechnique and CPass instances and set the
                    property there.
                @see CPass::setSeparateSceneBlending
                */
                void setSeparateSceneBlending( const EarthView::World::Graphic::SceneBlendFactor sourceFactor, const EarthView::World::Graphic::SceneBlendFactor destFactor, const EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, const EarthView::World::Graphic::SceneBlendFactor destFactorAlpha);
                /// <summary>
                /// 告诉材质需要重新编译
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _notifyNeedsRecompile();
                /// <summary>
                /// 设置到细节等级取得效果的距离
                /// </summary>
                /// <param name="lodValues">存储细节等级的vector容器</param>
                /// <returns></returns>
                void setLodLevels(const EarthView::World::Graphic::LodValueList &lodValues);

                /// <summary>
                /// 获得一个细节等级取得效果的细节等级值列表迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::LodValueIterator getLodValueIterator() const;

                /** Gets an iterator over the user-defined list of values which are internally transfomed by the LodStrategy.
                @remarks
                    Note that the iterator returned from this method is not totally analogous to
                    the one passed in by calling setLodLevels - the list includes a zero
                    entry at the start (since the highest LOD starts at value 0). Also, the
                	values returned are after being transformed by LodStrategy::transformUserValue.
                */
                EarthView::World::Graphic::LodValueIterator getUserLodValueIterator() const;
                /// <summary>
                /// 获得细节等级索引
                /// </summary>
                /// <param name="value">已给的值</param>
                /// <returns></returns>
                ev_uint16 getLodIndex(Real value) const;
                /// <summary>
                /// 获得材质使用的细节等级的策略
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CLodStrategy *getLodStrategy() const;
                /// <summary>
                /// 设置材质使用的细节等级的策略
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setLodStrategy(EarthView::World::Graphic::CLodStrategy *ref_lodStrategy);
                /** @copydoc CResource::touch
                */
                void touch();

                /// <summary>
                /// 应用纹理别名
                /// </summary>
                /// <param name="aliasList">纹理名称键值对</param>
                /// <param name="apply">true，应用；false，只匹配别名并不应用</param>
				/// <returns>假如匹配的纹理别名找到了，则返回true，否则返回false</returns>
				ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList, const ev_bool apply) const;
                ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList) const;
                /// <summary>
                /// 判断材质编辑的状态
                /// </summary>
                /// <param name=""></param>
                /// <returns>如果材质需要重新编辑返回true</returns>
                ev_bool getCompilationRequired() const
                {
                    return mCompilationRequired;
                }
			ev_private:
				/// <summary>
				/// 添加引用计数
				/// </summary>			
				/// <returns></returns>
				ev_uint16 _ref();

				/// <summary>
				/// 减少引用计数
				/// </summary>			
				/// <returns></returns>
				ev_uint16 _unRef();

				/// <summary>
				/// 计数个数
				/// </summary>			
				/// <returns></returns>
				ev_uint16 _refCount();
            };
            /** Specialisation of EarthView::World::Core::CSharedPtr to allow EarthView::World::Core::CSharedPtr to be assigned to EarthView::World::Graphic::CMaterialPtr
            @note Has to be a subclass since we need operator=.
            We could templatise this instead of repeating per CResource subclass,
            except to do so requires a form VC6 does not support i.e.
            ResourceSubclassPtr<T> : public EarthView::World::Core::CSharedPtr<T>
            */
            class EV_GRAPHIC_DLL CMaterialPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CMaterial>
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMaterialPtr(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CMaterialPtr();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rep"></param>
                /// <returns></returns>
                explicit CMaterialPtr(CMaterial *ref_rep);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rep"></param>
                /// <param name="inFreeMethod"></param>
                /// <returns></returns>
                explicit CMaterialPtr(CMaterial *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="r"></param>
                /// <returns></returns>
                CMaterialPtr(const CMaterialPtr &r);

                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="rep"></param>
                /// <returns></returns>
                CMaterialPtr(const EarthView::World::Graphic::ResourcePtr &r);
                EarthView::World::Graphic::CMaterial *get() const;
                /// <summary>
                /// 用于转换EarthView::World::Graphic::ResourcePtr到EarthView::World::Graphic::CMaterialPtr
                /// </summary>
                /// <param name="r"></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterialPtr &operator=(const EarthView::World::Graphic::ResourcePtr &r);

            };
            /** @} */
            /** @} */
			class EV_GRAPHIC_DLL CMaterialPtrList : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				typedef vector<EarthView::World::Graphic::CMaterialPtr> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_LIST(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Graphic::CMaterialPtr const &t);

			private:
				InternalList mList;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMaterialPtrList(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMaterialPtrList();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Graphic::CMaterialPtr const &t);
				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Graphic::CMaterialPtr& front();
				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Graphic::CMaterialPtr& back();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Graphic::CMaterialPtr& at(_in ev_uint32 pos);

				EarthView::World::Graphic::CMaterialPtr const &at(_in ev_uint32 pos) const;
				/// <summary>
				/// 插入元素
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CMaterialPtr const &t);
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();

				void reserve(ev_size_t count);
			};
        }
    }
}
///namespace
#endif

