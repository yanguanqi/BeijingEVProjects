#ifndef	EARTHVIEW_WORLD_SPATIAL_CEVSERVERCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_CEVSERVERCONNECTION_H
#include "spatialserverclient/serverconnection.h"
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// EarthView空间服务连接类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CEVServerConnection
				:public EarthView::World::Spatial::CServerConnection
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CEVServerConnection();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CEVServerConnection();

				/// <summary>
				/// 设置所有连接都打开
				/// </summary>
				/// <returns></returns>
				ev_void setAllServiceOpen();

				/// <summary>
				/// 设置关闭所有连接
				/// </summary>
				/// <returns></returns>
				ev_void setAllServiceClose();

				/// <summary>
				/// 设置元数据服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setMetaServiceOpen(_in ev_bool value);
				
				/// <summary>
				/// 设置地理编码服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setGeocodeServiceOpen(_in ev_bool value);
				
				/// <summary>
				/// 设置GLOBE服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setGlobeServiceOpen(_in ev_bool value);

				/// <summary>
				/// 设置GLOBE服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setObqServiceOpen(_in ev_bool value);

				/// <summary>
				/// 设置GLOBE服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setMeshXServiceOpen(_in ev_bool value);

				/// <summary>
				/// 设置GLOBE服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setMeshXGServiceOpen(_in ev_bool value);

				ev_void setModelServiceOpen(_in ev_bool value);
				
				ev_void setVector3DServiceOpen(_in ev_bool value);

				/// <summary>
				/// 设置几何服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setGeometryServiceOpen(_in ev_bool value);
				
				/// <summary>
				/// 设置WMTS服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setWMTSServiceOpen(_in ev_bool value);
				
				/// <summary>
				/// 设置WMS服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setWMSServiceOpen(_in ev_bool value);
				
				/// <summary>
				/// 设置WFS服务打开状态
				/// </summary>
				/// <param name="value">true打开/false关闭</param>
				/// <returns></returns>
				ev_void setWFSServiceOpen(_in ev_bool value);

				/// <summary>
				/// 获取元数据服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getMetaServiceOpenValue() const;

				/// <summary>
				/// 获取地理编码服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getGeocodeServiceOpenValue() const;

				/// <summary>
				/// 获取Globe服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getObqServiceOpenValue() const;

				/// <summary>
				/// 获取Globe服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getMeshXServiceOpenValue() const;

				/// <summary>
				/// 获取Globe服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getMeshXGServiceOpenValue() const;


				ev_bool getModelServiceOpenValue() const;
				
				ev_bool getVector3DServiceOpenValue() const;

				ev_void setOSGBServiceOpen(_in ev_bool value);
				ev_bool getOSGBServiceOpenValue() const;

				ev_void setSTREETVIEWServiceOpen(_in ev_bool value);
				ev_bool getSTREETVIEWServiceOpenValue() const;

	
				ev_void setLasServiceOpen(_in ev_bool value);
				ev_bool getLasServiceOpenValue() const;


				ev_void setLasXGServiceOpen(_in ev_bool value);
				ev_bool getLasXGServiceOpenValue() const;

				/// <summary>
				/// 获取Globe服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getGlobeServiceOpenValue() const;
				
				/// <summary>
				/// 获取几何服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getGeometryServiceOpenValue() const;
				
				/// <summary>
				/// 获取WMTS服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getWMTSServiceOpenValue() const;
				
				/// <summary>
				/// 获取WMS服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getWMSServiceOpenValue() const;

				/// <summary>
				/// 获取WFS服务是否打开
				/// </summary>
				/// <returns>true打开/false关闭</returns>
				ev_bool getWFSServiceOpenValue() const;
				 
			ev_private:
				CEVServerConnection(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				ev_bool mbMetaServiceOpen;
				ev_bool mbGeocodeServiceOpen;
				ev_bool mbGlobeServiceOpen;
				ev_bool mbGeometryServiceOpen;
				ev_bool mbWMTSServiceOpen;
				ev_bool mbWMSServiceOpen;
				ev_bool mbWFSServiceOpen;
				ev_bool mbObqServiceOpen;
				ev_bool mbMeshXServiceOpen;
				ev_bool mbMeshXGServiceOpen;
				ev_bool mbVector3DServiceOpen;
				ev_bool mbModelServiceOpen;
				ev_bool mbLasServiceOpen;
				ev_bool mbLasXGServiceOpen;
				ev_bool mbOSGBServiceOpen;
				ev_bool mbSTREETVIEWServiceOpen;
			};

		}
	}
}
#endif
