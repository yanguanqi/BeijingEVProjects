/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "plugin_octreescenemanager/octree.h"
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
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree__addNode_void_COctreeNode(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode* ref_n )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				ptrNativeObject->_addNode(ref_n);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree__removeNode_void_COctreeNode(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode* n )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				ptrNativeObject->_removeNode(n);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_COctree_numNodes_int(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				int objXXXX = ptrNativeObject->numNodes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_COctree_mBox( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox &objXXXX = ptrNativeObject->mBox;
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COctree_mBox( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::COctree*)pObjectXXXX)->mBox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CWireBoundingBox*  _stdcall Get_EarthView_World_Graphic_COctree_mWireBoundingBox( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				EarthView::World::Graphic::CWireBoundingBox* objXXXX = ptrNativeObject->mWireBoundingBox;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COctree_mWireBoundingBox( void *pObjectXXXX, EarthView::World::Graphic::CWireBoundingBox*  value )
			{
				((EarthView::World::Graphic::COctree*)pObjectXXXX)->mWireBoundingBox = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CWireBoundingBox*  _stdcall EarthView_World_Graphic_COctree_getWireBoundingBox_CWireBoundingBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				EarthView::World::Graphic::CWireBoundingBox* objXXXX = ptrNativeObject->getWireBoundingBox();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_COctree_mHalfSize( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mHalfSize;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COctree_mHalfSize( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::COctree*)pObjectXXXX)->mHalfSize = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctree__isTwiceSize_ev_bool_CAxisAlignedBox(void *pObjectXXXX, _in const void* box )
			{
				const EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_isTwiceSize(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree__getChildIndexes_void_CAxisAlignedBox_int_int_int(void *pObjectXXXX, _in const void* box, _in int* x, _in int* y, _in int* z )
			{
				const EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				ptrNativeObject->_getChildIndexes(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)box, x, y, z);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree__getCullBounds_void_CAxisAlignedBox(void *pObjectXXXX, _in EarthView::World::Spatial::Math::CAxisAlignedBox* box )
			{
				const EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				ptrNativeObject->_getCullBounds(box);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_push_back_void_COctreeNode(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode*& t )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_push_front_void_COctreeNode(void *pObjectXXXX, _in EarthView::World::Graphic::COctreeNode*& t )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->push_front(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COctreeNode*  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_front_COctreeNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				EarthView::World::Graphic::COctreeNode* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COctreeNode*  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_back_COctreeNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				EarthView::World::Graphic::COctreeNode* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::COctreeNode*  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_at_COctreeNode_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				EarthView::World::Graphic::COctreeNode* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_insert_void_ev_uint32_COctreeNode(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::COctreeNode*& t )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_COctree_OctreeNodeList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree::OctreeNodeList* ptrNativeObject = (EarthView::World::Graphic::COctree::OctreeNodeList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_COctree_mNodes( void *pObjectXXXX )
			{
				EarthView::World::Graphic::COctree* ptrNativeObject = (EarthView::World::Graphic::COctree*) pObjectXXXX;
				EarthView::World::Graphic::COctree::OctreeNodeList &objXXXX = ptrNativeObject->mNodes;
				EarthView::World::Graphic::COctree::OctreeNodeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_COctree_mNodes( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::COctree*)pObjectXXXX)->mNodes = *(EarthView::World::Graphic::COctree::OctreeNodeList*)value;
			}
		}
	}
}
