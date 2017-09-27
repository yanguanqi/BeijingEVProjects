#ifndef EARTHVIEW_WORLD_SPATIAL_GEOMETRYSERVICECONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_GEOMETRYSERVICECONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class GeometryServiceConnection;
				class GeometryServiceImp;

			class EV_DOWNLOAD_DLL Buffer : public CBinaryWebData
			{

			public:
				Buffer(EVString& map, 
					vector<Geometry*> geometrylist, 
					ev_real64 distance, 
					GeometryFormat geometry_format, 
					ev_bool _union);

				~Buffer();
			public:
				__WebIn EVString mMap;
				__WebIn vector<Geometry*> geometryList;
				__WebIn ev_real64 mDistance;
				__WebIn GeometryFormat mGeometry_Format;
				__WebIn ev_bool mUnion;

			__WebOut vector<Geometry*> response;
			protected:
			private:
				C_DISABLE_COPY(Buffer);
			};

			class EV_DOWNLOAD_DLL GeometryServiceData : public EarthView::World::Core::CAllocatedObject
			{

			public:
				GeometryServiceData();
				GeometryServiceData(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				virtual ~GeometryServiceData();
			public:
				__WebIn EVString mmap;
				__WebIn Geometry gA;
				__WebIn Geometry gB;

				__WebOut ev_bool response;
			private:
				C_DISABLE_COPY(GeometryServiceData);
			};

			class EV_DOWNLOAD_DLL Contains : public GeometryServiceData 
			{

			public:
				Contains(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Contains();
			public:
			protected:
			private:
				C_DISABLE_COPY(Contains);
			};

			class EV_DOWNLOAD_DLL Crosses : public GeometryServiceData 
			{
				friend class GeometryServiceConnection;

			public:
				Crosses(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Crosses();
			public:
			private:
				C_DISABLE_COPY(Crosses);
			};

			class EV_DOWNLOAD_DLL Disjoint : public GeometryServiceData 
			{

			public:
				Disjoint(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Disjoint();
			public:
			private:
				C_DISABLE_COPY(Disjoint);
			};

			class EV_DOWNLOAD_DLL Distance : public GeometryServiceData 
			{

			public:
				Distance(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Distance();
			public:
				__WebOut ev_real64 response;
			private:
				C_DISABLE_COPY(Distance);
			};

			class EV_DOWNLOAD_DLL Intersects : public GeometryServiceData 
			{

			public:
				Intersects(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Intersects();
			public:
			private:
				C_DISABLE_COPY(Intersects);
			};

			class EV_DOWNLOAD_DLL Overlaps : public GeometryServiceData 
			{

			public:
				Overlaps(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Overlaps();
			public:

 			private:
				C_DISABLE_COPY(Overlaps);
			};

			class EV_DOWNLOAD_DLL Touches : public GeometryServiceData 
			{

			public:
				Touches(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Touches();
			public:
			private:
				C_DISABLE_COPY(Touches);
			};

			class EV_DOWNLOAD_DLL Within : public GeometryServiceData 
			{

			public:
				Within(EVString& map, 
					Geometry& geometrayA, 
					Geometry& geometrayB);

				~Within();
			public:
			private:
				C_DISABLE_COPY(Within);
			};
			///////////////////////////////////////////////////////////////////////////
			class GeometryServiceImp;
			class EV_DOWNLOAD_DLL GeometryServiceConnection : public CWebServiceConnection
			{
				friend class CWebManager;


			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				GeometryServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~GeometryServiceConnection();

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
		
				ev_int32 isBuffer(Buffer& buffer);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 isContains(Contains& contains);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 isCrosses(Crosses& crosses);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32  isDisjoint(Disjoint& disjoint);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getDistance(Distance& distance);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 isIntersects(Intersects& intersects);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 isOverlaps(Overlaps& overlaps);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 isTouches(Touches& touches);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 isWithin(Within& within);

			protected:
				GeometryServiceConnection();

			private:
				friend class GeometryServiceImp;
				C_DISABLE_COPY(GeometryServiceConnection);
				GeometryServiceImp* mpImp;
			};

			///////////////////////////////////////////////////////////////////////////
			//GeometryService的不同实现方法，soap和post
			class EV_DOWNLOAD_DLL GeometryServiceImp : public ConnectionImp
			{
			public:
				GeometryServiceImp();
				virtual ~GeometryServiceImp();
				virtual ev_int32 isBuffer(Buffer& buffer) = 0;
				virtual ev_int32 isContains(Contains& contains) = 0;
				virtual ev_int32 isCrosses(Crosses& crosses) = 0;
				virtual ev_int32  isDisjoint(Disjoint& disjoint) = 0;
				virtual ev_int32 getDistance(Distance& distance) = 0;
				virtual ev_int32 isIntersects(Intersects& intersects) = 0;
				virtual ev_int32 isOverlaps(Overlaps& overlaps) = 0;
				virtual ev_int32 isTouches(Touches& touches) = 0;
				virtual ev_int32 isWithin(Within& within) = 0;
			protected:
			private:
			};
		}}}}
#endif