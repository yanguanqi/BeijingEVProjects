#ifndef _SPATIAL2D_ANALYST_NETWORKLAYER_H_H_
#define _SPATIAL2D_ANALYST_NETWORKLAYER_H_H_

#include "networkanalysis/config.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/istatisticstheme.h"
#include "spatialinterface/ilabelproperty.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/ilayerselection.h"


//// using namespace EarthView::World::Spatial::Atlas;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Atlas{

class CDataLayer;
/// <summary>
/// 网络要素集图层
/// </summary>
class EV_NETWORKANALYSIS_DLL CNetworkLayer : public EarthView::World::Spatial::Atlas::ILayer
{
public:	
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CNetworkLayer();
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ~CNetworkLayer();

public:
	/// <summary>
	/// 获取图层类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回图层类型</returns>
	virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
	/// <summary>
	/// 获取图层名称
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回图层名称</returns>
	virtual EVString getName() const;
	/// <summary>
	/// 设置图层名称
	/// </summary>
	/// <param name="name">图层名</param>
	/// <returns></returns>
	virtual ev_void setName( const EVString &name );
	/// <summary>
	/// 获取图层描述信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回描述信息</returns>
	virtual EVString getDescription() const;
	/// <summary>
	/// 设置图层描述信息
	/// </summary>
	/// <param name="value">描述信息</param>
	/// <returns></returns>
	virtual ev_void setDescription(const EVString& value);
	/// <summary>
	/// 图层是否可编辑
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果图层可以编辑，返回true；否则，返回false（图层不能被编辑，返回false）</returns>
	virtual ev_bool canEdit() const;
	/// <summary>
	/// 图层是否正在编辑
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果图层正在编辑，返回true；否则，返回false（图层不能被编辑，返回false）</returns>
	virtual ev_bool isEditing() const;
	/// <summary>
	/// 设置图层编辑状态（无效）
	/// </summary>
	/// <param name="editing">是否编辑</param>
	/// <returns></returns>
	virtual ev_void setEditing(ev_bool editing);
	/// <summary>
	/// 图层是否可见
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果图层可见，返回true；否则，返回false</returns>
	virtual ev_bool isVisible() const;
	/// <summary>
	/// 设置图层可见性
	/// </summary>
	/// <param name="editing">可见性</param>
	/// <returns></returns>
	virtual ev_void setVisible(ev_bool visible);
	/// <summary>
	/// 图层是否有效
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果图层有效，返回true；否则，返回false</returns>
	virtual ev_bool isValid() const;
	/// <summary>
	/// 图层要素是否可选
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果可选，返回true；否则，返回false</returns>				
	virtual ev_bool isSelectable() const;
	/// <summary>
	/// 设置图层可选性
	/// </summary>
	/// <param name="editing">可见性</param>
	/// <returns></returns>
	virtual ev_void setSelectable(ev_bool selected);
	/// <summary>
	/// 图层是否忽略其设置的最大最小比例尺范围进行显示
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果是，返回true；否则，返回false</returns>
	virtual ev_bool ignoreScale() const;
	/// <summary>
	/// 设置图层是否忽略其设置的最大最小比例尺范围进行显示
	/// </summary>
	/// <param name="bIgnore">true为忽略，false为按比例次范围进行约束显示</param>
	/// <returns></returns>
	virtual ev_void setIgnoreScale( _in ev_bool bIgnore );
	/// <summary>
	/// 获取图层显示的最大比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回最大比例尺</returns>
	virtual ev_real64 getDisplayMaxScale() const;
	/// <summary>
	/// 设置图层显示的最大比例尺
	/// </summary>
	/// <param name="scale">最大比例尺</param>
	/// <returns></returns>
	virtual ev_void setDisplayMaxScale(ev_real64 scale);
	/// <summary>
	/// 获取图层显示的最小比例尺
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回最小比例尺</returns>					
	virtual ev_real64 getDisplayMinScale() const;
	/// <summary>
	/// 设置图层显示的最小比例尺
	/// </summary>
	/// <param name="scale">最小比例尺</param>
	/// <returns></returns>
	virtual ev_void setDisplayMinScale(ev_real64 scale);
	/// <summary>
	/// 获取图层空间参考信息
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回空间参考信息</returns>		
	virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;
	/// <summary>
	/// 设置图层空间参考信息
	/// </summary>
	/// <param name="sr">空间参考信息</param>
	/// <returns></returns>
	virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr );
	/// <summary>
	/// 获取图层范围
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回图层范围</returns>		
	virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;                    
	/// <summary>
	/// 绘制图层
	/// </summary>
	/// <param name="display">空间显示参数</param>
	///<param name="type">绘制类型</param>
	/// <returns>绘制成功，返回true；否则返回false</returns>
	virtual ev_bool draw(EarthView::World::Spatial::Display::ISpatialDisplay* display,EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
	/// <summary>
	/// 克隆图层
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回复制后的图层</returns>
	virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
	/// <summary>
	/// 输出为流
	/// </summary>
	/// <param name="stream">输出参数</param>
	/// <returns></returns>
	virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
	/// <summary>
	/// 从xml元素恢复图层
	/// </summary>
	/// <param name="element">xml元素</param>
	/// <returns></returns>
	virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
	/// <summary>
	/// 将图层输出为xml元素
	/// </summary>
	/// <param name=""></param>
	/// <returns>xml元素</returns>
	virtual EarthView::World::Core::CXmlElement toXmlElement() const;

	//IVectorLayer
	/// <summary>
	/// 获取要素集
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要素集</returns>
	virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
	/// <summary>
	/// 设置要素集
	/// </summary>
	/// <param name="dataset">要素集</param>
	/// <returns></returns>
	virtual ev_void setDateset( EarthView::World::Spatial::GeoDataset::IDataset * ref_dataset );
	/// <summary>
	/// 获取显示字段名
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回字段名</returns>
	virtual EVString getDisplayField() const;
	/// <summary>
	/// 设置显示字段
	/// </summary>
	/// <param name="fieldName">显示字段</param>
	/// <returns></returns>
	virtual ev_void setDisplayField(const EVString& fieldName);
	/// <summary>
	/// 获取专题图信息（无效）
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回专题图信息</returns>
	virtual EarthView::World::Spatial::Theme::ITheme * getTheme() const;
	/// <summary>
	/// 设置专题图信息（无效）
	/// </summary>
	/// <param name="theme">专题图信息</param>
	/// <returns></returns>
	virtual ev_void setTheme( _in const EarthView::World::Spatial::Theme::ITheme *theme );
	/// <summary>
	/// 获取是否显示提示
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_bool isShowTip() const;
	/// <summary>
	/// 设置是否显示提示
	/// </summary>
	/// <param name="show">是否显示</param>
	/// <returns></returns>
	virtual ev_void setShowTip(ev_bool show) ;
	/// <summary>
	/// 图层选择（无效）
	/// </summary>
	/// <param name="filter">选择过滤条件</param>
	/// <param name="type">选择类型</param>
	/// <returns></returns>
	virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter, EarthView::World::Spatial::Atlas::EVSelectionResultType type );
	/// <summary>
	/// 清空图层选择
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void clearSelection();
	/// <summary>
	/// 获取图层选择（无效）
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层选择</returns>
	virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();
	/// <summary>
	/// 设置图层图层显示透明度
	/// </summary>
	/// <param name="transparent">图层显示透明度</param>
	/// <returns></returns>
	virtual ev_void setTransparentValue(ev_uint8 transparent);
	/// <summary>
	/// 获取图层图层显示透明度
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回图层显示透明度</returns>
	virtual ev_uint8 getTransparentValue() const;

