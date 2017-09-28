
#if !defined(__RASTER_DISPLAY_H_)
#define __RASTER_DISPLAY_H_


#include "rasterdatasetenume.h"

#include "spatialinterface/ienvelope.h"
#include "spatialinterface/irasterlayer.h"
#include "spatialinterface/irasterdataset.h"
#include "core/xml.h"
#include  "spatialobject/coordinatesystem/spatialreference.h"
#include "spatialinterface/irasterrenderer.h"


namespace EarthView
{
	namespace World
	{   
		namespace Spatial2D
		{ 

			namespace Raster
			{   
				class CRasterDataSet;
				class CProgressInfo;

				/************************************************************************/
				/*   CRasterLayer                                                       */
				/************************************************************************/
				///<summary>
				///实现灰度的显示
				///目前只支持三个波段
				///</summary>
				class EV_RASTER_DLL CRasterLayer: public EarthView::World::Spatial::Atlas::IRasterLayer
				{    
ev_private:
					CRasterLayer(EarthView::World::Core::CNameValuePairList*pList);

				public:
					////////////////////////////////////////////////////////////////////////
					/// <summray>
					/// 获取图层类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层类型</returns>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
					/// <summray>
					/// 获取图层名
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层名字符串</returns>
					virtual EVString getName() const;
					/// <summray>
					/// 设置图层名
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns></returns>
					virtual ev_void setName( const EVString &name );
					/// <summray>
					/// 获取图层描述信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>图层描述信息</returns>
					virtual EVString getDescription() const;
					/// <summray>
					/// 设置图层描述信息
					/// </summary>
					/// <param name="value">图层描述信息</param>
					/// <returns></returns>
					virtual ev_void setDescription(const EVString& value);
					/// <summray>
					/// 图层是否可编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns>true，表示可编辑</returns>
					virtual ev_bool canEdit() const;
					/// <summray>
					/// 图层是否处于编辑状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>true,表示处于编辑状态</returns>
					virtual ev_bool isEditing() const;
					/// <summray>
					/// 设置图层的编辑状态
					/// </summary>
					/// <param name="editing">编辑状态</param>
					/// <returns></returns>
					virtual ev_void setEditing(ev_bool editing);
					/// <summray>
					/// 图层是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns>true，表示可见</returns>
					virtual ev_bool isVisible() const;
					/// <summray>
					/// 设置图层可见性
					/// </summary>
					/// <param name="visible">可见性</param>
					/// <returns></returns>
					virtual ev_void setVisible(ev_bool visible);
					/// <summray>
					/// 图层是否有效
					/// </summary>
					/// <param name=""></param>
					/// <returns>true，表示有效</returns>
					virtual ev_bool isValid() const;
					/// <summray>
					/// 图层是否可选
					/// </summary>
					/// <param name=""></param>
					/// <returns>true，表示可选</returns>
					virtual ev_bool isSelectable() const;
					/// <summray>
					/// 设置图层的可选性
					/// </summary>
					/// <param name="selected">可选性</param>
					/// <returns></returns>
					virtual ev_void setSelectable(ev_bool selected);
					/// <summray>
					/// 是否忽略比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>true，表示忽略比例尺</returns>
					virtual ev_bool ignoreScale() const;
					/// <summray>
					/// 设置是否忽略比例尺
					/// </summary>
					/// <param name="bIgnore">忽略比例尺属性</param>
					/// <returns></returns>
					virtual ev_void setIgnoreScale( _in ev_bool bIgnore );
					/// <summray>
					/// 获取图层最大可见比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大可见比例尺</returns>
					virtual ev_real64 getDisplayMaxScale() const;
					/// <summray>
					/// 设置图层最大可见比例尺
					/// </summary>
					/// <param name="scale">最大可见比例尺</param>
					/// <returns></returns>
					virtual ev_void setDisplayMaxScale(ev_real64 scale);
					/// <summray>
					/// 获取图层最小可见比例尺
					/// </summary>
					/// <param name=""></param>
					/// <returns>最小可见比例尺</returns>
					virtual ev_real64 getDisplayMinScale() const;
					/// <summray>
					/// 设置图层最小可见比例尺
					/// </summary>
					/// <param name="scale">最小可见比例尺</param>
					/// <returns></returns>
					virtual ev_void setDisplayMinScale(ev_real64 scale);
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
					/// 设置图层的坐标系
					/// </summary>
					/// <param name="sr">坐标系（外部释放）</param>
					/// <returns></returns>
					virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *sr );
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
					virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
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
					/// <summray>
					///获取指定位置RGB的值
					/// </summary>
					/// <param name="dfX">X大地坐标</param>
					/// <param name="dfY">Y大地坐标</param>
					/// <param name="dfRValue">R通道值</param>
					/// <param name="dfGValue">G通道值</param>
					/// <param name="dfBValue">B通道值</param>
					/// <returns></returns>
					//void getPixelValue(_in ev_real64 dfX,_in ev_real64 dfY,
					//	ev_real64 &dfRValue, ev_real64& dfGValue, ev_real64 &dfBValue) const;
					/// <summray>
					///设置图层透明度
					/// </summary>
					/// <param name="transparent">图层透明度</param>
					/// <returns></returns>
					virtual ev_void setTransparentValue(ev_uint8 transparent);
					/// <summray>
					/// 获取图层透明度
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明度</returns>
					virtual ev_uint8 getTransparentValue() const;
					///////////////////////////////////////////////////////////////////////
					///virtual
					/// <summray>
					/// 设置栅格渲染对象
					/// </summary>
					/// <param name="pRenderer">栅格渲染对象（内部释放）</param>
					/// <returns></returns>
					virtual ev_void setRenderer(_nofree EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer);
					/// <summray>
					/// 获取栅格渲染对象
					/// </summary>
					/// <returns>栅格渲染对象</returns>
					virtual const EarthView::World::Spatial2D::Raster::IRasterRenderer* getRenderer() const;
					///<summary>
					///默认析构函数
					///</summary>
					~CRasterLayer();
					///<summary>
					///链接一个数据集
					///</summary>
					/// <param name="pDataset">数据集指针</param>
					///<returns></returns>
					virtual ev_void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset*ref_pDataset);

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
					ev_void saveChannelAsDataSet(_in const ev_char*fullPath,_in ev_int32 iChannelCount,_in ev_int32*piChannelIndex,_in EarthView::World::Spatial2D::Raster::EVDataSetFormat eDataSetType,
						_in ev_real64 dfNodataValue,/*_in EVgsProgressFunc pfnProgress,*/_in EarthView::World::Spatial2D::Raster::CProgressInfo*pProssiInfo);
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
					virtual const EarthView::World::Spatial::GeoDataset::IRasterDataset*getRasterDataset()const;

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
					/// <summray>
					/// 设置栅格图层的重采样方式
					/// </summary>
					///<param name="resampleIndex">重采样方式索引</param>
					/// <returns></returns>
					ev_void setResampleType(ev_int32 resampleIndex);
					/// <summray>
					/// 获取栅格图层的重采样方式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getResampleType();
					////////
				protected:
					///<summary>
					///默认构造函数
					///</summary>
					CRasterLayer();
				private:
					///<summary>
					///链接一个数据集
					/// <param name="strFullpath">数据集路径</param>
					///<returns></returns>
					///<summary>
					////ev_bool connectToRasterDataSet(_in EVString strFullpath);

