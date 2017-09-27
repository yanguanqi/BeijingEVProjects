#ifndef MeshXGServiceCONNECTION_SOAP_H_
#define MeshXGServiceCONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/meshxgserviceconnection.h"
#include "spatialdatabase/datametainfo.h"
#include "download/featurevector.h"

using namespace EarthView::World::Spatial::GeoDataset;
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class MeshXGServiceServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL MeshXGServiceConnectionImp_soap : public EarthView::World::Spatial::Download::MeshXGServiceConnectionImp
				{
				public:
					MeshXGServiceConnectionImp_soap();
					~MeshXGServiceConnectionImp_soap();
					
				

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
					/// 读取WFS元数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 getWFSMetaData(_in const EVString& servicename,_out CDataMetaInfo& metadata);

					/// <summary>
					/// 读取字段数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 getFields(_in const EVString& servicename,_out CFields& fields);

					/// <summary>
					/// 读取要素数据
					/// </summary>
					/// <param name=""></param>
					/// <returns>失败返回-1</returns>
					virtual ev_int32 getFeatures(_in const EVString& servicename, _in CQueryFilter& filter, _out EarthView::World::Spatial::Download::ModelFeatureVector& featurevector);


				protected:
					MeshXGServiceServiceSoapBindingProxyPool* mpPool;
				private:
				};
			}}}}
#endif