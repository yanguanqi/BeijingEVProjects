/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "annotation/annotationbuilder.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_build_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->build();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setCreateAnnotationWithSelection_void_ev_bool(void *pObjectXXXX, _in const ev_bool& b )
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjectXXXX;
					ptrNativeObject->setCreateAnnotationWithSelection(b);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setWhereClause_void_EVString(void *pObjectXXXX, _in const char* whereClause )
				{
					EarthView::World::Core::ev_string whereClause1 = whereClause;
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjectXXXX;
					ptrNativeObject->setWhereClause(whereClause1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setScale_void_ev_real64(void *pObjectXXXX, _in const ev_real64& scale )
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjectXXXX;
					ptrNativeObject->setScale(scale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setAppend_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjectXXXX;
					ptrNativeObject->setAppend(b);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CAnnotationBuilder_setTerminated_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CAnnotationBuilder*) pObjectXXXX;
					ptrNativeObject->setTerminated();
				}
			}
		}
	}
}
