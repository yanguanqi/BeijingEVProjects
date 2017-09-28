#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIPOINT3DEXTERNSION_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIPOINT3DEXTERNSION_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
#include "geometry3d/igeometry3dfactory.h"


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			/// <summary>
			/// 点类型的地理对象扩展到三维类
			/// 管理点类型的地理对象扩展到三维类方法
			/// </summary>
			class EV_GEOMETRY3D_DLL CMultiPoint3DExtension: public EarthView::World::Geometry3D::CMultiGeometry3DExtension
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiPoint3DExtension(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				CMultiPoint3DExtension(EarthView::World::Graphic::CSceneManager* ref_scenemanager,const EVString& groupName);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CMultiPoint3DExtension();

			public:					
				/// <summary>
				/// 从地理对象扩展创建三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void build();
				/// <summary>
				/// 挂接三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void render();

				/// <summary>
				/// 反挂接三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void derender();

				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);
				virtual ev_bool attachToScene();
				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();
				virtual ev_bool detachFromScene();
				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);

				/// <summary>
				/// 获取扩展前计算的点的相对坐标和参考位置坐标
				/// </summary>
				/// <param name="positions">点的相对坐标集</param>
				/// <param name="refPoint">参考位置坐标</param>
				/// <returns></returns>
				ev_void getPoints(EarthView::World::Spatial::Math::VertexList& positions,EarthView::World::Spatial::Math::CVector3& refPoint);

				/// <summary>
				/// 设置注记可见距离
				/// </summary>
				/// <param name="dis">可见距离</param>
				virtual ev_void setLabelVisibleDistance(ev_real64 dis);				

				/// <summary>
				/// 设置条件可见性
				/// </summary>
				/// <param name="visible">指定的ids是否可见</param>
				/// <param name="ids">指定的ids</param>
				/// <returns></returns>
				virtual ev_bool setVisibilityFilter(ev_bool visible,  const EarthView::World::Core::IntVector& ids);

				/// <summary>
				/// 设置某个对象的可见性
				/// </summary>
				/// <param name="visible">obj是否可见</param>
				/// <param name="ref_geoObject">ibj</param>
				/// <returns></returns>
				virtual ev_bool setObjectVisibility(ev_bool visible, EarthView::World::Spatial::CGeoObject* ref_geoObject);

				/// <summary>
				/// 根据相机位置进行相应刷新
				/// </summary>
				/// <param name="vCamera">相机位置</param>
				/// <returns></returns>
				virtual ev_void updateByCamera(EarthView::World::Graphic::CCamera* pCamera);

				/// <summary>
				/// 设置有效角度,针对偏移
				/// </summary>
				/// <param name="angle">有效角度</param>
				/// <returns></returns>
				void setLabelProjOffsetMaxAngle(Real angle);
				/// <summary>
				/// 获取有效偏移角度
				/// </summary>
				/// <param name=""></param>
				/// <returns>获取有效角度</returns>
				Real getLabelProjOffsetMaxAngle() const;
				/// <summary>
				/// 设置是否进行偏移，主要是点扩展和简单线扩展
				/// </summary>
				/// <param name="useProjOffset">是否进行偏移</param>
				/// <returns></returns>
				void setLabelProjOffsetEnable(ev_bool useProjOffset);
				/// <summary>
				/// 是否进行偏移
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool getLabelProjOffsetEnable() const;
				/// <summary>
				/// 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name="multi">偏移常量的倍数</param>
				/// <returns></returns>
				void setLabelProjOffset(Real offset);
				/// <summary>
				/// 偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				Real getLabelProjOffset() const;
				/// <summary>
				/// 设置是否进行字体压盖测试
				/// </summary>
				/// <param name="enable">是否进行字体压盖测试</param>
				/// <returns></returns>
				void setOverlapCheckEnabled(ev_bool enable);
				/// <summary>
				/// 获取是否进行字体压盖测试
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否进行字体压盖测试</returns>
				ev_bool getOverlapCheckEnabled();
				/// <summary>
				/// 静态方法设置字体遮挡测试刷新时间间隔，默认200ms
				/// </summary>
				/// <param name="timeInterval">刷新时间间隔</param>
				/// <returns></returns>
				static void setOverlapCheckTimeInterval(ev_int32 timeInterval);

				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();

				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);

				/// <summary>
				/// 广告板随相机距离缩放，到达一定距离开始缩小,为0表示无穷大
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual Real getReduceDistance() const;
				virtual ev_void setReduceDistance(Real reduceDis);
