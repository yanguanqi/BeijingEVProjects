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
	CNANode():m_nID(-1) {}
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
	ev_vector<EVID>& getedges()
	{
		return m_edges;
	}
private:
    EVID				m_nID;      // 内存中标识ID(由1开始且连续)
    ev_vector<EVID>		m_edges;    // 邻接边标识ID
    ev_vector<EVID>::const_iterator iter;
};

class CNAEdge
{
public:
	CNAEdge():m_EID(-1) {}
	explicit CNAEdge(EVID id):m_EID(id),m_EVID(-1) {}
	inline ev_bool operator==(const CNAEdge &rhs) const
	{
		return m_EID==rhs.m_EID;
	}
public:
	EVID    m_EID;         // 内存中标识ID(由1开始且连续)
	EVID    m_EVID;        // 数据库中表记录中EVID字段值（可能不连续）
    EVID    m_FromNID;     // 起始网络节点
    EVID    m_ToNID;       // 终止网络节点
    EVID    m_FID;         // 网络源数据集中要素EVID（可能不连续）
    EVString	m_srcName;
};

class CNAAdjacentTable
{
public:
	CNAAdjacentTable(CNetworkDataset* pDataset) : m_pNetworkDataset(pDataset)
	{
		
	}
	const CNANode* GetNodeRef(EVID id) const
	{ 
		if (id - 1 < m_nodes.size() && id > 0)
			return &m_nodes[id-1];

		ev_map<EVID,CNANode>::const_iterator it = m_TempNodes.find(id);
		if (it != m_TempNodes.end())
		{
			return &it->second;
		}
		return NULL;
	}
	CNANode* GetNodeRef(EVID id) 
	{ 
		if (id - 1 < m_nodes.size() && id > 0)
			return &m_nodes[id-1];

		ev_map<EVID,CNANode>::const_iterator it = m_TempNodes.find(id);
		if (it != m_TempNodes.end())
		{
			return (CNANode*)&it->second;
		}
		return NULL;
	}
	ev_void AddNode(CNANode &node)
	{
		m_nodes.push_back(node);
	}   
	ev_void AddTempNode(CNANode &node)
	{
		m_TempNodes[node.id()] = node;
	}   
	const CNAEdge* GetEdgeRef(EVID id) const
	{ 
		if (id - 1 < m_edges.size() && id > 0)
			return &m_edges[id-1];

		ev_map<EVID,CNAEdge>::const_iterator it = m_TempEdges.find(id);
		if (it != m_TempEdges.end())
		{
			return &it->second;
		}
		return NULL;
	}
	EVID GetEdgeRefFromFID(EVID fid)
	{ 
		for (EVID i = 0;i < m_edges.size();i++)
		{
			if (m_edges[i].m_FID == fid)
			{
				return i + 1;  // CNAEdge->m_EID
			}
		}
		return 0;
	}
	CNAEdge* GetEdgeRef(EVID id) ///////////////////数据库改变EVID可能大于m_edges.size()
	{ 
		if (id - 1 < m_edges.size() && id > 0)
			return &m_edges[id-1];

		ev_map<EVID,CNAEdge>::const_iterator it = m_TempEdges.find(id);
		if (it != m_TempEdges.end())
		{
			return (CNAEdge*)&it->second;
		}
		return NULL;
	}
	ev_void AddEdge(CNAEdge &edge)
    {
        m_edges.push_back(edge);
    }
	ev_void AddTempEdge(CNAEdge &edge)
	{
		m_TempEdges[edge.m_EID] = edge;
	}

