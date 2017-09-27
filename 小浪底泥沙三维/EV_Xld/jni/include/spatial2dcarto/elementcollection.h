#ifndef EARTHVIEW_WORLD_CARTO_ELEMENTCOLLECTION_H
#define EARTHVIEW_WORLD_CARTO_ELEMENTCOLLECTION_H

#include "spatial2dcarto/cartoconfig.h"
#include "spatialinterface/ielement.h"
#include "core/memoryallocatedobject.h"
using namespace EarthView::World::Spatial::Carto;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				class EV_CARTO_DLL CElementCollection  : CAllocatedObject
				{
				public:
					CElementCollection();
					virtual ~CElementCollection();
					//向元素集合中添加元素
					ev_void add(IElement* element);
					//清空集合中的元素
					ev_void clear();
					//集合中元素的个数
					ev_int32 count();
					//返回当前索引处的元素
					IElement* queryItem(ev_int32 index);
					//删除一个元素
					ev_void remove(IElement* element);
				private:
					ev_vector<IElement*> elementCollection;
				};
			}
		}
	}
}
#endif