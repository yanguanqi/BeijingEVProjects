#ifndef EARTHVIEW_WORLD_SPATIAL_GLOBESERVICECONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_GLOBESERVICECONNECTION_H
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/downloadglobal.h"
#include "download/connectionimpplugin.h"
#include "core/variant.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class GlobeServiceConnection;
				class GlobeServiceConnectionImp;

			class EV_DOWNLOAD_DLL DEMFile : public EarthView::World::Spatial::Download::CBinaryWebData
			{
				friend class GlobeServiceConnection;
			public:
				DEMFile(EVString& filename, ev_int32 nlevel, ev_int32 row, ev_int32 col);

				~DEMFile();
			public:
				__WebIn EVString mFileName;
				__WebIn ev_int32 mLevel;
				__WebIn ev_int32 mRow;
				__WebIn ev_int32 mCol;
			private:
				C_DISABLE_COPY(DEMFile);
			};

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL KMLFile : public EarthView::World::Spatial::Download::CBinaryWebData
			{
				friend class GlobeServiceConnection;
			public:
				KMLFile(EVString& filename, EVString& dataname);

				~KMLFile();

			public:
				__WebIn EVString mFileName;
				__WebIn EVString mDataName;
			private:
				C_DISABLE_COPY(KMLFile);
			};

			class EV_DOWNLOAD_DLL ModelDatasetFeatures : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				ModelDatasetFeatures(const EVString& datasetName);
				~ModelDatasetFeatures();

				__WebIn EVString datasetName;

				typedef map<EVString, EarthView::World::Core::CVariant> ModelDatasetFeature;
				typedef map<ev_int32, ModelDatasetFeature>ModelDatasetFeatureMap;
				__WebOut ModelDatasetFeatureMap modelDatasetFeatures;

			protected:
			private:
			};			

			class EV_DOWNLOAD_DLL ModelResource : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				ModelResource();
				~ModelResource();

				ev_int32 resID;
				ev_int32 resType;
				ev_int32 refCount;
				EarthView::World::Core::MemoryDataStreamPtr resData;
				EVString resFileName;
			protected:
			private:
			};

			class EV_DOWNLOAD_DLL ModelTemplateResource : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				ModelTemplateResource(){};
				~ModelTemplateResource(){};

				ev_int32 res_refcount;
				EarthView::World::Core::MemoryDataStreamPtr res_data;
				EVString res_filename;
				ev_int32 res_type;
				ev_int32 res_id;
				ev_int32 instref_submeshindex;
				ev_int32 instref_changefromtemplate;
			protected:
			private:
			};

			class EV_DOWNLOAD_DLL OrigTexture : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				OrigTexture(EVString& datasetName, ev_int32 entID);
				~OrigTexture();

				__WebIn EVString datasetName;
				__WebIn ev_int32 entID;

				__WebInOut vector<EarthView::World::Spatial::Download::ModelResource> resources;
			protected:
			private:
			};

			class EV_DOWNLOAD_DLL ResourceObject : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				ResourceObject(EVString& datasetname, ev_int32 entID, ev_bool needOrigTexture);
				~ResourceObject();

				__WebIn EVString datasetName;
				__WebIn ev_int32 entID;
				__WebIn ev_bool needOrigTexture;

				__WebInOut vector<ModelResource> resources;
				__WebInOut ev_int32 resID;
			protected:
			private:
			};

			class EV_DOWNLOAD_DLL TemplateResourceObject : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				TemplateResourceObject(EVString& datasetname, ev_int32 entID, ev_bool needOrigTexture);
				~TemplateResourceObject();

				__WebIn EVString datasetName;
				__WebIn ev_int32 entID;
				__WebIn ev_bool needOrigTexture;

				__WebInOut vector<ModelTemplateResource> resources;
				__WebInOut ev_int32 resID;
			protected:
			private:
			};
			
			class EV_DOWNLOAD_DLL MeshObject  : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				MeshObject(EVString& datasetname, ev_int32 entID);
				~MeshObject();

				__WebInOut EVString datasetname;
				__WebInOut ev_int32 entID;

				__WebOut ev_int32 meshID;
				__WebOut EVString meshName;
				__WebOut EarthView::World::Core::MemoryDataStreamPtr meshData;
				__WebOut EVString entName;
				__WebOut ev_bool fromTemplate;
				__WebOut double posX;
				__WebOut double posY;
				__WebOut double posZ;
				__WebOut double scaleX;
				__WebOut double scaleY;
				__WebOut double scaleZ;
				__WebOut double rotationX;
				__WebOut double rotationY;
				__WebOut double rotationZ;
				__WebOut double rotationW;
			protected:
			private:
			};

			class EV_DOWNLOAD_DLL TemplateMeshObject  : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				TemplateMeshObject(ev_int32 entID):entID(entID){};
				TemplateMeshObject(){entID = -1;}
				~TemplateMeshObject(){};

				__WebInOut ev_int32 entID;

				__WebOut ev_real64 meshinst_maxdistance;
				__WebOut ev_real64 meshinst_mindistance;
				__WebOut ev_real64 meshinst_rotationx;
				__WebOut ev_real64 meshinst_rotationy;
				__WebOut ev_real64 meshinst_rotationz;
				__WebOut ev_real64 meshinst_rotationw;
				__WebOut ev_real64 meshinst_scalex;
				__WebOut ev_real64 meshinst_scaley;
				__WebOut ev_real64 meshinst_scalez;
				__WebOut ev_real64 meshinst_posx;
				__WebOut ev_real64 meshinst_posy;
				__WebOut ev_real64 meshinst_posz;
				__WebOut ev_int32 meshinst_instancenum;
				__WebOut ev_int32 meshinst_id;
				__WebOut ev_int32 meshinst_tmplid;
				__WebOut EVString meshinst_nodecode;
				__WebOut EVString meshinst_aliasname;

				__WebOut ev_int32 meshtmpl_refcount;
				__WebOut EarthView::World::Core::MemoryDataStreamPtr meshtmpl_data; 
				__WebOut EVString meshtmpl_filename;
				__WebOut EVString meshtmpl_name;
				__WebOut ev_int32 meshtmpl_id;

			protected:
			private:
			};


			class EV_DOWNLOAD_DLL EntityObject : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				EntityObject(EVString& datasetname, ev_int32 entID);
				~EntityObject();

				__WebIn EVString datasetname;
				__WebIn ev_int32 entID;

				__WebOut MeshObject meshObject;
				typedef vector<ModelResource> ModelResources;
				__WebInOut ModelResources resources;
			protected:
			private:
				C_DISABLE_COPY(EntityObject);
			};

			class EV_DOWNLOAD_DLL TemplateEntityObject : public EarthView::World::Core::CAllocatedObject
			{
				friend class GlobeServiceConnection;
			public:
				TemplateEntityObject(EVString& datasetname, ev_int32 entID){this->datasetname = datasetname; templateMeshObject.meshtmpl_name = datasetname; this->entID = entID;};
				~TemplateEntityObject(){};

				__WebIn EVString datasetname;
				__WebIn ev_int32 entID;

				__WebOut TemplateMeshObject templateMeshObject;
				typedef vector<ModelTemplateResource> ModelTemplateResources;
				__WebInOut ModelTemplateResources resources;
			protected:
			private:
				C_DISABLE_COPY(TemplateEntityObject);
			};

			//////////////////////////////////////////////////////////////////////////
			//网络数据库：通过web提供数据库查询功能，客户端向服务器端发送sql查询语句，服务器端返回查询结果。
			//网络数据库字段类型
			enum WebDBFieldType  
			{
				WebDBType_Unknown				= 0,
				WebDBType_Bool					= 1,
				WebDBType_UInt32				= 2,
				WebDBType_Int32				= 3,
				WebDBType_UInt64				= 4,
				WebDBType_Int64				= 5,
				WebDBType_Real32				= 6,
				WebDBType_Real64				= 7,
				WebDBType_String				= 8,
				WebDBType_WString				= 9,
				WebDBType_Time					= 10,
				WebDBType_MemoryDataStream		= 11,
				WebDBType_UserType            	=12

			};

			//网络数据库字段
			class EV_DOWNLOAD_DLL WebDBFieldValue : public EarthView::World::Core::CAllocatedObject
			{
			public:
				WebDBFieldValue();
				WebDBFieldValue(WebDBFieldType type);
				~WebDBFieldValue();

				WebDBFieldType type;
				EarthView::World::Core::CVariant value;     
			protected:
			private:
			};

			//网络模型数据库记录列名
			class EV_DOWNLOAD_DLL WebDBFieldName : public EarthView::World::Core::CAllocatedObject
			{
			public:
				WebDBFieldName();
				~WebDBFieldName();
				ev_int32 count() const;
				const EVString& fieldName(ev_int32 index) const;
				ev_void addFieldName(const EVString& name);
			protected:
			private:
				vector<EVString> mFieldNames;
			};

			//网络数据库一条记录
			class EV_DOWNLOAD_DLL WebDBItem : public EarthView::World::Core::CAllocatedObject
			{
			public:
				WebDBItem();
				~WebDBItem();
				ev_int32 columnCount() const;
				const WebDBFieldValue& fieldValue(ev_int32 index) const;
				ev_void addWebDBFieldValue(const WebDBFieldValue& fieldValue);
			protected:
			private:
				vector<WebDBFieldValue> mWebDBFields;
			};

			//网络数据库查询结果
			class EV_DOWNLOAD_DLL WebDBQueryResult : public EarthView::World::Core::CAllocatedObject
			{
			public:
				WebDBQueryResult();
				~WebDBQueryResult();
				WebDBFieldName& webDBFieldName();
				ev_int32 resultCount() const;
				const WebDBItem& item(ev_int32 index) const;
				ev_void addWebDBItem(const WebDBItem& item);
			protected:
			private:
				WebDBFieldName mWebDBFieldName;
				vector<WebDBItem> mWebDBItems;
			};

			//网络模型数据库查询参数
			class EV_DOWNLOAD_DLL WebModelDBQueryParam
			{
			public:
				EVString datasetname;		//数据集名称
				EVString sqlscript;		//sql语句
			};

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL GlobeServiceConnection : public EarthView::World::Spatial::Download::CWebServiceConnection
			{
				friend class CWebManager;

			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				GlobeServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~GlobeServiceConnection();

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
				ev_int32 getKMLFile(KMLFile& kmlfile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getDEMFile(DEMFile& demfile);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getModelDatasetFearures(ModelDatasetFeatures& features);
				ev_int32 getModelDatasetFearures(const EVString& datasetName, ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
				ev_int32 getModelDatasetFearures(const WebModelDBQueryParam& queryParam,  ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);

				ev_int32 getModelTemplateDatasetFearures(ModelDatasetFeatures& features);
				ev_int32 getModelTemplateDatasetFearures(const EVString& datasetName, ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
				ev_int32 getModelTemplateDatasetFearures(const WebModelDBQueryParam& queryParam,  ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
				/// <summary>
				/// 获取实体对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getEntityObject(EarthView::World::Spatial::Download::EntityObject& entityObject);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getTemplateEntityObject(EarthView::World::Spatial::Download::TemplateEntityObject& entityObject);

				/// <summary>
				/// 获取mesh
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getMesh(EarthView::World::Spatial::Download::MeshObject& meshObject);

				/// <summary>
				/// 获取资源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getResource(EarthView::World::Spatial::Download::ResourceObject& resObject);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getResourceByID(ResourceObject& resObject);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getTemplateResourceByID(TemplateResourceObject& resObject);

				/// <summary>
				/// 获取大纹理
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getOrigTexture(EarthView::World::Spatial::Download::OrigTexture& origTexture);

				/// <summary>
				/// 模型数据库查询
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 modelDBQuery(const WebModelDBQueryParam& queryParam, WebDBQueryResult& result);
			protected:
				GlobeServiceConnection();

			private:
				C_DISABLE_COPY(GlobeServiceConnection);
				GlobeServiceConnectionImp* mpImp;
			};

			class EV_DOWNLOAD_DLL GlobeServiceConnectionImp : public EarthView::World::Spatial::Download::ConnectionImp
			{
			public:
				GlobeServiceConnectionImp();
				virtual ~GlobeServiceConnectionImp();
				virtual ev_int32 getKMLFile(KMLFile& kmlfile) = 0;
				virtual ev_int32 getDEMFile(DEMFile& demfile) = 0;
				virtual ev_int32 getModelDatasetFearures(const EVString& datasetName, ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures) = 0;
				virtual ev_int32 getModelTemplateDatasetFearures(const EVString& datasetName, ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures) = 0;

				virtual ev_int32 getEntityObject(EntityObject& entityObject) = 0;
				virtual ev_int32 getTemplateEntityObject(EarthView::World::Spatial::Download::TemplateEntityObject& entityObject) = 0;
				virtual ev_int32 getMesh(MeshObject& meshObject) = 0;
				virtual ev_int32 getResource(ResourceObject& resObject) = 0;
				virtual ev_int32 getResourceByID(ResourceObject& resObject) = 0;
				virtual ev_int32 getTemplateResourceByID(TemplateResourceObject& resObject) = 0;
				virtual ev_int32 getOrigTexture(OrigTexture& origTexture) = 0;
				virtual ev_int32 modelDBQuery(const WebModelDBQueryParam& queryParam, WebDBQueryResult& result) = 0;
				
			protected:
			private:
			};

		}}}}
#endif