	ev_void disableEdge(EVID id)
	{
		ev_map<EVID,CNAEdge>::iterator iterEdge;
		ev_map<EVID,CNANode>::iterator iterNode;

		if (id > 0 && id - 1 < m_edges.size())
		{
			if (m_edges[id-1].m_FromNID > 0 && m_edges[id-1].m_FromNID <= m_nodes.size())
			{
				m_nodes[m_edges[id-1].m_FromNID-1].detachEdge(id);
			}
			if (m_edges[id-1].m_ToNID > 0 && m_edges[id-1].m_ToNID <= m_nodes.size())
			{
				m_nodes[m_edges[id-1].m_ToNID-1].detachEdge(id);
			}
		}
		else
		{
			iterEdge = m_TempEdges.find(id);
			if (iterEdge != m_TempEdges.end())
			{
				if (iterEdge->second.m_FromNID > 0 && iterEdge->second.m_FromNID <= m_nodes.size())
				{
					m_nodes[iterEdge->second.m_FromNID - 1].detachEdge(id);
				}
				else if (( iterNode = m_TempNodes.find(iterEdge->second.m_FromNID)) != m_TempNodes.end())
				{
					iterNode->second.detachEdge(id);
				}

				if (iterEdge->second.m_ToNID > 0 && iterEdge->second.m_ToNID <= m_nodes.size())
				{
					m_nodes[iterEdge->second.m_ToNID - 1].detachEdge(id);
				}
				else if (( iterNode = m_TempNodes.find(iterEdge->second.m_ToNID)) != m_TempNodes.end())
				{
					iterNode->second.detachEdge(id);
				}
			}
			
		}
	}
	ev_void enableEdge(EVID id)
	{
		ev_map<EVID,CNAEdge>::iterator iterEdge;
		ev_map<EVID,CNANode>::iterator iterNode;

		if (id > 0 && id - 1 < m_edges.size())
		{
			if (m_edges[id-1].m_FromNID > 0 && m_edges[id-1].m_FromNID <= m_nodes.size())
			{
				m_nodes[m_edges[id-1].m_FromNID-1].touchEdge(id);
			}
			if (m_edges[id-1].m_ToNID > 0 && m_edges[id-1].m_ToNID <= m_nodes.size())
			{
				m_nodes[m_edges[id-1].m_ToNID-1].touchEdge(id);
			}
		}
		else
		{
			iterEdge = m_TempEdges.find(id);
			if (iterEdge != m_TempEdges.end())
			{
				if (iterEdge->second.m_FromNID > 0 && iterEdge->second.m_FromNID <= m_nodes.size())
				{
					m_nodes[iterEdge->second.m_FromNID - 1].touchEdge(id);
				}
				else if (( iterNode = m_TempNodes.find(iterEdge->second.m_FromNID)) != m_TempNodes.end())
				{
					iterNode->second.touchEdge(id);
				}

				if (iterEdge->second.m_ToNID > 0 && iterEdge->second.m_ToNID <= m_nodes.size())
				{
					m_nodes[iterEdge->second.m_ToNID - 1].touchEdge(id);
				}
				else if (( iterNode = m_TempNodes.find(iterEdge->second.m_ToNID)) != m_TempNodes.end())
				{
					iterNode->second.touchEdge(id);
				}
			}
		}
	}

	ev_size_t getNodeCount()
	{
		return m_nodes.size();
	}
	ev_size_t getEdgeCount()
	{
		return m_edges.size();
	}
	ev_size_t getTatolNodeCount()
	{
		return m_nodes.size() + m_TempNodes.size();
	}
	ev_size_t getTatolEdgeCount()
	{
		return m_edges.size() + m_TempEdges.size();
	}
	ev_vector<CNANode>& getNANode()
	{
		return m_nodes;
	}
    ev_vector<CNAEdge> & getEdges()
	{
		return m_edges;
	}
	
	void getAttachEdgesFromFID(ev_uint32 FID,vector<ev_uint32>& EdgesEID)
	{
		for (EVID i = 0;i < m_edges.size();i++)
		{
			if (m_edges[i].m_FID == FID)
			{
				EdgesEID.push_back(m_edges[i].m_EID);
			}
		}
	}
	void intial()
	{
		ev_map<EVID,CNAEdge>::iterator it = m_TempEdges.begin();
		for(;it != m_TempEdges.end(); ++it)
		{
			if (it->second.m_FromNID > 0 && it->second.m_FromNID <= m_nodes.size())
			{
				m_nodes[it->second.m_FromNID-1].detachEdge(it->second.m_EID);
			}
			if (it->second.m_ToNID > 0 && it->second.m_ToNID <= m_nodes.size())
			{
				m_nodes[it->second.m_ToNID-1].detachEdge(it->second.m_EID);
			}
		}
		m_TempEdges.clear();
		m_TempNodes.clear();
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
	// 存储网络数据集原始的网络节点和边元素
	ev_vector<CNANode>   m_nodes;
    ev_vector<CNAEdge>   m_edges;
	// 存储分析时增加的临时节点和边
	ev_map<EVID,CNANode>   m_TempNodes;
	ev_map<EVID,CNAEdge>   m_TempEdges;
	CNetworkDataset*     m_pNetworkDataset;
friend class CNetworkDataset;
};

}}}} //End of Namespace

#endif //_NETWORK_ANALYST_GRAPH_H_H_

