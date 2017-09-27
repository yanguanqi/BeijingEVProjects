/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/vertex.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CVertex_getPostion_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getPostion();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertex_setPostion_void_CVector3(void *pObjectXXXX, _in const void* position )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				ptrNativeObject->setPostion(*(EarthView::World::Spatial::Math::CVector3*)position);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CVertex_getNormal_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getNormal();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertex_setNormal_void_CVector3(void *pObjectXXXX, _in const void* normal )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				ptrNativeObject->setNormal(*(EarthView::World::Spatial::Math::CVector3*)normal);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CVertex_getTangent_CVector3(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector3& objXXXX = ptrNativeObject->getTangent();
				const EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertex_setTangent_void_CVector3(void *pObjectXXXX, _in const void* tangent )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				ptrNativeObject->setTangent(*(EarthView::World::Spatial::Math::CVector3*)tangent);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CVertex_getTexCoord_CVector4(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CVector4& objXXXX = ptrNativeObject->getTexCoord();
				const EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertex_setTexCoord_void_CVector4(void *pObjectXXXX, _in const void* texCoord )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				ptrNativeObject->setTexCoord(*(EarthView::World::Spatial::Math::CVector4*)texCoord);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertex_setTexCoord_void_CVector4_int(void *pObjectXXXX, _in const void* texCoord, _in int index )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				ptrNativeObject->setTexCoord(*(EarthView::World::Spatial::Math::CVector4*)texCoord, index);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CVertex_getColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getColour();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertex_setColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				ptrNativeObject->setColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CVertex_OperatorConvertionCVector3_CVector3(void *pObjXXXX )
			{
				EarthView::World::Geometry3D::CVertex& objYYYY = *(EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = objYYYY ;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_position( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->m_position;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_position( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_position = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_normal( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->m_normal;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_normal( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_normal = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_tangent( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->m_tangent;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_tangent( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_tangent = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord1( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord1;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord1( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord1 = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord2( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord2;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord2( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord2 = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord3( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord3;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord3( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord3 = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord4( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord4;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord4( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord4 = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord5( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord5;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord5( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord5 = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord6( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord6;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord6( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord6 = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_texCoord7( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector4 &objXXXX = ptrNativeObject->m_texCoord7;
				EarthView::World::Spatial::Math::CVector4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_texCoord7( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_texCoord7 = *(EarthView::World::Spatial::Math::CVector4*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Geometry3D_CVertex_m_colour( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertex* ptrNativeObject = (EarthView::World::Geometry3D::CVertex*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->m_colour;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CVertex_m_colour( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Geometry3D::CVertex*)pObjectXXXX)->m_colour = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Geometry3D_CVertexVector_OperatorIndex_CVertex_ev_size_t(void *pObjXXXX, _in ev_uint64  index )
			{
				EarthView::World::Geometry3D::CVertexVector& objYYYY = *(EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				const EarthView::World::Geometry3D::CVertex& objXXXX = objYYYY[index];
				const EarthView::World::Geometry3D::CVertex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Geometry3D_CVertexVector_getVertex_CVertex_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				EarthView::World::Geometry3D::CVertex& objXXXX = ptrNativeObject->getVertex(pos);
				EarthView::World::Geometry3D::CVertex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertexVector_addVertex_void_CVertex(void *pObjectXXXX, _in const void* vertex )
			{
				EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				ptrNativeObject->addVertex(*(EarthView::World::Geometry3D::CVertex*)vertex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertexVector_insertVertex_void_ev_size_t_CVertex(void *pObjectXXXX, _in ev_uint64  pos, _in const void* vertex )
			{
				EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				ptrNativeObject->insertVertex(pos, *(EarthView::World::Geometry3D::CVertex*)vertex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertexVector_removeVertex_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				ptrNativeObject->removeVertex(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertexVector_removeAllVertexs_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				ptrNativeObject->removeAllVertexs();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CVertexVector_getCapacity_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCapacity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CVertexVector_setCapacity_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				ptrNativeObject->setCapacity(count);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CVertexVector_getCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CVertexVector* ptrNativeObject = (EarthView::World::Geometry3D::CVertexVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CIndexVector_OperatorIndex_ev_uint32_ev_size_t(void *pObjXXXX, _in ev_uint64  index )
			{
				EarthView::World::Geometry3D::CIndexVector& objYYYY = *(EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				ev_uint32 objXXXX = objYYYY[index];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Geometry3D_CIndexVector_getIndices_ev_uint32_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getIndices(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CIndexVector_addIndices_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 indices )
			{
				EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ptrNativeObject->addIndices(indices);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CIndexVector_insertIndices_void_ev_size_t_ev_uint16(void *pObjectXXXX, _in ev_uint64  pos, _in ev_uint16 indices )
			{
				EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ptrNativeObject->insertIndices(pos, indices);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CIndexVector_removeIndices_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ptrNativeObject->removeIndices(pos);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CIndexVector_removeAllIndices_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ptrNativeObject->removeAllIndices();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CIndexVector_getCapacity_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCapacity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CIndexVector_setCapacity_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ptrNativeObject->setCapacity(count);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Geometry3D_CIndexVector_getCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CIndexVector* ptrNativeObject = (EarthView::World::Geometry3D::CIndexVector*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getCount();
				return objXXXX;
			}
		}
	}
}
