#ifndef _NETWORK_ANALYST_TOOL_BAR_H_H_
#define _NETWORK_ANALYST_TOOL_BAR_H_H_

#include "spatial2dproxy/spatial2dproxy_config.h"
#include "networkanalysis/networkanalystlayer.h"
#include "spatialgui/icommand.h"


//namespace EarthView{
//	namespace World{
//		namespace Spatial2D{
//			namespace Controls{

//class CNACmdNew;
//class CNACmdLayer;
//class CNAToolStop;
//class CNAToolBarriar;
//class CNAToolAdjust;
//class CNAToolSolve;
//class CNACmdDataset;
/// <summary>
/// 网络分析工具条类
/// </summary>

class EV_2DPROXY_DLL CNetworkAnalystToolBar : public EarthView::World::Core::CAllocatedObject
{
	friend class CNACmdNew;
	friend class CNACmdLayer;
	friend class CNAToolStop;
	friend class CNAToolBarriar;
	friend class CNAToolAdjust;
	friend class CNACmdSolve;
	friend class CNACmdDataset;
	friend class CNACmdNewRouteLayer;
public:
	/// <summary>
	/// 析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CNetworkAnalystToolBar();
	/// <summary>
	/// 默认构造函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CNetworkAnalystToolBar();

public:
	/// <summary>
	/// 获取命令个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>命令个数</returns>
	ev_int32 getCmdCount() const;
	/// <summary>
	/// 获取给定索引处的命令
	/// </summary>
	/// <param name="index">索引号</param>
	/// <returns>命令</returns>
	EarthView::World::Spatial::SystemUI::ICommand *getCommand(ev_uint32 index) const;

protected:

	ev_void setEnabled(ev_uint32 idx, ev_bool enable);
	ev_void setChecked(ev_uint32 idx, ev_bool checked);

	ev_void addStop(const EarthView::World::Spatial::Geometry::CPoint &pt);
	ev_void addBarriar(const EarthView::World::Spatial::Geometry::CPoint &pt);
	ev_void setCurrentLayer(EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* layer);
	EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer* getCurrentLayer() const;
	ev_bool solve();

ev_private:
	CNetworkAnalystToolBar( EarthView::World::Core::CNameValuePairList *pList );
protected:
	C_DISABLE_COPY( CNetworkAnalystToolBar )
private:
	ev_vector<EarthView::World::Spatial::SystemUI::ICommand*>	m_cmds;
	EarthView::World::Spatial2D::Analyst::CNetworkAnalystLayer	*m_pAnalystLayer;
	EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*		*m_pDataset;

};


//}}}} //End of Namespace

#endif //_NETWORK_ANALYST_TOOL_BAR_H_H_

