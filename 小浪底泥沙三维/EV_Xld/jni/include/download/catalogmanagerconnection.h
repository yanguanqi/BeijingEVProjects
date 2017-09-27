#ifndef EARTHVIEW_WORLD_SPATIAL_CatalogManagerConnection_H
#define EARTHVIEW_WORLD_SPATIAL_CatalogManagerConnection_H
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

				class CatalogManagerConnection;
				class CatalogManagerConnectionImp;

		

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL CatalogManagerConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
			{
				friend class CWebManager;

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CatalogManagerConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CatalogManagerConnection();

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

				ev_int32 queryRecordsByType(const EVString& type,_out EarthView::World::Core::CStringArray& names);
			protected:
				CatalogManagerConnection();

			private:
				C_DISABLE_COPY(CatalogManagerConnection);
				CatalogManagerConnectionImp* mpImp;
			};

			class EV_DOWNLOAD_DLL CatalogManagerConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
			{
			public:
				CatalogManagerConnectionImp();
				virtual ~CatalogManagerConnectionImp();
				virtual ev_int32 queryRecordsByType(const EVString& type,_out EarthView::World::Core::CStringArray& names)=0;

				
			protected:
			private:
			};

		}}}}
#endif