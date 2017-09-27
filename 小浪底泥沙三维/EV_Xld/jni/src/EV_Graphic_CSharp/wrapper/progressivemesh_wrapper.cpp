/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/progressivemesh.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CBitArray_OperatorAssign_CBitArray_CBitArray(void *pObjXXXX, _in const void* ba )
			{
				EarthView::World::Graphic::CBitArray& objXXXX = *((EarthView::World::Graphic::CBitArray*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CBitArray*)ba;
				EarthView::World::Graphic::CBitArray *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CBitArray_getBit_bool_size_t(void *pObjectXXXX, _in ev_uint64  i )
			{
				const EarthView::World::Graphic::CBitArray* ptrNativeObject = (EarthView::World::Graphic::CBitArray*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getBit(i);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBitArray_setBit_void_size_t(void *pObjectXXXX, _in ev_uint64  i )
			{
				EarthView::World::Graphic::CBitArray* ptrNativeObject = (EarthView::World::Graphic::CBitArray*) pObjectXXXX;
				ptrNativeObject->setBit(i);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBitArray_clearBit_void_size_t(void *pObjectXXXX, _in ev_uint64  i )
			{
				EarthView::World::Graphic::CBitArray* ptrNativeObject = (EarthView::World::Graphic::CBitArray*) pObjectXXXX;
				ptrNativeObject->clearBit(i);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBitArray_clearAllBits_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CBitArray* ptrNativeObject = (EarthView::World::Graphic::CBitArray*) pObjectXXXX;
				ptrNativeObject->clearAllBits();
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CBitArray_empty_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBitArray* ptrNativeObject = (EarthView::World::Graphic::CBitArray*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CBitArray_resize_void_size_t(void *pObjectXXXX, _in ev_uint64  bits_count )
			{
				EarthView::World::Graphic::CBitArray* ptrNativeObject = (EarthView::World::Graphic::CBitArray*) pObjectXXXX;
				ptrNativeObject->resize(bits_count);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CBitArray_getBitsCount_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CBitArray* ptrNativeObject = (EarthView::World::Graphic::CBitArray*) pObjectXXXX;
				size_t objXXXX = ptrNativeObject->getBitsCount();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback)(_in const EarthView::World::Graphic::CVertexData* vertexData);
			class CProgressiveMeshProxy : public EarthView::World::Graphic::CProgressiveMesh
			{
			private:
				EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback* m_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback;
			public:
				CProgressiveMeshProxy(EarthView::World::Core::CNameValuePairList *pList) : CProgressiveMesh(pList)
				{
					m_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData(EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback = pCallback;
				}
				virtual void addExtraVertexPositionBuffer(_in const EarthView::World::Graphic::CVertexData* vertexData)
				{
					if(m_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback(vertexData);
					}
					else
						return this->CProgressiveMesh::addExtraVertexPositionBuffer(vertexData);
				}
			};
			REGISTER_FACTORY_CLASS(CProgressiveMeshProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_push_back_void_CIndexData(void *pObjectXXXX, _in EarthView::World::Graphic::CIndexData*& ref_t )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_front_CIndexData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_back_CIndexData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_insert_void_ev_uint32_CIndexData(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CIndexData*& ref_t )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_OperatorIndex_CIndexData_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList& objYYYY = *(EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_at_CIndexData_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_LODFaceList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CProgressiveMesh_generateLodLevels_bool_CMesh_LodValueList_VertexReductionQuota_Real(_in EarthView::World::Graphic::CMesh* pMesh, _in const void* lodValues, _in int reductionMethod, _in Real reductionValue )
			{
				bool objXXXX = EarthView::World::Graphic::CProgressiveMesh::generateLodLevels(pMesh, *(EarthView::World::Graphic::LodValueList*)lodValues, (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota)reductionMethod, reductionValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CProgressiveMesh_generateSimplifiedMesh_CMeshPtr_EVString_EVString_CMesh_bool_LodValueList_VertexReductionQuota_Real_ev_uint64(_in const char* name, _in const char* groupName, _in EarthView::World::Graphic::CMesh* inMesh, _in bool dropOriginalGeometry, _in const void* lodValues, _in int reductionMethod, _in Real reductionValue, _out ev_uint64& removedVertexDuplicatesCount )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CMeshPtr objXXXX = EarthView::World::Graphic::CProgressiveMesh::generateSimplifiedMesh(name1, groupName1, inMesh, dropOriginalGeometry, *(EarthView::World::Graphic::LodValueList*)lodValues, (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota)reductionMethod, reductionValue, removedVertexDuplicatesCount);
				EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_push_back_void_CProgressiveMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CProgressiveMesh*& ref_t )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CProgressiveMesh*  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_front_CProgressiveMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CProgressiveMesh* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CProgressiveMesh*  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_back_CProgressiveMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CProgressiveMesh* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_insert_void_ev_uint32_CProgressiveMesh(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CProgressiveMesh*& ref_t )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CProgressiveMesh*  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_OperatorIndex_CProgressiveMesh_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList& objYYYY = *(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				EarthView::World::Graphic::CProgressiveMesh* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CProgressiveMesh*  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_at_CProgressiveMesh_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CProgressiveMesh* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_ProgressiveMeshList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData(void *pObjectXXXX, _in const EarthView::World::Graphic::CVertexData* vertexData )
			{
				EarthView::World::Graphic::CProgressiveMesh* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh*) pObjectXXXX;
				if (dynamic_cast<CProgressiveMeshProxy*>((EarthView::World::Graphic::CProgressiveMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CProgressiveMesh::addExtraVertexPositionBuffer(vertexData);
				else
					ptrNativeObject->addExtraVertexPositionBuffer(vertexData);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData( void *pObjectXXXX, EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_Callback* pCallback )
			{
				CProgressiveMeshProxy* ptr = dynamic_cast<CProgressiveMeshProxy*>((EarthView::World::Graphic::CProgressiveMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProgressiveMesh_addExtraVertexPositionBuffer_void_CVertexData_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CVertexData* vertexData )
			{
				EarthView::World::Graphic::CProgressiveMesh* ptrNativeObject = (EarthView::World::Graphic::CProgressiveMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CProgressiveMesh::addExtraVertexPositionBuffer(vertexData);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CProgressiveMesh_build_bool_ProgressiveMeshList_CLodStrategy_LodValueList_VertexReductionQuota_Real(_inout void* pmInList, _in const EarthView::World::Graphic::CLodStrategy* lodStrategy, _in const void* lodValues, _in int quota, _in Real reductionValue )
			{
				bool objXXXX = EarthView::World::Graphic::CProgressiveMesh::build(*(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*)pmInList, lodStrategy, *(EarthView::World::Graphic::LodValueList*)lodValues, (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota)quota, reductionValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CProgressiveMesh_build_bool_ProgressiveMeshList_CLodStrategy_LodValueList_VertexReductionQuota(_inout void* pmInList, _in const EarthView::World::Graphic::CLodStrategy* lodStrategy, _in const void* lodValues, _in int quota )
			{
				bool objXXXX = EarthView::World::Graphic::CProgressiveMesh::build(*(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*)pmInList, lodStrategy, *(EarthView::World::Graphic::LodValueList*)lodValues, (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota)quota);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_VertexBufferLockGuard_pData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::VertexBufferLockGuard* ptrNativeObject = (EarthView::World::Graphic::VertexBufferLockGuard*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->pData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_VertexBufferLockGuard_pData( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::VertexBufferLockGuard*)pObjectXXXX)->pData = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_IndexBufferLockGuard_pData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::IndexBufferLockGuard* ptrNativeObject = (EarthView::World::Graphic::IndexBufferLockGuard*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->pData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_IndexBufferLockGuard_pData( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::IndexBufferLockGuard*)pObjectXXXX)->pData = value;
			}
		}
	}
}
