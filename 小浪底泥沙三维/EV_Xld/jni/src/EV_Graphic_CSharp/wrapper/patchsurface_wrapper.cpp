/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/patchsurface.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_defineSurface_void_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t_ev_size_t_VisibleSide(void *pObjectXXXX, _inout void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* ref_declaration, _in ev_uint64  width, _in ev_uint64  height, _in int pType, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel, _in int visibleSide )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->defineSurface(controlPointBuffer, ref_declaration, width, height, (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType)pType, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (EarthView::World::Graphic::CPatchSurface::VisibleSide)visibleSide);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_defineSurface_void_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* ref_declaration, _in ev_uint64  width, _in ev_uint64  height, _in int pType, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->defineSurface(controlPointBuffer, ref_declaration, width, height, (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType)pType, uMaxSubdivisionLevel, vMaxSubdivisionLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_defineSurface_void_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType_ev_size_t(void *pObjectXXXX, _inout void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* ref_declaration, _in ev_uint64  width, _in ev_uint64  height, _in int pType, _in ev_uint64  uMaxSubdivisionLevel )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->defineSurface(controlPointBuffer, ref_declaration, width, height, (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType)pType, uMaxSubdivisionLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_defineSurface_void_void_CVertexDeclaration_ev_size_t_ev_size_t_PatchSurfaceType(void *pObjectXXXX, _inout void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* ref_declaration, _in ev_uint64  width, _in ev_uint64  height, _in int pType )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->defineSurface(controlPointBuffer, ref_declaration, width, height, (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType)pType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_defineSurface_void_void_CVertexDeclaration_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* ref_declaration, _in ev_uint64  width, _in ev_uint64  height )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->defineSurface(controlPointBuffer, ref_declaration, width, height);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPatchSurface_getRequiredVertexCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getRequiredVertexCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPatchSurface_getRequiredIndexCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getRequiredIndexCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPatchSurface_getCurrentIndexCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCurrentIndexCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPatchSurface_getIndexOffset_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getIndexOffset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPatchSurface_getVertexOffset_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getVertexOffset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPatchSurface_getBounds_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBounds();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPatchSurface_getBoundingSphereRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getBoundingSphereRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_build_void_CHardwareVertexBufferSharedPtr_ev_size_t_CHardwareIndexBufferSharedPtr_ev_size_t(void *pObjectXXXX, _in void* destVertexBuffer, _in ev_uint64  vertexStart, _in void* destIndexBuffer, _in ev_uint64  indexStart )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->build(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)destVertexBuffer, vertexStart, *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)destIndexBuffer, indexStart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_setSubdivisionFactor_void_Real(void *pObjectXXXX, _in Real factor )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->setSubdivisionFactor(factor);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPatchSurface_getSubdivisionFactor_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getSubdivisionFactor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPatchSurface_getControlPointBuffer_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->getControlPointBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchSurface_notifyControlPointBufferDeallocated_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPatchSurface* ptrNativeObject = (EarthView::World::Graphic::CPatchSurface*) pObjectXXXX;
				ptrNativeObject->notifyControlPointBufferDeallocated();
			}
		}
	}
}
