/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/streamarchive.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamArchive_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamArchive_unload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback)(_in char*& filename, _in ev_bool readOnly);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback)(_in char*& filename);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback)(_in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback)(_in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback)(_in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback)(_in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback)(_in char*& pattern);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback)(_in char*& filename);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive, _in ev_bool dirs);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback)(_in char*& pattern, _in ev_bool recursive);
			typedef void*  ( _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback)(_in char*& pattern);
			typedef ev_int64  ( _stdcall EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback)(_in char*& filename);
			class CStreamArchiveProxy : public EarthView::World::Graphic::CStreamArchive
			{
			private:
				EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_load_void_Callback* m_EarthView_World_Graphic_CStreamArchive_load_void_Callback;
				EarthView_World_Graphic_CStreamArchive_unload_void_Callback* m_EarthView_World_Graphic_CStreamArchive_unload_void_Callback;
				EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback* m_EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback;
				EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback* m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback;
				EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback* m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback;
				EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback* m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback;
				EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback* m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback;
				EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback* m_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback;
			public:
				CStreamArchiveProxy(EarthView::World::Core::CNameValuePairList *pList) : CStreamArchive(pList)
				{
					m_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool(EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_load_void(EarthView_World_Graphic_CStreamArchive_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_unload_void(EarthView_World_Graphic_CStreamArchive_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool(EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString(EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool(EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString(EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_remove_void_EVString(EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool(EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool(EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr(EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool(EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr(EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool(EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString(EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString(EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString(EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString(EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback = pCallback;
				}
				virtual ev_bool isCaseSensitive() const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStreamArchive::isCaseSensitive();
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CStreamArchive_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamArchive_load_void_Callback();
					}
					else
						return this->CStreamArchive::load();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CStreamArchive_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamArchive_unload_void_Callback();
					}
					else
						return this->CStreamArchive::unload();
				}
				virtual EarthView::World::Core::DataStreamPtr open(_in const EVString& filename, _in ev_bool readOnly) const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback(filename_Char, readOnly);
						return returnValue;
					}
					else
						return this->CStreamArchive::open(filename, readOnly);
				}
				virtual EarthView::World::Core::DataStreamPtr open(_in const EVString& filename) const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CStreamArchive::open(filename);
				}
				virtual EarthView::World::Core::DataStreamPtr create(_in const EVString& filename) const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CStreamArchive::create(filename);
				}
				virtual void remove(_in const EVString& filename) const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						m_EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback(filename_Char);
					}
					else
						return this->CStreamArchive::remove(filename);
				}
				virtual EarthView::World::Core::StringVectorPtr list(_in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback(recursive, dirs);
						return returnValue;
					}
					else
						return this->CStreamArchive::list(recursive, dirs);
				}
				virtual EarthView::World::Core::StringVectorPtr list(_in ev_bool recursive)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback(recursive);
						return returnValue;
					}
					else
						return this->CStreamArchive::list(recursive);
				}
				virtual EarthView::World::Core::StringVectorPtr list()
				{
					if(m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback();
						return returnValue;
					}
					else
						return this->CStreamArchive::list();
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(_in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback(recursive, dirs);
						return returnValue;
					}
					else
						return this->CStreamArchive::listFileInfo(recursive, dirs);
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo(_in ev_bool recursive)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback(recursive);
						return returnValue;
					}
					else
						return this->CStreamArchive::listFileInfo(recursive);
				}
				virtual EarthView::World::Core::FileInfoListPtr listFileInfo()
				{
					if(m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback();
						return returnValue;
					}
					else
						return this->CStreamArchive::listFileInfo();
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern, _in ev_bool recursive, _in ev_bool dirs)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback(pattern_Char, recursive, dirs);
						return returnValue;
					}
					else
						return this->CStreamArchive::find(pattern, recursive, dirs);
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern, _in ev_bool recursive)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback(pattern_Char, recursive);
						return returnValue;
					}
					else
						return this->CStreamArchive::find(pattern, recursive);
				}
				virtual EarthView::World::Core::StringVectorPtr find(_in const EVString& pattern)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::StringVectorPtr returnValue = *(EarthView::World::Core::StringVectorPtr*)m_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback(pattern_Char);
						return returnValue;
					}
					else
						return this->CStreamArchive::find(pattern);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern, _in ev_bool recursive, _in ev_bool dirs) const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback(pattern_Char, recursive, dirs);
						return returnValue;
					}
					else
						return this->CStreamArchive::findFileInfo(pattern, recursive, dirs);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern, _in ev_bool recursive) const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback(pattern_Char, recursive);
						return returnValue;
					}
					else
						return this->CStreamArchive::findFileInfo(pattern, recursive);
				}
				virtual EarthView::World::Core::FileInfoListPtr findFileInfo(_in const EVString& pattern) const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* pattern_Char = pattern.makeBuffer();
						EarthView::World::Core::FileInfoListPtr returnValue = *(EarthView::World::Core::FileInfoListPtr*)m_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback(pattern_Char);
						return returnValue;
					}
					else
						return this->CStreamArchive::findFileInfo(pattern);
				}
				virtual ev_bool exists(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CStreamArchive::exists(filename);
				}
				virtual ev_int64 getModifiedTime(_in const EVString& filename)
				{
					if(m_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* filename_Char = filename.makeBuffer();
						ev_int64 returnValue = m_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback(filename_Char);
						return returnValue;
					}
					else
						return this->CStreamArchive::getModifiedTime(filename);
				}
				virtual ev_bool isReadOnly() const
				{
					if(m_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CStreamArchive::isReadOnly();
				}
			};
			REGISTER_FACTORY_CLASS(CStreamArchiveProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::isCaseSensitive();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isCaseSensitive();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamArchive_isCaseSensitive_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::isCaseSensitive();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchive_load_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamArchive::load();
				else
					ptrNativeObject->load();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_load_void( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_load_void_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchive_load_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamArchive::load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchive_unload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamArchive::unload();
				else
					ptrNativeObject->unload();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_unload_void_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchive_unload_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamArchive::unload();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchive_addItem_void_EVString_DataStreamPtr(void *pObjectXXXX, _in const char* filename, _in void* item )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				ptrNativeObject->addItem(filename1, *(EarthView::World::Core::DataStreamPtr*)item);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in ev_bool readOnly )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::open(filename1, readOnly);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* filename, _in ev_bool readOnly )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::open(filename1, readOnly);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::open(filename1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_open_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::open(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::create(filename1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_create_DataStreamPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::create(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchive_remove_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamArchive::remove(filename1);
				else
					ptrNativeObject->remove(filename1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_remove_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_remove_void_EVString_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_remove_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchive_remove_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamArchive::remove(filename1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::list(recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::list(recursive, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::list(recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::list(recursive);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::list();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_list_StringVectorPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::list();
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::listFileInfo(recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::listFileInfo(recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::listFileInfo(recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool recursive )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::listFileInfo(recursive);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::listFileInfo();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_listFileInfo_FileInfoListPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::listFileInfo();
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::find(pattern1, recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::find(pattern1, recursive, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::find(pattern1, recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::find(pattern1, recursive);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::find(pattern1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_find_StringVectorPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::find(pattern1);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::findFileInfo(pattern1, recursive, dirs);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::findFileInfo(pattern1, recursive, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::findFileInfo(pattern1, recursive);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* pattern, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::findFileInfo(pattern1, recursive);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::findFileInfo(pattern1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CStreamArchive_findFileInfo_FileInfoListPtr_EVString_NoVirtual(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				const EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::findFileInfo(pattern1);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::exists(filename1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->exists(filename1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CStreamArchive_exists_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::exists(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::getModifiedTime(filename1);
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getModifiedTime(filename1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Graphic_CStreamArchive_getModifiedTime_ev_int64_EVString_NoVirtual(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CStreamArchive* ptrNativeObject = (EarthView::World::Graphic::CStreamArchive*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchive::getModifiedTime(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool_Callback* pCallback )
			{
				CStreamArchiveProxy* ptr = dynamic_cast<CStreamArchiveProxy*>((EarthView::World::Graphic::CStreamArchive*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchive_isReadOnly_ev_bool(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback)();
			typedef EarthView::World::Core::CArchive*  ( _stdcall EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback)(_in EarthView::World::Core::CArchive* ptr);
			class CStreamArchiveFactoryProxy : public EarthView::World::Graphic::CStreamArchiveFactory
			{
			private:
				EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback* m_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback;
				EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback* m_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback;
				EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback* m_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback;
			public:
				CStreamArchiveFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CStreamArchiveFactory(pList)
				{
					m_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString(EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString(EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive(EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback = pCallback;
				}
				virtual EVString getType() const
				{
					if(m_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback();
						return returnValue;
					}
					else
						return this->CStreamArchiveFactory::getType();
				}
				virtual EarthView::World::Core::CArchive* createInstance(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Core::CArchive* returnValue = m_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback(name_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CStreamArchiveFactory::createInstance(name);
				}
				virtual void destroyInstance(_in EarthView::World::Core::CArchive* arch)
				{
					if(m_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback(arch);
					}
					else
						return this->CStreamArchiveFactory::destroyInstance(arch);
				}
			};
			REGISTER_FACTORY_CLASS(CStreamArchiveFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamArchiveFactory* ptrNativeObject = (EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveFactoryProxy*>((EarthView::World::Graphic::CStreamArchiveFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchiveFactory::getType();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getType();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_Callback* pCallback )
			{
				CStreamArchiveFactoryProxy* ptr = dynamic_cast<CStreamArchiveFactoryProxy*>((EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CStreamArchiveFactory_getType_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CStreamArchiveFactory* ptrNativeObject = (EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchiveFactory::getType();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CStreamArchiveFactory* ptrNativeObject = (EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveFactoryProxy*>((EarthView::World::Graphic::CStreamArchiveFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchiveFactory::createInstance(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->createInstance(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_Callback* pCallback )
			{
				CStreamArchiveFactoryProxy* ptr = dynamic_cast<CStreamArchiveFactoryProxy*>((EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Graphic_CStreamArchiveFactory_createInstance_CArchive_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CStreamArchiveFactory* ptrNativeObject = (EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->EarthView::World::Graphic::CStreamArchiveFactory::createInstance(name1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive(void *pObjectXXXX, _in EarthView::World::Core::CArchive* arch )
			{
				EarthView::World::Graphic::CStreamArchiveFactory* ptrNativeObject = (EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX;
				if (dynamic_cast<CStreamArchiveFactoryProxy*>((EarthView::World::Graphic::CStreamArchiveFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CStreamArchiveFactory::destroyInstance(arch);
				else
					ptrNativeObject->destroyInstance(arch);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive( void *pObjectXXXX, EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_Callback* pCallback )
			{
				CStreamArchiveFactoryProxy* ptr = dynamic_cast<CStreamArchiveFactoryProxy*>((EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CStreamArchiveFactory_destroyInstance_void_CArchive_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CArchive* arch )
			{
				EarthView::World::Graphic::CStreamArchiveFactory* ptrNativeObject = (EarthView::World::Graphic::CStreamArchiveFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CStreamArchiveFactory::destroyInstance(arch);
			}
		}
	}
}
