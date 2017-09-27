/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/obliquexmlparser.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mMinRange( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMinRange;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mMinRange( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mMinRange = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mRadius( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRadius;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mRadius( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mRadius = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mCenter( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->mCenter;
					EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mCenter( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mCenter = *(EarthView::World::Spatial::Math::CVector3*)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mModelPath( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mModelPath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mModelPath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mModelPath = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mID( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mID( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mID = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mRecordID( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mRecordID;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mRecordID( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mRecordID = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mLevel( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mLevel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mXmin( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mXmin;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mXmin( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mXmin = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mXmax( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mXmax;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mXmax( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mXmax = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mYmin( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mYmin;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mYmin( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mYmin = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mYmax( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mYmax;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mYmax( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mYmax = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mZmin( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mZmin;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mZmin( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mZmin = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mZmax( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mZmax;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mZmax( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mZmax = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Math::CMatrix4*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LodIndex_mpOffMatrix( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					EarthView::World::Spatial::Math::CMatrix4* objXXXX = ptrNativeObject->mpOffMatrix;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LodIndex_mpOffMatrix( void *pObjectXXXX, EarthView::World::Spatial::Math::CMatrix4*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LodIndex*)pObjectXXXX)->mpOffMatrix = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndex_setParent_void_LodIndex(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::LodIndex* parent )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ptrNativeObject->setParent(parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndex_getParent_LodIndex(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndex_getNumChild_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getNumChild();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndex_getChild_LodIndex_ev_uint32(void *pObjectXXXX, _in ev_uint32 i )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->getChild(i);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndex_addChild_void_LodIndex(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::LodIndex* child )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndex* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndex*) pObjectXXXX;
					ptrNativeObject->addChild(child);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_push_back_void_LodIndex(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::LodIndex*& t )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_front_LodIndex(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_back_LodIndex(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_at_LodIndex_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->at(pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_insert_void_ev_uint32_LodIndex(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Spatial3D::ModelManager::LodIndex*& t )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexVector_release_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LodIndexVector*) pObjectXXXX;
					ptrNativeObject->release();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_setXmlFile_void_EVString(void *pObjectXXXX, _in const char* file )
				{
					EarthView::World::Core::ev_string file1 = file;
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjectXXXX;
					ptrNativeObject->setXmlFile(file1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_getXmlFile_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getXmlFile();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_getTileName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getTileName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_getVersion_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getVersion();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LodIndex*  _stdcall EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_getRootNode_LodIndex(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LodIndex* objXXXX = ptrNativeObject->getRootNode();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_mMaxLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mMaxLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_mMaxLevel( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*)pObjectXXXX)->mMaxLevel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_mStartQuadLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mStartQuadLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_CTileLodXmlParser_mStartQuadLevel( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::ModelManager::CTileLodXmlParser*)pObjectXXXX)->mStartQuadLevel = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_setXmlFile_void_EVString(void *pObjectXXXX, _in const char* file )
				{
					EarthView::World::Core::ev_string file1 = file;
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					ptrNativeObject->setXmlFile(file1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getXmlFile_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getXmlFile();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getSRS_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getSRS();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getWorldPos_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					ptrNativeObject->getWorldPos(lat, lon, alt);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getScale_void_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& scaleX, _out ev_real64& scaleY, _out ev_real64& scaleZ )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					ptrNativeObject->getScale(scaleX, scaleY, scaleZ);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getRot_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& rotW, _out ev_real64& rotX, _out ev_real64& rotY, _out ev_real64& rotZ )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					ptrNativeObject->getRot(rotW, rotX, rotY, rotZ);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getOriginMode_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getOriginMode();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getVersion_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getVersion();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getTileArray_void_CStringArray_CStringArray(void *pObjectXXXX, _out void* tileNames, _out void* tilePaths )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					ptrNativeObject->getTileArray(*(EarthView::World::Core::CStringArray*)tileNames, *(EarthView::World::Core::CStringArray*)tilePaths);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_ModelManager_CLodTreeExportXmlParser_getDataType_OBQDataType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodTreeExportXmlParser*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::OBQDataType objXXXX = ptrNativeObject->getDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexStreamParser_encodeToStream_MemoryDataStreamPtr_LodIndexVector(_in const void* lv )
				{
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = EarthView::World::Spatial3D::ModelManager::LodIndexStreamParser::encodeToStream(*(EarthView::World::Spatial3D::ModelManager::LodIndexVector*)lv);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_LodIndexStreamParser_decodeFromStream_LodIndexVector_MemoryDataStreamPtr(_in const void* mem )
				{
					EarthView::World::Spatial3D::ModelManager::LodIndexVector objXXXX = EarthView::World::Spatial3D::ModelManager::LodIndexStreamParser::decodeFromStream(*(EarthView::World::Core::MemoryDataStreamPtr*)mem);
					EarthView::World::Spatial3D::ModelManager::LodIndexVector *pXXXX = new EarthView::World::Spatial3D::ModelManager::LodIndexVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
