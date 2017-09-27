/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/modelsceneserializer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_setModelRootPath_void_EVString(void *pObjectXXXX, _in const char* modelrootfolder )
				{
					EarthView::World::Core::ev_string modelrootfolder1 = modelrootfolder;
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjectXXXX;
					ptrNativeObject->setModelRootPath(modelrootfolder1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_parseModelSceneFile_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->parseModelSceneFile();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_saveModelSceneFile_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveModelSceneFile();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CModelSceneSerialzier_addNode_ev_bool_EVString_ev_real32_ev_real32_ev_real32_CVector3_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in const char* modelfilePath, _in ev_real32 lat, _in ev_real32 lon, _in ev_real32 alt, _in void* scale, _in ev_real32 rotateX, _in ev_real32 rotateY, _in ev_real32 rotateZ )
				{
					EarthView::World::Core::ev_string modelfilePath1 = modelfilePath;
					EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addNode(modelfilePath1, lat, lon, alt, *(EarthView::World::Spatial::Math::CVector3*)scale, rotateX, rotateY, rotateZ);
					return objXXXX;
				}
			}
		}
	}
}
