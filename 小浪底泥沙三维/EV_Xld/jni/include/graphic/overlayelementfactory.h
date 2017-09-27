#ifndef __OverlayElementFactory_H__
#define __OverlayElementFactory_H__
#include <core/memoryallocatedobject.h>
#include <core/stringdefines.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class COverlayElement;

            /***** Defines the interface which all components wishing to
                supply COverlayElement subclasses must implement.
            @remarks
                To allow the EarthView::World::Graphic::COverlayElement types available for inclusion on
                overlays to be extended, EV_World allows external apps or plugins
                to register their ability to create custom OverlayElements with
                wanting to do this must implement this interface.
            @par
                Each EarthView::World::Graphic::COverlayElementFactory creates a single type of COverlayElement,
                identified by a 'type name' which must be unique.
            ****/
            class EV_GRAPHIC_DLL COverlayElementFactory : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                COverlayElementFactory(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /***** Destroy the overlay element factory ****/
                COverlayElementFactory() {}
                virtual ~COverlayElementFactory () {}
                /***** Creates a new EarthView::World::Graphic::COverlayElement instance with the name supplied. ****/
                virtual EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &instanceName);
                /***** Destroys a EarthView::World::Graphic::COverlayElement which this factory created previously. ****/
                virtual void destroyOverlayElement(EarthView::World::Graphic::COverlayElement *pElement);
                /***** Gets the string uniquely identifying the type of element this factory creates. ****/
                virtual EVString getTypeName() const;
            };

            /***** Factory for creating CPanelOverlayElement instances. ****/
            class EV_GRAPHIC_DLL CPanelOverlayElementFactory: public EarthView::World::Graphic::COverlayElementFactory
            {
            ev_private:
                CPanelOverlayElementFactory(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /***** See EarthView::World::Graphic::COverlayElementFactory ****/
                CPanelOverlayElementFactory() {}

                EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &instanceName);
                /***** See EarthView::World::Graphic::COverlayElementFactory ****/
                virtual EVString getTypeName() const;
            };
            /***** Factory for creating CBorderPanelOverlayElement instances. ****/
            class EV_GRAPHIC_DLL CBorderPanelOverlayElementFactory: public EarthView::World::Graphic::COverlayElementFactory
            {
            ev_private:
                CBorderPanelOverlayElementFactory(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /***** See EarthView::World::Graphic::COverlayElementFactory ****/
                CBorderPanelOverlayElementFactory() {}

                EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &instanceName);
                /***** See EarthView::World::Graphic::COverlayElementFactory ****/
                virtual EVString getTypeName() const;
            };
            /***** Factory for creating CTextAreaOverlayElement instances. ****/
            class EV_GRAPHIC_DLL CTextAreaOverlayElementFactory: public EarthView::World::Graphic::COverlayElementFactory
            {
            ev_private:
                CTextAreaOverlayElementFactory(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                /***** See EarthView::World::Graphic::COverlayElementFactory ****/
                CTextAreaOverlayElementFactory() {}

                EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &instanceName);
                /***** See EarthView::World::Graphic::COverlayElementFactory ****/
                virtual EVString getTypeName() const;
            };
			/***** CCharOverlayElement*****/
			class EV_GRAPHIC_DLL CCharOverlayElementFactory: public EarthView::World::Graphic::COverlayElementFactory
			{
			ev_private:
				CCharOverlayElementFactory(EarthView::World::Core::CNameValuePairList* pList) {}
			public:
				CCharOverlayElementFactory() {}

				EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &instanceName);

				virtual EVString getTypeName() const;
			};

            /***** Factory for creating CTextAreaOverlayElement instances. ****/
   //         class EV_GRAPHIC_DLL CPixTextAreaOverlayElementFactory: public EarthView::World::Graphic::COverlayElementFactory
   //         {
   //         ev_private:
   //             CPixTextAreaOverlayElementFactory(EarthView::World::Core::CNameValuePairList *pList) {}
   //         public:
   //             /***** See EarthView::World::Graphic::COverlayElementFactory ****/
   //             CPixTextAreaOverlayElementFactory() {}
   //             EarthView::World::Graphic::COverlayElement *createOverlayElement(const EVString &instanceName);
   //             /***** See EarthView::World::Graphic::COverlayElementFactory ****/
   //             virtual EVString getTypeName() const;
			//};
		}
    }
}


#endif

