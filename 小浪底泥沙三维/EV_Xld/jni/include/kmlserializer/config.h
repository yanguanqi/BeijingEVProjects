#ifndef EARTHVIEW_WORLD_SPATIAL_KML_COFING_H
#define EARTHVIEW_WORLD_SPATIAL_KML_COFING_H

#include "core/global.h"

#ifdef EV_BUILD_KML 
#define EV_KMLSERIALIZER_DLL EV_DLL_EXPORT
#else
#define EV_KMLSERIALIZER_DLL EV_DLL_IMPORT
#endif

//namespace boost
//{
//    template<class T> class intrusive_ptr;
//}
//
//namespace kmldom
//{
//    class KmlFactory;
//    class Feature;  
//	class StyleMap;
//	class Style;
//	class Document;
//	class Folder;
//
//    typedef boost::intrusive_ptr<Feature> FeaturePtr;
//	typedef boost::intrusive_ptr<StyleMap> StyleMapPtr;
//	typedef boost::intrusive_ptr<Style> StylePtr;
//	typedef boost::intrusive_ptr<Document> DocumentPtr;
//	typedef boost::intrusive_ptr<Folder> FolderPtr;
//
//}
//
//namespace kmlengine
//{
//    class KmlFile;
//}

#endif