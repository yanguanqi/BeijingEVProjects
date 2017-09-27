/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderoperation.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall Get_EarthView_World_Graphic_CRenderOperation_vertexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderOperation* ptrNativeObject = (EarthView::World::Graphic::CRenderOperation*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->vertexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderOperation_vertexData( void *pObjectXXXX, EarthView::World::Graphic::CVertexData*  value )
			{
				((EarthView::World::Graphic::CRenderOperation*)pObjectXXXX)->vertexData = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CRenderOperation_operationType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderOperation* ptrNativeObject = (EarthView::World::Graphic::CRenderOperation*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation::OperationType objXXXX = ptrNativeObject->operationType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderOperation_operationType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CRenderOperation*)pObjectXXXX)->operationType = (EarthView::World::Graphic::CRenderOperation::OperationType)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CRenderOperation_useIndexes( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderOperation* ptrNativeObject = (EarthView::World::Graphic::CRenderOperation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->useIndexes;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderOperation_useIndexes( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CRenderOperation*)pObjectXXXX)->useIndexes = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall Get_EarthView_World_Graphic_CRenderOperation_indexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderOperation* ptrNativeObject = (EarthView::World::Graphic::CRenderOperation*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->indexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderOperation_indexData( void *pObjectXXXX, EarthView::World::Graphic::CIndexData*  value )
			{
				((EarthView::World::Graphic::CRenderOperation*)pObjectXXXX)->indexData = value;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CRenderable*  _stdcall Get_EarthView_World_Graphic_CRenderOperation_srcRenderable( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderOperation* ptrNativeObject = (EarthView::World::Graphic::CRenderOperation*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderable* objXXXX = ptrNativeObject->srcRenderable;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderOperation_srcRenderable( void *pObjectXXXX, const EarthView::World::Graphic::CRenderable*  value )
			{
				((EarthView::World::Graphic::CRenderOperation*)pObjectXXXX)->srcRenderable = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CRenderOperation_numberOfInstances( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderOperation* ptrNativeObject = (EarthView::World::Graphic::CRenderOperation*) pObjectXXXX;
				size_t objXXXX = ptrNativeObject->numberOfInstances;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderOperation_numberOfInstances( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CRenderOperation*)pObjectXXXX)->numberOfInstances = value;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall Get_EarthView_World_Graphic_CRenderOperation_useGlobalInstancingVertexBufferIsAvailable( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderOperation* ptrNativeObject = (EarthView::World::Graphic::CRenderOperation*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->useGlobalInstancingVertexBufferIsAvailable;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderOperation_useGlobalInstancingVertexBufferIsAvailable( void *pObjectXXXX, bool  value )
			{
				((EarthView::World::Graphic::CRenderOperation*)pObjectXXXX)->useGlobalInstancingVertexBufferIsAvailable = value;
			}
		}
	}
}
