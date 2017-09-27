#ifndef CGEOMETRY3D_EX_H
#define CGEOMETRY3D_EX_H

#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"
#include "mathengine/vector3.h"
#include "graphic/movableobject.h"
#include "geometry3d/featureuserdata.h"
#include "geometry3d/visibleobject.h"
#include "geometry3d/igeometry3dfactory.h"
#include "geometry3d/featureuserdata.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CGeoObjectExtension;
			}
		}
		namespace Geometry3D
		{
			class CGeometry3D;
		}
		namespace Graphic
		{
			class CSceneNode;
			class CSceneManager;
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Geometry3D{
			/// <summary>
			/// 几何体扩展类
			/// 负责几何体(立方体，椎体，半球体)的渲染, 材质资源放置在资源组：DEFAULT_RESOURCE_GROUP_NAME
			/// </summary>
			class EV_GEOMETRY3D_DLL CGeometry3DEx : public EarthView::World::Geometry3D::CVisibleObject
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeometry3DEx(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CGeometry3DEx(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CGeometry3DEx();
				/// <summary>
				///  获取节点
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual EarthView::World::Graphic::CNode* getNode();
				virtual ev_void setSelectable(ev_bool selectable);
				virtual ev_bool update();
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
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();
				virtual ev_bool attachToScene();
				virtual ev_bool detachFromScene();
				/// <summary>
				///  开始编辑
				/// </summary>
				ev_void startEdit();
				/// <summary>
				///  结束编辑
				/// </summary>
				ev_void endEdit();
				/// <summary>
				/// 更新对象的位置信息
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="scale">缩放</param>
				/// <param name="qua">旋转</param>
				/// <returns></returns>
				ev_void refreshPosition(const EarthView::World::Spatial::Math::CVector3& pos, 
					const EarthView::World::Spatial::Math::CVector3& scale,
					const EarthView::World::Spatial::Math::CQuaternion& qua);
				/// <summary>
				/// 可见性设置
				/// </summary>
				/// <param name="b">可见性</param>
				/// <returns></returns>
				ev_void setVisible(ev_bool b);
				/// <summary>
				/// 可见性获取
				/// </summary>
				/// <param name="b">可见性</param>
				/// <returns></returns>
				ev_bool getVisible()const;
				/// <summary>
				/// 获取世界包围盒最大
				/// </summary>
				/// <returns>世界包围盒最大</returns>
				EarthView::World::Spatial::Math::CVector3 getMaxnum();
				/// <summary>
				/// 获取世界包围盒最小
				/// </summary>
				/// <returns>世界包围盒最小</returns>
				EarthView::World::Spatial::Math::CVector3 getMinnum();
				/// <summary>
				/// 获取可移动对象
				/// </summary>
				/// <returns>可移动对象</returns>
				EarthView::World::Graphic::CMovableObject* getVectorMovableObj();
				/// <summary>
				/// 更新位置，重新build会改变节点的位置，所以需要重新获取位置信息
				/// <param name="geoObj">扩展对象</param>
				/// </summary>
				/// <returns></returns>
				ev_void updateLocation(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
				/// <summary>
				/// 刷新位置，高程变换的时候调用
				/// <param name="geoObj">扩展对象</param>
				/// </summary>
				/// <returns></returns>
				ev_void refreshPosition();
				/// <summary>
				/// 刷新材质
				/// </summary>
				/// <returns></returns>
				ev_void refreshMaterialRef();
				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);
				/// <summary>
				/// 返回用户数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>用户数据</returns>
				const EarthView::World::Spatial3D::CFeatureUserData& getUserData()const;
			protected:
				ev_void buildMaterial();
				ev_void buildRenderObj();
				EarthView::World::Spatial::Math::CMatrix4 computeWorldMatrix();
				ev_bool shouldUpdataGeometry3D();
				ev_bool shouldUpdataMaterial();
				ev_bool isEqual(Real a, Real b);
			private:
				EarthView::World::Graphic::CSceneManager*            m_pSceneMgr;
				EarthView::World::Geometry3D::CGeometry3D*           m_pMovable;
				EarthView::World::Graphic::CNode*               m_pNode;
				EarthView::World::Spatial::Kml::CGeoObjectExtension* m_pGeoObject;
				EarthView::World::Spatial::Kml::CGeoObjectExtension* m_TmpGeoObject;
				// 表识渲染几何体得状态
				ev_bool                                    m_bIsLoaded;
				ev_bool                                    m_bIsAttached;
				EVString mMaterialName;
				// 自定义数据
				EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
			};
			class EV_GEOMETRY3D_DLL CGeometry3DExFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeometry3DExFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CGeometry3DExFactory();
				~CGeometry3DExFactory();
				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				virtual ev_uint16       getFactoryType();
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
				virtual void            destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj);
			private:
				ev_uint16 mFactoryType;
			};

		}
	}
}
#endif