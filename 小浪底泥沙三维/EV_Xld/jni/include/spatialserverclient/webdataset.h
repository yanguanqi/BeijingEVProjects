#ifndef EARTHVIEW_WORLD_SPATIAL_WEBDATASETS_H
#define EARTHVIEW_WORLD_SPATIAL_WEBDATASETS_H
#include "spatialinterface/idataset.h"
#include "spatialserverclient/spatialserverclientexports.h"
// using namespace EarthView::World::Spatial::GeoDataset;
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 网络数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebDataset
				:public EarthView::World::Spatial::GeoDataset::IDataset
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWebDataset()
				{}
				/// <summary>
                /// 获取数据集类型
                /// </summary>
                /// <returns>数据集类型</returns>
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const{return mnType;}
				
				/// <summary>
                /// 获取数据集名称
                /// </summary>
                /// <returns>数据集名称</returns>
				virtual EVString getName() const{return mstrDatasetName;}
				
				/// <summary>
                /// 获取数据版本
                /// </summary>
                /// <returns>数据版本</returns>
				virtual ev_uint64 getDataVersion() const{return 0;}
				
				/// <summary>
                /// 获取数据集描述
                /// </summary>
                /// <returns>数据描述信息</returns>
				virtual EVString getDescription() const{return "";}
					
				/// <summary>
                /// 获取数据更新时间
                /// </summary>
                /// <returns>数据更新时间</returns>
				virtual EVString getUpdateTime() const{return "";}
					
				/// <summary>
                /// 是否含有子数据集
                /// </summary>
                /// <returns>false</returns>
				virtual ev_bool hasSubDataset() const{return false;}
					
				/// <summary>
                /// 获取数据源
                /// </summary>
                /// <returns>数据源对象指针</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const{return mpParent;}
					
				/// <summary>
                /// 是否可编辑
                /// </summary>
                /// <returns>false</returns>
				virtual ev_bool canEdit() const{return false;}
					
				/// <summary>
                /// 是否正在编辑
                /// </summary>
                /// <returns>false</returns>
				virtual ev_bool isEditing() const{return false;}
					
				/// <summary>
                /// 开始编辑
                /// </summary>
				/// <param name="withUndo">是否撤销</param>
                /// <returns>false</returns>
				virtual ev_bool startEditing(_in ev_bool withUndo){return false;}
					
				/// <summary>
                /// 停止编辑
                /// </summary>
				/// <param name="isSave">是否保存</param>
                /// <returns>false</returns>
				virtual ev_bool stopEditing(_in ev_bool isSave){return false;}
					
				/// <summary>
                /// 是否处于编辑状态
                /// </summary>
                /// <returns>false</returns>
				virtual ev_bool isBeginEditingOperation(){return false;}
					
				/// <summary>
                /// 开始编辑
                /// </summary>
                /// <returns>false</returns>
				virtual ev_bool beginEditingOperation(){return false;}
					
				/// <summary>
                /// 停止编辑
                /// </summary>
				/// <param name="isConfirm">是否一定终止</param>
                /// <returns>false</returns>
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm){return false;}
			ev_private:
				CWebDataset(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				CWebDataset(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type,_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_source,_in const EVString& name);


				EVString mstrDatasetName;
				EarthView::World::Spatial::GeoDataset::EVDatasetType mnType;
				EarthView::World::Spatial::GeoDataset::IDataSource* mpParent;

				friend class CEVSpatialServer;
			};
		}
	}
}
#endif

