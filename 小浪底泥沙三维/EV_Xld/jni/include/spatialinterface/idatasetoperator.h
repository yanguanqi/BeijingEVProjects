#ifndef _IDATASET_OPERATOR_H_H_
#define _IDATASET_OPERATOR_H_H_


#include "core/memoryallocatedobject.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				/// <summary>
				/// 数据集操作类，用于支持数据集最基本的操作。
				/// </summary>
				class EV_INTERFACE_DLL IDatasetOperator :
					public EarthView::World::Core::CAllocatedObject
				{
				public:					
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IDatasetOperator();
					/// <summary>
					/// 获取Operator对应的数据集类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType();
					/// <summary>
					/// 获取Operator对应的数据数据源类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDataSourceType getDataSourceType();
					/// <summary>
					/// 打开数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>

					virtual ev_bool openDataset(EarthView::World::Core::CDataStream &stream,const EVString &name);
					/// <summary>
					/// 创建数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					///virtual ev_uint32 createDataset(ev_bool UNDEFINEPARAMETER);
					/// <summary>
					/// 删除数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool deleteDataset(const EVString &name);
					/// <summary>
					/// 获取数据源引用
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef();
					/// <summary>
					/// 克隆自身
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual IDatasetOperator* clone() const;
					///
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					IDatasetOperator( EarthView::World::Core::CNameValuePairList *pList );
					///
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IDatasetOperator();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					C_DISABLE_COPY(IDatasetOperator);
				};


			}}}} // End of Namespaces

#endif //_IDATASET_OPERATOR_H_H_

