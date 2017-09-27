#ifndef EVLASSERVICECONNECTION_SOAP_H_
#define EVLASSERVICECONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/evlasserviceconnection.h"
#include "download/featurevector.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class EVLasServiceServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL EVLasServiceConnectionImp_soap : public EarthView::World::Spatial::Download::EVLasServiceConnectionImp
				{
				public:
					EVLasServiceConnectionImp_soap();
					~EVLasServiceConnectionImp_soap();
					
				

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

				

					/// <summary>
					/// 读取初始化信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 readInitData(_in const EVString& servicename,_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

					/// <summary>
					/// 读取瓦块流信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 readTileData(_in const EVString& servicename,_in const EVString& url
						, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

					/// <summary>
					/// 读取DEM信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 readDem(_in const EVString& servicename,_in const EVString& levelrowcols
						, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

					/// <summary>
					/// 读取要素数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 getFeatures(_in const EVString& servicename, _in ev_int32 type, _out EarthView::World::Spatial::Download::EVLasFeatureVector& featurevector);

				protected:
				   
					EVLasServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif