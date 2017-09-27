#ifndef CPOLYLINE_H
#define CPOLYLINE_H

#include "industryengine/industrygraphic/subsimpleline.h"
#include "graphic/colourvalue.h"
#include <vector>

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class CSubSimpleline; 
			class CSimplelineManager;
			class EV_INDUSTRYGRAPHIC_DLL CSimpleline : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对表</param>
				CSimpleline(EarthView::World::Core::CNameValuePairList * pList);
			public:
				CSimpleline(); 

				virtual ~CSimpleline(); 

				virtual CSubSimpleline* addSubSimpleline(); 

				virtual CSubSimpleline* getSubSimpleline(const ev_int32& index); 

				virtual void removeSubSimpleline(const ev_int32& index); 

				virtual void removeAllPoints();

				virtual EarthView::World::Graphic::CColourValue& getColor();

				virtual void setColor(const ev_real32& red,const ev_real32& green,
					const ev_real32& blue,const ev_real32& alpha);

				virtual ev_int32 getID();

				virtual ev_void setID(const ev_int32& id);

				virtual ev_int32 getCount();

				virtual ev_bool getVisible();

				virtual ev_void setVisible(const ev_bool& value);

				virtual ev_bool containVertex(const ev_uint32& indexPos);

				virtual ev_void setNeedHightlight(const ev_bool& value);

				virtual ev_bool getNeedHightlight();
				
			public:
				static ev_int32 UNIQUE_ID;
			private:

				ev_int32 mID;
				ev_bool mVisible;
				ev_bool mNeedHightlight;
				EarthView::World::Graphic::CColourValue mColor;
				std::vector<CSubSimpleline*> mSubLines;

				friend class CSimplelineManager;
			};  //end class CSimpleline

		}
	}
}

#endif
