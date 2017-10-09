#ifndef _NETWORK_ANALYST_GRAPH_H_H_
#define _NETWORK_ANALYST_GRAPH_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatial2dgeodatabase/networkdataset.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

typedef ev_uint32 EVID;
class CNetworkDataset;

class CNANode
{
public:
    explicit CNANode(EVID id):m_nID(id) {}

	ev_void touchEdge(EVID eid) 
	{ 
		ev_vector<EVID>::iterator iter=find(m_edges.begin(),m_edges.end(),eid);
		if (iter == m_edges.end())
		    m_edges.push_back(eid); 
	}
	ev_void detachEdge(EVID eid) 
	{
		ev_vector<EVID>::iterator iter=find(m_edges.begin(),m_edges.end(),eid);
		if(iter!=m_edges.end())
			m_edges.erase(iter); 
	}   
    ev_void initializeNext()
	{
        iter = m_edges.begin();
    }
    EVID getNextAdjacentEdge()
	{
        return iter!=m_edges.end() ? *iter++ : 0;
    }
    ev_uint32 id() const { return m_nID; }
    ev_void reset(EVID id)
	{
        m_nID = id;
        m_edges.clear();
        iter = m_edges.begin();
    }   
    inline ev_bool operator==(const CNANode &rhs)const
    {
        return m_nID==rhs.m_nID;
    }
    ev_vector<EVID>* getEdges()
	{
		return &m_edges;
	}
private:
    EVID				m_nID;
    ev_vector<EVID>		m_edges;
    ev_vector<EVID>::const_iterator iter;
};

class CNAEdge
{
public:
	explicit CNAEdge(EVID id):m_EID(id) {}
	inline ev_bool operator==(const CNAEdge &rhs) const
	{
		return m_EID==rhs.m_EID;
	}
public:
	EVID    m_EID;
    EVID    m_FromNID;
    EVID    m_ToNID;
    EVID    m_FID;
    EVString	m_srcName;
};

class CNAAdjacentTable
{
public:
	CNAAdjacentTable(CNetworkDataset* pDataset) : m_pNetworkDataset(pDataset)
	{
		m_nodeCount = 0;
		m_edgeCount = 0;
		m_newNodeID = 0;
		m_newEdgeID = 0;
		m_oriNodeCount = 0;
		m_oriEdgeCount = 0;
	}
	const CNANode* GetNodeRef(EVID id) const
	{ 
		return id-1<m_nodes.size() && id>0 ? &m_nodes[id-1] : 0;
	}
	CNANode* GetNodeRef(EVID id) 
	{ 
		return id-1<m_nodes.size() && id>0 ? &m_nodes[id-1] : 0; 
	}
	ev_void AddNode(CNANode &node)
	{
		m_nodes.push_back(node);
	}   
	const CNAEdge* GetEdgeRef(EVID id) const
	{ 
		return id-1<m_edges.size() && id>0 ? &m_edges[id-1] : 0; 
	}
	EVID GetEdgeRefFromFID(EVID fid)//add in 2013/9/11
	{ 
		for (EVID i = 0;i<m_edges.size();i++)
		{
			if (m_edges[i].m_FID == fid)
			{
				return i +1; 
			}
		}
		return 0;
	}
	CNAEdge* GetEdgeRef(EVID id)
	{ 
		return id-1<m_edges.size() && id>0 ? &m_edges[id-1] : 0; 
	}
	ev_void AddEdge(CNAEdge &edge)
    {
        m_edges.push_back(edge);
    }

	ev_void disableEdge(EVID id)
	{
		m_nodes[m_edges[id-1].m_FromNID-1].detachEdge(id);
		m_nodes[m_edges[id-1].m_ToNID-1].detachEdge(id);
	}
	ev_void enableEdge(EVID id)
	{
		m_nodes[m_edges[id-1].m_FromNID-1].touchEdge(id);
		m_nodes[m_edges[id-1].m_ToNID-1].touchEdge(id);
	}
    //count
    ev_size_t nodeCount() const { return m_nodeCount; }
    ev_size_t edgeCount() const { return m_edgeCount; }
	//设置从流读取网络数据集时的节点数和边数
	ev_void setoriNodeCount(ev_size_t count) { m_oriNodeCount = count; }
	ev_void setoriEdgeCount(ev_size_t count) { m_oriEdgeCount = count; }

	ev_size_t getNewNodeID()
	{
		return ++m_newNodeID;
	}
	ev_size_t getNewEdgeID()
	{
		return ++m_newEdgeID;
	}
	ev_size_t getMaxNodeID()
	{
		return m_newNodeID;
	}
	ev_size_t getMaxEdgeID()
	{
		return m_newEdgeID;
	}
	void intial()
	{
		/*m_newNodeID = m_nodeCount = m_pNetworkDataset->getNodeCount();
		m_newEdgeID = m_edgeCount = m_pNetworkDataset->getEdgeCount();*/
		////初始化作用是删除m_nodes和m_edges在网络分析时增加的stops和edges，
		///这里将m_newNodeID和m_nodeCount赋值为初始节点数
		m_newNodeID = m_nodeCount = m_oriNodeCount;
		m_newEdgeID = m_edgeCount = m_oriEdgeCount;
		EdgeIter iter = find(m_edges.begin(), m_edges.end(), CNAEdge(m_newEdgeID+1));
		for ( ; iter!=m_edges.end() ; iter++)
		{
			disableEdge(iter->m_EID);
		}		
		ev_vector<CNAEdge>::iterator iter1 = find(m_edges.begin(), m_edges.end(), CNAEdge(m_oriEdgeCount));
		if (iter1 != m_edges.end())
			m_edges.erase(++iter1, m_edges.end());
		ev_vector<CNANode>::iterator iter2 = find(m_nodes.begin(), m_nodes.end(), CNANode(m_oriNodeCount));
		if (iter2 != m_nodes.end())
			m_nodes.erase(++iter2, m_nodes.end());
	}
private:
	void reserveNodes(ev_size_t size)
	{
		m_nodes.reserve(size);
	}
	void reserveEdges(ev_size_t size)
	{
		m_edges.reserve(size);
	}
private:
	typedef ev_vector<CNANode>::const_iterator NodeIter;
	typedef ev_vector<CNAEdge>::const_iterator EdgeIter;
	ev_vector<CNANode>   m_nodes;
    ev_vector<CNAEdge>   m_edges;
	ev_size_t m_oriNodeCount;  //存储从流读出网络数据时的节点数和边数
	ev_size_t m_oriEdgeCount;
	ev_size_t m_nodeCount;
	ev_size_t m_edgeCount;
	ev_size_t m_newNodeID;
	ev_size_t m_newEdgeID;
	CNetworkDataset*     m_pNetworkDataset;
friend class CNetworkDataset;
};

}}}} //End of Namespace

#endif //_NETWORK_ANALYST_GRAPH_H_H_

