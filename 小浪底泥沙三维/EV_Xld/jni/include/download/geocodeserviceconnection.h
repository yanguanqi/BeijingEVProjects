#ifndef EARTHVIEW_WORLD_SPATIAL_GEOCODESERVICECONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_GEOCODESERVICECONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class GeoCodeServiceConnection;
				class GeoCodeServiceImp;

			class	EV_DOWNLOAD_DLL GeoCodeFile : public EarthView::World::Spatial::Download::CBinaryWebData
			{

			public:
				GeoCodeFile(EVString& placename, EVString& dataname);
				~GeoCodeFile();
			public:
				__WebIn EVString mPlacename;
				__WebIn EVString mDataname;
			protected:
			private:
				C_DISABLE_COPY(GeoCodeFile);
			};

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL Placename : public EarthView::World::Core::CAllocatedObject
			{

			public:
				Placename(EVString& layerName, EVString& keyWord, EVString& nameField, ev_bool blurQuery, ev_int32 limitCount);

				~Placename();
			public:
				__WebIn EVString mLayerName;
				__WebIn EVString mKeyWord;
				__WebIn EVString mNameField;
				__WebIn ev_bool mBlurQuery;
				__WebIn ev_int32 mLimitCount;
				__WebOut EVString mName;
			private:
				C_DISABLE_COPY(Placename);
			};

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL GeoCodeServiceConnection : public CWebServiceConnection
			{
				friend class CWebManager;


			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				GeoCodeServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~GeoCodeServiceConnection();

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
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getGeoCodeFile(GeoCodeFile& pGeoCodeFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 queryPlacename(Placename& pPlaceName);

			protected:
				GeoCodeServiceConnection();
			private:
				C_DISABLE_COPY(GeoCodeServiceConnection);
				GeoCodeServiceImp* mpImp;
			};

			class EV_DOWNLOAD_DLL GeoCodeServiceImp : public ConnectionImp
			{
			public:
				GeoCodeServiceImp();
				virtual ~GeoCodeServiceImp();
				virtual ev_int32 getGeoCodeFile(GeoCodeFile& pGeoCodeFile) = 0;
				virtual ev_int32 queryPlacename(Placename& pPlaceName) = 0;
			protected:
			private:
			};

		}}}}
#endif