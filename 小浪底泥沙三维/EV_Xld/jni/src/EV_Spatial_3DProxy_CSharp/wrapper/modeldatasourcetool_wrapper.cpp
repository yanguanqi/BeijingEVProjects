/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/modeldatasourcetool.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_initEnvironment_ev_bool_WorkType(void *pObjectXXXX, _in int worktype )
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->initEnvironment((EarthView::World::Spatial3DProxy::ModelDataSourceTool::WorkType)worktype);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_isRun_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isRun();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_setRunable_void_ev_bool(void *pObjectXXXX, _in ev_bool runable )
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjectXXXX;
				ptrNativeObject->setRunable(runable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_exportModelDataSet_ev_bool_EVString_EVString_EVString(void *pObjectXXXX, _in const char* datasourceurl, _in const char* datasetname, _in const char* exportfolder )
			{
				EarthView::World::Core::ev_string datasourceurl1 = datasourceurl;
				EarthView::World::Core::ev_string datasetname1 = datasetname;
				EarthView::World::Core::ev_string exportfolder1 = exportfolder;
				EarthView::World::Spatial3DProxy::ModelDataSourceTool* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exportModelDataSet(datasourceurl1, datasetname1, exportfolder1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_percentage_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->percentage();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_setPercentage_void_ev_int32(void *pObjectXXXX, _in ev_int32 percentage )
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool* ptrNativeObject = (EarthView::World::Spatial3DProxy::ModelDataSourceTool*) pObjectXXXX;
				ptrNativeObject->setPercentage(percentage);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_getLastError_EVString( )
			{
				EVString objXXXX = EarthView::World::Spatial3DProxy::ModelDataSourceTool::getLastError();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_ModelDataSourceTool_setLastErrorID_void_ev_int32(_in ev_int32 errorid )
			{
				EarthView::World::Spatial3DProxy::ModelDataSourceTool::setLastErrorID(errorid);
			}
		}
	}
}
