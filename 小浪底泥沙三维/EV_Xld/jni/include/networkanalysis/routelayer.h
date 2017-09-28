#ifndef __SPATIAL2D_ANALYST_ROUTE_LAYER_H_H_
#define __SPATIAL2D_ANALYST_ROUTE_LAYER_H_H_

#include "networkanalysis/config.h"
#include "spatialobject/geometry/point.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/ispatialreference.h"
#include "networkanalysis/networkanalystlayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{


class CRouteResult;
class CRouteAnalyst;

/// <summary>
/// 网络分析：路径图层
/// </summary>
class EV_NETWORKANALYSIS_DLL CRouteLayer : public CNetworkAnalystLayer
{
public:		
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ~CRouteLayer();
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="dataset">数据集</param>
	/// <returns></returns>
	CRouteLayer(EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ref_dataset);
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CRouteLayer();
	/// <summary>
	/// 求解最短路径
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果求解成功，则返回true；否则，返回false</returns>
	virtual ev_bool solve();
	/// <summary>
	/// 设置路径分析时查找停靠点方法
	/// </summary>
	/// <param name="">查找停靠点方法枚举</param>
	/// <returns></returns>
	virtual ev_void setAnalystMethod(EVNAAnalystMethod method);
public: // ILayer Interface
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
	/// <returns>图层不能被编辑，返回false</returns>
	virtual ev_bool canEdit() const;
	/// <summary>
	/// 图层是否正在编辑
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层不能被编辑，返回false</returns>
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
	virtual ev_bool isSelected() const;
	/// <summary>
	/// 设置图层可选性
	/// </summary>
	/// <param name="editing">可见性</param>
	/// <returns></returns>
	virtual ev_void setSelected(ev_bool selected);
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
	virtual ev_bool draw( EarthView::World::Spatial::Display::ISpatialDisplay* display,
		EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
	/// <summary>
	/// 复制图层
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
	/// 输出xml格式
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回xml格式字符串</returns>
	virtual EVString toXML() const;
	/// <summary>
	/// 从xml格读取图层
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
ev_internal:
	/// <summary>
	/// 从流构建图层
	/// </summary>
	/// <param name="stream">流</param>
	/// <returns></returns>
	ev_void fromStream( EarthView::World::Core::CDataStream& stream ) {}

public: // IVectorLayer Interface
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
	virtual ev_void select( EarthView::World::Spatial::GeoDataset::IQueryFilter *filter,  EarthView::World::Spatial::Atlas::EVSelectionResultType type );
	/// <summary>
	/// 清空图层选择
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void clearSelection();

public: //CNetworkAnalystLayer interfaces
	/// <summary>
	/// 添加停靠点
	/// </summary>
	/// <param name="pt">停靠点</param>
	/// <returns></returns>
	virtual ev_void addStop(const EarthView::World::Spatial::Geometry::CPoint& pt);
	/// <summary>
	/// 添加障碍点
	/// </summary>
	/// <param name="pt">障碍点</param>
	/// <returns></returns>
	virtual ev_void addBarriar(const EarthView::World::Spatial::Geometry::CPoint& pt);
	/// <summary>
	/// 移动选中的元素至目标点
	/// </summary>
	/// <param name="pt">目标点</param>
	/// <returns></returns>
	virtual ev_void moveTo(const EarthView::World::Spatial::Geometry::CPoint& pt);
	/// <summary>
	/// 点选路径分析的元素
	/// </summary>
	/// <param name="pt">点</param>
	/// <param name="threshold">范围</param>
	/// <returns></returns>
	virtual ev_void selectResult(const EarthView::World::Spatial::Geometry::CPoint& pt,ev_real64 threshold);
	/// <summary>
	/// 框选路径分析的元素
	/// </summary>
	/// <param name="rect">范围</param>
	/// <returns></returns>
	virtual ev_void selectResult(const EarthView::World::Spatial::Geometry::CRectangle &rect);
	/// <summary>
	/// 移除选中的元素
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void removeResult();
	/// <summary>
	/// 移除选中的元素
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	virtual ev_void remove();
	/// <summary>
	/// 设置分析是否考虑等级属性
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void	setUsingHierachy(ev_bool b);
	/// <summary>
	///获取分析是否考虑等级属性
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool	getUsingHierachy()const;
	/// <summary>
	/// 设置成本属性
	/// </summary>
	/// <param name="name">成本属性名称</param>
	/// <returns></returns>
	ev_void	setCostAttribute(const EVString &name);
	/// <summary>
	///获取成本属性
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回成本属性</returns>
	EVString	getCurrentCostAttribute()const;
public: // CNetworkAnalystLayer interface
	/// <summary>
	/// 获取符号
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回符号</returns>
	virtual EarthView::World::Spatial::Display::ISymbol*  getLockedSymbol();
	/// <summary>
	/// 获取路径分析结果
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回结果</returns>
	const EarthView::World::Spatial2D::Analyst::CRouteResult*  getRouteResult() const;
ev_private:
	CRouteLayer( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY( CRouteLayer )
private:
	EVString m_name;
	EVString m_description;
	ev_bool m_isVisible;
	ev_bool m_isValid;
	ev_bool m_isSelected;
	
	ev_bool    m_bIgnoreScale;   ///是否忽略缩放因子
	ev_real64  m_dfMinScale;    ////最小缩放因子
	ev_real64  m_dfMaxScale;    ////最大缩放因子
	EarthView::World::Spatial::Geometry::IEnvelope   *m_pExtent;
	EarthView::World::Spatial::Geometry::ISpatialReference* m_pSR;

	EarthView::World::Spatial::Display::ISymbol*    m_fontSymbol;
	EarthView::World::Spatial::Display::ISymbol*    m_barriars_lineSymbol;
	EarthView::World::Spatial::Display::ISymbol*	m_stopSymbol;
	EarthView::World::Spatial::Display::ISymbol*	m_barriarSymbol;
	EarthView::World::Spatial::Display::ISymbol*	m_routeSymbol;

	EarthView::World::Spatial::Display::ISymbol*	m_selectedStopSymbol;
	EarthView::World::Spatial::Display::ISymbol*	m_selectedBarriarSymbol;
	EarthView::World::Spatial::Display::ISymbol*	m_selectedRouteSymbol;
	
	CRouteAnalyst	*m_pAnalyst;
	CRouteResult	*m_pRoute;
	EVNAAnalystMethod   m_nMethod;
	ev_vector<EarthView::World::Spatial::Geometry::IGeometry*>m_barriars_line;
	EarthView::World::Core::CRecursiveMutex mLock;
};

}}}}

#endif //__SPATIAL2D_ANALYST_ROUTE_LAYER_H_H_