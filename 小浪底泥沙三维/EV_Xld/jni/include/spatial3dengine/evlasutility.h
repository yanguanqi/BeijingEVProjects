#ifndef EARTHVIEW_WORLD_SPATIAL3D_ATLAS_EVLASUTILITY_H
#define EARTHVIEW_WORLD_SPATIAL3D_ATLAS_EVLASUTILITY_H

#include "spatial3dengine/obliquemodellayer.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas
			{
				enum LASCOLORTYPE
				{
					LCT_Self = 0,//点云自身颜色
					LCT_General, //简单设置颜色
					LCT_Elevation,
					LCT_Intensity,
					LCT_Classification,
					LCT_ReturnNumber
				};

				class EV_Spatial3DEngine_DLL CLasQueryResultEntry : public EarthView::World::Core::CBaseObject
				{
ev_private:
					CLasQueryResultEntry(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CLasQueryResultEntry();

					EarthView::World::Spatial::Math::CVector3 geoPosition;
					ev_real32 elevation;
					ev_uint8 classification;
					ev_uint16 intensity;
					ev_uint16 returnNumber;
					EarthView::World::Graphic::CColourValue color;

					//// Comparison operator for sorting
					ev_bool operator <(const CLasQueryResultEntry &rhs) const;
					ev_bool operator >(const CLasQueryResultEntry &rhs) const;
				};

				/* typedef list<CLasQueryResultEntry> CLasQueryResult;*/
				class EV_Spatial3DEngine_DLL CLasQueryResult : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef list<CLasQueryResultEntry> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					iterator insert(iterator pos, CLasQueryResultEntry const &t);
ev_private:
					CLasQueryResult(_in EarthView::World::Core::CNameValuePairList *pList);
				private:
					InternalList mList;
				public:
					CLasQueryResult();

					void push_back(CLasQueryResultEntry const &t);
					void push_front(CLasQueryResultEntry const &t);
					void pop_back();
					void pop_front();

					CLasQueryResultEntry& front();
					CLasQueryResultEntry& back();
					CLasQueryResultEntry& at(ev_uint32 pos);
					void insert(ev_uint32 pos, CLasQueryResultEntry const &t);
					void remove(ev_size_t pos);
					ev_bool empty() const;
					ev_size_t size() const;
					void resize(ev_size_t newSize);
					void clear();
				};
			}
		}
	}
}
#endif
