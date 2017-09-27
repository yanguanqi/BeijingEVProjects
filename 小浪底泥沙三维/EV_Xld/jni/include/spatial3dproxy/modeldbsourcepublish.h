#ifndef EV_SPATIAL_3DPROXY_MODEL_DB_SOURCE_PUBLISH
#define EV_SPATIAL_3DPROXY_MODEL_DB_SOURCE_PUBLISH
#include "spatial3dengine/modelpublish.h"


namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			class  CModelDBSourcePublishTool : public EarthView::World::Spatial3D::CModelPublishTool_DBDesSource
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CModelDBSourcePublishTool(_in EarthView::World::Core::CNameValuePairList *pList){};
			public:
				/// <summary>
				///  构造函数
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				CModelDBSourcePublishTool();

				/// <summary>
				///  析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				~CModelDBSourcePublishTool();

				/// <summary>
				/// 设置源数据源句柄
				/// </summary>
				/// <param name="ref_srcdatasourceptr">数据源指针</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setSrcDataSourcePtr(EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_srcdatasourceptr);

				EarthView::World::Spatial3D::ModelIdAndNameMap getPulishedModelIdAndNameMap();
			protected:

				EarthView::World::Spatial3D::Dataset::CModelDataSource* mpSrcDataSourcePtr;

				/// <summary>
				/// 获取源数据源中属性表表名和字段结构列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceAttrNameAndAttrStructVector(AttrNameAndFieldsMap& attrnameandfieldsmap);

				/// <summary>
				/// 获取源数据源中属性表表名和节点名称列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceNodecodeNameAndAttrNameVector(NodeCodeAndAttrNameMap& nodecodeandattrnamemap);


				/// <summary>
				/// 获取源数据源中的模型名称和nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceNodecodeAndModelNameVector(_in vector<EVString>& nodecodes, _out NodeCodeAndModelNameMap& nodecodeandmodelnamemap);

				/// <summary>
				/// 开始发布数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool  _startPublish();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool startPublishPrivate(ModelIDList& modellist);
				ev_bool startPublishPrivate_Update(ModelIDList& modellist);

				/// <summary>
				/// 处理冲突模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_void _processClashModel();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool startPublishEffectData();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool processRefTable();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_void _clear();

			private:
				map<ev_int32, ev_int32> mOldEffectIDAndNewEffectIDMap;
			};

		}}}
#endif