					///禁用赋值函数
					CRasterLayer &operator=(const CRasterLayer&other);
					CRasterLayer(const CRasterLayer&other); 
					///<summary>
					///为一个栅格数据集创建默认的渲染对象
					///<summary>
					EarthView::World::Spatial2D::Raster::IRasterRenderer* createDefaultRenderer(CRasterDataSet* pDataset);
				private:
					EarthView::World::Spatial2D::Raster::CRasterDataSet *m_pdisplayDataset; ///需要显示的数据集
				protected:
					ev_int32   m_iLayerID;       ///栅格层的代号
					ev_uint8   m_iAlpha;         ///透明值
					EVString   m_strLyrName;     ///layer名称，默认与数据集名称相同
					EVString   m_strDescription; ///数据集的一个描述
					EVString   m_strDatasetName; ///数据集名称 
					EVString   m_strDataSrcName; ///数据源名称
					ev_int32   m_iRChannel;      ///R通道对应之波段索引
					ev_int32   m_iGChannel;      ///G通道对应的波段索引
					ev_int32   m_iBChannel;      ///B通道对应的波段索引
					ev_int32   m_iReference;    ///引用计数使用
					ev_bool    m_bEdit     ;    ///能否编辑
					ev_bool    m_bEditing  ;    ///是否正在编辑
					ev_bool    m_bVisiable ;    ///是否可见
					ev_bool    m_bSelected ;    ///是否被选择
					ev_bool    m_bIgnoreScale;   ///是否忽略缩放因子
					///
					ev_real64  m_dfMinScale;    ////最小缩放因子
					ev_real64  m_dfMaxSacle;    ////最大缩放因子
					ev_int32   m_strResampleType; ////栅格数据重采样类型

					EarthView::World::Spatial2D::Raster::IRasterRenderer* m_pRenderer;

					friend class RasterRender; 
					friend class RasterLayerFactory;
				};

				////rasterlayerPlayer
				class EV_RASTER_DLL RasterLayerFactory :  public EarthView::World::Spatial::Atlas::ILayerFactory
				{
ev_private:
					RasterLayerFactory(EarthView::World::Core::CNameValuePairList*pList)
					{
					}
				public:
					virtual ~RasterLayerFactory() {}
					RasterLayerFactory(){}
				public:
					///<summary>
					///获取factory类型
					///<summary>
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;
					///<summary>
					///创建一个layer实例
					///<summary>
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance();
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& strXml);
					virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
					///<summary>
					///销毁一个layer实例
					///<summary>
					virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
				};
			}
		}
	}////
}///display

#endif//__RASTER_DISPLAY_H_
