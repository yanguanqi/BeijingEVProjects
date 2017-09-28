#ifndef __MovableObject_H__
#define __MovableObject_H__

#include "core/variant.h"
#include "core/core_common.h"
#include <mathengine/axisalignedbox.h>
#include <mathengine/sphere.h>

#include "graphic_config.h"
#include "shadowcaster.h"
#include "animable.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CAxisAlignedBox;
				class CMath;
				class CSphere;
				class CMatrix4;
				class CRay;
			}
		}

	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            class CMovableObjectFactory;
            class CSceneNode;
            class CRenderQueue;
            class CNode;
			class CEditBoundingBox;

            /// <summary>
            /// 移动对象类
            /// 此类定义了场景中移动对象
            /// </summary>
            class EV_GRAPHIC_DLL CMovableObject : public EarthView::World::Graphic::CShadowCaster
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMovableObject(_in	EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 移动对象监听类
                /// 此类是对移动对象事件的响应，
                /// </summary>
                class EV_GRAPHIC_DLL CMovableObjectListener : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CMovableObjectListener(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    CMovableObjectListener();
                    /// <summary>
                    /// 析构函数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ~CMovableObjectListener();
                    /// <summary>
                    /// 销毁对象
                    /// 销毁移动对象
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <returns></returns>
                    virtual void objectDestroyed(EarthView::World::Graphic::CMovableObject *pMovableObject);
                    /// <summary>
                    /// 附属对象
                    /// 在节点上附加一个移动对象
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <returns></returns>
                    virtual void objectAttached(EarthView::World::Graphic::CMovableObject *pMovableObject);
                    /// <summary>
                    /// 分离对象
                    /// 分离节点上的移动对象
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <returns></returns>
                    virtual void objectDetached(EarthView::World::Graphic::CMovableObject *pMovableObject);
                    /** EarthView::World::Graphic::CMovableObject has been moved */
                    /// <summary>
                    /// 移动对象
                    /// 对象被移动
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <returns></returns>
                    virtual void objectMoved(EarthView::World::Graphic::CMovableObject *pMovableObject);
                    /// <summary>
                    /// 渲染对象
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <param name="">摄像机</param>
                    /// <returns>成功允许队列渲染，否则不允许</returns>
                    virtual ev_bool objectRendering(const EarthView::World::Graphic::CMovableObject *pMovableObject, const EarthView::World::Graphic::CCamera *pCamera);
                    
					/// <summary>
                    /// 查询光源
                    /// 如果想要自定义光源，需要重载此函数
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <returns>指向光源容器的指针，可以为自己设定的光源容器；或者为空，则返回系统默认过程</returns>
                    virtual const EarthView::World::Graphic::LightList *objectQueryLights(const EarthView::World::Graphic::CMovableObject *pMovableObject);
					
                    /// <summary>
                    /// 对象被选中                    
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <param name="objectIndex">对象序号</param>
                    /// <returns>true:代表此对象将被加入到选择集;false:不加入选择集</returns>
                    virtual ev_bool objectSelected(EarthView::World::Graphic::CMovableObject* pMovableObject,ev_int32 objectIndex);

                    /// <summary>
                    /// 对象被选中                    
                    /// </summary>
                    /// <param name="pMovableObject">移动对象</param>
                    /// <param name="objectIndex">对象序号集</param>
                    /// <returns>true:代表此对象将被加入到选择集;false:不加入选择集</returns>
                    virtual ev_bool objectSelected(EarthView::World::Graphic::CMovableObject* pMovableObject,EarthView::World::Core::IntVector& objectIndex);
                    
					/// <summary>
					/// 对象的组件被选中                    
					/// </summary>
					/// <param name="pMovableObject">移动对象</param>
					/// <param name="objectIndex">对象序号</param>
					/// <param name="submeshIndex">对象中的submesh序号</param>
					/// <param name="instanceIndex">组件中的Instance序号</param>
					/// <param name="segmentIndex">submesh中的分段序号</param>
					/// <returns>true:代表此对象将被加入到选择集;false:不加入选择集</returns>
					virtual ev_bool componentSelected(CMovableObject* pMovableObject,ev_int32 objIndex,ev_int32 submeshIndex,ev_int32 instanceIndex,ev_int32 segmentIndex);

                    /// <summary>
                    /// 对象被取消选中                    
                    /// </summary>
                    /// <param name="">移动对象</param>
                    /// <returns></returns>
                    virtual ev_void objectUnselected(EarthView::World::Graphic::CMovableObject* pMovableObject);
                };
                
				/// <summary>
				/// 移动对象监听类
				/// 此类是对光照查询之后的响应
				/// </summary>
				class EV_GRAPHIC_DLL CLightQueriedListener : public EarthView::World::Core::CBaseObject
				{
				public:
					CLightQueriedListener() { mShadowEnabled = false;}
				ev_private:
					CLightQueriedListener(EarthView::World::Core::CNameValuePairList *pList){ mShadowEnabled = false; }
				public:
					/// <summary>
					/// 查询光源结束后的通知					
					/// </summary>
					/// <param name="pMovableObject">移动对象</param>
					/// <param name="lightList">查询到的光源容器</param>
					/// <returns></returns>
					virtual void objectQueryLightsFinished(const EarthView::World::Graphic::CMovableObject *pMovableObject,const EarthView::World::Graphic::LightList * lightList)
					{
				
					}

					/// <summary>
					/// 查询光源结束后的通知					
					/// </summary>
					/// <param name="pMovableObject">移动对象</param>
					/// <param name="lightList">查询到的光源容器</param>
					/// <returns></returns>
					virtual void sceneShadowEnabled(const EarthView::World::Graphic::CMovableObject *pMovableObject,const EarthView::World::Graphic::CSceneManager* pSceneManager,ev_bool enabled)
					{
						
					}

				private:
					ev_bool mShadowEnabled;
					friend class CMovableObject;

				};

				/// <summary>
                /// 移动对象内部访问AnimableValues的抽象接口类
                /// 此类是对移动对象事件的响应，
                /// </summary>
                class EV_GRAPHIC_DLL CMovableObjectInternalAnimableObject : public EarthView::World::Graphic::CAnimableObject
                {
                ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CMovableObjectInternalAnimableObject(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    /// <returns></returns>
                    CMovableObjectInternalAnimableObject();
                };
				class EV_GRAPHIC_DLL CUserData:public EarthView::World::Core::CBaseObject
				{
				public:
					CUserData();
					virtual ~CUserData();
ev_private:
					CUserData(EarthView::World::Core::CNameValuePairList* pList);
				public:
					virtual _extfree EarthView::World::Graphic::CMovableObject::CUserData* clone();

					enum MovableObjectType
					{
						MOT_UnKnown = 0,
						MOT_Las,
						MOT_MeshX,
						MOT_MeshXG
					};
					MovableObjectType mObjectType;		
				};
            private:
                EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject *mpAnimableObject;
            public:
                virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject *getAnimableObjectPtr();


            protected:
                //// Name of this object
                EVString mName;
                //// Creator of this object (if created by a factory)
                EarthView::World::Graphic::CMovableObjectFactory *mCreator;
                //// EarthView::World::Graphic::CSceneManager holding this object (if applicable)
                EarthView::World::Graphic::CSceneManager *mManager;
                //// node to which this object is attached
                EarthView::World::Graphic::CNode *mParentNode;
               
                //// Upper distance to still render
                Real mUpperDistance;
                Real mSquaredUpperDistance;
				//// Lower distance to still render
				Real mLowerDistance;
				Real mSquaredLowerDistance;
                /// Minimum pixel size to still render
                Real mMinPixelSize;               

                //// The render queue to use when rendering this object
                ev_uint8 mRenderQueueID;
                
                //// The render queue group to use when rendering this object
                ev_uint16 mRenderQueuePriority;
               
                //// Flags determining whether this object is included / excluded from scene queries
                ev_uint32 mQueryFlags;
                //// Flags determining whether this object is visible (compared to EarthView::World::Graphic::CSceneManager mask)
                ev_uint32 mVisibilityFlags;
                //// Cached world AABB of this object
                mutable EarthView::World::Spatial::Math::CAxisAlignedBox mWorldAABB;
                /// Cached world bounding sphere
                mutable EarthView::World::Spatial::Math::CSphere mWorldBoundingSphere;
               
                //// EarthView::World::Graphic::CMovableObject listener - only one allowed (no list) for size & performance reasons. */
                vector<EarthView::World::Graphic::CMovableObject::CMovableObjectListener *> * mpListeners;
				EarthView::World::Graphic::CMovableObject::CLightQueriedListener* mpLightListener;

				mutable EarthView::World::Core::CRecursiveMutex mListenerLock;
                //// List of lights for this object
                mutable EarthView::World::Graphic::LightList mLightList;
				mutable ev_uint32 mCurrentFrame;
                //// The last frame that this light list was updated in
                mutable ev_uint32 mLightListUpdated;
                //// the light mask defined for this movable. This will be taken into consideration when deciding which light should affect this movable
                ev_uint32 mLightMask;
                /// Static members
                //// Default query flags
                static ev_uint32 msDefaultQueryFlags;
                //// Default visibility flags
                static ev_uint32 msDefaultVisibilityFlags;

				EarthView::World::Graphic::CColourValue mSelectionColour;

				ev_bool mParentIsTagPoint;
				ev_bool mParentNodeLocal;

				//// Is this object visible?
				ev_bool mVisible;
				//// Hidden because of distance?
				ev_bool mBeyondFarDistance;
				ev_bool mBeyondNearDistance;

				//// Is debug display enabled?
				ev_bool mDebugDisplay;

                ev_bool mSelectable;	
				ev_bool mHighlightable;//是否可以高亮
				ev_bool mEditable;
				ev_bool mReflectable;
				ev_bool mRefractable;

				//// Flags whether the EarthView::World::Graphic::CRenderQueue's default should be used.
				ev_bool mRenderQueueIDSet;
				//// Flags whether the EarthView::World::Graphic::CRenderQueue's default should be used.
				ev_bool mRenderQueuePrioritySet;

				//// Does this object cast shadows?
				ev_bool mCastShadows;
				//// Does rendering this object disabled by listener?
				ev_bool mRenderingDisabled;

				EarthView::World::Graphic::CMovableObject::CUserData* mUserData;
				EVString mTag;
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CMovableObject();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                CMovableObject(const EVString &name);

                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name="name">名称</param>
                /// <returns></returns>
                virtual ~CMovableObject();
                /// <summary>
                /// 获取渲染队列ID
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint8 getRenderQueueId() const;

                /// <summary>
                /// 通报创建者
                /// 只能内部使用
                /// </summary>
                /// <param name="fact">实例</param>
                /// <returns></returns>
                virtual void _notifyCreator(EarthView::World::Graphic::CMovableObjectFactory *ref_fact);
                /// <summary>
                /// 获取创建者
                /// 如果有的话，获取，只能在内部使用
                /// </summary>
                /// <param name=""></param>
                /// <returns>移动对象工厂类</returns>
                virtual EarthView::World::Graphic::CMovableObjectFactory  *_getCreator() const;
                /// <summary>
                /// 通报场景管理器
                /// 只能内部使用
                /// </summary>
                /// <param name="man">场景管理者</param>
                /// <returns></returns>
                virtual void _notifyManager(EarthView::World::Graphic::CSceneManager *ref_mgr);
                /// <summary>
                /// 获取场景管理器
                /// </summary>
                /// <param name=""></param>
                /// <returns>管理者</returns>
                virtual EarthView::World::Graphic::CSceneManager *_getManager() const;
                /// <summary>
                /// 获取对象的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                virtual EVString getName() const;
                /// <summary>
                /// 获取移动对象类型的名称
                /// </summary>
                /// <param name=""></param>
                /// <returns>名称</returns>
                virtual EVString getMovableType() const;
                /// <summary>
                /// 获取父节点
                /// 一个移动对象可以附属在一个场景节点或者骨骼节点上
                /// </summary>
                /// <param name=""></param>
                /// <returns>节点名称</returns>
                virtual EarthView::World::Graphic::CNode *getParentNode() const;
                /// <summary>
                /// 获取对象的场景父节点                
                /// </summary>
                /// <param name=""></param>
                /// <returns>场景节点</returns>
                virtual EarthView::World::Graphic::CSceneNode *getParentSceneNode() const;
                /// <summary>
                /// 判断父节点是否是骨骼节点
                /// </summary>
                /// <param name=""></param>
                /// <returns>成功，返回标签点，否则为场景节点</returns>
                virtual ev_bool isParentTagPoint() const;
                /// <summary>
                /// 通报被挂接
                /// 内部方法
                /// </summary>
                /// <param name="parent">父节点名称</param>
                /// <param name="isTagPoint">是否挂接在节点下</param>
                /// <returns></returns>
                virtual void _notifyAttached(EarthView::World::Graphic::CNode *ref_parent, ev_bool isTagPoint);
                virtual void _notifyAttached(EarthView::World::Graphic::CNode *ref_parent);
                /// <summary>
                /// 是否已挂接
                /// </summary>
                /// <param name=""></param>
                /// <returns>为真，挂接</returns>
                virtual ev_bool isAttached() const;
                /// <summary>
                /// 将指定对象从父节点分离
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void detachFromParent();
                /// <summary>
                /// 指定节点是否是场景图中动态部分
                /// 指定对象挂接到场景节点或标识点，而场景节点是当前场景图的活动部分
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isInScene() const;
                /// <summary>
                /// 通报被移动
                /// 内部方法
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void _notifyMoved();

				/// <summary>
				/// 通报光源查询结束
				/// 内部方法
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void _notifyLightsQueried(const EarthView::World::Graphic::LightList * lightList);

				virtual void setLightQueriedListener(EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
				{
					mpLightListener = listener;
				}
				virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
				{
					return mpLightListener;
				}

				virtual ev_uint32 getLightListUpdated()const
				{
					return mLightListUpdated;
				}

				virtual void setLightListUpdated(ev_uint32 frame)
				{
					mLightListUpdated = frame;
				}

                /// <summary>
                /// 通报当前相机
                /// 内部方法
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *ref_cam);
                /// <summary>
                /// 获取模型坐标系下的包围盒                
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
                /// 在世界坐标系中获取当前对象的边框盒
                /// </summary>
                /// <param name="derive">是否检索</param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox(ev_bool derive) const;
                virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox( ) const;
                /// <summary>
                /// 在世界空间中获取当前对象的边框球体
                /// </summary>
                /// <param name="derive">是否检索</param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CSphere &getWorldBoundingSphere(ev_bool derive) const;
                virtual const EarthView::World::Spatial::Math::CSphere &getWorldBoundingSphere() const;
                /// <summary>
                /// 更新渲染队列                
                /// 内部方法
                /// </summary>
                /// <param name="queue">渲染队列</param>
                /// <returns></returns>
                virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue *queue);
                /// <summary>
                /// 设置是否可见               
                /// </summary>
                /// <param name="visible">是否可见</param>
                /// <returns></returns>
                virtual void setVisible(ev_bool visible);
                /// <summary>
                /// 获取是否可见,与setVisible对应                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getVisible() const;
                /// <summary>
                /// 获取是否可见,严格的判断(裁剪判断、可视距离判断)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isVisible() const;
                /// <summary>
                /// 设置该对象可渲染的距离上限
                /// </summary>
                /// <param name="dist">默认为0</param>
                /// <returns></returns>
                virtual void setRenderingMaxDistance(Real dist);
                /// <summary>
                /// 获取该对象可渲染的距离下限
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual Real getRenderingMaxDistance() const;

				/// <summary>
				/// 设置该对象可渲染的距离下限
				/// </summary>
				/// <param name="dist">默认为0</param>
				/// <returns></returns>
				virtual void setRenderingMinDistance(Real dist);
				/// <summary>
				/// 获取该对象可渲染的距离上限
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getRenderingMinDistance() const;
                
                /// <summary>
                /// 设置渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
                /// 必须先调用setUseMinPixelSize才能开启此功能
                /// </summary>
                /// <param name="pixelSize">像素大小</param>
                /// <returns></returns>
                /// <Memo>默认像素大小为0，表示总是渲染</Memo>
                virtual void setRenderingMinPixelSize(Real pixelSize)
                {
                    mMinPixelSize = pixelSize;
                }
                
                /// <summary>
                /// 获得渲染时的最小像素大小(两个屏幕坐标轴都满足此条件时才可被渲染)
                /// </summary>
                /// <param name=""></param>
                /// <returns>像素大小</returns>                
                virtual Real getRenderingMinPixelSize() const
                {
                    return mMinPixelSize;
                }

                /// <summary>
                /// 询问是否可选择
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool getSelectable() const
                {
                    return mSelectable;
                }

				/// <summary>
				/// 设置是否可选择
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
                ev_void setSelectable(ev_bool selectable)
                {
                    mSelectable = selectable;
                }

				/// <summary>
				/// 询问是否可高亮
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool getHighlightable() const
				{
					return mHighlightable;
				}

				/// <summary>
				/// 设置是否可高亮，如果不可高亮，则不能被Tool选中
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setHighlightable(ev_bool highlightable)
				{
					mHighlightable = highlightable;
				}


				/// <summary>
				/// 获得选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				const EarthView::World::Graphic::CColourValue& getSelectionColour()const
				{
					return mSelectionColour;
				}
				
				/// <summary>
				/// 设置选中时的高亮颜色				
				/// <param name=""></param>				
				/// <returns></returns>
				virtual ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour)
				{
					mSelectionColour = colour;
				}

				/// <summary>
				/// 询问是否可编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool getEditable() const
				{
					return mEditable;
				}

				/// <summary>
				/// 设置是否可编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setEditable(ev_bool editable)
				{
					mEditable = editable;
				}

				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				virtual ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics)
				{return false;}

				/// <summary>
				/// 获得选中的对象				
				/// <param name=""></param>				
				/// <returns>选中的对象集合</returns>
				virtual EarthView::World::Core::IntVector getSelected()const
				{
					static EarthView::World::Core::IntVector vec;
					return vec;
				}

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="EarthView::World::Graphic::CViewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point)
				{return false;}
                
                /// <summary>
                /// 盒选择
                /// </summary>
                /// <param name="aabb">盒</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定盒相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec)
                {return false;}
                
                /// <summary>
                /// 球选择
                /// </summary>
                /// <param name="sphere">球</param>
                /// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>
                /// <param name="indexVec">选中的对象序号的集合</param>
                /// <returns>true:物体包围盒与指定球相交;false:不相交</returns>
                virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CSphere& sphere,ev_bool prepareToRenderSelection,_out EarthView::World::Core::IntVector& indexVec)
                {return false;}

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
				{return false;}

                /// <summary>
                /// 绘制选择对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void renderSelection(){}
                
                /// <summary>
                /// 清除选择
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_void clearSelection(){}

                ev_void setUserData(EarthView::World::Graphic::CMovableObject::CUserData* data);
                EarthView::World::Graphic::CMovableObject::CUserData* getUserData()const;		

				/// <summary>
				/// 开始编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool startEditing(ev_uint32 objectIndex){return false;}
				/// <summary>
				/// 结束编辑
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void endEditing(){}
				/// <summary>
				/// 获得编辑包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox(){return NULL;}

				/// <summary>
				/// 获得选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex,EarthView::World::Spatial::Math::CMatrix4& matrix){return false;}
				/// <summary>
				/// 设置选中对象的世界变换矩阵
				/// </summary>
				/// <param name="objectIndex">选中对象在EarthView::World::Graphic::CMovableObject中的序号</param>
				/// <param name="matrix">世界变换矩阵</param>
				/// <returns></returns>
				virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex,const EarthView::World::Spatial::Math::CMatrix4& matrix){return false;}
            
            public:
                
                /// <summary>
                /// 设置渲染队列组信息
                /// </summary>
                /// <param name="queueID">队列ID号</param>
                /// <returns></returns>
                virtual void setRenderQueueGroup(ev_uint8 queueID);
                /// <summary>
                /// 设置渲染队列组信息和队列优先级
                /// </summary>
                /// <param name="queueID">队列ID号</param>
                /// <param name="priority">优先级</param>
                /// <returns></returns>
                virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
                /// <summary>
                /// 获取该实体的渲染队列组
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint8 getRenderQueueGroup() const;
                /// <summary>
                /// 获取父节点的全部变化信息
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Spatial::Math::CMatrix4 &_getParentNodeFullTransform() const;
                /// <summary>
                /// 设置该对象的询问标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                virtual void setQueryFlags(ev_uint32 flags);
                /// <summary>
                /// 添加询问标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                virtual void addQueryFlags(ev_uint32 flags);

                /// <summary>
                /// 移除询问标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                virtual void removeQueryFlags(ev_uint32 flags);

                /// <summary>
                /// 获取询问标识
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getQueryFlags() const;
                /// <summary>
                /// 为可移动对象实例设置默认询问标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                static void setDefaultQueryFlags(ev_uint32 flags);
                /// <summary>
                /// 获取可移动对象实例设置默认询问标识
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static ev_uint32 getDefaultQueryFlags();

                /// <summary>
                /// 设置对象可见标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                virtual void setVisibilityFlags(ev_uint32 flags);
                /// <summary>
                /// 添加对象可见标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                virtual void addVisibilityFlags(ev_uint32 flags);

                /// <summary>
                /// 移除对象可见标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                virtual void removeVisibilityFlags(ev_uint32 flags);

                /// <summary>
                /// 获取对象可见标识
                /// </summary>
                /// <param name="flags"></param>
                /// <returns></returns>
                virtual ev_uint32 getVisibilityFlags() const;
                /// <summary>
                /// 设置默认可见标识
                /// 为所有预期可移动对象实例设置
                /// </summary>
                /// <param name="flags">标识</param>
                /// <returns></returns>
                static void setDefaultVisibilityFlags(ev_uint32 flags);

                /// <summary>
                /// 获取默认可见标识
                /// 为所有预期可移动对象实例设置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                static ev_uint32 getDefaultVisibilityFlags();
                /// <summary>
                /// 添加监听器
                /// </summary>
                /// <param name="listener"></param>
                /// <returns></returns>
                virtual void addListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener *ref_listener);
				/// <summary>
				/// 移除监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				virtual void removeListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener *listener);
				/// <summary>
				/// 添加监听器
				/// </summary>
				/// <param name="listener"></param>
				/// <returns></returns>
				virtual ev_bool existListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener *listener)const;
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
                virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener *getListener(ev_uint32 index) const;
                /// <summary>
                /// 获取光源列表
                /// 以距离可移动物体由近到远顺序排列
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual const EarthView::World::Graphic::LightList &queryLights() const;
            public:
                /// <summary>
                /// 获取光线掩码
                /// 默认所有光源影响对象
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getLightMask()const;
                /// <summary>
                /// 设置光线掩码
                /// </summary>
                /// <param name="lightMask"></param>
                /// <returns></returns>
                virtual void setLightMask(ev_uint32 lightMask);
                /// <summary>
                /// 获取指向该对象当前光列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual EarthView::World::Graphic::LightList *_getLightList();
                /// <summary>
                /// 获取边列表                
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                EarthView::World::Graphic::CEdgeData *getEdgeList();
                /// <summary>
                /// 是否存在边列表
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool hasEdgeList();
                /// <summary>
                /// 获取阴影锥渲染对象的迭代器
                /// </summary>
                /// <param name="shadowTechnique">阴影技术</param>
                /// <param name="light">光源</param>
                /// <param name="indexBuffer">索引</param>
                /// <param name="extrudeVertices">为真，在软件中挤压顶点后面的体积成为三维实体</param>
                /// <param name="extrusionDist">距离</param>
                /// <param name="flags">标识，默认为0</param>
                /// <returns></returns>
                EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer, ev_bool extrudeVertices, Real extrusionDist, ev_uint32 flags);
                EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight *light,
                        EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *indexBuffer, ev_bool extrudeVertices, Real extrusionDist);

                /// <summary>
                /// 在世界空间下获取光源光罩的边界
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CAxisAlignedBox &getLightCapBounds() const;
                /// <summary>
                /// 在世界空间下获取黑暗光罩的边界
                /// </summary>
                /// <param name="light"></param>
                /// <param name="dirLightExtrusionDist"></param>
                /// <returns></returns>
                EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(const EarthView::World::Graphic::CLight &light, Real dirLightExtrusionDist) const;
                /// <summary>
                /// 设置投射阴影
                /// </summary>
                /// <param name="enabled"></param>
                /// <returns></returns>
                virtual void setCastShadows(ev_bool enabled);

                /// <summary>
                /// 是否启用阴影投射
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getCastShadows() const;
                /// <summary>
                /// 是否接收阴影
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool getReceivesShadows();

				ev_bool getReflectable() const;
				ev_void setReflectable(ev_bool value);

				ev_bool getRefractable() const;
				ev_void setRefractable(ev_bool value);

				/// <summary>
				/// 父节点是否用来存储局部变换矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool isParentNodeLocal() const 
				{
					return mParentNodeLocal;
				}

				/// <summary>
				/// 设置父节点是否用来存储局部变换矩阵
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setParentNodelLocal(ev_bool local)
				{
					mParentNodeLocal = local;
				}

                /// <summary>
                /// 获取点挂光源或聚光灯延伸距离
                /// </summary>
                /// <param name="l"></param>
                /// <returns></returns>
                Real getPointExtrusionDistance(const EarthView::World::Graphic::CLight *l) const;
                /// <summary>
                /// 获取可移动对象的类型标识
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_uint32 getTypeFlags() const;
                /// <summary>
                /// 访问可渲染对象
                /// 允许迭代器遍历渲染实例，当被询问时，渲染对象将添加到渲染队列
                /// </summary>
                /// <param name="visitor"></param>
                /// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
                /// <returns></returns>
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables);
                virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor *visitor);

                /// <summary>
                /// 设置调试该对象是否启用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void setDebugDisplayEnabled(ev_bool enabled);
                /// <summary>
                /// 是否调试该对象是否启用
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ev_bool isDebugDisplayEnabled() const;

				/// <summary>
				///  附加的属性字段，外部关联业务使用
				/// </summary>
				/// <returns></returns>
				void setTag(const EVString& tag);
				EVString getTag();
            };
            /// <summary>
            /// 移动对象工厂类
            /// 此类生产某些移动对象，并在根节点注册，供用户创建新的实例
            /// </summary>
            class EV_GRAPHIC_DLL CMovableObjectFactory : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CMovableObjectFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            protected:
                /// <summary>
                /// 标记类型，如果被请求，则分配内存
                /// </summary>
                ev_uint32 mTypeFlag;
            ev_internal:
                /// <summary>
                /// 创建内部实现
                /// 必须被重载
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="params">参数</param>
                /// <returns>移动对象指针类</returns>
                virtual EarthView::World::Graphic::CMovableObject *createInstanceImpl(const EVString &name, const EarthView::World::Core::NameValuePairList *params);
                virtual EarthView::World::Graphic::CMovableObject *createInstanceImpl(const EVString &name);
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CMovableObjectFactory();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CMovableObjectFactory();
                /// <summary>
                /// 获取类型
                /// 获取被创建对象的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>对象类型的值</returns>
                virtual EVString getType() const;
                /// <summary>
                /// 创建实例
                /// 为对象创建新的实例
                /// </summary>
                /// <param name="name">对象名称</param>
                /// <param name="manager">场景管理器</param>
                /// <param name="params">参数</param>
                /// <returns>对象类型的值</returns>
                virtual EarthView::World::Graphic::CMovableObject *createInstance(const EVString &name, EarthView::World::Graphic::CSceneManager *ref_manager, const EarthView::World::Core::NameValuePairList *params);
                virtual EarthView::World::Graphic::CMovableObject *createInstance(const EVString &name, EarthView::World::Graphic::CSceneManager *ref_manager);
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="obj"></param>
                /// <returns></returns>
                virtual void destroyInstance(EarthView::World::Graphic::CMovableObject *obj);
                /// <summary>
                /// 标记类型分配
                /// 工厂根据场景查询有选择性的分配
                /// </summary>
                /// <param name=""></param>
                /// <returns>错误，返回默认实现，成功按需求分配</returns>
                virtual ev_bool requestTypeFlags() const;
                /// <summary>
                /// 唤醒标记类型
                /// </summary>
                /// <param name="flag"></param>
                /// <returns></returns>
                void _notifyTypeFlags(ev_uint32 flag);
                /// <summary>
                /// 获取标记类型
                /// 获取此工厂的标记类型
                /// </summary>
                /// <param name="flag"></param>
                /// <returns>返回类型值</returns>
                ev_uint32 getTypeFlags() const;
            };

			/// <summary>
			/// 通过名称检索子对象
			/// typedef map<EVString, EarthView::World::Graphic::CMovableObject*> MovableObjectList;
			/// </summary>
			class EV_GRAPHIC_DLL MovableObjectList : public EarthView::World::Core::CBaseObject
			{
			ev_private:
				MovableObjectList(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				MovableObjectList();
				ev_bool push(const EVString &key, EarthView::World::Graphic::CMovableObject *const &val);
				ev_bool exist(const EVString &key);
				EarthView::World::Graphic::CMovableObject*& operator[](const EVString &key);
				EarthView::World::Graphic::CMovableObject*& get(const EVString &key);
				void erase(const EVString &key);
				ev_size_t size() const;
				void clear();
				ev_bool empty() const;
			ev_private:
				typedef map<EVString, EarthView::World::Graphic::CMovableObject *> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<InternalList::iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);
				_Pairib insert(const value_type &val);
				iterator find(const EVString &key);
				const_iterator find(const EVString &key) const;
			private:
				InternalList mList;
			};
        }
    }
}

#endif