ev_private:
				virtual ev_bool setObjectVisibility(ev_bool visible, EarthView::World::Spatial::CGeoObject* ref_geoObject,ev_bool bProcessAttach);

				ev_void build(EarthView::World::Graphic::CCamera* pCamera);
				void releaseText(list<CMultiGeometry3DExtension::pos_movable *>& needRelease);
				void unloadText(list<CMultiGeometry3DExtension::pos_movable *>& needUnload);
				void loadText(list<pos_movable *>& needAttach);
				ev_void updateByCameraInWorkqueue(list<pos_movable *>& needRelease,list<pos_movable *>& needAttach);

				ev_bool setEntitySelected(const EarthView::World::Core::IntVector& objIndics);
			protected:
				/// <summary>
				/// 重置geoentity
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void resetGeoEntity();
				ev_bool updateTextStyle();
			private:
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CMultiPoint3DExtension(const CMultiPoint3DExtension& obj);

				ev_void buildBillboardSet(EarthView::World::Spatial::Display::ISymbol* symbol,EarthView::World::Graphic::CCamera* pCamera);
				ev_void buildModels(EarthView::World::Spatial::Display::ISymbol* symbol,EarthView::World::Graphic::CCamera* pCamera);

				ev_void updateBySymbol();
				ev_void copyCameraParams(EarthView::World::Graphic::CCamera& camera) const;
			private:
				EarthView::World::Core::CReadWriteLock mTxtPosLock;
				vector<EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable *> mTxtPos;	
				mutable EarthView::World::Core::CReadWriteLock mCameraLock;//相机锁
				EarthView::World::Graphic::CCamera* mpCacheCamera;
				EarthView::World::Core::CReadWriteLock mObj_bbIndexLock;
				map<ev_uint32,EarthView::World::Graphic::CBillboard*> mObj_bbIndices;
				class COverlapListener : public EarthView::World::Graphic::CSceneManager::CSceneManagerListener
				{
				public:
					COverlapListener();
					/// <summary>
					/// 在每帧更新场景图前触发			
					/// </summary>				
					/// <returns></returns>
					virtual ev_void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera);

				private:
					EarthView::World::Core::CTime mSpanTimer;					
				};

				struct _OverlayInf
				{
					ev_bool ObjectDirty;
					ev_bool CameraDirty;
					
					set<EarthView::World::Geometry3D::CMultiPoint3DExtension*> Extensions;

					_OverlayInf()
					{
						ObjectDirty = false;
						CameraDirty = false;						
					}
				};

				ev_bool mbOverlapCheck;
				typedef map<EarthView::World::Graphic::CSceneManager*,_OverlayInf > PointExtensionMap;
				static PointExtensionMap msPointExtensions;
				
				static void layoutLabels(EarthView::World::Graphic::CSceneManager *sm,EarthView::World::Graphic::CCamera* cam);

				static COverlapListener* msOverlapListener;
				static ev_int32 msUpdateTimeInterval;

				friend class COverlapListener;

				void startChecking();
				void stopChecking();
								
				ev_bool m_bIsLoaded;
				ev_bool m_bIsAttached;

				Real mReduceDis;

				CMultiPolyline3DExtension* mpLineExtension;//延伸到地面的线
				ev_bool m_bUpdateAbortFlag;
			};
			//
			class EV_GEOMETRY3D_DLL CMultiPoint3DExtensionFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiPoint3DExtensionFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CMultiPoint3DExtensionFactory();
				~CMultiPoint3DExtensionFactory();
				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				virtual ev_uint16       getFactoryType();
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
				virtual void            destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj);
				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				virtual ev_bool appendGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* ref_geoObject);
				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				virtual ev_bool removeGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* geoObject);
				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void removeAllGeoObjects(EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,ev_uint32 index) const;
				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				virtual ev_uint64 getGeoObjectCount(EarthView::World::Geometry3D::CVisibleObject* visibleObj) const;
			private:
				ev_uint16 mFactoryType;
				//EarthView::World::Graphic::CMovableObject* createLine(EarthView::World::Spatial::Math::CVector3 point,ev_real64 alt);
			};
		}
	}
}
#endif
