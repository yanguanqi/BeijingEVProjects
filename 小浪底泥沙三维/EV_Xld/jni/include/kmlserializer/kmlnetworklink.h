#ifndef EARTHVIEW_WORLD_KMLSERIALIZE_KMLNETWORKLINK_H
#define EARTHVIEW_WORLD_KMLSERIALIZE_KMLNETWORKLINK_H

#include "config.h"
#include <core/memoryallocatedobject.h>
#include <spatialobject/geometry/envelope.h>
#include "kmlserializer/geoobjectextension.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CKmlDocument;
				//kml网络链接对象
				class EV_KMLSERIALIZER_DLL CKmlNetworkLink : public EarthView::World::Core::CAllocatedObject
				{
				protected:
					EVString mLink;
					//gaoy2012/10/26
					ev_bool mOpen;
					ev_bool mVisiable;
					EVString mAddress;					
					EVString mPhoneNumber;
					EVString mDescription;
					EVString mStyleUrl;
					ev_bool mRefreshVisibility;
					ev_bool mFlyToView;
					EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
					ev_bool mbLoaded;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CKmlNetworkLink(_in EarthView::World::Core::CNameValuePairList *pList);		
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CKmlNetworkLink();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CKmlNetworkLink();  
                public:
					ev_bool mIsLodPassed;
					CKmlWorkQueueState* WorkState;
					CKmlDocument *mpDoc;
					CKmlDocument *mpParent;
					ev_void setLoadedState(ev_bool isLoaded);
					ev_bool getLoadedState();
					EVString mName;
					EVString mId;
					EVString mLocalPath;
					EarthView::World::Spatial::Kml::CGeoObjectExtensionAttribute GeoObjectExtAttr;
					/// <summary>
					/// 设置包围盒信息
					/// </summary>
					/// <param name="envelop">包围盒对象</param>
					/// <returns></returns>
					ev_void setEnvelopRef(EarthView::World::Spatial::Geometry::CEnvelope envelop);
					/// <summary>
					/// 获取包围盒信息
					/// </summary>
					/// <returns>返回包围盒对象</returns>
					EarthView::World::Spatial::Geometry::CEnvelope getEnvelopRef();
					//lookat 参数
					///纬度
					ev_real64 mLatitude;
					///经度
					ev_real64 mLongitude;
					///行偏角
					ev_real64 mHeading;
					///倾角
					ev_real64 mTilt;
					///高度
					ev_real64 mAltitude;
					///高度
					ev_real64 mOriAltitude;
					///是否改变
					ev_bool mIsDirty;
					///only for Google Range,distance from camera to target
					ev_real64 mRange;
					ev_bool mIsCameraAltComputed;
					//end

					/// <summary>
					/// 克隆一个kml网络连接对象
					/// </summary>
					/// <returns>返回kml网络连接对象</returns>
					EarthView::World::Spatial::Kml::CKmlNetworkLink* clone();
					/// <summary>
					/// 替换一个kml网络连接对象
					/// </summary>
					ev_void relpace(EarthView::World::Spatial::Kml::CKmlNetworkLink* destLink);
					/// <summary>
					/// 获得链接地址
					/// </summary>
					/// <returns>获取链接地址的字符串</returns>
					const EVString& getLink() const;

					/// <summary>
					/// 设置连接地址
					/// <param name="link">链接地址</param>
					/// </summary>
					ev_void setLink(const EVString& link);						

					/// <summary>
					/// 判断是否可见
					/// </summary>
					/// <returns>是否可见</returns>
					ev_bool isVisiable() const;

					/// <summary>
					/// 设置是否可见
					/// <param name="visibility">是否可见</param>
					/// </summary>
					ev_void setVisible(ev_bool visiable);

					/// <summary>
					/// 左侧树节点是否打开
					/// </summary>
					/// <returns>bool</returns>
					ev_bool isOpen() const;

					/// <summary>
					/// 设置左侧树节点是否打开
					/// <param name="open">bool</param>
					/// </summary>
					ev_void setOpened(ev_bool opened);

					/// <summary>
					/// 获得位置
					/// </summary>
					/// <returns>所处的位置</returns>
					const EVString& getAddress() const;

					/// <summary>
					/// 设置位置
					/// <param name="addr">位置</param>
					/// </summary>
					ev_void setAddress(const EVString& addr);

					/// <summary>
					/// 获得电话号码					
					/// </summary>
					/// <returns>电话号码</returns>
					const EVString& getPhoneNumber() const;

					/// <summary>
					/// 设置电话号码
					/// <param name="phoneNum">电话号码</param>
					/// </summary>
					ev_void setPhoneNumber(const EVString& phoneNum);

					/// <summary>
					/// 获得描述
					/// </summary>
					/// <returns>返回描述</returns>
					const EVString& getDescription() const;

					/// <summary>
					/// 设置描述
					/// <param name="descripton">描述</param>
					/// </summary>
					ev_void setDescription(const EVString& descripton);

					/// <summary>
					/// 获得样式
					/// </summary>
					/// <returns>样式</returns>
					const EVString& getStyleUrl() const;

					/// <summary>
					/// 设置样式
					/// <param name="url">样式所处的链接地址</param>
					/// </summary>
					ev_void setStyleUrl(const EVString& url);

					/// <summary>
					/// 0 值可让 Google 地球用户控制地图项的可见性。将该值设置为 1，会在每次刷新 NetworkLink 时重置地图项的可见性。
					/// </summary>
					/// <returns>bool</returns>
					ev_bool isRefreshVisibility() const;

					/// <summary>
					///  0 值可让 Google 地球用户控制地图项的可见性。将该值设置为 1，会在每次刷新 NetworkLink 时重置地图项的可见性。
					/// <param name="link">链接地址</param>
					/// </summary>
					ev_void setRefreshVisibility(ev_bool refreshVisibility);

					/// <summary>
					/// Google 地球是否会飞到 NetworkLinkControl 中的 LookAt 或 Camera 的视图
					/// <param ></param>
					/// </summary>
					/// <returns>bool</returns>
					ev_bool isFlyToView() const;

					/// <summary>
					/// Google 地球是否会飞到 NetworkLinkControl 中的 LookAt 或 Camera 的视图
					/// <param name="flyToView">bool值</param>
					/// </summary>
					ev_void setFlyToView(ev_bool flyToView);
					/// <summary>
					/// 下载kml资源到本地
					/// </summary>
					ev_bool downloadKmlFile();

				};
			}
		}
	}
}

#endif
