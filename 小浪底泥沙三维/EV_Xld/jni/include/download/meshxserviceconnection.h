#ifndef EARTHVIEW_WORLD_SPATIAL_MeshXServiceCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_MeshXServiceCONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"
#include "core/variant.h"
#include "core/string_array.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class MeshXServiceConnection;
				class MeshXServiceConnectionImp;

		

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL MeshXServiceConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
			{
				friend class CWebManager;

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				MeshXServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~MeshXServiceConnection();

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

				ev_int32 getDatasets(_out EarthView::World::Core::CStringArray& names);

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


				virtual ev_int32 readTileDataWithoutMaterial(_in const EVString& servicename,_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);


				virtual ev_int32 readTileMeshData(_in const EVString& servicename,_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage);

			protected:
				MeshXServiceConnection();

			private:
				C_DISABLE_COPY(MeshXServiceConnection);
				MeshXServiceConnectionImp* mpImp;
			};

			class EV_DOWNLOAD_DLL MeshXServiceConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
			{
			public:
				MeshXServiceConnectionImp();
				virtual ~MeshXServiceConnectionImp();
				virtual ev_int32 getDatasets(_out EarthView::World::Core::CStringArray& names) = 0;
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


				virtual ev_int32 readTileDataWithoutMaterial(_in const EVString& servicename,_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;


				virtual ev_int32 readTileMeshData(_in const EVString& servicename,_in const EVString& url
					, _out EarthView::World::Core::MemoryDataStreamPtr& streamPackage)=0;
				
				
			protected:
			private:
			};

		}}}}
#endif