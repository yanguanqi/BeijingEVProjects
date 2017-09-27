#ifndef __Technique_H__
#define __Technique_H__
#include "graphic/graphic_config.h"
#include <core/iteratorwrapper.h>
#include "pass.h"
#include "rendersystemcapabilities.h"
#include "userobjectbindings.h"
#include "core/ev_string.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 该类是用来更详细的表述EarthView::World::Graphic::CMaterial类
            /// </summary>
            class EV_GRAPHIC_DLL CTechnique : public EarthView::World::Core::CAllocatedObject
            {
            protected:
                /// illumination pass state type光通路状态类型
                enum IlluminationPassesState
                {
                    IPS_COMPILE_DISABLED = -1,
                    IPS_NOT_COMPILED = 0,
                    IPS_COMPILED = 1
                };
            public:
                class EV_GRAPHIC_DLL Passes : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    Passes(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    Passes();
                ev_private:
                    typedef vector<EarthView::World::Graphic::CPass *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    ///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CPass *const &ref_t);
                private:
                    InternalList mList;
                public:
                    void push_back(EarthView::World::Graphic::CPass *const &ref_t);
                    void pop_back();

                    EarthView::World::Graphic::CPass*& front();
                    EarthView::World::Graphic::CPass*& back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CPass *const &ref_t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CPass*& operator[](ev_size_t n);
                    EarthView::World::Graphic::CPass *const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CPass*& at(ev_size_t n);
                    EarthView::World::Graphic::CPass *const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
            protected:
                ///主要的渲染通路列表
                EarthView::World::Graphic::CTechnique::Passes mPasses;
                //// List of derived passes, categorised into IlluminationStage (ordered)
                EarthView::World::Graphic::IlluminationPassList mIlluminationPasses;
                CMaterial *mParent; 			/// raw pointer since we don't want child to stop parent's destruction
                ev_bool mIsSupported;
                IlluminationPassesState mIlluminationPassesCompilationPhase;
                //// LOD level
                ev_uint16 mLodIndex;
                /** Scheme index, derived from scheme name but the names are held on
                	CMaterialManager, for speed an index is used here.
                */
                ///方案索引
                ev_uint16 mSchemeIndex;
                EVString mName; 			/// optional name for the technique

                /// <summary>
                /// 清除光照通道列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void clearIlluminationPasses();

                /// <summary>
                /// 判断是否手动的给光照通道赋值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool checkManuallyOrganisedIlluminationPasses();

                EarthView::World::Graphic::CMaterialPtr mShadowCasterMaterial;
                EVString mShadowCasterMaterialName;
                EarthView::World::Graphic::CMaterialPtr mShadowReceiverMaterial;
                EVString mShadowReceiverMaterialName;

                /// User objects binding.
                EarthView::World::Graphic::CUserObjectBindings	mUserObjectBindings;
            public:
                /** Directive used to manually control technique support based on the
                	inclusion or exclusion of some factor.
                */
                enum IncludeOrExclude
                {
                    //// Inclusive - only support if present
                    INCLUDE = 0,
                    //// Exclusive - do not support if present
                    EXCLUDE = 1
                };
                //// Rule controlling whether technique is deemed supported based on GPU vendor
                class EV_GRAPHIC_DLL GPUVendorRule : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    GPUVendorRule(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    EarthView::World::Graphic::GPUVendor vendor;
                    EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude;
                    /// <summary>
                    /// GPU供货商规定
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    GPUVendorRule();
                    /// <summary>
                    /// GPU供货商规定
                    /// </summary>
                    /// <param name="v">GPU供货商</param>
                    /// <param name="ie">导入或者导出，0表示导入，1表示导出</param>
                    /// <returns></returns>
                    GPUVendorRule(GPUVendor v, EarthView::World::Graphic::CTechnique::IncludeOrExclude ie);
                };
                //// Rule controlling whether technique is deemed supported based on GPU device name
                class EV_GRAPHIC_DLL GPUDeviceNameRule : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    GPUDeviceNameRule(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    EVString devicePattern;
                    EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude;
                    ev_bool caseSensitive;
                    /// <summary>
                    /// GPU设备名称规则
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    GPUDeviceNameRule();
                    /// <summary>
                    /// GPU设备名称规则
                    /// </summary>
                    /// <param name="pattern">原型</param>
                    /// <param name="ie">导入或者导出，0表示导入，1表示导出</param>
                    /// <param name="caseSen"></param>
                    /// <returns></returns>
                    GPUDeviceNameRule(const EVString &pattern, EarthView::World::Graphic::CTechnique::IncludeOrExclude ie, ev_bool caseSen);
                };
                class EV_GRAPHIC_DLL GPUVendorRuleList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CTechnique::GPUVendorRule> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    ///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CTechnique::GPUVendorRule const &t);
                private:
                    InternalList mList;
                ev_private:
                    GPUVendorRuleList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    GPUVendorRuleList();
                public:
                    void push_back(EarthView::World::Graphic::CTechnique::GPUVendorRule const &t);
                    void pop_back();

                    EarthView::World::Graphic::CTechnique::GPUVendorRule &front();
                    EarthView::World::Graphic::CTechnique::GPUVendorRule &back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CTechnique::GPUVendorRule const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CTechnique::GPUVendorRule &operator[](ev_size_t n);
                    EarthView::World::Graphic::CTechnique::GPUVendorRule const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CTechnique::GPUVendorRule &at(ev_size_t n);
                    EarthView::World::Graphic::CTechnique::GPUVendorRule const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };
                class EV_GRAPHIC_DLL GPUDeviceNameRuleList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::CTechnique::GPUDeviceNameRule> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    ///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
                    iterator insert(iterator pos, EarthView::World::Graphic::CTechnique::GPUDeviceNameRule const &t);
                private:
                    InternalList mList;
                ev_private:
                    GPUDeviceNameRuleList(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    GPUDeviceNameRuleList();
                public:
                    void push_back(EarthView::World::Graphic::CTechnique::GPUDeviceNameRule const &t);
                    void pop_back();

                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule &front();
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule &back();
                    void insert(ev_uint32 pos, EarthView::World::Graphic::CTechnique::GPUDeviceNameRule const &t);
                    void remove(ev_size_t pos);
                    ev_bool empty() const;
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule &operator[](ev_size_t n);
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule const &operator[](ev_size_t n) const;
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule &at(ev_size_t n);
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule const &at(ev_size_t n) const;
                    ev_size_t size() const;
                    void resize(ev_size_t newSize);
                    void reserve(ev_size_t count);
                    void clear();
                };

            protected:
                EarthView::World::Graphic::CTechnique::GPUVendorRuleList mGPUVendorRules;
                EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList mGPUDeviceNameRules;
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTechnique(_in EarthView::World::Core::CNameValuePairList *pList);
                /// <summary>
                /// 检测GPU供货商设备规则
                /// </summary>
                /// <param name="errors">错误</param>
                /// <returns></returns>
                ev_bool checkGPURules(EarthView::World::Core::CStringUtil::StrStreamType &errors);
                //// Internal method for checking hardware support
                /// <summary>
                /// 检测硬件
                /// </summary>
                /// <param name="autoManageTextureUnits">是否可以自动运行纹理单元</param>
                /// <param name="compileErrors">编译出的错误信息</param>
                /// <returns>支持返回true，否则返回false</returns>
                ev_bool checkHardwareSupport(ev_bool autoManageTextureUnits, EarthView::World::Core::CStringUtil::StrStreamType &compileErrors);
            public:
                //// Constructor
                /// <summary>
                /// 带参数的构造函数
                /// </summary>
                /// <param name="parent"></param>
                /// <returns></returns>
                CTechnique(EarthView::World::Graphic::CMaterial *ref_parent);
                //// Copy constructor
                /// <summary>
                /// 带参数的构造函数
                /// </summary>
                /// <param name="parent"></param>
                /// <param name="oth"></param>
                /// <returns></returns>
                CTechnique(EarthView::World::Graphic::CMaterial *ref_parent, const CTechnique &oth);
                ~CTechnique();

                /// <summary>
                /// 判断该技术是否被当前的显卡所支持
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isSupported() const;
                /// <summary>
                /// 编译
                /// </summary>
                /// <param name="autoManageTextureUnits">是否可以自动运行纹理单元</param>
                /// <returns></returns>
                EVString _compile(ev_bool autoManageTextureUnits);

                /// Internal method for splitting the passes into illumination passes.
                /// <summary>
                /// 分裂通路为光照通路
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _compileIlluminationPasses();
                /// <summary>
                /// 为该技术创建一个新的通路
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CPass *createPass();
                /// <summary>
                /// 根据给定的索引重新获得渲染通路
                /// </summary>
                /// <param name="index">给定的索引</param>
                /// <returns></returns>
                EarthView::World::Graphic::CPass *getPass(ev_uint16 index);
                /// <summary>
                /// 重新获得与名称相匹配的的渲染通路
                /// </summary>
                /// <param name="name">name</param>
                /// <returns>如果相匹配的名称找不到则返回0</returns>
                EarthView::World::Graphic::CPass *getPass(const EVString &name);
                /// <summary>
                /// 重新获得渲染通路的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回通道个数</returns>
                ev_uint16 getNumPasses() const;
                /// <summary>
                /// 根据给定的索引删除渲染通路
                /// </summary>
                /// <param name="index">索引值</param>
                /// <returns></returns>
                void removePass(ev_uint16 index);

                /// <summary>
                /// 从技术中删除所有的渲染通路
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void removeAllPasses();

                /// <summary>
                /// 调整通路的顺序
                /// </summary>
                /// <param name="sourceIndex">原索引</param>
                /// <param name="destinationIndex">目标索引</param>
                /// <returns>假如移动成功返回true，失败返回false</returns>
                ev_bool movePass(const ev_uint16 sourceIndex, const ev_uint16 destinationIndex);
                class EV_GRAPHIC_DLL PassIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::CTechnique::Passes> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef Passes::iterator IteratorType;
                    PassIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CTechnique::PassIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CTechnique::PassIterator &operator=(_in const EarthView::World::Graphic::CTechnique::PassIterator &other);
                    ~PassIterator();
                    ValueType peekNext () const;
                    PointerType peekNextPtr ()  const;
                    ValueType getNext ();

                    const IteratorType &begin();
                    const IteratorType &end();
                    const IteratorType &current();

                ev_private:
                    PassIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    PassIterator(_in EarthView::World::Graphic::CTechnique::Passes &vec);
                    PassIterator(_in const PassIterator &rhs);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext ();
                    EarthView::World::Graphic::CPass *getCurrent();
                    EarthView::World::Graphic::CPass *next();
                    EarthView::World::Graphic::CPass *getBegin();
                    EarthView::World::Graphic::CPass *getEnd();
                private:
                    InternalIterator *mIterator;
                };
                ///在该技术中通过渲染通路得到迭代器
                EarthView::World::Graphic::CTechnique::PassIterator getPassIterator();
                class EV_GRAPHIC_DLL IlluminationPassIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CVectorIterator<EarthView::World::Graphic::IlluminationPassList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef IlluminationPassList::iterator IteratorType;
                    IlluminationPassIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CTechnique::IlluminationPassIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CTechnique::IlluminationPassIterator &operator=(_in const EarthView::World::Graphic::CTechnique::IlluminationPassIterator &other);
                    ~IlluminationPassIterator();
                    ValueType peekNext () const;
                    PointerType peekNextPtr ()  const;
                    ValueType getNext ();

                    const IteratorType &begin();
                    const IteratorType &end();
                    const IteratorType &current();
                ev_private:
                    IlluminationPassIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    IlluminationPassIterator(_in EarthView::World::Graphic::IlluminationPassList &vec);
                    IlluminationPassIterator(_in const IlluminationPassIterator &rhs);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext ();
                    EarthView::World::Graphic::IlluminationPass *getCurrent();
                    EarthView::World::Graphic::IlluminationPass *next();
                    EarthView::World::Graphic::IlluminationPass *getBegin();
                    EarthView::World::Graphic::IlluminationPass *getEnd();

                private:
                    InternalIterator *mIterator;
                };
                /// Gets an iterator over the illumination-stage categorised passes.
                /// <summary>
                /// 得到迭代器
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CTechnique::IlluminationPassIterator getIlluminationPassIterator();

                /// <summary>
                /// 得到所属材质
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterial *getParent() const;
                
                /// <summary>
                /// 重载=
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CTechnique &operator=(const EarthView::World::Graphic::CTechnique &rhs);
                
                /// <summary>
                /// 获得资源组名
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getResourceGroup() const;
                
                /// <summary>
                /// 判断是否透明
                /// </summary>
                /// <param name=""></param>
                /// <returns>透明返回true，否则返回false</returns>
                ev_bool isTransparent() const;
                
                /// <summary>
                /// 判断是否启用透明排序
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isTransparentSortingEnabled() const;
               
                /// <summary>
                /// 判断是否强制透明排序
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isTransparentSortingForced() const;
                
                /// <summary>
                /// 准备
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _prepare();
                
                /// <summary>
                /// 反准备
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _unprepare();
                
                /// <summary>
                /// 加载
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _load();
                
                /// <summary>
                /// 卸载
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _unload();
                
                /// <summary>
                /// 是否已经加载
                /// </summary>
                /// <param name=""></param>
                /// <returns>加载返回true，不能加载返回false</returns>
                ev_bool isLoaded() const;
                
                /// <summary>
                /// 提示需要重新编译
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void _notifyNeedsRecompile();
                
                /// <summary>
                /// 获得投射阴影的材质
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CMaterialPtr getShadowCasterMaterial() const;
				/// <summary>
				/// 设置投射阴影的材质
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setShadowCasterMaterial(EarthView::World::Graphic::CMaterialPtr val);                
                void setShadowCasterMaterial(const EVString &name);

				/// <summary>
				/// 获得接收阴影的材质
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                EarthView::World::Graphic::CMaterialPtr getShadowReceiverMaterial() const;
				/// <summary>
				/// 设置接收阴影的材质
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setShadowReceiverMaterial(EarthView::World::Graphic::CMaterialPtr val);
                void setShadowReceiverMaterial(const EVString &name);

                /// <summary>
                /// 在该技术中为每一个渲染通路设置点的大小属性
                /// </summary>
                /// <param name="ps">点的大小</param>
                /// <returns></returns>
                void setPointSize(Real ps);
                
                /// <summary>
                /// 为每一个通道设置环境光反射率
                /// </summary>
                /// <param name="red">red</param>
                /// <param name="green">green</param>
                /// <param name="blue">blue</param>
                /// <returns></returns>
                void setAmbient(Real red, Real green, Real blue);
                
                /// <summary>
                /// 为每一个通道设置环境光反射率
                /// </summary>
                /// <param name="ambient">EarthView::World::Graphic::CColourValue类对象</param>
                /// <returns></returns>
                void setAmbient(const EarthView::World::Graphic::CColourValue &ambient);
                
                /// <summary>
                /// 为每一个通道设置漫反射率
                /// </summary>
                /// <param name="red">red</param>
                /// <param name="green">green</param>
                /// <param name="blue">blue</param>
                /// <param name="alpha">alpha的值</param>
                /// <returns></returns>
                void setDiffuse(Real red, Real green, Real blue, Real alpha);
                
                /// <summary>
                /// 为每一个通道设置漫反射率
                /// </summary>
                /// <param name="diffuse">EarthView::World::Graphic::CColourValue类对象，颜色属性</param>
                /// <returns></returns>
                void setDiffuse(const EarthView::World::Graphic::CColourValue &diffuse);
                
                /// <summary>
                /// 为每一个通道设置镜面反射率
                /// </summary>
                /// <param name="red">red</param>
                /// <param name="green">green</param>
                /// <param name="blue">blue</param>
                /// <param name="alpha">alpha的值</param>
                /// <returns></returns>
                void setSpecular(Real red, Real green, Real blue, Real alpha);
                
                /// <summary>
                /// 为每一个通道设置镜面反射率
                /// </summary>
                /// <param name="specular">EarthView::World::Graphic::CColourValue类对象，颜色属性</param>
                /// <returns></returns>
                void setSpecular(const EarthView::World::Graphic::CColourValue &specular);
                
                /// <summary>
                /// 为每一个通道设置镜面高光的亮度
                /// </summary>
                /// <param name="val">颜色属性</param>
                /// <returns></returns>
                void setShininess(Real val);
                
                /// <summary>
                /// 为每一个通道设置自发光颜色
                /// </summary>
                /// <param name="red">red</param>
                /// <param name="green">green</param>
                /// <param name="blue">blue</param>
                /// <returns></returns>
                void setSelfIllumination(Real red, Real green, Real blue);
               
				/// <summary>
				/// 为每一个通道设置自发光颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setSelfIllumination(const EarthView::World::Graphic::CColourValue &selfIllum);

				/// <summary>
				/// 为每一个通道设置检测写入是否开启
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setDepthCheckEnabled(ev_bool enabled);
                
				/// <summary>
				/// 为每一个通道设置深度写入是否开启
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setDepthWriteEnabled(ev_bool enabled);
                
				/// <summary>
				/// 为每一个通道设置深度比较函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                void setDepthFunction( EarthView::World::Graphic::CompareFunction func );
                
                /// <summary>
                /// 为每一个通道设置颜色缓冲是否写入
                /// </summary>
                /// <param name="enabled">是否写入</param>
                /// <returns></returns>
                void setColourWriteEnabled(ev_bool enabled);
                
                /// <summary>
                /// 为每一个通道设置剔除模式
                /// </summary>
                /// <param name="mode">1代表none，2代表顺时针方向，3代表逆时针方向</param>
                /// <returns></returns>
                void setCullingMode( CullingMode mode );
               
                /// <summary>
                /// 为每一个通道设置手动的剔除模式，由CPU执行，而不是由硬件执行
                /// </summary>
                /// <param name="mode">1代表不选择任何方向，2代表向后，即远离照相机方向，3代表向前，即靠近照相机方向</param>
                /// <returns></returns>
                void setManualCullingMode( ManualCullingMode mode );
                
                /// <summary>
                /// 为每一个通道设置是否启用光照
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                void setLightingEnabled(ev_bool enabled);
                
                /// <summary>
                /// 设置光照模型
                /// </summary>
                /// <param name="mode">光阴影类型 SO_FLAT,SO_GOURAUD,SO_PHONG</param>
                /// <returns></returns>
                void setShadingMode( EarthView::World::Graphic::ShadeOptions mode );
                
                /// <summary>
                /// 设置应用于每一个通道的雾化模式
                /// </summary>
                /// <param name="overrideScene">假如为true，则允许该通道忽略场景的雾化参数，而用它自己的设置，默认为false，</param>
                /// <param name="mode">雾化模式，假如overrideScene为true时，才可设置该参数</param>
                /// <param name="colour">雾的颜色</param>
                /// <param name="expDensity">在FOG_EXP或者FOG_EXP2模式的密度，其值在0到1之间，默认值是0.001</param>
                /// <param name="linearStart">只有当FOG_LINEAR模式下可用</param>
                /// <param name="linearEnd">只有当FOG_LINEAR模式下可用</param>
                /// <returns></returns>
                void setFog(
                    ev_bool overrideScene,
                    EarthView::World::Graphic::FogMode mode,
                    const EarthView::World::Graphic::CColourValue &colour,
                    Real expDensity, Real linearStart, Real linearEnd);
                void setFog(
                    ev_bool overrideScene,
                    EarthView::World::Graphic::FogMode mode,
                    const EarthView::World::Graphic::CColourValue &colour,
                    Real expDensity, Real linearStart);
                void setFog(
                    ev_bool overrideScene,
                    EarthView::World::Graphic::FogMode mode,
                    const EarthView::World::Graphic::CColourValue &colour,
                    Real expDensity);
                void setFog(
                    ev_bool overrideScene,
                    EarthView::World::Graphic::FogMode mode,
                    const EarthView::World::Graphic::CColourValue &colour);
                void setFog(
                    ev_bool overrideScene,
                    EarthView::World::Graphic::FogMode mode);
                void setFog(
                    ev_bool overrideScene);
                
                /// <summary>
                /// 为每一个通道设置深度偏移值
                /// </summary>
                /// <param name="constantBias"></param>
                /// <param name="slopeScaleBias"></param>
                /// <returns></returns>
                void setDepthBias(ev_real32 constantBias, ev_real32 slopeScaleBias);
               
                /// <summary>
                /// 为每一个通道上的每一个纹理设置纹理过滤方式
                /// </summary>
                /// <param name="filterType">纹理过滤选项</param>
                /// <returns></returns>
                void setTextureFiltering(EarthView::World::Graphic::TextureFilterOptions filterType);
                
                /// <summary>
                /// 为所有的纹理设置纹理各向异性值
                /// </summary>
                /// <param name="maxAniso">最大的差异水平，在2和硬件所提供的最大值之间，默认值是1</param>
                /// <returns></returns>
                void setTextureAnisotropy(ev_uint32 maxAniso);
                
                /// <summary>
                /// 设置混合类型
                /// </summary>
                /// <param name="sbt">混合场景类型</param>
                /// <returns></returns>
                void setSceneBlending( const EarthView::World::Graphic::SceneBlendType sbt );
                
                /// <summary>
                /// 为rgb通道和alpha通道分别设置场景混合方式
                /// </summary>
                /// <param name="sbt">源混合类型</param>
                /// <param name="sbta">目标混合类型</param>
                /// <returns></returns>
                void setSeparateSceneBlending( const EarthView::World::Graphic::SceneBlendType sbt, const EarthView::World::Graphic::SceneBlendType sbta );
               
                /// <summary>
                /// 设置场景混合方式
                /// </summary>
                /// <param name="sourceFactor">源混合因子</param>
                /// <param name="destFactor">目标混合因子</param>
                /// <returns></returns>
                void setSceneBlending( const EarthView::World::Graphic::SceneBlendFactor sourceFactor, const EarthView::World::Graphic::SceneBlendFactor destFactor);
                
                /// <summary>
                /// 为rgb通道和alpha通道分别设置场景混合方式
                /// </summary>
                /// <param name="sourceFactor">RGB通道源混合因子</param>
                /// <param name="destFactor">RGB通道目标混合因子</param>
                /// <param name="sourceFactorAlpha">alpha通道源混合因子</param>
                /// <param name="destFactorAlpha">alpha通道目标混合因子</param>
                /// <returns></returns>
                void setSeparateSceneBlending( const EarthView::World::Graphic::SceneBlendFactor sourceFactor, const EarthView::World::Graphic::SceneBlendFactor destFactor, const EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, const EarthView::World::Graphic::SceneBlendFactor destFactorAlpha);
                
                /// <summary>
                /// 为EarthView::World::Graphic::CTechnique设置Lod索引值
                /// </summary>
                /// <param name="index">索引值</param>
                /// <returns></returns>
                void setLodIndex(ev_uint16 index);
                
                /// <summary>
                /// 获得Lod索引值
                /// </summary>
                /// <param name="index">索引值</param>
                /// <returns></returns>
                ev_uint16 getLodIndex() const;
                
                /// <summary>
                /// 设置方案名称
                /// </summary>
                /// <param name="schemeName">配置名称</param>
                /// <returns></returns>
                void setSchemeName(const EVString &schemeName);
               
                /// <summary>
                /// 获得方案名称
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EVString getSchemeName() const;
                
                /// <summary>
                /// 得到方案索引
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_uint16 _getSchemeIndex() const;
                
                /// <summary>
                /// 获取深度写入是否开启
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isDepthWriteEnabled() const;
                
                /// <summary>
                /// 获取深度测试是否开启
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isDepthCheckEnabled() const;
                
				/// <summary>
				/// 获取颜色写入是否关闭
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_bool hasColourWriteDisabled() const;

                /// <summary>
                /// 设置技术的名称
                /// </summary>
                /// <param name="name">name是可选的</param>
                /// <returns></returns>
                void setName(const EVString &name);
                
                /// <summary>
                /// 得到技术的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回得到的名称</returns>
                const EVString &getName() const;
               
                /// <summary>
                /// 应用纹理别名
                /// </summary>
                /// <param name="aliasList">纹理名称键值对</param>
                /// <param name="apply">true，应用；false，只匹配别名并不应用</param>
                /// <returns>假如匹配的纹理别名找到了，则返回true，否则返回false</returns>
                ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList, const ev_bool apply) const;
                ev_bool applyTextureAliases(const EarthView::World::Core::AliasTextureNamePairList &aliasList) const;

                /** Add a rule which manually influences the support for this technique based
                	on a GPU vendor.
                @remarks
                	You can use this facility to manually control whether a technique is
                	considered supported, based on a GPU vendor. You can add inclusive
                	or exclusive rules, and you can add as many of each as you like. If
                	at least one inclusive rule is added, a	technique is considered
                	unsupported if it does not match any of those inclusive rules. If exclusive rules are
                	added, the technique is considered unsupported if it matches any of
                	those inclusive rules.
                @note
                	EarthView::World::Core::CAny rule for the same vendor will be removed before adding this one.
                @param vendor The GPU vendor
                @param includeOrExclude Whether this is an inclusive or exclusive rule
                */
                /// <summary>
                /// 基于GPU供应商，为该技术增加一个规则
                /// </summary>
                /// <param name="vendor">GPU供应商</param>
                /// <param name="includeOrExclude">包含的还是排斥的规则</param>
                /// <returns></returns>
                void addGPUVendorRule(GPUVendor vendor, EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude);
                /** Add a rule which manually influences the support for this technique based
                	on a GPU vendor.
                @remarks
                	You can use this facility to manually control whether a technique is
                	considered supported, based on a GPU vendor. You can add inclusive
                	or exclusive rules, and you can add as many of each as you like. If
                	at least one inclusive rule is added, a	technique is considered
                	unsupported if it does not match any of those inclusive rules. If exclusive rules are
                	added, the technique is considered unsupported if it matches any of
                	those inclusive rules.
                @note
                	EarthView::World::Core::CAny rule for the same vendor will be removed before adding this one.
                */
                /// <summary>
                /// 基于GPU供应商，为该技术增加一个规则
                /// </summary>
                /// <param name="rule">在增加这个规则以前，其他相同供应商的规则将被删除</param>
                /// <returns></returns>
                void addGPUVendorRule(const GPUVendorRule &rule);
                /** Removes a matching vendor rule.
                @see addGPUVendorRule
                */
                /// <summary>
                /// 删除相匹配的规则
                /// </summary>
                /// <param name="vendor">GPU供应商</param>
                /// <returns></returns>
                void removeGPUVendorRule(GPUVendor vendor);
                ///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CTechnique::GPUVendorRuleList> EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator;
                class EV_GRAPHIC_DLL GPUVendorRuleIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CTechnique::GPUVendorRuleList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef GPUVendorRuleList::const_iterator IteratorType;
                    GPUVendorRuleIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator &operator=(_in const EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator &other);
                    ~GPUVendorRuleIterator();
                    ValueType peekNext () const;
                    ValueType getNext ();

                    const IteratorType &begin();
                    const IteratorType &end();
                    const IteratorType &current();
                ev_private:
                    GPUVendorRuleIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    GPUVendorRuleIterator(_in EarthView::World::Graphic::CTechnique::GPUVendorRuleList &vec);
                    GPUVendorRuleIterator(_in const GPUVendorRuleIterator &rhs);
                    ev_bool hasMoreElements ( ) const;
                    void moveNext ();
                    EarthView::World::Graphic::CTechnique::GPUVendorRule getCurrent();
                    EarthView::World::Graphic::CTechnique::GPUVendorRule next();
                    EarthView::World::Graphic::CTechnique::GPUVendorRule getBegin();
                    EarthView::World::Graphic::CTechnique::GPUVendorRule getEnd();
                private:
                    InternalIterator *mIterator;
                };
                //// Get an iterator over the currently registered vendor rules.
                EarthView::World::Graphic::CTechnique::GPUVendorRuleIterator getGPUVendorRuleIterator() const;
                /** Add a rule which manually influences the support for this technique based
                	on a pattern that matches a GPU device name (e.g. '*8800*').
                @remarks
                	You can use this facility to manually control whether a technique is
                	considered supported, based on a GPU device name pattern. You can add inclusive
                	or exclusive rules, and you can add as many of each as you like. If
                	at least one inclusive rule is added, a	technique is considered
                	unsupported if it does not match any of those inclusive rules. If exclusive rules are
                	added, the technique is considered unsupported if it matches any of
                	those inclusive rules. The pattern you supply can include wildcard
                	characters ('*') if you only want to match part of the device name.
                @note
                	EarthView::World::Core::CAny rule for the same device pattern will be removed before adding this one.
                @param devicePattern The GPU vendor
                @param includeOrExclude Whether this is an inclusive or exclusive rule
                @param caseSensitive Whether the match is case sensitive or not
                */
                /*void addGPUDeviceNameRule(const EVString& devicePattern, EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude, ev_bool caseSensitive = false);*/
                void addGPUDeviceNameRule(const EVString &devicePattern, EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude, ev_bool caseSensitive);
                void addGPUDeviceNameRule(const EVString &devicePattern, EarthView::World::Graphic::CTechnique::IncludeOrExclude includeOrExclude);
                /** Add a rule which manually influences the support for this technique based
                	on a pattern that matches a GPU device name (e.g. '*8800*').
                @remarks
                	You can use this facility to manually control whether a technique is
                	considered supported, based on a GPU device name pattern. You can add inclusive
                	or exclusive rules, and you can add as many of each as you like. If
                	at least one inclusive rule is added, a	technique is considered
                	unsupported if it does not match any of those inclusive rules. If exclusive rules are
                	added, the technique is considered unsupported if it matches any of
                	those inclusive rules. The pattern you supply can include wildcard
                	characters ('*') if you only want to match part of the device name.
                @note
                	EarthView::World::Core::CAny rule for the same device pattern will be removed before adding this one.
                */
                void addGPUDeviceNameRule(const GPUDeviceNameRule &rule);
                /** Removes a matching device name rule.
                @see addGPUDeviceNameRule
                */
                void removeGPUDeviceNameRule(const EVString &devicePattern);
                ///typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList> EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator;
                class EV_GRAPHIC_DLL GPUDeviceNameRuleIterator : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef EarthView::World::Core::CConstVectorIterator<EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList> InternalIterator;
                    typedef InternalIterator::ValueType ValueType;
                    typedef InternalIterator::PointerType PointerType;
                    typedef GPUDeviceNameRuleList::const_iterator IteratorType;
                    GPUDeviceNameRuleIterator(_in IteratorType start, _in IteratorType last);
                    /// <summary>
                    /// 赋值符号"="的重载
                    /// </summary>
                    /// <param name="other">EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator类的引用</param>
                    /// <returns>返回赋值后的引用</returns>
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator &operator=(_in const EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator &other);
                    ~GPUDeviceNameRuleIterator();
                    ValueType peekNext () const;
                    ValueType getNext ();

                    const IteratorType &begin();
                    const IteratorType &end();
                    const IteratorType &current();
                ev_private:
                    GPUDeviceNameRuleIterator(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    GPUDeviceNameRuleIterator(_in EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleList &vec);
                    GPUDeviceNameRuleIterator(_in const GPUDeviceNameRuleIterator &rhs);
                    ev_bool hasMoreElements ( ) const;

                    void moveNext ();
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule getCurrent();
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule next();
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule getBegin();
                    EarthView::World::Graphic::CTechnique::GPUDeviceNameRule getEnd();
                private:
                    InternalIterator *mIterator;
                };
                //// Get an iterator over the currently registered device name rules.
                EarthView::World::Graphic::CTechnique::GPUDeviceNameRuleIterator getGPUDeviceNameRuleIterator() const;
                /** Return an instance of user objects binding associated with this class.
                You can use it to associate one or more custom objects with this class instance.
                @see CUserObjectBindings::setUserAny.
                */
                EarthView::World::Graphic::CUserObjectBindings	&getUserObjectBindings();
                /** Return an instance of user objects binding associated with this class.
                You can use it to associate one or more custom objects with this class instance.
                @see CUserObjectBindings::setUserAny.
                */
                const EarthView::World::Graphic::CUserObjectBindings &getUserObjectBindings() const;
            };
        }
    }
}

#endif

