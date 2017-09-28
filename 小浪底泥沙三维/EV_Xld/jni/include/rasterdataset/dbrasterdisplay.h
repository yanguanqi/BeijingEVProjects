#ifndef DB_RASTER_DISPALY_H
#define DB_RASTER_DISPALY_H

#include "rasterdataset/rasterdisplay.h"
#include "rasterdataset/dbrasterdataset.h"

namespace EarthView
{
	namespace World
	{   
		namespace Spatial2D
		{ 

			namespace Raster
			{ 
				class CDBRasterDataset;
				class CProgressInfo;
				/************************************************************************/
				/*   CDBRasterLayer                                                       */
				/************************************************************************/
				///<summary>
				///实现数据库栅格数据集的显示
				///</summary>
				class EV_RASTER_DLL CDBRasterLayer: public EarthView::World::Spatial2D::Raster::CRasterLayer
				{
                ev_private:
					CDBRasterLayer(EarthView::World::Core::CNameValuePairList*pList);

				public:
					////////////////////////////////////////////////////////////////////////
					/// <summray>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summray>
					/// 图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>true，表示有效</returns>
					virtual ev_bool isValid() const;
					/// <summray>
					/// 获取图层关联的数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
					/// <summray>
					/// 获取图层的坐标系
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系对象（内部释放）</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
					/// <summray>
					/// 获取图层的地理范围
					/// </summary>
					/// <param name=""></param>
					/// <returns>范围矩形（内部释放）</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const; 
					/// <summray>
					/// 绘制图层
					/// </summary>
					/// <param name="display">绘图对象</param>
					/// <param name="type">图层渲染类型</param>
					/// <returns></returns>
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,
						                 EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
					///<summary>
					///复制一个栅格图层（外部释放）
					///<summary>
					///<returns>图层指针</returns>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
					/// <summray>
					/// 从XML元素创建图层
					/// </summary>
					/// <param name="element">图层信息XML元素</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summray>
					/// 将图层信息输出为XML元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层信息XML元素</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					///<summary>
					///链接一个数据集
					///</summary>
					/// <param name="pDataset">数据集指针</param>
					///<returns></returns>
					virtual ev_void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset);
					///<summary>
					///为R通道指定波段索引(波段索引不能超过，波段的总数)
					///</summary>
					/// <param name="iBand">波段索引，-1为未指定任何波段，即该波段不被显示</param>
					///<returns></returns>
					ev_void assignRChannel(_in ev_int32 iBand);
					///<summary>
					///为G通道指定波段索引
					///</summary>
					/// <param name="iBand">波段索引,-1为未指定任何波段，即该通道不被显示</param>
					///<returns></returns>
					ev_void assignGChannel(_in ev_int32 iBand);
					///<summary>
					///为B通道指定波段索引
					///</summary>
					/// <param name="iBand">波段索引,-1为未指定任何波段，即该通道不被显示</param>
					///<returns></returns>
					ev_void assignBChannel(_in ev_int32 iBand);
					///<summary>
					///将指定通道保存出一个灰度数据集
					///</summary>
					///<param name="fullPath">数据集有效路径</param>
					///<param name="iChannelCount">通道数</param>
					///<param name="piChannelIndex">通道数</param>
					///<param name= "eDataSetType">数据集类型</param>
					///<param name= "dfNodataValue">指定某个颜色值为空（PNG表现为透明）</param>
					///<param name= "pfnProgress">进度函数指针</param>
					///<param name= "pProssiInfo">进度信息指针，外部分配与释放</param>
					///<returns></returns>
					ev_void saveChannelAsDataSet(_in const ev_char*fullPath,_in ev_int32 iChannelCount,_in ev_int32*piChannelIndex,
						_in EarthView::World::Spatial2D::Raster::EVDataSetFormat eDataSetType,_in ev_real64 dfNodataValue,
						/*_in EVgsProgressFunc pfnProgress,*/_in EarthView::World::Spatial2D::Raster::CProgressInfo*pProssiInfo);
					///<summary>
					///获取栅格图层的ID
					///</summary>
					///<returns>图层ID</returns>
					ev_int32 getLayerID();
					///<summary>
					///设置栅格图层的ID
					///</summary>
					///<param name="iID">图层ID</param>
					ev_void  setLayerID(_in ev_int32 iID);
					///<summary>
					///返回一个与Layer相关联的数据集
					///</summary>
					///<returns>栅格数据集</returns>
					virtual const EarthView::World::Spatial::GeoDataset::IRasterDataset* getRasterDataset()const;
					/// <summray>
					/// 获取R通道的波段索引
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32  getRedIndex()const;
					/// <summray>
					///获取G通道的波段索引
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32  getGreenIndex()const;
					/// <summray>
					/// 获取B通道的波段索引
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32  getBlueIndex()const;
				private:
					///<summary>
					///链接一个数据集
					/// <param name="strFullpath">数据集路径</param>
					///<returns></returns>
					///<summary>
					////ev_bool connectToRasterDataSet(_in EVString strFullpath);

					///禁用赋值函数
					CDBRasterLayer &operator=(const CDBRasterLayer&other);
					CDBRasterLayer(const CDBRasterLayer&other); 
					///<summary>
					///默认构造函数
					///</summary>
					CDBRasterLayer();
					///<summary>
					///为一个栅格数据集创建默认的渲染对象
					///<summary>
					EarthView::World::Spatial2D::Raster::IRasterRenderer* createDefaultRenderer(CDBRasterDataset* pDataset);
				private:                
					EarthView::World::Spatial2D::Raster::CDBRasterDataset *m_pDBDataset; ///需要显示的数据集

					friend class RasterRender; 
					friend class DBRasterLayerFactory;
				};

				////rasterlayerPlayer
				class EV_RASTER_DLL DBRasterLayerFactory :  public EarthView::World::Spatial::Atlas::ILayerFactory
				{
                ev_private:
					DBRasterLayerFactory(EarthView::World::Core::CNameValuePairList*pList)
					{
					}
				public:
					virtual ~DBRasterLayerFactory() {}
					DBRasterLayerFactory(){}
				public:
					///<summary>
					///获取factory类型
					///<summary>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					///<summary>
					///创建一个layer实例
					///<summary>
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance();
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& strXml);
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					///<summary>
					///销毁一个layer实例
					///<summary>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				};
			}
		}
	}
}

#endif