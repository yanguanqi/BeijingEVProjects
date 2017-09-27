#ifndef EARTHVIEW_WORLD_CARTO_LEGENDCLASSS_H
#define EARTHVIEW_WORLD_CARTO_LEGENDCLASSS_H
#include "carto/cartoconfig.h"
#include "spatialinterface/ielement.h"

namespace EarthView
{
	namespace World
	{
		namespace Carto
		{
			//调用CLegendClass,CLegendClasses,都要首先调用legendItem中的createGraphic函数，
			//从getLegendClasses方法中获取
			class EV_CARTO_DLL CLegendClass : public CAllocatedObject
			{
			public:
				CLegendClass();
				~CLegendClass();

				//CRectangleElement
				IElement* getPatch() const;
				ev_void setPatch(IElement* patch);
				//CTextElement
				IElement* getLabels()  const;
				ev_void setLabels(IElement* labels); 
				//width
				ev_real64 getWidth() const;
				ev_void setWidth(ev_real64 width);
				//height
				ev_real64 getHeight() const;
				ev_void setHeight(ev_real64 height);
			private:
				IElement* m_patch;
				IElement* m_labels;
				ev_real64 m_width;
				ev_real64 m_height;
			};
			class EV_CARTO_DLL CLegendClasses : public CAllocatedObject
			{
			public:
				ev_void add(CLegendClass* legendClass);
				ev_void remove(ev_uint32 index);
				CLegendClass* queryLegendClass(ev_uint32 index);
				ev_uint32 getCount() const;
			private:
				ev_vector<CLegendClass*> m_legendClasses;
				ev_vector<CLegendClass*>::iterator iter;
			};
		}
	}
}

#endif