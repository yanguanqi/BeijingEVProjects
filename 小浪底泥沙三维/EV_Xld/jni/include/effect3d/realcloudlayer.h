#ifndef _REALCLOUDLAYER_H
#define _REALCLOUDLAYER_H
#include "effect3d/realcloud_config.h"
#include "effect3d/cloud_definitions.h"
#include "core/memoryallocatedobject.h"
#include <graphic/image.h>
#include "core/thread.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneManager;
			class CCamera;
		}
		namespace Spatial
		{
			namespace Effect3D
			{
				class CRealCloudLayer;
				class CRealCloudShell;
				class CRealCloudQuadMap;				

				//云图更新线程
				class CloudMapWorkFunction : public EarthView::World::Core::CThreadFunc
				{
				public:
					CloudMapWorkFunction(CRealCloudLayer *cloudLayer);
					CloudMapWorkFunction(){};
					~CloudMapWorkFunction(){};
					ev_void run();
					ev_void setImage(const EarthView::World::Graphic::CImage& img);
					ev_void setType(int flag);

				private:
					int mFlag;
					CRealCloudLayer								*mCloudLayer;
					EarthView::World::Graphic::CImage mImg;
				};

				class EV_EFFECT3D_DLL CRealCloudLayer :
					public EarthView::World::Core::CBaseObject
				{
ev_private:
					CRealCloudLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					CRealCloudLayer(EarthView::World::Graphic::CSceneManager *sce,EarthView::World::Spatial::Effect3D::EVCloudType type);
					~CRealCloudLayer(void);

					void createRealCloud(CRegionAtmosphere *region);
					void destroyRealCloud(CRegionAtmosphere *region);

					void create();
					void destroy();

					CRealCloudLayer* copy();

					void setRealCloudMap(const EarthView::World::Graphic::CImage& img);
					void setEnable(bool enable);
					void setVisible(bool visible);
					void setCloudFlow(bool flowable);
					void setRealCloudHeight(float height);
					void setRealCloudAlpha(float alpha);
					void setRegionCloudMapAlpha(const EVString& name,ev_real32 alpha);
					EarthView::World::Spatial::Effect3D::EVCloudType getCloudType() {return mCloudType;}

					/// <summary>
					/// 添加局部云图
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="img">图片</param>
					/// <param name="north">局部区域的北边界。(度为单位)</param>
					/// <param name="west">局部区域的西边界。(度为单位)</param>
					/// <param name="south">局部区域的南边界。(度为单位)</param>
					/// <param name="east">局部区域的东边界。(度为单位)</param>
					/// <param name="height">局部区域的东边界。(度为米)</param>
					/// <returns></returns>
					void addRegionCloudMap(_in const EVString& name,_in const EarthView::World::Graphic::CImage& img,_in ev_real64 north,_in ev_real64 west,_in ev_real64 south,_in ev_real64 east,_in ev_real64 height);
					/// <summary>
					/// 移除局部云图
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					void removeRegionCloudMap(_in const EVString& name);
					/// <summary>
					/// 设置局部云图的可见性
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					void setRegionCloudMapVisible(_in const EVString& name,_in bool visible);
					/// <summary>
					/// 设置局部云图的旋转信息
				    /// </summary>
					/// <param name="name">局部云的名字</param>
					/// <param name="centerLat">中心点外的纬度</param>
					/// <param name="centerLon">中心点外的经度</param>
					/// <param name="rotationAngleVelocity">旋转的角速度，以度为单位</param>
					/// <param name="rotationRegionRadius">旋转范围的半径，以米为单位</param>
					/// <returns></returns>
					void setRegionCloudRotationInfomation(const EVString& name,ev_real64 centerLat,ev_real64 centerLon,ev_real64 rotationAngleVelocity,ev_real64 rotationRegionRadius);

					/// <summary>
					/// 允许旋转局部云
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					void enableRotateRegionCloud(const EVString& name);
					/// <summary>
					/// 禁止转动局部云
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					void disableRotateRegionCloud(const EVString& name);
					/// <summary>
					///获取局部云图的可见性
					/// </summary>
					/// <param name="name">局部云的名字</param>
					/// <returns></returns>
					ev_bool getRegionCloudMapVisible(_in const EVString& name);

					/// <summary>
					///设置风速
					/// </summary>
					/// <param name="speed">风速</param>
					/// <returns></returns>
					ev_void setWindSpeed(_in const EarthView::World::Spatial::Math::CVector3& speed);

					/// <summary>
					/// 设置体积云的颜色与图片一致
					/// </summary>
					/// <param name="ev_bool">是否一致</param>
					/// <returns></returns>
					ev_void enableGetCloudColorFromImage(_in ev_bool enable);

					void update(EarthView::World::Graphic::CCamera *cam, double time);

				protected:
					void createCloudShell();
					void createCloudQuadMap();
				private:
					CRealCloudQuadMap							*mCloudQuadMap;
					EarthView::World::Graphic::CSceneManager	*mSceMgr;

					bool										 mVisible;
					EarthView::World::Spatial::Effect3D::EVCloudType mCloudType;
					//EarthView::World::Core::CCoreTime mDateTime;
					double mDateTime;

					/// 切换云图线程
					EarthView::World::Core::CThread mThread;
					EarthView::World::Spatial::Effect3D::CloudMapWorkFunction *mThreadFunc;

					C_DISABLE_COPY(CRealCloudLayer);

ev_private:
					EV_MUTEX(mInitMutex);
					EV_THREAD_SYNCHRONISER(mInitSync);
					CRealCloudShell								*mCloudShell;
				};
			}
		}
	}
}

#endif
