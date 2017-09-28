#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATASET_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATASET_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				/// <summary>
				/// 数据源类
				/// </summary>
				class IDataSource;

				/// <summary>
				/// 数据集类型枚举
				/// </summary>
				enum EVDatasetType
				{
					/// <summary>
					/// 未知类型
					/// </summary>
					DT_UNKNOWN					= 0,
					/// <summary>
					/// 矢量要素类数据集
					/// </summary>
					DT_VECTOR_FEATURECLASS		= 1,
					/// <summary>
					/// 矢量数据集合
					/// </summary>
					DT_VECTOR_DATASETS			= 2,
					/// <summary>
					/// 网络数据集
					/// </summary>
					DT_VECTOR_NETWORK			= 3,
					/// <summary>
					/// 海图数据集
					/// </summary>
					DT_VECTOR_CHART				= 4,
					/// <summary>
					/// 标注数据集
					/// </summary>
					DT_VECTOR_ANNOTATION		= 5,

					/// <summary>
					/// 矢量文件型数据集
					/// </summary>
					DT_VECTORFILE_DATASETS		= 6,
					DT_VECTORFILE_FEATURECLASS	= 7,
					DT_VECTORFILE_ANNOTATION	= 8,

					/// <summary>
					/// 栅格数据集
					/// </summary>
					DT_RASTER_DATASET			= 11,
					/// <summary>
					/// 影像波段数据集
					/// </summary>
					DT_RASTER_BAND				= 12,
					/// <summary>
					/// 栅格数据集
					/// </summary>
					DT_DBRASTER_DATASET			= 15,
					/// <summary>
					/// 影像波段数据集
					/// </summary>
					DT_DBRASTER_BAND			= 16,
					/// <summary>
					/// 模板实体数据集
					/// </summary>
					DT_ENTITY_TEMPL_DATASET     = 20,
					/// <summary>
					/// 实体数据集
					/// </summary>
					DT_ENTITY_DATASET			= 21,

					/// <summary>
					/// 模型模板数据集
					/// </summary>
					DT_MESHTEMPLATE_DATASET		= 22,

					/// <summary>
					/// 特效数据集类型
					/// </summary>
					DT_EFFECT_DATASET			= 24,

					/// <summary>
					/// 本地KML数据集集类型
					/// </summary>
				    DT_LOCAL_KML_DATASET		= 26,
					DT_LOCAL_FILE_SMART3D_DATASET		= 27,

					DT_LOCAL_7Z_SMART3D_DATASET = 28,
					DT_LOCAL_7Z_MESHX_DATASET   = 29,
					DT_LOCAL_7Z_MESHXG_DATASET	= 30,

					DT_3DVECTOROCTREE_DATASET      =31,

					/// <summary>
					/// EarthView服务WMTS数据集
					/// </summary>
					DT_SERVER_WMTS_DATASET		= 50,
					/// <summary>
					/// EarthView服务WMS数据集
					/// </summary>
					DT_SERVER_WMS_DATASET		= 51,
					/// <summary>
					/// EarthView服务WFS数据集
					/// </summary>
					DT_SERVER_WFS_DATASET		= 52,
					/// <summary>
					/// EarthView服务DEM数据集
					/// </summary>
					DT_SERVER_DEM_DATASET		= 53,
					/// <summary>
					/// EarthView服务地理编码数据集
					/// </summary>
					DT_SERVER_GEOCODE_DATASET	= 54,
					/// <summary>
					/// EarthView服务KML数据集
					/// </summary>
					DT_SERVER_KML_DATASET		= 55,
					/// <summary>
					/// EarthView服务几何数据集
					/// </summary>
					DT_SERVER_GEOMETRY_DATASET	= 56,
					/// <summary>
					/// EarthView模型服务数据集
					/// </summary>
					DT_SERVER_MODEL_DATASET		= 57,
					/// <summary>
					/// EarthView Template模型服务数据集
					/// </summary>
					DT_SERVER_MODEL_TEMPLATE_DATASET = 58,

					//DT_SERVER_SMART3D_DATASET = 59,

					/// <summary>
					/// OGC服务WMTS数据集
					/// </summary>
					DT_SERVER_OGC_WMTS_DATASET	= 60,
					/// <summary>
					/// OGC服务WMS数据集
					/// </summary>
					DT_SERVER_OGC_WMS_DATASET	= 61,
					/// <summary>
					/// OGC服务WFS数据集
					/// </summary>
					DT_SERVER_OGC_WFS_DATASET	= 62,

					DT_SERVER_MULTIMEDIA_DATASET= 63,
					DT_SERVER_WMS_CHART_DATASET = 64,
					DT_SERVER_WMS_IMAGE_DATASET = 65,

					DT_SERVER_7Z_SMART3D_DATASET = 66,
					DT_SERVER_7Z_MESHX_DATASET   = 67,
					DT_SERVER_7Z_MESHXG_DATASET	= 68,

					DT_SERVER_3DVECTOROCTREE_DATASET = 69,
					DT_LOCAL_7Z_LAS_DATASET = 70,
					DT_SERVER_7Z_LAS_DATASET = 71,
					DT_LOCAL_7Z_LASXG_DATASET = 72,
					DT_SERVER_7Z_LASXG_DATASET = 73,
					DT_LOCAL_IMAGE_DATASET = 74,
					DT_LOCAL_DEM_DATASET = 75,
					DT_LOCAL_STREETVIEW_DATASET          = 76,
					DT_SERVER_STREETVIEW_DATASET         = 77,
					DT_SERVER_OSGB_DATASET            = 78,
					DT_LOCAL_OSGB_DATASET             =79
				};

				/// <summary>
				/// 空间索引类型枚举
				/// </summary>
				enum EVSpatialIndexEnum
				{
					/// <summary>
					/// 未知类型
					/// </summary>
					SIE_UNKNOWN                  = 0,
					/// <summary>
					/// 四叉树类型
					/// </summary>
					SIE_QUADTREE                 = 1,
					/// <summary>
					/// R+树类型
					/// </summary>
					SIE_RPLUSTREE                = 2,
					/// <summary>
					/// 八叉树类型
					/// </summary>
					SIE_OCTREE                   = 3,
					SIE_GRID							=	4
				};

				/// <summary>
				/// 数据集类，是数据集合的基类。
				/// </summary>
				class EV_INTERFACE_DLL IDataset:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IDataset();
				public:
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取数据集版本号，该方法是确认数据变更情况。
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集版本号</returns>
					virtual ev_uint64 getDataVersion() const;
					/// <summary>
					/// 获取数据集描述
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集描述</returns>
					virtual EVString getDescription() const;
					/// <summary>
					/// 获取数据集更新时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集更新时间</returns>
					virtual EVString getUpdateTime() const;
					/// <summary>
					/// 判断是否包含子数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool hasSubDataset() const;
					/// <summary>
					/// 获取数据集所在数据源对象，该值为引用对象指针。
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集所在数据源对象指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
					/// <summary>
					/// 判断数据集是否具有编辑能力
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool canEdit() const;
					/// <summary>
					/// 判断数据集是否处在编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isEditing() const;
					/// <summary>
					/// 开始编辑，用于标识数据集处在编辑状态，并根据参数，设置相关编辑对象。
					/// </summary>
					/// <param name="withUndo">确定是否开启Undo功能</param>
					/// <returns>开启编辑成功，返回true；否则，返回false</returns>
					virtual ev_bool startEditing(ev_bool withUndo);
					/// <summary>
					/// 结束编辑，用于标识数据集结束编辑，根据参数，确实是否保存数据。
					/// </summary>
					/// <param name="isSave">需要保存编辑数据，设置true;否则，设置false</param>
					/// <returns>结束编辑成功，返回true;否则，返回false</returns>
					virtual ev_bool stopEditing(ev_bool isSave);
					/// <summary>
					/// 判断数据集是否处在编辑操作状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>是，返回true;否则，返回false</returns>
					virtual ev_bool isBeginEditingOperation();
					/// <summary>
					/// 开启编辑操作，用于标识数据集编辑操作。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name=""></param>
					/// <returns>开启编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool beginEditingOperation();
					/// <summary>
					/// 结束编辑操作，用于标识数据集编辑操作结束。
					/// 在调用endEditingOperation操作后，把两次操作之间的编辑，作为一次编辑状态提交。
					/// </summary>
					/// <param name="isConfirm">提交操作，设置true;否则，设置false</param>
					/// <returns>结束编辑操作成功，返回true;否则，返回false</returns>
					virtual ev_bool endEditingOperation(ev_bool isConfirm);
					//--
                ev_private:
					IDataset( EarthView::World::Core::CNameValuePairList *pList );
					//--
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IDataset();
				
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IDataset(IDataset & dataset);
				};
			}
		}
	}
}

#endif
