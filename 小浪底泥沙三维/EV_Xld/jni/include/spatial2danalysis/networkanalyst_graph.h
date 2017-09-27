#ifndef _NETWORK_ANALYST_ANALYSIS_GRAPH_H_H_H_
#define _NETWORK_ANALYST_ANALYSIS_GRAPH_H_H_H_

#include "spatial2danalysis/config.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

typedef ev_uint32 EVID;

class CNANode
{
public:
    explicit CNANode(EVID id):m_nID(id) {}

    //add neighbour
	ev_void touchEdge(EVID eid) { m_edges.push_back(eid); }
    
    ev_void initializeNext() {
        iter = m_edges.begin();
    }
    EVID getNextAdjacentEdge() {
        return iter!=m_edges.end() ? *iter++ : 0;
    }

    ev_uint32 id() const { return m_nID; }
    ev_void reset(EVID id) {
        m_nID = id;
        m_edges.clear();
        iter = m_edges.begin();
    }
    
    ev_bool operator==(CNANode &rhs)
    {
        return m_nID==rhs.m_nID;
    }
    

private:
    EVID				m_nID;
    ev_vector<EVID>		m_edges;
    ev_vector<EVID>::const_iterator iter;
};

struct CNAEdge
{
	EVID    m_EID;
    EVID    m_FromNID;
    EVID    m_ToNID;
    EVID    m_FID;
    String	m_srcName;
};

class CNAAdjacentTable
{
public:
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
    
    //Edge manipulation
	const CNAEdge* GetEdgeRef(EVID id) const
    { 
        return id-1<m_edges.size() && id>0 ? &m_edges[id-1] : 0; 
    }
    CNAEdge* GetEdgeRef(EVID id)
    { 
        return id-1<m_edges.size() && id>0 ? &m_edges[id-1] : 0; 
    }
	ev_void AddEdge(CNAEdge &edge)
    {
        m_edges.push_back(edge);
    }

    //count
    ev_size_t nodeCount() const { return m_nodes.size(); }

    ev_size_t edgeCount() const { return m_edges.size(); }

private:
	ev_vector<CNANode>   m_nodes;
    ev_vector<CNAEdge>   m_edges;
};


}}}} //End of Namespace







#endif //_NETWORK_ANALYST_GRAPH_H_H_
