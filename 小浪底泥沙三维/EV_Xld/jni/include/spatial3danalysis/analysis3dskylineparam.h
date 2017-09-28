#ifndef _ANALYSIS3DSKYLINEPARAM_H_
#define _ANALYSIS3DSKYLINEPARAM_H_

#include "analysis3d_config.h"
#include "core/stringinterface.h"
#include "mathengine/vector3.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class EV_ANALYSIS3D_DLL CAnalysis3DSkyLineParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CAnalysis3DSkyLineParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CAnalysis3DSkyLineParam(void* parent);

					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					~CAnalysis3DSkyLineParam();
					/// <summary>
					///  设置
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					/// <summary>
					///  设置
					/// </summary>
					/// <param name="altitude"></param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setViewPoint(EarthView::World::Spatial::Math::CVector3& cen);
					/// <summary>
					///  获取
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Math::CVector3 getViewPoint();
ev_private:

					class  CCmdViewPointLon : public EarthView::World::Core::CParamCommand //观察点经度
					{
					public:
						CCmdViewPointLon();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointLat : public EarthView::World::Core::CParamCommand //观察点纬度
					{
					public:
						CCmdViewPointLat();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class  CCmdViewPointAlt : public EarthView::World::Core::CParamCommand //观察点高程
					{
					public:
						CCmdViewPointAlt();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdViewPointHei : public EarthView::World::Core::CParamCommand //观察点离地高度
					{
					public:
						CCmdViewPointHei();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					class CCmdCameraType :public EarthView::World::Core::CParamCommand//相机类型
					{
					public:
						CCmdCameraType();
						EVString doGet(const void *target) const;
						void doSet(void *target,const EVString &val);
					};

					class CCmdCameraRotation :public EarthView::World::Core::CParamCommand //相机方位角
					{
					public :
						CCmdCameraRotation();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class CCmdCameraPitch : public EarthView::World::Core::CParamCommand //相机俯仰角
					{
					public:
						CCmdCameraPitch();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class CCmdLineQuality : public EarthView::World::Core::CParamCommand // 天际线质量
					{
					public:
						CCmdLineQuality();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);

					};
					class CCmdLineColor : public EarthView::World::Core::CParamCommand //天际线颜色
					{
					public:
						CCmdLineColor();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};

					static CCmdViewPointLon msViewPointLonCmd;
					static CCmdViewPointLat msViewPointLatCmd;
					static CCmdViewPointAlt msViewPointAltCmd;
					static CCmdViewPointHei msViewPointHeiCmd;
					static CCmdCameraType msCameraType;
					static CCmdCameraRotation msCameraRotationCmd;
					static CCmdCameraPitch msCameraPitchCmd;
					static CCmdLineQuality msLineQualityCmd;
					static CCmdLineColor msLineColorCmd;



				private:
					ev_void initialize();
					EarthView::World::Spatial::Math::CVector3 mViewPoint;
				};
			}
		}
	}
}

#endif