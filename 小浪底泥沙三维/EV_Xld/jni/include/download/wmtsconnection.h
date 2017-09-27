#ifndef EARTHVIEW_WORLD_SPATIAL_WMTSCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_WMTSCONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class WMTSConnectionImp;

			class EV_DOWNLOAD_DLL WMTSCapabilities : public EarthView::World::Spatial::Download::CBinaryWebData
			{
			public:
				WMTSCapabilities();
				~WMTSCapabilities();

				__WebOut EVString response;
			protected:
			private:
				C_DISABLE_COPY(WMTSCapabilities)
			};

			class EV_DOWNLOAD_DLL WMTSTile : public EarthView::World::Core::CAllocatedObject
			{
			public:
				WMTSTile(EVString& layer,
				EVString& style,
				EVString& format,
				EVString& tileMatrixSet,
				ev_int32 tileMatrix,
				ev_int32 tileRow,
				ev_int32 tileCol,
				EVString& otherFieldName);
				~WMTSTile();
			public:
				__WebIn EVString layer;
				__WebIn EVString style;
				__WebIn EVString format;
				__WebIn EVString tileMatrixSet;
				__WebIn ev_int32 tileMatrix;
				__WebIn ev_int32 tileRow;
				__WebIn ev_int32 tileCol;
				__WebIn EVString otherFieldName;
				__WebOut map<EVString, EarthView::World::Core::MemoryDataStreamPtr> response;
			protected:
			private:
				C_DISABLE_COPY(WMTSTile)
			};

			class EV_DOWNLOAD_DLL WMTSFeatureInfo : public EarthView::World::Spatial::Download::CBinaryWebData
			{
			public:
				WMTSFeatureInfo(EVString& layer ,
				EVString& tileMatrixSet,
				EVString& tileMatrix,
				ev_uint32& tileRow,
				ev_uint32& tileCol,
				ev_real64& i,
				ev_real64& j,
				EVString& infoFormat);
				~WMTSFeatureInfo();
			public:
				__WebIn EVString layer ;
				__WebIn EVString tileMatrixSet;
				__WebIn EVString tileMatrix;
				__WebIn ev_uint32 tileRow;
				__WebIn ev_uint32 tileCol;
				__WebIn ev_real64 i;
				__WebIn ev_real64 j;
				__WebIn EVString infoFormat;

				__WebOut EVString response;
			protected:
			private:
				C_DISABLE_COPY(WMTSFeatureInfo)
			};

			class EV_DOWNLOAD_DLL TileProperty : public EarthView::World::Spatial::Download::CBinaryWebData
			{
			public:
				TileProperty(EVString& layer,
				ev_int32 nLever,
				ev_int32 nRow,
				ev_int32 nCol,
				EVString& fieldName);
				~TileProperty();
			public:
				__WebIn EVString layer;
				__WebIn ev_int32 nLever;
				__WebIn ev_int32 nRow;
				__WebIn ev_int32 nCol;
				__WebIn EVString fieldName;
			protected:
			private:
				C_DISABLE_COPY(TileProperty)
			};
			///////////////////////////////////////////////////////////////////////////

			class EV_DOWNLOAD_DLL WMTSConnection : public CWebServiceConnection
			{
				friend class CWebManager;
				friend class WMTSConnectionImp;
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				WMTSConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~WMTSConnection();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setConnectionImp(ConnectionImp* ref_pImp);

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
		
				ev_int32 getCapabilities(WMTSCapabilities& capabilities);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getTile(WMTSTile& tile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getFeatureInfo(WMTSFeatureInfo& featureInfo);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getTileProperty(TileProperty& tileProperty);
			protected:
				WMTSConnection();

			private:
				C_DISABLE_COPY(WMTSConnection);
				WMTSConnectionImp* mpImp;
			};
			///////////////////////////////////////////////////////////////////////////
			//WMTS的不同实现方法，soap和post
			class EV_DOWNLOAD_DLL WMTSConnectionImp : public ConnectionImp
			{
			public:
				WMTSConnectionImp();
				virtual ~WMTSConnectionImp() = 0;
				virtual ev_int32 getCapabilities(WMTSCapabilities& capabilities) = 0;
				virtual ev_int32 getTile(WMTSTile& tile) = 0;
				virtual ev_int32 getFeatureInfo(WMTSFeatureInfo& featureInfo) = 0;
				virtual ev_int32 getTileProperty(TileProperty& tileProperty) = 0;

			protected:

			private:
			};
		}}}}
#endif