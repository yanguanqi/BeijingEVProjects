#ifndef  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CMAPINFODATADRIVER_H
#define  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CMAPINFODATADRIVER_H

#include "spatial2ddataexchange/datadriver.h"

class OGRDataSource;
class OGRLayer;
class OGRFeature;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// mapinfo数据交换驱动
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CMapinfoDataDriver
					:public EarthView::World::Spatial::Convertor::CDataDriver
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CMapinfoDataDriver();

					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					virtual ev_void close();

					/// <summary>
					/// 读取第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 read(_in ev_uint32 index,_out EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 写入第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 write(_in ev_uint32 index,_in EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pPropertySet">数据集参数信息</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,
						                  _in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,
										  _in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,
										  _inout ev_uint32& featurecount,
										  _inout EarthView::World::Core::CDataStream& stream);

					virtual ev_void finishWrite();
					
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CMapinfoDataDriver();
ev_private:
					CMapinfoDataDriver(_in EarthView::World::Core::CNameValuePairList* pList);
					ev_uint32 open(_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,
						           _inout ev_uint32& featurecount,
								   _inout EarthView::World::Core::CDataStream& stream);
					ev_int32  readMapInfo(_out EarthView::World::Core::CDataStream & os);
					ev_int32  writeMapInfo(_out EarthView::World::Core::CDataStream & os);
					ev_int32  readFields(_out EarthView::World::Core::CDataStream & os);
					ev_int32  writeFields(_out EarthView::World::Core::CDataStream & os,OGRFeature* pofeature);
					EVString  checkNameConflic(EVString name);

					OGRDataSource* m_poDS;
					OGRLayer*    m_poLayer;
					EVString     m_strPath;
					EVString     m_strName;
					ev_int32     m_nType;
					int m_nFieldCount;
					friend class CDataDriverFactory;
				};
			}
		}
	}
}

#endif