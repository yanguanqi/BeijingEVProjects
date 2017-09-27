#ifndef _DIJKSTRA_ALGORITHM_H_H_
#define _DIJKSTRA_ALGORITHM_H_H_

#include "spatial2danalysis/networkanalyst.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

ev_bool Dijkstra(ev_uint32 Start,ev_uint32 End,CNetworkAnalyst *analyst,ev_vector<ev_uint32> &path);

}}}} // End of Namespace




#endif