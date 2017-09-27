#ifndef _KML_MODEL_COMMON_DEF_H_
#define _KML_MODEL_COMMON_DEF_H_

#include "spatial3dengine/spatial3dengineconfig.h"
#include "graphic/material.h"
#include "graphic/texture.h"
#include "graphic/mesh.h"
#include "graphic/movableobject.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"
#include "mathengine/axisalignedbox.h"
#include "mathengine/matrix4.h"
#include <geometry3d/visibleobject.h>
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
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				class CModelFileObject;
			}
			namespace KmlManager
			{
				//class CKmlModelResource:public EarthView::World::Core::CAllocatedObject
				//{
				//public:
				//	CKmlModelResource()
				//	{
				//		refCount = 0;
				//	}
				//protected:
				//	ev_uint32 refCount;
				//};
				//
				//class CKmlModelTexture:public CKmlModelResource
				//{
				//public:
				//	CKmlModelTexture()
				//	{
				//
				//	}
				//protected:
				//	EarthView::World::Graphic::CTexturePtr mTexture;
				//};
				//
				//class CKmlModelMaterial:public CKmlModelResource
				//{
				//public:
				//	CKmlModelMaterial()
				//	{
				//
				//	}
				//protected:
				//	EarthView::World::Graphic::CMaterialPtr mMaterial;
				//};
				//
				//class CKmlModelMesh:public CKmlModelResource
				//{
				//public:
				//	CKmlModelMesh()
				//	{
				//
				//	}
				//protected:
				//	EarthView::World::Graphic::CMeshPtr;
				//};
				class EV_Spatial3DEngine_DLL CKmlModel:public EarthView::World::Geometry3D::CVisibleObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlModel(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CKmlModel(EarthView::World::Graphic::CSceneManager* pSceMgr, EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
					~CKmlModel();
					virtual ev_void setSelectable(ev_bool selectable);
					ev_bool getIsInit()const;
					/// <summary>
					///  是否完成加载，需要重写
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool isLoaded();
					virtual ev_bool update();
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

					ev_void startEdit();
					ev_void endEdit();
					ev_void addListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener* pListener);
					ev_void removeListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener* pListener);
					
					ev_void bandEditTool(EarthView::World::Graphic::CSceneManager* pSceneMgr);
					EarthView::World::Graphic::CMovableObject* getModelObj();
					const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox() const;
					EarthView::World::Spatial::Math::CVector3 getMaxnum();
					EarthView::World::Spatial::Math::CVector3 getMinnum();
					EarthView::World::Spatial::Math::CVector3 getCenter();
					ev_void setVisible(ev_bool b);
					ev_bool getVisible()const;

				protected:
					/// <summary>
					/// 获取修改模型高度模式的变换矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void getAltitudeChangeTransform(const EarthView::World::Spatial::Math::CMatrix4& sceneMatrix
						,const EarthView::World::Spatial::Math::CAxisAlignedBox& meshBound
						,ev_real64 scenePosZ
						,ev_int32 altitudeMode
						,ev_real64 altitude
						,_out EarthView::World::Spatial::Math::CMatrix4& outSceneMatrix
						,_out EarthView::World::Spatial::Math::CMatrix4& outBoundMatrix
						);

					void updateNodeMatrix();

					//std::vector<EarthView::World::Graphic::CMaterialPtr> mMaterialPtrs;
					//std::vector<EarthView::World::Graphic::CTexturePtr> mTexturePtrs;
					EarthView::World::Graphic::CMeshPtr mMeshPtr;
					EarthView::World::Graphic::CEntity* mpEntity;
					EarthView::World::Graphic::CSceneNode* mNode;


					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					EarthView::World::Spatial::Kml::CGeoObjectExtension* mpGeoObject;
					EarthView::World::Spatial3D::ModelManager::CModelFileObject* mpManualModelObj;
					EarthView::World::Spatial3D::CKmlFeatureUserData mUserData;
					EVString mModelHref;
					EVString mGroupName;
					EVString mName;
					ev_bool mInitSuccess;
					ev_bool m_bIsLoaded;
					ev_bool m_bIsAttached;
				};
				class EV_Spatial3DEngine_DLL CKmlModelFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
				{
ev_private: 
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlModelFactory(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					///<param></param>
					/// <returns></returns>
					CKmlModelFactory();
					~CKmlModelFactory();
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
}
#endif