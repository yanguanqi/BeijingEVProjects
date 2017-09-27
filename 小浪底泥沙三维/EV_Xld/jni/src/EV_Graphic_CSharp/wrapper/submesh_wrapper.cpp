/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/submesh.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSubMesh_addInstance_bool_CMatrix4_CColourValue(void *pObjectXXXX, _in const void* matrix, _in const void* color )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->addInstance(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Graphic::CColourValue*)color);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSubMesh_removeInstance_bool_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->removeInstance(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_clearInstances_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->clearInstances();
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSubMesh_getInstance_bool_ev_size_t_CMatrix4_CColourValue(void *pObjectXXXX, _in ev_uint64  index, _inout void* matrix, _inout void* color )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getInstance(index, *(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Graphic::CColourValue*)color);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSubMesh_getInstance_bool_ev_size_t_CMatrix4(void *pObjectXXXX, _in ev_uint64  index, _inout void* matrix )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getInstance(index, *(EarthView::World::Spatial::Math::CMatrix4*)matrix);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSubMesh_getInstance_bool_ev_size_t_CColourValue(void *pObjectXXXX, _in ev_uint64  index, _inout void* color )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getInstance(index, *(EarthView::World::Graphic::CColourValue*)color);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSubMesh_setInstance_bool_ev_size_t_CMatrix4_CColourValue(void *pObjectXXXX, _in ev_uint64  index, _in const void* matrix, _in const void* color )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->setInstance(index, *(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Graphic::CColourValue*)color);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CSubMesh_getNumInstance_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CSubMesh_useSharedVertices( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->useSharedVertices;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_useSharedVertices( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->useSharedVertices = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CSubMesh_operationType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CRenderOperation::OperationType objXXXX = ptrNativeObject->operationType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_operationType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->operationType = (EarthView::World::Graphic::CRenderOperation::OperationType)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall Get_EarthView_World_Graphic_CSubMesh_vertexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->vertexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_vertexData( void *pObjectXXXX, EarthView::World::Graphic::CVertexData*  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->vertexData = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CIndexData*  _stdcall Get_EarthView_World_Graphic_CSubMesh_indexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CIndexData* objXXXX = ptrNativeObject->indexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_indexData( void *pObjectXXXX, EarthView::World::Graphic::CIndexData*  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->indexData = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CSubMesh_blendIndexToBoneIndexMap( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::IndexMap &objXXXX = ptrNativeObject->blendIndexToBoneIndexMap;
				EarthView::World::Graphic::IndexMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_blendIndexToBoneIndexMap( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->blendIndexToBoneIndexMap = *(EarthView::World::Graphic::IndexMap*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CSubMesh_mLodFaceList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList &objXXXX = ptrNativeObject->mLodFaceList;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_mLodFaceList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->mLodFaceList = *(EarthView::World::Graphic::CProgressiveMesh::LODFaceList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CSubMesh_extremityPoints( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::VertexList &objXXXX = ptrNativeObject->extremityPoints;
				EarthView::World::Spatial::Math::VertexList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_extremityPoints( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->extremityPoints = *(EarthView::World::Spatial::Math::VertexList*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMesh*  _stdcall Get_EarthView_World_Graphic_CSubMesh_parent( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMesh* objXXXX = ptrNativeObject->parent;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_parent( void *pObjectXXXX, EarthView::World::Graphic::CMesh*  value )
			{
				((EarthView::World::Graphic::CSubMesh*)pObjectXXXX)->parent = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_setMaterialName_void_EVString_EVString(void *pObjectXXXX, _in const char* matName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string matName1 = matName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->setMaterialName(matName1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_setMaterialName_void_EVString(void *pObjectXXXX, _in const char* matName )
			{
				EarthView::World::Core::ev_string matName1 = matName;
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->setMaterialName(matName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CSubMesh_getMaterialName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getMaterialName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_isMatInitialised_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isMatInitialised();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh__getRenderOperation_void_CRenderOperation_ev_uint16(void *pObjectXXXX, _inout void* rend, _in ev_uint16 lodIndex )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->_getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)rend, lodIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh__getRenderOperation_void_CRenderOperation(void *pObjectXXXX, _inout void* rend )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->_getRenderOperation(*(EarthView::World::Graphic::CRenderOperation*)rend);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_addBoneAssignment_void_VertexBoneAssignment(void *pObjectXXXX, _in const EarthView::World::Graphic::VertexBoneAssignment& vertBoneAssign )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->addBoneAssignment(vertBoneAssign);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_clearBoneAssignments_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->clearBoneAssignments();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMesh_getBoneAssignmentIterator_BoneAssignmentIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::BoneAssignmentIterator objXXXX = ptrNativeObject->getBoneAssignmentIterator();
				EarthView::World::Graphic::BoneAssignmentIterator *pXXXX = new EarthView::World::Graphic::BoneAssignmentIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubMesh_getBoneAssignments_VertexBoneAssignmentList(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList& objXXXX = ptrNativeObject->getBoneAssignments();
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh__compileBoneAssignments_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->_compileBoneAssignments();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CSubMesh_AliasTexturePair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTexturePair* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTexturePair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_AliasTexturePair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CSubMesh::AliasTexturePair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CSubMesh_AliasTexturePair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTexturePair* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTexturePair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->second;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CSubMesh_AliasTexturePair_second( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CSubMesh::AliasTexturePair*)pObjectXXXX)->second = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_nextValue_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextValue();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_nextValuePtr_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				EVString* objXXXX = ptrNativeObject->nextValuePtr();
				return (char*)objXXXX->c_str();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_next_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->next();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_getBegin_AliasTexturePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_getEnd_AliasTexturePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubMesh_AliasTextureIterator_getCurrent_AliasTexturePair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator* ptrNativeObject = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMesh_getAliasTextureIterator_AliasTextureIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator objXXXX = ptrNativeObject->getAliasTextureIterator();
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pXXXX = new EarthView::World::Graphic::CSubMesh::AliasTextureIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_addTextureAlias_void_EVString_EVString(void *pObjectXXXX, _in const char* aliasName, _in const char* textureName )
			{
				EarthView::World::Core::ev_string aliasName1 = aliasName;
				EarthView::World::Core::ev_string textureName1 = textureName;
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->addTextureAlias(aliasName1, textureName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_removeTextureAlias_void_EVString(void *pObjectXXXX, _in const char* aliasName )
			{
				EarthView::World::Core::ev_string aliasName1 = aliasName;
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->removeTextureAlias(aliasName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_removeAllTextureAliases_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->removeAllTextureAliases();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_hasTextureAliases_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasTextureAliases();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSubMesh_getTextureAliasCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getTextureAliasCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_updateMaterialUsingTextureAliases_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateMaterialUsingTextureAliases();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CSubMesh_getVertexAnimationType_VertexAnimationType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::VertexAnimationType objXXXX = ptrNativeObject->getVertexAnimationType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CSubMesh_getVertexAnimationIncludesNormals_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getVertexAnimationIncludesNormals();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_generateExtremes_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->generateExtremes(count);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_isBuildEdgesEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBuildEdgesEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_setBuildEdgesEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool b )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->setBuildEdgesEnabled(b);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_reserveBlockIndicesSize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  size )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->reserveBlockIndicesSize(size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_addBlockIndex_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 startIndex )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->addBlockIndex(startIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_removeBlockIndex_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 i )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->removeBlockIndex(i);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_clearBlockIndices_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->clearBlockIndices();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CSubMesh_getNumBlockIndices_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumBlockIndices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CMatrix4_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const void* worldMatrix, _out void* point )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CMatrix4_CVector3_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const void* worldMatrix, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CIndexData_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const EarthView::World::Graphic::CIndexData* iData, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, iData, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CIndexData_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const EarthView::World::Graphic::CIndexData* iData, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3, _in void* segmentIndex )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, iData, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3, *(EarthView::World::Core::IntVector*)segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CVertexData_CIndexData_OperationType_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const EarthView::World::Graphic::CVertexData* vData, _in const EarthView::World::Graphic::CIndexData* iData, _in int ot, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3, _in void* segmentIndex )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, vData, iData, (EarthView::World::Graphic::CRenderOperation::OperationType)ot, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3, *(EarthView::World::Core::IntVector*)segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32_IntVector(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3, _in void* segmentIndex )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3, *(EarthView::World::Core::IntVector*)segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CMatrix4_ev_bool_ev_bool_CVector3_IntVector(void *pObjectXXXX, _in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point, _in void* segmentIndex )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point, *(EarthView::World::Core::IntVector*)segmentIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_select_ev_bool_CRay_CViewport_CVertexData_CIndexData_OperationType_CMatrix4_ev_bool_ev_bool_CVector3_ev_uint32_ev_uint32_ev_uint32(_in const void* ray, _in const EarthView::World::Graphic::CViewport* viewport, _in const EarthView::World::Graphic::CVertexData* vData, _in const EarthView::World::Graphic::CIndexData* iData, _in int ot, _in const void* worldMatrix, _in ev_bool positiveSide, _in ev_bool negativeSide, _out void* point, _out ev_uint32& index1, _out ev_uint32& index2, _out ev_uint32& index3 )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CSubMesh::select(*(EarthView::World::Spatial::Math::CRay*)ray, viewport, vData, iData, (EarthView::World::Graphic::CRenderOperation::OperationType)ot, *(EarthView::World::Spatial::Math::CMatrix4*)worldMatrix, positiveSide, negativeSide, *(EarthView::World::Spatial::Math::CVector3*)point, index1, index2, index3);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubMesh_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CSubMesh_getVertexBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getVertexBoundingBox();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_setBoundingBoxDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->setBoundingBoxDirty();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_setVertexBoundingBoxDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->setVertexBoundingBoxDirty();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CSubMesh_getNumSegments_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumSegments();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh::Segment  _stdcall EarthView_World_Graphic_CSubMesh_getSegment_Segment_ev_uint32(void *pObjectXXXX, _in ev_uint32 i )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh::Segment objXXXX = ptrNativeObject->getSegment(i);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_insertSegment_ev_bool_Segment(void *pObjectXXXX, _in const EarthView::World::Graphic::CSubMesh::Segment& segment )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->insertSegment(segment);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSubMesh_removeSegment_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 i )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeSegment(i);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSubMesh_clearSegments_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ptrNativeObject->clearSegments();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CSubMesh_findSegment_ev_int32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->findSegment(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CSubMesh_getSegmentVertexBoundingBox_CAxisAlignedBox_ev_uint32(void *pObjectXXXX, _in ev_uint32 i )
			{
				EarthView::World::Graphic::CSubMesh* ptrNativeObject = (EarthView::World::Graphic::CSubMesh*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getSegmentVertexBoundingBox(i);
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
