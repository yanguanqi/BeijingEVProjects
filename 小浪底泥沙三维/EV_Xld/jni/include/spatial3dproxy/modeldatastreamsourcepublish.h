#ifndef EV_SPATIAL_3DPROXY_MODEL_DATASTREAM_SOURCE_PUBLISH
#define  EV_SPATIAL_3DPROXY_MODEL_DATASTREAM_SOURCE_PUBLISH
#include "core/stdheaders.h"
#include "spatial3dengine/modelpublish.h"
#include "graphic/mesh.h"
#include "graphic/texture.h"
#include "graphic/material.h"
#include "spatial3ddataset/meshtemplatedataset.h"
#include "spatial3dproxy/spatial3dproxy_config.h"

namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{

			class  EV_SPATIAL3DPROXY_DLL CModelDataStreamSourcePublishTool : public EarthView::World::Spatial3D::CModelPublishTool_DBDesSource
			{
			ev_private:
				//一个模型数据
				class PublishData
				{	
				public:
					EarthView::World::Core::MemoryDataStreamPtr mpMesh;
					EarthView::World::Core::MemoryDataStreamPtr mpSkeleton; 
					EarthView::World::Core::MemoryDataStreamPtr mpAnimation; 
					vector<EarthView::World::Core::MemoryDataStreamPtr> mpTextures; 
					vector<EarthView::World::Core::MemoryDataStreamPtr> mpMaterials; 

					PublishData()
					{

					}
				};

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CModelDataStreamSourcePublishTool(_in EarthView::World::Core::CNameValuePairList *pList){};

			public:
				/// <summary>
				///  构造函数
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				CModelDataStreamSourcePublishTool();

				/// <summary>
				///  析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				~CModelDataStreamSourcePublishTool();

				ev_private:
				/// <summary>
				/// 添加需要导出到模板库的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void addPublishData(const CModelData& publishData);

				ev_uint32 getCurrentMeshID();

			protected:
				/// <summary>
				/// 导入前预处理
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool _preProcessing();

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
				virtual ev_void _clear();
			private:	
				vector<EVString> mModelNames;
				EVString mAttrTableName;
				EarthView::World::Spatial::GeoDataset::CFields* mpAttrTableFields;
				EarthView::World::Spatial::GeoDataset::CFields* mpDefaultAttrTableFields;
				EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* mpDesDataset;

				//<mesh>
				list<CModelData> mPublishDatas;
				vector<int> mPublishedModelIds;
				ev_uint32 mCurrentMeshID;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void writeMesh(CModelData& publishData);
			};
		}
	}
}
#endif