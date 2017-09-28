#ifndef EARTHVIEW_WORLD_SPATIAL_EVLASXGServiceCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_EVLASXGServiceCONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"
#include "core/variant.h"
#include "core/string_array.h"
#include "spatialdatabase/fields.h"
#include "spatialdatabase/datametainfo.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatialdatabase/queryfilter.h"
#include "featurevector.h"


using namespace EarthView::World::Spatial::GeoDataset;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class EVLasXGServiceConnection;
				class EVLasXGServiceConnectionImp;

		

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL EVLasXGServiceConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
			{
				friend class CWebManager;

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVLasXGServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~EVLasXGServiceConnection();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setConnectionImp(EarthView::World::Spatial::Download::ConnectionImp* ref_pImp);

				/// <summary>
				/// 断开与web服务器的连接
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void  closeConnect();

				/// <summary>
				/// 连接web服务器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void openConnect();

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
				virtual ev_int32 readDem(_in const EVString& servicename,_in const EVString& url
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
				virtual ev_int32 getFeatures(_in const EVString& servicename, _in ev_int32 type, _out EVLasFeatureVector& featurevector);
			protected:
				EVLasXGServiceConnection();

			private:
				C_DISABLE_COPY(EVLasXGServiceConnection);
				EVLasXGServiceConnectionImp* mpImp;
			};

			class EV_DOWNLOAD_DLL EVLasXGServiceConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
			{
			public:
				EVLasXGServiceConnectionImp();
				virtual ~EVLasXGServiceConnectionImp();
				
				/// <summary>
				/// 读取初始化信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readInitData(_in const EVString& servicename,_out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;

				/// <summary>
				/// 读取瓦块流信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readTileData(_in const EVString& servicename,_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;

				/// <summary>
				/// 读取DEM信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 readDem(_in const EVString& servicename,_in const EVString& levelrowcols
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;

				/// <summary>
				/// 读取WFS元数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 getWFSMetaData(_in const EVString& servicename,_out CDataMetaInfo& metadata) = 0;
				
				/// <summary>
				/// 读取字段数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 getFields(_in const EVString& servicename,_out CFields& fields) = 0;

				/// <summary>
				/// 读取要素数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>失败返回-1</returns>
				virtual ev_int32 getFeatures(_in const EVString& servicename, _in ev_int32 type, _out EVLasFeatureVector& featurevector) = 0;

			protected:
			private:
			};

		}}}}
#endif