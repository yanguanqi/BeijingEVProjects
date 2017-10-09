#ifndef CTEXTUREPOINT3D_H
#define CTEXTUREPOINT3D_H

#include "industrygraphic_cfg.h"
#include "mathengine/vector3.h"
#include "graphic/instanceobjectcreator.h"
#include "graphic/mesh.h"
#include "graphic/scenemanager.h"
#include "globecontrol/globecontrol.h"
#include "mathengine/ev_math.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class CTexturePoint3d;
			class CTexturePoint3dListener;
			/// <summary>
			/// 多点对象
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CMultiTexturePoint3d : public EarthView::World::Core::CBaseObject
			{
				friend class CTexturePoint3d;
				friend class CTexturePoint3dListener;

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CMultiTexturePoint3d(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="ref_pGlobeCtrl">三维控件</param>
				CMultiTexturePoint3d(const EVString& name, EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeCtrl);
				/// <summary>
				/// 析构函数
				/// </summary>
				~CMultiTexturePoint3d();
				/// <summary>
				/// 添加单点
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="worldPos">单点世界坐标</param>
				/// <param name="heading">偏北角（以局部坐标系下Z轴代表地球表面正北方向</param>
				/// <param name="iconPath">图标文件路径</param>
				/// <param name="size">单点像素大小</param>
				/// <param name="faceToCamera">是否始终朝向相机显示</param>
				/// <param name="showAsPixel">是否以像素模式显示，显示大小不跟随镜头发生变化</param>
				void addPoint3d(const EVString& ptName, 
					const EarthView::World::Spatial::Math::CVector3& worldPos, 
					const EarthView::World::Spatial::Math::CDegree& heading,
					const EVString& iconPath,
					const float& size,
					const bool& faceToCamera,
					const bool& showAsPixel);
				/// <summary>
				/// 根据名称移除点
				/// </summary>
				/// <param name="ptName">单点名称</param>
				void removePoint3d(const EVString& ptName);
				/// <summary>
				/// 根据名称设置可见性
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">可见性</param>
				void setVisible(const EVString& ptName, const bool& value);
				/// <summary>
				/// 根据名称获取可见性
				/// </summary>
				/// <param name="ptName">单点名称</param>
				bool getVisible(const EVString& ptName);
				/// <summary>
				/// 根据名称设置状态
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="worldPos">单点世界坐标</param>
				/// <param name="heading">单点偏北角</param>
				void setStatus(const EVString& ptName, 
					const EarthView::World::Spatial::Math::CVector3& worldPos, 
					const EarthView::World::Spatial::Math::CDegree& heading);
				/// <summary>
				/// 获取当前多点对象名称
				/// </summary>
				/// <returns>名称</returns>
				EVString getName() const
				{
					return this->mName;
				};
				/// <summary>
				/// 根据名称获取单点对象的图标文件路径
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <returns>图标文件路径</returns>
				EVString getPtIconPath(const EVString& ptName);
				/// <summary>
				/// 将多点对象挂接到场景中，只需要挂接一次
				/// </summary>
				void attachToScene();
				/// <summary>
				/// 移除所有单点对象
				/// </summary>
				void removeAll();
				/// <summary>
				/// 根据名称设置单点对象的最大可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">最大可见距离</param>
				void setMaxVisibleDistance(const EVString& ptName, const Real& value);
				/// <summary>
				/// 根据名称设置单点对象的最小可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">可最小见距离</param>
				void setMinVisibleDistance(const EVString& ptName, const Real& value);
				/// <summary>
				/// 根据名称获取单点对象的最大可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <returns>最大可见距离</returns>
				Real getMaxVisibleDistance(const EVString& ptName);
				/// <summary>
				/// 根据名称获取单点对象的最小可见距离
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <returns>可最小见距离</returns>
				Real getMinVisibleDistance(const EVString& ptName);
				/// <summary>
				/// 根据名称设置单点对象的边长大小
				/// </summary>
				/// <param name="ptName">单点名称</param>
				/// <param name="value">边长大小</param>
				void setSize(const EVString& ptName, const float& value);

			protected:
				EVString mName;
				EarthView::World::Graphic::CSceneManager* ref_mpScenMgr;
				EarthView::World::Spatial3D::Controls::CGlobeControl* ref_mpGlobeCtrl;
				CTexturePoint3dListener* mpListener;
				std::map<EVString, CTexturePoint3d*> mPtMap;
				std::map<EVString, CTexturePoint3d*> mLoadContainer;
				std::map<EVString, CTexturePoint3d*> mUpdateContainer;

				EarthView::World::Core::CReadWriteLock mALocker;
				EarthView::World::Core::CReadWriteLock mLLocker;
				EarthView::World::Core::CReadWriteLock mULocker;
			};
		}
	}
}

#endif