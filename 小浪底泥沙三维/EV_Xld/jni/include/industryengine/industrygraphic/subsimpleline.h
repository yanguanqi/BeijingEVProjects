#ifndef CSUBPOLYLINE_H
#define CSUBPOLYLINE_H

#include "core/memoryallocatedobject.h"
#include "mathengine/vector3.h"
#include "industryengine/industrygraphic/industrygraphic_cfg.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			struct SubSimpleline_Data;
			class EV_INDUSTRYGRAPHIC_DLL CSubSimpleline : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef std::vector<ev_real64> RealVector;
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对表</param>
				CSubSimpleline(EarthView::World::Core::CNameValuePairList * pList);
			public:

				CSubSimpleline(); 

				virtual ~CSubSimpleline(); 

				virtual void addPoint(const ev_real64& x,const ev_real64& y,const ev_real64& z); 

				virtual EarthView::World::Spatial::Math::CVector3 getPoint(const ev_int32& index); 

				virtual void removePoint(const ev_int32& index); 

				virtual void removeAllPoints();

				virtual ev_int32 getCount();

				virtual ev_int32 getBeginVertexPos();

				virtual ev_void setBeginVertexPos(const ev_int32& beginVertexPos);

				virtual ev_int32 getEndVertexPos();

				virtual ev_void setEndVertexPos(const ev_int32& endVertexPos);
				
				virtual ev_int32 getBeginIndicePos();

				virtual ev_void setBeginIndicePos(const ev_int32& beginIndicePos);

				virtual ev_int32 getEndIndicePos();

				virtual ev_void setEndIndicePos(const ev_int32& endIndicePos);

				virtual ev_bool containVertex(const ev_uint32& indexPos);

			private:

				SubSimpleline_Data* mpPrivate;

			};  //end class CSubSimpleline

		}
	}
}

#endif
