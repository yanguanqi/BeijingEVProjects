#ifndef _DIJKSTRA_ALGO_H_H_
#define _DIJKSTRA_ALGO_H_H_

#include "networkanalysis/routeanalyst.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

ev_bool Dijkstra(ev_uint32 Start,
					ev_uint32 End,
					CRouteAnalyst *analyst,
					ev_vector<ev_uint32> &path,
					ev_real64 &totalDist);
}}}} // End of Namespace




#endif