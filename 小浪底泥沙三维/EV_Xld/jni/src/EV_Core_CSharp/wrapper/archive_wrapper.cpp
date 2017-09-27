/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/archive.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  const EarthView::World::Core::CArchive*  _stdcall Get_EarthView_World_Core_FileInfo_archive( void *pObjectXXXX )
			{
				EarthView::World::Core::FileInfo* ptrNativeObject = (EarthView::World::Core::FileInfo*) pObjectXXXX;
				const EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->archive;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileInfo_archive( void *pObjectXXXX, const EarthView::World::Core::CArchive*  value )
			{
				((EarthView::World::Core::FileInfo*)pObjectXXXX)->archive = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_FileInfo_filename( void *pObjectXXXX )
			{
				EarthView::World::Core::FileInfo* ptrNativeObject = (EarthView::World::Core::FileInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->filename;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileInfo_filename( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::FileInfo*)pObjectXXXX)->filename = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_FileInfo_path( void *pObjectXXXX )
			{
				EarthView::World::Core::FileInfo* ptrNativeObject = (EarthView::World::Core::FileInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->path;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileInfo_path( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::FileInfo*)pObjectXXXX)->path = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Core_FileInfo_basename( void *pObjectXXXX )
			{
				EarthView::World::Core::FileInfo* ptrNativeObject = (EarthView::World::Core::FileInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->basename;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileInfo_basename( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Core::FileInfo*)pObjectXXXX)->basename = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Core_FileInfo_compressedSize( void *pObjectXXXX )
			{
				EarthView::World::Core::FileInfo* ptrNativeObject = (EarthView::World::Core::FileInfo*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->compressedSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileInfo_compressedSize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Core::FileInfo*)pObjectXXXX)->compressedSize = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Core_FileInfo_uncompressedSize( void *pObjectXXXX )
			{
				EarthView::World::Core::FileInfo* ptrNativeObject = (EarthView::World::Core::FileInfo*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->uncompressedSize;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_FileInfo_uncompressedSize( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Core::FileInfo*)pObjectXXXX)->uncompressedSize = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_FileInfoList_push_back_void_FileInfo(void *pObjectXXXX, _in const void* t )
			{
				EarthView::World::Core::FileInfoList* ptrNativeObject = (EarthView::World::Core::FileInfoList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Core::FileInfo*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_FileInfoList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Core::FileInfoList* ptrNativeObject = (EarthView::World::Core::FileInfoList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_FileInfoList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::FileInfoList* ptrNativeObject = (EarthView::World::Core::FileInfoList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_FileInfoList_OperatorIndex_FileInfo_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::FileInfoList& objYYYY = *(EarthView::World::Core::FileInfoList*) pObjXXXX;
				EarthView::World::Core::FileInfo& objXXXX = objYYYY[n];
				EarthView::World::Core::FileInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_FileInfoList_at_FileInfo_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Core::FileInfoList* ptrNativeObject = (EarthView::World::Core::FileInfoList*) pObjectXXXX;
				EarthView::World::Core::FileInfo& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Core::FileInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Core_FileInfoList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Core::FileInfoList* ptrNativeObject = (EarthView::World::Core::FileInfoList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_FileInfoList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Core::FileInfoList* ptrNativeObject = (EarthView::World::Core::FileInfoList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::FileInfoList*  _stdcall EarthView_World_Core_FileInfoListPtr_get_FileInfoList(void *pObjectXXXX )
			{
				const EarthView::World::Core::FileInfoListPtr* ptrNativeObject = (EarthView::World::Core::FileInfoListPtr*) pObjectXXXX;
				EarthView::World::Core::FileInfoList* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CArchive_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Core_CArchive_unload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback)();
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback)(_in char*& filename, _in ev_bool readOnly);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Core_CArchive_remove_void_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback)(_in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback)(_in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_Callback)();
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback)(_in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback)(_in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback)();
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback)(_in char*& pattern);
			typedef ev_bool  ( _stdcall EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback)(_in char*& pattern);
			typedef ev_int64  ( _stdcall EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback)(_in char*& filename);
			class CArchiveProxy : public EarthView::World::Core::CArchive
			{
			private:
				EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback* m_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback;
				EarthView_World_Core_CArchive_load_void_Callback* m_EarthView_World_Core_CArchive_load_void_Callback;
				EarthView_World_Core_CArchive_unload_void_Callback* m_EarthView_World_Core_CArchive_unload_void_Callback;
				EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback* m_EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback;
				EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback* m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback;
				EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback* m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback;
				EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback* m_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback;
				EarthView_World_Core_CArchive_remove_void_EVString_Callback* m_EarthView_World_Core_CArchive_remove_void_EVString_Callback;
				EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback;
				EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback* m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback;
				EarthView_World_Core_CArchive_list_StringVectorPtr_Callback* m_EarthView_World_Core_CArchive_list_StringVectorPtr_Callback;
				EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback;
				EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback;
				EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback* m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback;
				EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback* m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback;
				EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback* m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback;
				EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback* m_EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback;
				EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback;
				EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback* m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback;
				EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback* m_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback;
			public:
				CArchiveProxy(EarthView::World::Core::CNameValuePairList *pList) : CArchive(pList)
				{
					m_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_load_void_Callback = NULL;
					m_EarthView_World_Core_CArchive_unload_void_Callback = NULL;
					m_EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchive_remove_void_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_list_StringVectorPtr_Callback = NULL;
					m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback = NULL;
					m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback = NULL;
					m_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool(EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_load_void(EarthView_World_Core_CArchive_load_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_unload_void(EarthView_World_Core_CArchive_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_isReadOnly_ev_bool(EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString(EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool(EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString(EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_remove_void_EVString(EarthView_World_Core_CArchive_remove_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_remove_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool(EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool(EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_list_StringVectorPtr(EarthView_World_Core_CArchive_list_StringVectorPtr_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_list_StringVectorPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool(EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr(EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool(EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString(EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_exists_ev_bool_EVString(EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString(EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString(EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback* pCallback)
				{
					m_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback = pCallback;
				}
				virtual ev_bool isCaseSensitive() const
				{
					if(m_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CArchive::isCaseSensitive();
				}
				virtual void load()
				{
					if(m_EarthView_World_Core_CArchive_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CArchive_load_void_Callback();
					}
					else
						return this->CArchive::load();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Core_CArchive_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Core_CArchive_unload_void_Callback();
					}
					else
						return this->CArchive::unload();
				}
				virtual ev_bool isReadOnly() const
				{
					if(m_EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CArchive::isReadOnly();
				}
				virtual EarthView::World::Core::DataStreamPtr open(_in const EVString& filename) const
				{
					if(m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CArchive::open(filename);
				}
				virtual EarthView::World::Core::DataStreamPtr open(_in const EVString& filename, _in ev_bool readOnly) const
				{
					if(m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback(filename_Char, readOnly);
						return returnValue;
					}
					else
						return this->CArchive::open(filename, readOnly);
				}
				virtual EarthView::World::Core::DataStreamPtr create(_in const EVString& filename) const
				{
					if(m_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CArchive::create(filename);
				}
				virtual void remove(_in const EVString& filename) const
				{
					if(m_EarthView_World_Core_CArchive_remove_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Core_CArchive_remove_void_EVString_Callback(filename_Char);
					}
					else
						return this->CArchive::remove(filename);
				}
				virtual EarthView::World::Core::StringVectorPtr list(_in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback(recursive, dirs);
						return returnValue;
					}
					else
						return this->CArchive::list(recursive, dirs);
				}
				virtual EarthView::World::Core::StringVectorPtr list(_in ev_bool recursive)
				{
					if(m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback(recursive);
						return returnValue;
					}
					else
						return this->CArchive::list(recursive);
				}
				virtual EarthView::World::Core::StringVectorPtr list()
				{
					if(m_EarthView_World_Core_CArchive_list_StringVectorPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Core_CArchive_list_StringVectorPtr_Callback();
						return returnValue;
					}
					else
						return this->CArchive::list();
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(_in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback(recursive, dirs);
						return returnValue;
					}
					else
						return this->CArchive::listFileInfo(recursive, dirs);
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(_in ev_bool recursive)
				{
					if(m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback(recursive);
						return returnValue;
					}
					else
						return this->CArchive::listFileInfo(recursive);
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo()
				{
					if(m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback();
						return returnValue;
					}
					else
						return this->CArchive::listFileInfo();
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern, _in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback(pattern_Char, recursive, dirs);
						return returnValue;
					}
					else
						return this->CArchive::find(pattern, recursive, dirs);
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern, _in ev_bool recursive)
				{
					if(m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback(pattern_Char, recursive);
						return returnValue;
					}
					else
						return this->CArchive::find(pattern, recursive);
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern)
				{
					if(m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback(pattern_Char);
						return returnValue;
					}
					else
						return this->CArchive::find(pattern);
				}
				virtual ev_bool exists(_in const EVString& filename)
				{
					if(m_EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CArchive::exists(filename);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern, _in ev_bool recursive, _in ev_bool dirs) const
				{
					if(m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback(pattern_Char, recursive, dirs);
						return returnValue;
					}
					else
						return this->CArchive::findFileInfo(pattern, recursive, dirs);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern, _in ev_bool recursive) const
				{
					if(m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback(pattern_Char, recursive);
						return returnValue;
					}
					else
						return this->CArchive::findFileInfo(pattern, recursive);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern) const
				{
					if(m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback(pattern_Char);
						return returnValue;
					}
					else
						return this->CArchive::findFileInfo(pattern);
				}
				virtual ev_int64 getModifiedTime(_in const EVString& filename)
				{
					if(m_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_int64 returnValue = m_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CArchive::getModifiedTime(filename);
				}
			};
			REGISTER_FACTORY_CLASS(CArchiveProxy);
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Core_CArchive_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchive_isCaseSensitive_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::isCaseSensitive();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isCaseSensitive();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_isCaseSensitive_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchive_isCaseSensitive_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::isCaseSensitive();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchive_load_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CArchive::load();
				else
					ptrNativeObject->load();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_load_void( void *pObjectXXXX, EarthView_World_Core_CArchive_load_void_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchive_load_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CArchive::load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchive_unload_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CArchive::unload();
				else
					ptrNativeObject->unload();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_unload_void( void *pObjectXXXX, EarthView_World_Core_CArchive_unload_void_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchive_unload_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CArchive::unload();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchive_isReadOnly_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::isReadOnly();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isReadOnly();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_isReadOnly_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_isReadOnly_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_isReadOnly_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchive_isReadOnly_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::isReadOnly();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_open_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::open(filename1);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->open(filename1);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::open(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in ev_bool readOnly )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::open(filename1, readOnly);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->open(filename1, readOnly);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_open_DataStreamPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* filename, _in ev_bool readOnly )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::open(filename1, readOnly);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_create_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::create(filename1);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->create(filename1);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_create_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_create_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::create(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchive_remove_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Core::CArchive::remove(filename1);
				else
					ptrNativeObject->remove(filename1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_remove_void_EVString( void *pObjectXXXX, EarthView_World_Core_CArchive_remove_void_EVString_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_remove_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CArchive_remove_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Core::CArchive::remove(filename1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::list(recursive, dirs);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->list(recursive, dirs);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::list(recursive, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::list(recursive);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->list(recursive);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::list(recursive);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::list();
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->list();
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_list_StringVectorPtr( void *pObjectXXXX, EarthView_World_Core_CArchive_list_StringVectorPtr_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_list_StringVectorPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_list_StringVectorPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::list();
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::listFileInfo(recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->listFileInfo(recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::listFileInfo(recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::listFileInfo(recursive);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->listFileInfo(recursive);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::listFileInfo(recursive);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::listFileInfo();
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->listFileInfo();
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr( void *pObjectXXXX, EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_listFileInfo_FileInfoListPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::listFileInfo();
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::find(pattern1, recursive, dirs);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->find(pattern1, recursive, dirs);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::find(pattern1, recursive, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::find(pattern1, recursive);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->find(pattern1, recursive);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::find(pattern1, recursive);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::find(pattern1);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->find(pattern1);
					EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString( void *pObjectXXXX, EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_find_StringVectorPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_find_StringVectorPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::find(pattern1);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchive_exists_ev_bool_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::exists(filename1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->exists(filename1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_exists_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Core_CArchive_exists_ev_bool_EVString_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_exists_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CArchive_exists_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::exists(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::findFileInfo(pattern1, recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->findFileInfo(pattern1, recursive, dirs);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::findFileInfo(pattern1, recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::findFileInfo(pattern1, recursive);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->findFileInfo(pattern1, recursive);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::findFileInfo(pattern1, recursive);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::findFileInfo(pattern1);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->findFileInfo(pattern1);
					EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString( void *pObjectXXXX, EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CArchive_findFileInfo_FileInfoListPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::findFileInfo(pattern1);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Core_CArchive_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				if (dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::getModifiedTime(filename1);
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getModifiedTime(filename1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString( void *pObjectXXXX, EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_Callback* pCallback )
			{
				CArchiveProxy* ptr = dynamic_cast<CArchiveProxy*>((EarthView::World::Core::CArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Core_CArchive_getModifiedTime_ev_int64_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::CArchive* ptrNativeObject = (EarthView::World::Core::CArchive*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Core::CArchive::getModifiedTime(filename1);
				return objXXXX;
			}
		}
	}
}
