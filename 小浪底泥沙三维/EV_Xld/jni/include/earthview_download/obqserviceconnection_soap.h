#ifndef OBQSERVICECONNECTION_SOAP_H_
#define OBQSERVICECONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/obqserviceconnection.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class ObqServiceServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL ObqServiceConnectionImp_soap : public EarthView::World::Spatial::Download::ObqServiceConnectionImp
				{
				public:
					ObqServiceConnectionImp_soap();
					~ObqServiceConnectionImp_soap();
					
				

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

					virtual ev_int32 getDatasets(_out EarthView::World::Core::CStringArray& names);

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


					virtual ev_int32 readTileDataWithoutMaterial(_in const EVString& servicename,_in const EVString& url
						, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);


					virtual ev_int32 readTileMeshData(_in const EVString& servicename,_in const EVString& url
						, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);


				protected:
					ObqServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif