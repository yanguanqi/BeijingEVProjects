/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/attributequery.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CAttributeQuery_Compile_ev_bool_IFields_ev_char(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFields* pFields, _in const ev_char* pExpression )
				{
					EarthView::World::Spatial::GeoDataset::CAttributeQuery* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CAttributeQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->Compile(pFields, pExpression);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CAttributeQuery_Evaluate_ev_bool_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* pFeature )
				{
					EarthView::World::Spatial::GeoDataset::CAttributeQuery* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CAttributeQuery*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->Evaluate(pFeature);
					return objXXXX;
				}
			}
		}
	}
}
