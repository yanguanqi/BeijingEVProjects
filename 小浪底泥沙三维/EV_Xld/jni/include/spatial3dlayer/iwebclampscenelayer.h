#ifndef IWEBCLAMPSCENELAYER_H
#define IWEBCLAMPSCENELAYER_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"
#include "core/ev_time.h"

#include "spatial3dlayer/3dlayerconfig.h"
#include "geometry3d/iclampscenelayer.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{
							
				/// <summary>
				/// 聚合贴地层 二维的图层，提供在三维中渲染的接口
				/// 管理三维中贴地层 二维图层
				/// </summary>
				class EV_3DLAYER_DLL IWebClampSceneLayer
					: public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					IWebClampSceneLayer(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IWebClampSceneLayer();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">图层名称</param>
					/// <returns></returns>
					IWebClampSceneLayer(EarthView::World::Spatial::GeoDataset::IDataset* ref_Dataset);	
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IWebClampSceneLayer();

				public:

					/// <summary>
					/// 返回数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summary>
					/// 返回数据集名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集名称</returns>
					virtual EVString getDatasetName();
					/// <summary>
					/// 返回数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource();					
					/// <summary>
					/// 获取瓦片
					/// </summary>
					/// <param name="level">瓦片级别</param>
					/// <param name="row">瓦片行号</param>
					/// <param name="col">瓦片列号</param>
					/// <param name="tile">返回的瓦片数据信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
					/// <summary>
					/// 获取瓦片，具体在子类中实现
					/// </summary>
					/// <param name="tile">瓦片内容</param>
					/// <param name="north">瓦片信息</param>
					/// <returns>是否成功</returns>
					virtual ev_bool getTile(_in const EarthView::World::Spatial::CTileInfo& tileInfo,_inout EarthView::World::Spatial::CTileData& tile);

					/// <summary>
					/// 获取最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大级别</returns>
					virtual ev_int32 getMaxLevel() const;
					/// <summary>
					/// 获取最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小级别</returns>
					virtual ev_int32 getMinLevel() const;

					/// <summary>
					/// 获取瓦片最大显示级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最大级别</returns>
					virtual ev_int32 getMaxVisibleLevel() const;
					/// <summary>
					/// 获取瓦片最小显示级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片最小级别</returns>
					virtual ev_int32 getMinVisibleLevel() const;
					/// <summary>
					/// 设置瓦片最大显示级别
					/// </summary>
					/// <param name="maxlevel">瓦片最大级别</param>
					/// <returns></returns>
					virtual ev_bool setMaxVisibleLevel(ev_int32 maxlevel);
					/// <summary>
					/// 设置瓦片最小显示级别
					/// </summary>
					/// <param name="minlevel">瓦片最小级别</param>
					/// <returns></returns>
					virtual ev_bool setMinVisibleLevel(ev_int32 minlevel);

					/// <summary>
					/// 获取图层的范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层范围</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;					

					/// <summary>
					/// 获取图层的坐标系统
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;

					/// <summary>
					/// 获取参考系类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>参考系类型</returns>
					virtual EarthView::World::Spatial3D::Atlas::LAYERSRS getSrs();
					/// <summary>
					/// 获取时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>时间</returns>
					virtual EVString getDataTime() const;
					/// <summary>
					/// 获取时间
					/// </summary>
					/// <param name=""></param>
					/// <returns>时间</returns>
					virtual EVString getUpdateTime() const;
					/// <summary>
					/// 获取文件格式
					/// </summary>
					/// <param name=""></param>
					/// <returns>文件格式</returns>
					virtual EarthView::World::Spatial::EVSSCFileFormat getFileFormat() const;					
					/// <summary>
					/// 获取数据类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据类型</returns>
					virtual EarthView::World::Spatial::EVSSCLayerDataType getLayerDataType() const;
					
					/// <summary>
					/// 获取最大级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大级别</returns>
					virtual ev_real64 getMaxScale() const;
					/// <summary>
					/// 获取最小级别
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小级别</returns>
					virtual ev_real64 getMinScale() const;
					/// <summary>
					/// 获取瓦片宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片宽度</returns>
					virtual ev_uint32 getTileWidth() const;
					/// <summary>
					/// 获取瓦片高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片高度</returns>
					virtual ev_uint32 getTileHeight() const;
					/// <summary>
					/// 获取元数据属性个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数量</returns>
					virtual ev_uint32 getAttributesCount() const;
					/// <summary>
					/// 获取属性信息
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>属性信息</returns>
					virtual EVString getAttribute(_in ev_uint32 index)const;
					/// <summary>
					/// 获取包围盒在X轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最小值</returns>
					virtual ev_real64 getMinX() const;
					/// <summary>
					/// 获取包围盒在X轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在X轴上最大值</returns>
					virtual ev_real64 getMaxX() const;
					/// <summary>
					/// 获取包围盒在Y轴上最小值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最小值</returns>
					virtual ev_real64 getMinY() const;
					/// <summary>
					/// 获取包围盒在Y轴上最大值
					/// </summary>
					/// <param name=""></param>
					/// <returns>包围盒在Y轴上最大值</returns>					
					virtual ev_real64 getMaxY() const;

					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>					
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
				protected:

					void formatTime(ev_int64 time1, EarthView::World::Core::CCoreTime& time);
					void initParam();

					void getTime(ev_int64 time,int& year,int& month,int& day,int& hour,int& min,int& sec);
				private:
					/// <summary>
					/// 复制构造函数
					/// </summary>
					/// <param name="obj">对象</param>
					/// <returns></returns>
					C_DISABLE_COPY(IWebClampSceneLayer);

				protected:
						EVString mCacheDatasetName;
						EVString mDatasourceName;
						EVString mDatasetName;

						EarthView::World::Spatial::CEVWMTSDataset* mpWmtsDataset;
						
						EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;

						ev_int32 mMaxVisibleLevel;
						ev_int32 mMinVisibleLevel;
						
						EarthView::World::Spatial3D::Atlas::LAYERSRS mSrs;
						EVString mDataTime;
						EVString mUpdateTime;
						EarthView::World::Spatial::EVSSCFileFormat mFileFormat;
						EarthView::World::Spatial::EVSSCLayerDataType mDataType;
						EarthView::World::Spatial::EVSSCGeometryType mGeometryType;
						ev_real64 mMinScal;
						ev_real64 mMaxScal;
						ev_uint32 mTileWidth;
						ev_uint32 mTileHeight;
						ev_uint32 mAttributeCount;
						list<EVString> mAttributes;
				};
			}
		}
	}
}
#endif

