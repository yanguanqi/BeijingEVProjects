/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/dbrasterexchangeparam.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_isBuildOverView_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->isBuildOverView();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setBuildOverView_void_bool(void *pObjectXXXX, _in bool bValue )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					ptrNativeObject->setBuildOverView(bValue);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getMaxOverViewLevel_int(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getMaxOverViewLevel();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setMaxOverViewLevel_void_int(void *pObjectXXXX, _in int nValue )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					ptrNativeObject->setMaxOverViewLevel(nValue);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getCompressType_int(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getCompressType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setCompressType_void_int(void *pObjectXXXX, _in int nValue )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					ptrNativeObject->setCompressType(nValue);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_getBlockSize_int(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					int objXXXX = ptrNativeObject->getBlockSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Convertor_CDBRasterExchangeParam_setBlockSize_void_int(void *pObjectXXXX, _in int nValue )
				{
					EarthView::World::Spatial::Convertor::CDBRasterExchangeParam* ptrNativeObject = (EarthView::World::Spatial::Convertor::CDBRasterExchangeParam*) pObjectXXXX;
					ptrNativeObject->setBlockSize(nValue);
				}
			}
		}
	}
}
