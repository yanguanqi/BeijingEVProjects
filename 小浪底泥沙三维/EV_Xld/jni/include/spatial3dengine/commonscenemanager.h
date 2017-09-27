#ifndef _COMMONSCENEMANAGER_H_
#define _COMMONSCENEMANAGER_H_

#include "core/global.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "graphic/scenemanager.h"
#include <mathengine/axisalignedbox.h>
#include "core/stdheaders.h"
#include "graphic/camera.h"
#include "spatial3dengine/commonscenecamera.h"
#include "geometry3d/orthaxis.h"
#include "geometry3d/planargrid.h"
#include "plugin_octreescenemanager/octreescenemanager.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class CCommonSceneCamera;
			class CFixedElement;
			/// <summary>
			/// 固定在视口指定位置的三维元素的相机监听类
			/// </summary>
			class EV_Spatial3DEngine_DLL CFixedElementCameraListener: public EarthView::World::Graphic::CCamera::CCameraListener
			{
		    ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CFixedElementCameraListener(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="fixedelement">相机监听类</param>
				/// <returns></returns>	
				CFixedElementCameraListener(_in CFixedElement* ref_fixedelement);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>	
				~CFixedElementCameraListener();
				/// <summary>
				/// 渲染场景之前被访问
				/// </summary>
				/// <param name="cam">摄像机</param>
				/// <returns></returns>
				virtual void cameraPreRenderScene( _in EarthView::World::Graphic::CCamera* cam);

			private:
				EarthView::World::Spatial3D::CFixedElement* mfixedelement;
			};
			/// <summary>
			/// 固定在视口指定位置的三维元素
			/// </summary>
			class EV_Spatial3DEngine_DLL CFixedElement:public EarthView::World::Core::CBaseObject
			{
			ev_private:
				/// <summary>
				/// 构造函数
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CFixedElement(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 几种预设的屏幕布局
				/// </summary>
				enum ScreenLayout 
				{
					CENTER = 0,
					LEFTDOWN = 1,
					LEFTUP = 2,
					RIGHTDOWN = 3,
					RIGHTUP = 4,
					SETXY = 5
				};
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_cam">当前场景中的相机</param>
				/// <param name="x">x轴坐标</param>
				/// <param name="y">y轴坐标</param>
				/// <returns></returns>	
				CFixedElement(_in EarthView::World::Graphic::CCamera* ref_cam,_in ev_uint32 x,_in ev_uint32 y);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_cam">当前场景中的相机</param>
				/// <param name="eLayout">屏幕布局枚举</param>
				/// <returns></returns>	
				CFixedElement(_in EarthView::World::Graphic::CCamera* ref_cam,_in EarthView::World::Spatial3D::CFixedElement::ScreenLayout eLayout);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_cam">当前场景中的相机</param>
				/// <returns></returns>	
				CFixedElement(_in EarthView::World::Graphic::CCamera* ref_cam);
				/// <summary>
				/// 设置坐标轴的位置
				/// </summary>
				/// <param name="x">x轴坐标</param>
				/// <param name="y">y轴坐标</param>
				/// <returns></returns>	
				ev_void setScreenPos(_in ev_uint32 x,_in ev_uint32 y);	
				/// <summary>
				/// 设置坐标轴的位置
				/// </summary>
				/// <param name="eLayout">坐标轴位置枚举</param>
				/// <returns></returns>	
				ev_void setScreenPos(_in EarthView::World::Spatial3D::CFixedElement::ScreenLayout eLayout);
				/// <summary>
				/// 添加movable
				/// </summary>
				/// <param name="ref_mo">要添加的物体</param>
				/// <returns></returns>			
				ev_void addMovable(_in EarthView::World::Graphic::CMovableObject* ref_mo);
				/// <summary>
				/// 删除movable
				/// </summary>
				/// <param name="mo">要删除的物体</param>
				/// <returns></returns>			
				ev_void removeMovable( EarthView::World::Graphic::CMovableObject* mo);
				/// <summary>
				/// 相机监听
				/// </summary>
				/// <param name="cam">要监听的相机</param>
				/// <returns></returns>		
				ev_void notifiCamera(_in EarthView::World::Graphic::CCamera* cam);
     			/// <summary>
				/// 获得固定部件坐标轴的相机Listener
				/// </summary>
				/// <returns>EarthView::World::Spatial3D::CFixedElementCameraListener *,固定部件的相机监听类指针</returns>	
				EarthView::World::Spatial3D::CFixedElementCameraListener *getFixedElementCameraListener();
     			/// <summary>
				/// 获得当前相机
				/// </summary>
				/// <returns>EarthView::World::Graphic::CCamera *,相机指针</returns>	
				EarthView::World::Graphic::CCamera *getCamera();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>	
				~CFixedElement();
			private:
				/// <summary>
				/// 该对象不支持拷贝
				/// </summary>
				CFixedElement(_in const CFixedElement& toBeCopied);
				/// <summary>
				/// 该对象不支持拷贝
				/// </summary>
				EarthView::World::Spatial3D::CFixedElement& operator=(_in EarthView::World::Spatial3D::CFixedElement& fixedelement);

				ev_int32 mx;
				ev_int32 my;
				EarthView::World::Graphic::CCamera* mCam;
				EarthView::World::Spatial::Math::CVector3 mpos;
				EarthView::World::Graphic::CSceneNode* mNode;
				EarthView::World::Spatial3D::CFixedElement::ScreenLayout mlayout;
				EarthView::World::Spatial3D::CFixedElementCameraListener *mpCameraListener;
			};
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			/// <summary>
			/// 通用场景管理器类
			/// </summary>
			class EV_Spatial3DEngine_DLL CCommonSceneManager : public EarthView::World::Graphic::COctreeSceneManager
			{ 
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="name">通用场景管理器名称</param>
				/// <returns></returns>	
				CCommonSceneManager(_in const EVString &name);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>	
				virtual ~CCommonSceneManager();

			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CCommonSceneManager(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 显示坐标轴
				/// </summary>
				/// <param name="visible">是否显示</param>
				/// <returns></returns>	
				ev_void showOrthAxis(_in ev_bool visible);
				/// <summary>
				/// 设置坐标轴位置
				/// </summary>
				/// <param name="cam">相机</param>
				/// <param name="layout">屏幕布局枚举</param>
				/// <returns></returns>	
				void setAxisPos(_in EarthView::World::Graphic::CCamera *cam,_in EarthView::World::Spatial3D::CFixedElement::ScreenLayout layout);
				/// <summary>
				/// 设置坐标轴位置
				/// </summary>
				/// <param name="cam">相机</param>
				/// <param name="x">x轴坐标</param>
				/// <param name="y">y轴坐标</param>
				/// <returns></returns>	
				void setAxisPos(_in EarthView::World::Graphic::CCamera *cam,_in ev_int32 x,_in ev_int32 y);
				/// <summary>
				/// 获得坐标轴
				/// </summary>
				/// <returns>EarthView::World::Geometry3D::COrthaxis,返回坐标轴</returns>	
				EarthView::World::Geometry3D::COrthaxis* getOrthAxis();
				/// <summary>
				/// 显示网格
				/// </summary>
				/// <param name="visible">是否显示</param>
				ev_void showPlanaGrid(_in ev_bool visible);
				/// <summary>
				/// 获得网格
				/// </summary>
				/// <returns>EarthView::World::Geometry3D::CPlanargrid,返回网格</returns>	
				EarthView::World::Geometry3D::CPlanargrid* getPlanarGrid();
				/// <summary>
				/// 返回固定类指针
				/// </summary>
				/// <returns></returns>	
				EarthView::World::Spatial3D::CFixedElement* getFixElement();
				/// <summary>
				/// 设置网格方阵大小(x*x)
				/// </summary>
				/// <param name="x">网格方阵大小(x*x)</param>
				/// <returns></returns>	
				ev_void setPlanarGridScale(_in ev_uint32 x);
				/// <summary>
				/// 设置单位网格长度
				/// </summary>
				/// <param name="lineLength">单位网格长度</param>
				/// <returns></returns>	
				ev_void setPlanargridLineLength(_in ev_uint32 lineLength );
				/// <summary>
				/// 设置网格中心十字线颜色
				/// </summary>
				/// <param name="colorValue">颜色</param>
				/// <returns></returns>	
				ev_void setPlanargridCentreColor(_in const EarthView::World::Graphic::CColourValue &colorValue );
				/// <summary>
				/// 设置坐标轴长度
				/// </summary>
				/// <param name="lenght">坐标轴长度</param>
				/// <returns></returns>	
				ev_void setOrthaxisLength(_in ev_uint32 lenght);
				/// <summary>
				/// 设置渲染窗体内对象的可移动属性
				/// </summary>
				/// <param name="flag">是否可移动</param>
				/// <returns></returns>	
				ev_void setMovable(_in bool flag);
				/// <summary>
				/// 设置渲染窗体内对象的可缩放属性
				/// </summary>
				/// <param name="flag">是否可缩放</param>
				/// <returns></returns>	
				ev_void setScaleable(_in bool flag);
				/// <summary>
				/// 设置渲染窗体内对象的可旋转属性
				/// </summary>
				/// <param name="flag">是否可旋转</param>
				/// <returns></returns>	
				ev_void setRotatable(_in bool flag);
				/// <summary>
				/// 获得渲染窗体内对象的可移动属性
				/// </summary>
				/// <returns>bool,是否可移动</returns>	
				bool getMovable();
				/// <summary>
				/// 获得渲染窗体内对象的可缩放属性
				/// </summary>
				/// <returns>bool,是否可移动</returns>	
				bool getScaleable();
				/// <summary>
				/// 获得渲染窗体内对象的可旋转属性
				/// </summary>
				/// <returns>bool,是否可旋转</returns>	
				bool getRotatable();
				/// <summary>
				/// 设置坐标轴位置
				/// </summary>
				/// <param name="eLayout">屏幕布局枚举</param>
				/// <returns></returns>	
				ev_void setOrthoAxisPosition(_in EarthView::World::Spatial3D::CFixedElement::ScreenLayout eLayout);
				/// <summary>
				/// 设置坐标轴位置
				/// </summary>
				/// <param name="x">x轴坐标</param>
				/// <param name="y">y轴坐标</param>
				/// <returns></returns>	
				ev_void setOrthoAxisPosition(_in ev_int32 x, _in ev_int32 y);
				/// <summary>
				/// 获得当前场景管理器类型
				/// </summary>
				/// <returns>EVString,类型名称</returns>	
				EVString getTypeName()const;
				/// <summary>
				/// 创建相机
				/// </summary>
				/// <param name="name">相机名称</param>
				/// <returns>EarthView::World::Graphic::CCamera,相机</returns>	
				virtual EarthView::World::Graphic::CCamera* createCamera(_in const EVString &name);
				/// <summary>
				/// 添加movable
				/// </summary>
				/// <param name="mo">要添加的物体</param>
				/// <param name="pos">物体的位置</param>
				/// <returns></returns>
				ev_void addMovable(_in EarthView::World::Graphic::CMovableObject* mov,_in const EarthView::World::Spatial::Math::CVector3& pos);
				/// <summary>
				/// 删除movable
				/// </summary>
				/// <param name="mo">要删除的物体</param>
				/// <returns></returns>		
				ev_void removeMovable( EarthView::World::Graphic::CMovableObject* mov);
				/// <summary>
				/// 求交
				/// </summary>
				/// <param name="ray">射线</param>
				/// <param name="intersectPoint">射线起始位置</param>
				/// <param name="camera">相机</param>
				/// <param name="intersectModel">设置是否与模型求交</param>
				/// <param name="positiveSide">设置是否正面求交</param>
				/// <param name="negativeSide">设置是否反面求交</param>
				/// <param name="modelIntersected">是否与模型相交</param>
				/// <returns></returns>	
				ev_bool intersect(_in const EarthView::World::Spatial::Math::CRay& ray, _out EarthView::World::Spatial::Math::CVector3& intersectPoint,_in EarthView::World::Graphic::CCamera* camera,_in bool intersectModel,_in ev_bool positiveSide,_in ev_bool negativeSide, _out ev_bool& modelIntersected);				
				/// 平行轴边框盒求并
				/// </summary>
				/// <param name="rhs">平行轴边框盒</param>
				/// <returns></returns>	
				EarthView::World::Spatial::Math::CAxisAlignedBox* mergeAlignedBox(_in const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs);
				/// 获得求并后的平行轴边框盒
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				EarthView::World::Spatial::Math::CAxisAlignedBox* getWholeAlignedBox();
				/// 初始化求并的平行轴边框盒
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				ev_void initWholeAlignedBox();
				/// <summary>
				/// 获得坐标轴相机Listener
				/// </summary>
				/// <returns></returns>	
				EarthView::World::Spatial3D::CFixedElementCameraListener* getFixELementCameraListener();
				//ev_private:
				//const MovableObjectCollection* getCommonMovableObjectCollection(const EVString &typeName)const;
				//MovableObjectCollection* getCommonMovableObjectCollection(const EVString &typeName);
			private:
				EarthView::World::Geometry3D::COrthaxis* morthaxis;
				EarthView::World::Geometry3D::CPlanargrid* mplanargrid;
				
				EarthView::World::Spatial3D::CFixedElement* mfixedelement;
				EarthView::World::Spatial::Math::CAxisAlignedBox* mWholeAlignedBox;
				
				bool mAllowedMove;
				bool mAllowedScale;
				bool mAllowedRot;
			};	
			/// <summary>
			/// 通用场景管理器工厂
			/// </summary>
			class EV_Spatial3DEngine_DLL CCommonSceneManagerFactory : public EarthView::World::Graphic::CSceneManagerFactory
			{
			protected:
				/// <summary>
				/// 初始化MetaData
				/// </summary>
				/// <returns></returns>	
				void initMetaData()const;

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>	
				CCommonSceneManagerFactory();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>	
				virtual ~CCommonSceneManagerFactory();

				static const EVString FACTORY_TYPE_NAME;
				/// <summary>
				/// 创建一个场景管理器实例
				/// </summary>
				/// <returns></returns>	
				EarthView::World::Graphic::CSceneManager *createInstance(_in const EVString &instanceName);
				/// <summary>
				/// 销毁一个场景管理器实例
				/// </summary>
				/// <param name="instance">场景管理器指针</param>
				/// <returns></returns>	
				void destroyInstance(_in EarthView::World::Graphic::CSceneManager *instance);
				ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CCommonSceneManagerFactory(_in EarthView::World::Core::CNameValuePairList *pList);
			};

		}
	}
}
#endif

