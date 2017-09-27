/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/zip.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CZipArchive_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CZipArchive_unload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback)(_in char*& filename, _in ev_bool readOnly);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback)(_in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback)(_in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback)(_in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback)(_in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback)(_in char*& pattern);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback)(_in char*& pattern);
			typedef ev_int64  ( _stdcall EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback)(_in char*& filename);
			class CZipArchiveProxy : public EarthView::World::Graphic::CZipArchive
			{
			private:
				EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_load_void_Callback* m_EarthView_World_Graphic_CZipArchive_load_void_Callback;
				EarthView_World_Graphic_CZipArchive_unload_void_Callback* m_EarthView_World_Graphic_CZipArchive_unload_void_Callback;
				EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback* m_EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback;
				EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback* m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback;
				EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback* m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback;
				EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback* m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback;
				EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback* m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback;
				EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback* m_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback;
			public:
				CZipArchiveProxy(EarthView::World::Core::CNameValuePairList *pList) : CZipArchive(pList)
				{
					m_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool(EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_load_void(EarthView_World_Graphic_CZipArchive_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_unload_void(EarthView_World_Graphic_CZipArchive_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool(EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString(EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool(EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString(EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_remove_void_EVString(EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool(EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool(EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr(EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool(EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr(EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool(EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString(EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString(EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString(EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString(EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback = pCallback;
				}
				virtual ev_bool isCaseSensitive() const
				{
					if(m_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CZipArchive::isCaseSensitive();
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CZipArchive_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CZipArchive_load_void_Callback();
					}
					else
						return this->CZipArchive::load();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CZipArchive_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CZipArchive_unload_void_Callback();
					}
					else
						return this->CZipArchive::unload();
				}
				virtual EarthView::World::Core::DataStreamPtr open(_in const EVString& filename, _in ev_bool readOnly) const
				{
					if(m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback(filename_Char, readOnly);
						return returnValue;
					}
					else
						return this->CZipArchive::open(filename, readOnly);
				}
				virtual EarthView::World::Core::DataStreamPtr open(_in const EVString& filename) const
				{
					if(m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CZipArchive::open(filename);
				}
				virtual EarthView::World::Core::DataStreamPtr create(_in const EVString& filename) const
				{
					if(m_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CZipArchive::create(filename);
				}
				virtual void remove(_in const EVString& filename) const
				{
					if(m_EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback(filename_Char);
					}
					else
						return this->CZipArchive::remove(filename);
				}
				virtual EarthView::World::Core::StringVectorPtr list(_in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback(recursive, dirs);
						return returnValue;
					}
					else
						return this->CZipArchive::list(recursive, dirs);
				}
				virtual EarthView::World::Core::StringVectorPtr list(_in ev_bool recursive)
				{
					if(m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback(recursive);
						return returnValue;
					}
					else
						return this->CZipArchive::list(recursive);
				}
				virtual EarthView::World::Core::StringVectorPtr list()
				{
					if(m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback();
						return returnValue;
					}
					else
						return this->CZipArchive::list();
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(_in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback(recursive, dirs);
						return returnValue;
					}
					else
						return this->CZipArchive::listFileInfo(recursive, dirs);
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(_in ev_bool recursive)
				{
					if(m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback(recursive);
						return returnValue;
					}
					else
						return this->CZipArchive::listFileInfo(recursive);
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo()
				{
					if(m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback();
						return returnValue;
					}
					else
						return this->CZipArchive::listFileInfo();
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern, _in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback(pattern_Char, recursive, dirs);
						return returnValue;
					}
					else
						return this->CZipArchive::find(pattern, recursive, dirs);
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern, _in ev_bool recursive)
				{
					if(m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback(pattern_Char, recursive);
						return returnValue;
					}
					else
						return this->CZipArchive::find(pattern, recursive);
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern)
				{
					if(m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback(pattern_Char);
						return returnValue;
					}
					else
						return this->CZipArchive::find(pattern);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern, _in ev_bool recursive, _in ev_bool dirs) const
				{
					if(m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback(pattern_Char, recursive, dirs);
						return returnValue;
					}
					else
						return this->CZipArchive::findFileInfo(pattern, recursive, dirs);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern, _in ev_bool recursive) const
				{
					if(m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback(pattern_Char, recursive);
						return returnValue;
					}
					else
						return this->CZipArchive::findFileInfo(pattern, recursive);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern) const
				{
					if(m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback(pattern_Char);
						return returnValue;
					}
					else
						return this->CZipArchive::findFileInfo(pattern);
				}
				virtual ev_bool exists(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CZipArchive::exists(filename);
				}
				virtual ev_int64 getModifiedTime(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_int64 returnValue = m_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CZipArchive::getModifiedTime(filename);
				}
				virtual ev_bool isReadOnly() const
				{
					if(m_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CZipArchive::isReadOnly();
				}
			};
			REGISTER_FACTORY_CLASS(CZipArchiveProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::isCaseSensitive();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isCaseSensitive();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CZipArchive_isCaseSensitive_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::isCaseSensitive();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CZipArchive_load_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CZipArchive::load();
				else
					ptrNativeObject->load();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_load_void( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_load_void_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CZipArchive_load_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CZipArchive::load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CZipArchive_unload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CZipArchive::unload();
				else
					ptrNativeObject->unload();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_unload_void_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CZipArchive_unload_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CZipArchive::unload();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in ev_bool readOnly )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::open(filename1, readOnly);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* filename, _in ev_bool readOnly )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::open(filename1, readOnly);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::open(filename1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_open_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::open(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::create(filename1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_create_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::create(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CZipArchive_remove_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CZipArchive::remove(filename1);
				else
					ptrNativeObject->remove(filename1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_remove_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_remove_void_EVString_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_remove_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CZipArchive_remove_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CZipArchive::remove(filename1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::list(recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::list(recursive, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::list(recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::list(recursive);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::list();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_list_StringVectorPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_list_StringVectorPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::list();
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::listFileInfo(recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::listFileInfo(recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::listFileInfo(recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::listFileInfo(recursive);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::listFileInfo();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_listFileInfo_FileInfoListPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::listFileInfo();
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::find(pattern1, recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::find(pattern1, recursive, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::find(pattern1, recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::find(pattern1, recursive);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::find(pattern1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_find_StringVectorPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::find(pattern1);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::findFileInfo(pattern1, recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::findFileInfo(pattern1, recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::findFileInfo(pattern1, recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::findFileInfo(pattern1, recursive);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::findFileInfo(pattern1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CZipArchive_findFileInfo_FileInfoListPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::findFileInfo(pattern1);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::exists(filename1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->exists(filename1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CZipArchive_exists_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::exists(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				if (dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::getModifiedTime(filename1);
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getModifiedTime(filename1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Graphic_CZipArchive_getModifiedTime_ev_int64_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CZipArchive* ptrNativeObject = (EarthView::World::Graphic::CZipArchive*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CZipArchive::getModifiedTime(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool_Callback* pCallback )
			{
				CZipArchiveProxy* ptr = dynamic_cast<CZipArchiveProxy*>((EarthView::World::Graphic::CZipArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CZipArchive_isReadOnly_ev_bool(pCallback);
				}
			}
		}
	}
}
