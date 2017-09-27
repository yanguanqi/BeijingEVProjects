#ifndef __Renderable_H__
#define __Renderable_H__
#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
#include "gpuprogramparams.h"
#include "userobjectbindings.h"
#include "colourvalue.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class LightList;
            class CMaterialPtr;
            class CTechnique;
            class CRenderOperation;
            class CSceneManager;
            class CRenderSystem;
            class CCamera;
			class CMovableObject;
            /// <summary>
            /// 抽象类
            ///定义所有渲染实体必须应用的接口
            /// </summary>
            class EV_GRAPHIC_DLL CRenderable : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数的键值对表</param>
                /// <returns></returns>
                CRenderable(_in EarthView::World::Core::CNameValuePairList *pList);
            public:

                /// <summary>
                /// 内部类，只能在渲染系统内部使用
                /// </summary>
                class EV_GRAPHIC_DLL CRenderSystemData : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数的键值对表</param>
                    /// <returns></returns>
                    CRenderSystemData(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CRenderSystemData();
                };
				/// <summary>
				/// renderable对象监听类
				/// 此类是对renderable对象事件的响应，
				/// </summary>
				class EV_GRAPHIC_DLL CRenderableListener : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CRenderableListener(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CRenderableListener();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CRenderableListener();

					/// <summary>
					/// 渲染开始时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
					virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys,EarthView::World::Graphic::CRenderable* renderable);
					/// <summary>
					/// 渲染完成时向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns></returns>
					virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys,EarthView::World::Graphic::CRenderable* renderable);

					/// <summary>
					/// 销毁向外通知的事件
					/// </summary>
					/// <param name="sm">渲染场景</param>
					/// <param name="rsys">渲染系统</param>
					/// <param name="renderable">renderable</param>
					/// <returns></returns>
					virtual void destroyed(EarthView::World::Graphic::CRenderable* renderable);
				};
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CRenderable();
                /// <summary>
                /// 析构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CRenderable() ;
                /// <summary>
                /// 获得材质
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
                /// <summary>
                /// 获得技术
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CTechnique *getTechnique() const;
                /// <summary>
                /// 获得渲染操作
                /// </summary>
                /// <param name="op"></param>
                /// <returns></returns>
                virtual void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
                /// <summary>
                /// 渲染开始时向外通知的事件
                /// </summary>
                /// <param name="sm">渲染场景</param>
                /// <param name="rsys">渲染系统</param>
                /// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
                virtual ev_bool preRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
                /// <summary>
                /// 渲染完成时向外通知的事件
                /// </summary>
                /// <param name="sm">渲染场景</param>
                /// <param name="rsys">渲染系统</param>
                /// <returns></returns>
                virtual void postRender( EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
                /// <summary>
                /// 获得渲染对象的世界变换矩阵
                /// </summary>
                /// <param name="xform"></param>
                /// <returns></returns>
                virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform) const;
                /// <summary>
                /// 获得渲染对象的世界变换矩阵的数量
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint16 getNumWorldTransforms() const;
                /// <summary>
                /// 设置是否使用单位投影矩阵
                /// </summary>
                /// <param name="useIdentityProjection"></param>
                /// <returns></returns>
                void setUseIdentityProjection(ev_bool useIdentityProjection);
                /// <summary>
                /// 返回是否使用单位投影矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns>需要统一投影返回true否则返回false</returns>
                ev_bool getUseIdentityProjection() const;
				/// <summary>
				/// 设置是否使用用自定义投影
				/// </summary>
				/// <param name="useIdentityProjection">设置的状态参数</param>
				/// <returns>需要统一投影设置为true否则返回false</returns>
				void setCustomProjection(ev_bool customProjection);
				/// <summary>
				/// 返回是否使用用自定义投影
				/// </summary>
				/// <param name=""></param>
				/// <returns>需要统一投影返回true否则返回false</returns>
				ev_bool getCustomProjection() const;
                /// <summary>
                /// 设置是否使用单位观察矩阵
                /// </summary>
                /// <param name="useIdentityView"></param>
                /// <returns></returns>
                void setUseIdentityView(ev_bool useIdentityView);
                /// <summary>
                /// 返回是否使用单位观察矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getUseIdentityView() const;
                /// <summary>
                /// 返回渲染实体相对虚拟相机的观察深度的平方
                /// </summary>
                /// <param name="cam"></param>
                /// <returns</returns>
                virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;
                /// <summary>
                /// 获得光照的列表，按照相对于渲染实体的远近排列
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::LightList &getLights() const ;
                /// <summary>
                /// 是否投射投影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getCastsShadows() const;
                /// <summary>
                /// 设置渲染接口的自定义参数，它可以用来获得特殊渲染的计算，如GPU参数
                /// </summary>
                /// <param name="index">值的索引</param>
                /// <param name="value">四维向量值</param>
                /// <returns></returns>
                void setCustomParameter(ev_size_t index, const EarthView::World::Spatial::Math::CVector4 &value) ;

                ///zxt updatefor v1.8
                /** Removes a custom value which is associated with this Renderable at the given index.
                @param
                    @see setCustomParameter for full details.
                */
                void removeCustomParameter(size_t index)
                {
                    mCustomParameters.erase(index);
                }
                /** Checks whether a custom value is associated with this Renderable at the given index.
                @param
                    @see setCustomParameter for full details.
                */
                bool hasCustomParameter(size_t index) const
                {
                    return mCustomParameters.find(index) != mCustomParameters.end();
                }


                /// <summary>
                /// 获得和已给索引相关联的定制值
                /// </summary>
                /// <param name="index">值的索引</param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CVector4 &getCustomParameter(ev_size_t index) const;
                /// <summary>
                /// 更新自定义的EarthView::World::Graphic::CGpuProgramParameters常量，该值只有从渲染系统中获得
                /// </summary>
                /// <param name="constantEntry">CAutoConstantEntry的别名</param>
                /// <param name="params">EarthView::World::Graphic::CGpuProgramParameters的指针</param>
                /// <returns></returns>
                virtual void _updateCustomGpuParameter(
                    const CGpuProgramParameters:: CAutoConstantEntry &constantEntry,
                    EarthView::World::Graphic::CGpuProgramParameters *params) const;
                /// <summary>
                /// 设置多边形渲染方式是否可重写
                /// </summary>
                /// <param name="override">设置参数</param>
                /// <returns>true可以超越，false不可以</returns>
                virtual void setPolygonModeOverrideable(ev_bool override);
                /// <summary>
                /// 获得多边形渲染方式是否可重写
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getPolygonModeOverrideable() const;
				/// <summary>
				/// 设置自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void setCustomAmbient(const EarthView::World::Graphic::CColourValue& ambient);

				/// <summary>
				/// 获取自定义环境光系数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual const  EarthView::World::Graphic::CColourValue& getCustomAmbient()const;
				
				/// <summary>
				/// 获取自定义环境光系数是否启用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual bool getCustomAmbientEnabled()const;

				/// <summary>
				/// 设置自定义环境光系数是否启用
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void setCustomAmbientEnabled(ev_bool enabled);

				virtual EarthView::World::Graphic::CMovableObject* getMovableObject()const{return NULL;}

				/// <summary>
				/// 添加监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				virtual void addListener(EarthView::World::Graphic::CRenderable::CRenderableListener *ref_listener);
				/// <summary>
				/// 移除监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				virtual void removeListener(EarthView::World::Graphic::CRenderable::CRenderableListener *listener);
				/// <summary>
				/// 添加监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				virtual ev_bool existListener(EarthView::World::Graphic::CRenderable::CRenderableListener *listener)const;
				/// <summary>
				/// 获取监听器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint32 getListenerCount() const;
				/// <summary>
				/// 获取监听器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CRenderable::CRenderableListener *getListener(ev_uint32 index) const;

            ev_private:
                /// <summary>
                /// 在这个对象上设置任何一种用户值
                /// </summary>
                /// <param name="anything"></param>
                /// <returns></returns>
                virtual void setUserAny(const EarthView::World::Core::CAny &anything);
                /// <summary>
                /// 重新获得和渲染对象有关的自定义的值
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Core::CAny &getUserAny() const;
            public:
                /// <summary>
                /// 返回一个绑定对象和类相关的实例，可以用这个类的实例联系一个或多个自定义的对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CUserObjectBindings	&getUserObjectBindings();
                /// <summary>
                /// 返回一个绑定对象和类相关的实例，可以用这个类的实例联系一个或多个自定义的对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CUserObjectBindings &getUserObjectBindings() const;
                /// <summary>
                /// CVistor对象被用来迭代抽象渲染接口实例的集合
                /// </summary>
                class EV_GRAPHIC_DLL CVisitor : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">参数键值对表</param>
                    /// <returns></returns>
                    CVisitor(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CVisitor();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CVisitor();


                    /// <summary>
                    /// 使渲染接口实例可见
                    /// </summary>
                    /// <param name="rend">渲染接口</param>
                    /// <param name="lodindex">LOD索引</param>
                    /// <param name="isDebug">debug状态</param>
                    /// <returns></returns>
                    virtual void visit( EarthView::World::Graphic::CRenderable *rend, ev_uint16 lodIndex, ev_bool isDebug);
                ev_private:
                    /// <summary>
                    /// 使渲染接口实例可见
                    /// </summary>
                    /// <param name="rend">渲染接口</param>
                    /// <param name="lodindex">LOD索引</param>
                    /// <param name="isDebug">debug状态</param>
                    /// <param name="pAny">指向其他数据的指针</param>
                    /// <returns></returns>
                    virtual void visit( EarthView::World::Graphic::CRenderable *rend, ev_uint16 lodIndex, ev_bool isDebug, EarthView::World::Core::CAny *pAny);
                };
                /// <summary>
                /// 设置渲染系统的私有数据
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::CRenderable::CRenderSystemData *getRenderSystemData() const ;
                /// <summary>
                /// 获得渲染系统的私有数据
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setRenderSystemData( EarthView::World::Graphic::CRenderable::CRenderSystemData *ref_val) const;
            ev_internal:
                /*typedef map<ev_size_t, EarthView::World::Spatial::Math::CVector4> CustomParameterMap;*/
                class EV_GRAPHIC_DLL CustomParameterMap : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CustomParameterMap(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 默认构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CustomParameterMap();
                    /// <summary>
                    /// 在map容器中添加元素
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <param name="val">值</param>
                    /// <returns>成功增加true，否则false</returns>
                    ev_bool push(const ev_size_t &key, const EarthView::World::Spatial::Math::CVector4 &val);
                    /// <summary>
                    /// 判断元素是否存在
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>存在true，否则false</returns>
                    ev_bool exist(const ev_size_t &key);
                    /// <summary>
                    /// 重载[]操作符
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Spatial::Math::CVector4 &operator[](const ev_size_t &key);
                    /// <summary>
                    /// 获得键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回键对应的值</returns>
                    EarthView::World::Spatial::Math::CVector4 &get(const ev_size_t &key);
                    /// <summary>
                    /// 删除键对应的值
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns></returns>
                    void erase(const ev_size_t &key);
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
                    typedef map<ev_size_t, EarthView::World::Spatial::Math::CVector4> InternalList;
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
                    iterator find(const ev_size_t &key);
                    /// <summary>
                    /// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
                    /// </summary>
                    /// <param name="key">键</param>
                    /// <returns>返回指向该元素的迭代器</returns>
                    const_iterator find(const ev_size_t &key) const;
                private:
                    InternalList mList;
                };
            protected:
                /*typedef map<ev_size_t, EarthView::World::Spatial::Math::CVector4> CustomParameterMap;*/
                CustomParameterMap mCustomParameters;
                ev_bool mPolygonModeOverrideable;
                ev_bool mUseIdentityProjection;
                ev_bool mUseIdentityView;
                EarthView::World::Graphic::CUserObjectBindings mUserObjectBindings;		 			/// 用户实体约束
                mutable EarthView::World::Graphic::CRenderable::CRenderSystemData *mRenderSystemData;			/// 这个只能在渲染系统内部使用

				EarthView::World::Graphic::CColourValue mAmbient;
				EarthView::World::Graphic::CColourValue mOldAmbient;				
				ev_bool mCustomAmbientEnabled;

				ev_bool mbCustomProjection;
				ev_bool mbProjectionRSChanged;

				vector<EarthView::World::Graphic::CRenderable::CRenderableListener*> * mpListeners;
				mutable EarthView::World::Core::CReadWriteLock mListenerLock;
            };
            /** @} */
            /** @} */

        }
    }
}

#endif ///__Renderable_H__