public:
	/// <summary>
	/// 设置交点可见性
	/// </summary>
	/// <param name="bVisible">交点是否可见</param>
	/// <returns></returns>
	ev_void setJunctionVisible(ev_bool bVisible);
	/// <summary>
	/// 获取交点是否可见
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果可见，返回true；否则，返回false</returns>
	ev_bool isJunctionVisible() const;
	/// <summary>
	/// 设置边可见性
	/// </summary>
	/// <param name="bVisible">边是否可见</param>
	/// <returns></returns>
	ev_void setEdgeVisible(ev_bool bVisible);
	/// <summary>
	/// 获取边是否可见
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果可见，返回true；否则，返回false</returns>
	ev_bool isEdgeVisible() const;
	/// <summary>
	/// 设置交点显示的专题图
	/// </summary>
	/// <param name="bVisible">交点专题图</param>
	/// <returns></returns>
	ev_void setJunctionTheme(EarthView::World::Spatial::Theme::ITheme *theme);
	/// <summary>
	/// 获取交点专题图
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回交点专题图</returns>
	EarthView::World::Spatial::Theme::ITheme* getJunctionTheme() const;
	/// <summary>
	/// 设置边专题图
	/// </summary>
	/// <param name="bVisible">边专题图</param>
	/// <returns></returns>
	ev_void setEdgeTheme(EarthView::World::Spatial::Theme::ITheme *theme);
	/// <summary>
	/// 获取边专题图
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回边专题图</returns>
	EarthView::World::Spatial::Theme::ITheme* getEdgeTheme() const;

ev_internal:
	/// <summary>
	/// 从流构建图层
	/// </summary>
	/// <param name="stream">流</param>
	/// <returns></returns>
	virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
	CNetworkLayer( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY( CNetworkLayer );
protected:
	EVString				m_Name;
	EVString				m_description;
	ev_bool				m_isVisible;
	ev_bool				m_isValid;
	ev_bool				m_isSelected;
	ev_bool				m_ignoreScale;
	ev_real64			m_maxScale;
	ev_real64			m_minScale;
	EarthView::World::Spatial::Geometry::ISpatialReference	*m_sr;

	EarthView::World::Spatial::GeoDataset::IDataset			*m_dataset;
	EVString				m_displayField;
	ev_bool				m_isShowTip;
	EarthView::World::Spatial::Theme::ITheme				*m_pTheme;

	CDataLayer			*m_junctionLayer;
	CDataLayer			*m_SourceLayer;
	ev_uint8			m_nAlpha;
};

}}}} // End of Namespace





#endif //_NETWORKLAYER_H_H_