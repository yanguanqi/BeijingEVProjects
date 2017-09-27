#ifndef EARTHVIEW_WORLD_SPATIAL_WFSCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_WFSCONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class WFSConnectionImp;

			class EV_DOWNLOAD_DLL QueryAttribute : public EarthView::World::Core::CAllocatedObject
			{

			public:
				QueryAttribute(EVString& layers, 
					SearchCondition& searchConditions, 
					ev_int32 startRecord, 
					ev_int32 recordCount);
				~QueryAttribute();
			public:
				__WebIn EVString layers;
				__WebIn SearchCondition searchConditions;
				__WebIn ev_int32 startRecord;
				__WebIn ev_int32 recordCount;

				__WebOut RecordSet recordSet;
			protected:
			private:
				C_DISABLE_COPY(QueryAttribute);
			};

			class EV_DOWNLOAD_DLL LayerAttributeValue : public EarthView::World::Core::CAllocatedObject
			{

			public:
				LayerAttributeValue(EVString& query_layers, 
					ev_int32 feature_count, 
					ev_real32 pointX, 
					ev_real32 pointY, 
					EVString& attributeName);
				~LayerAttributeValue();
			public:
				__WebIn EVString query_layers;
				__WebIn ev_int32 feature_count;
				__WebIn ev_real32 pointX;
				__WebIn ev_real32 pointY;
				__WebIn EVString attributeName;
				
				__WebOut EVString response;
			protected:
			private:
				C_DISABLE_COPY(LayerAttributeValue);
			};

			class EV_DOWNLOAD_DLL UniqueFieldValue : public EarthView::World::Core::CAllocatedObject
			{
			public:
				class EV_DOWNLOAD_DLL UniqueFieldValueVector : public EarthView::World::Core::CBaseObject
				{
public:
					typedef vector<EVString> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
				private:
					InternalList mList;
				public:
					UniqueFieldValueVector() {}
					void push_back(EVString &t)
					{
						mList.push_back(t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = mList.begin();
						it = it + pos;
						mList.erase(it);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}
					EVString& operator[](ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					EVString const &operator[](ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					EVString& at(ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					EVString const &at(ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void reserve(ev_size_t count)
					{
						mList.reserve(count);
					}
					void clear()
					{
						mList.clear();
					}
				};

			protected:

			private:
				C_DISABLE_COPY(UniqueFieldValue);
			protected:
			public:
				__WebIn EVString query_layer;
				__WebIn EVString field_name;

				__WebOut UniqueFieldValueVector mValues;
			public:
				UniqueFieldValue(EVString& query_layer, EVString& field_name);
				~UniqueFieldValue();
			};
			
			class EV_DOWNLOAD_DLL LayerFeature : public EarthView::World::Core::CAllocatedObject
			{

			public:
				LayerFeature(EVString& layer,
				ev_int32  feature_id,
				ev_bool hasAttribute,
				ev_bool hasGeometry,
				EVString& attributeNames,
				ev_int32 geometry_format);

				~LayerFeature();
			public:
				__WebIn ev_int32  feature_id;
				__WebIn ev_bool hasAttribute;
				__WebIn ev_bool hasGeometry;
				__WebIn EVString layer;
				__WebIn EVString attributeNames;
				__WebIn GeometryFormat geometryFormat;

				__WebOut Feature feature;
			protected:
			private:
				C_DISABLE_COPY(LayerFeature);
			};

			class EV_DOWNLOAD_DLL SearchGeometry : public CBinaryWebData
			{

			public:
				SearchGeometry(EVString& layer,
					SearchCondition& searchConditions,
					ev_int32 geometry_format);
				~SearchGeometry();
			public:
				__WebIn EVString layer;
				__WebIn SearchCondition searchConditions;
				__WebIn GeometryFormat geometry_format;

				__WebOut vector<Geometry> geometrys;
			protected:
			private:
				C_DISABLE_COPY(SearchGeometry);
			};

			class EV_DOWNLOAD_DLL LayerAllAttribute : public EarthView::World::Core::CAllocatedObject
			{
			public:
				class EV_DOWNLOAD_DLL LayerAllAttributeVector : public EarthView::World::Core::CBaseObject
				{

ev_private:

					typedef vector<EVString> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
				private:
					InternalList mList;
				public:
					LayerAllAttributeVector() {}
					void push_back(EVString &t)
					{
						mList.push_back(t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = mList.begin();
						it = it + pos;
						mList.erase(it);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}
					EVString& operator[](ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					EVString const &operator[](ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					EVString& at(ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					EVString const &at(ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void reserve(ev_size_t count)
					{
						mList.reserve(count);
					}
					void clear()
					{
						mList.clear();
					}
				};

			protected:

			private:
				C_DISABLE_COPY(LayerAllAttribute);
			protected:
				friend class WFSConnectionImp_post;
				friend class WFSConnectionImp_soap;
				LayerAllAttributeVector mAttributes;
			public:
				__WebIn EVString layer;
				__WebIn EVString attributeName;
			public:
				LayerAllAttribute(EVString& layer, EVString& attributeName);
				~LayerAllAttribute();
				const LayerAllAttributeVector* getAttributes() const;
			};
			
			class EV_DOWNLOAD_DLL LayerAttributesByLevelRowCol : public EarthView::World::Core::CAllocatedObject
			{
			public:
				class EV_DOWNLOAD_DLL LayerAttributes : public EarthView::World::Core::CBaseObject
				{

ev_private:
					typedef vector<EVString> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
				private:
					InternalList mList;
				public:
					LayerAttributes() {}
					void push_back(EVString &t)
					{
						mList.push_back(t);
					}
					void remove(ev_size_t pos)
					{
						iterator it = mList.begin();
						it = it + pos;
						mList.erase(it);
					}
					ev_bool empty() const
					{
						return mList.empty();
					}
					EVString& operator[](ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					EVString const &operator[](ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					EVString& at(ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					EVString const &at(ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					ev_size_t size() const
					{
						return mList.size();
					}
					void resize(ev_size_t newSize)
					{
						mList.resize(newSize);
					}
					void reserve(ev_size_t count)
					{
						mList.reserve(count);
					}
					void clear()
					{
						mList.clear();
					}
				};

			protected:

			private:
				C_DISABLE_COPY(LayerAttributesByLevelRowCol);
			protected:
				
			public:
				__WebIn EVString layer;
				__WebIn SRS srs;
				__WebIn ev_int32 nLevel;
				__WebIn ev_int32 nRow;
				__WebIn ev_int32 nCol;
				__WebIn EVString FieldName;
				
				__WebOut LayerAttributes mAttributes;
			public:
				LayerAttributesByLevelRowCol(EVString& layer, SRS srs, ev_int32 nLevel, ev_int32 nRow, ev_int32 nCol, EVString& FieldName);
				~LayerAttributesByLevelRowCol();

			};

			///////////////////////////////////////////////////////////////////////////

			class EV_DOWNLOAD_DLL WFSConnection : public CWebServiceConnection
			{
				friend class CWebManager;
				friend class WFSConnectionImp;

			public:

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				WFSConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~WFSConnection();

				/// <summary>
				/// 设置网络下载插件
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
		
				ev_int32 getQueryAttribute(QueryAttribute& queryAttribute);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getLayerAttributeValue(LayerAttributeValue& layerAttributeValue);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getUniqueFieldValue(UniqueFieldValue& uniqueFieldValue);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getLayerFeature(LayerFeature& layerFeature);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_int32 getSearchGeometry(SearchGeometry& serchGeometry);

			protected:
				WFSConnection();

			private:
				C_DISABLE_COPY(WFSConnection);
				WFSConnectionImp* mpImp;
			};

			//--------------------------------------------------------------------------------------------------
			class EV_DOWNLOAD_DLL WFSConnectionImp : public ConnectionImp
			{
			public:
				WFSConnectionImp();
				virtual ~WFSConnectionImp();
				virtual ev_int32 getQueryAttribute(QueryAttribute& queryAttribute) = 0;
				virtual ev_int32 getLayerAttributeValue(LayerAttributeValue& layerAttributeValue) = 0;
				virtual ev_int32 getUniqueFieldValue(UniqueFieldValue& uniqueFieldValue) = 0;
				virtual ev_int32 getLayerFeature(LayerFeature& layerFeature) = 0;
				virtual ev_int32 getSearchGeometry(SearchGeometry& serchGeometry) = 0;

			protected:
			private:
			};
		}}}}
#endif