#ifndef EV_SPATIAL3DLAYER_OCTREECACHELAYERINFO_H
#define EV_SPATIAL3DLAYER_OCTREECACHELAYERINFO_H

#include "spatial3dlayer/3dlayerconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/itheme.h"
#include "spatialinterface/ilabelproperty.h"
#include "mathengine/axisalignedbox.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				class CVector3DCacheFieldVector;

				class EV_3DLAYER_DLL CVectorCache3DLayerInfo
					: public EarthView::World::Core::CAllocatedObject
				{
				public :
					CVectorCache3DLayerInfo();
					~CVectorCache3DLayerInfo();

					void setLayerTheme(EarthView::World::Spatial::Theme::ITheme *theme);
					EarthView::World::Spatial::Theme::ITheme* getLayerTheme() const;
					void setLayerLabelProperty(EarthView::World::Spatial::Display::ILabelProperty* labelproperty);
					EarthView::World::Spatial::Display::ILabelProperty* getLayerLabelProperty() const;
					void setLayerFeatureCount(ev_uint32 count);
					ev_uint32 getLayerFeatureCount() const;
					void setLayerStatisticsMaxValue(ev_real64 value);
					ev_real64 getLayerStatisticsMaxValue() const;
					void setLayerRootOctreeBox(EarthView::World::Spatial::Math::CAxisAlignedBox& box);
					EarthView::World::Spatial::Math::CAxisAlignedBox getLayerRootOctreeBox() const;
					void setLayerWebFields(CVector3DCacheFieldVector* fields);
					CVector3DCacheFieldVector* getLayerWebFields() const;

					EarthView::World::Core::MemoryDataStreamPtr toStream();
					static CVectorCache3DLayerInfo* fromStream(const EarthView::World::Core::MemoryDataStreamPtr& stream);
				private:
					EarthView::World::Spatial::Theme::ITheme* mpTheme;
					EarthView::World::Spatial::Display::ILabelProperty* mpLabelProperty;
					ev_uint32 mFeatureCount;
					ev_real64 mStatisticsMaxValue;
					CVector3DCacheFieldVector* mFields;
					EarthView::World::Spatial::Math::CAxisAlignedBox mRootOctreeBox;
					ev_bool mbReleaseFag;
				};

			}
		}
	}
}
#endif