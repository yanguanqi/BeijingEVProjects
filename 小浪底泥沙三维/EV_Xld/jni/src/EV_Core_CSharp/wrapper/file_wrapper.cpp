/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/file.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_open_ev_bool_ev_string_FILEMODE(void *pObjectXXXX, _in const char* strFileName, _in const int& eMode )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->open(strFileName1, (EarthView::World::Core::FILEMODE&)eMode);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_isOpen_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isOpen();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CFile_close_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CFile_readLine_ev_uint64_ev_string(void *pObjectXXXX, _out char*& strLine )
			{
				EarthView::World::Core::ev_string strLine1 = strLine;
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->readLine(strLine1);
				strLine=strLine1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CFile_writeLine_ev_uint64_ev_string(void *pObjectXXXX, _in const char* strLine )
			{
				EarthView::World::Core::ev_string strLine1 = strLine;
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->writeLine(strLine1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CFile_read_ev_uint64_ev_byte_ev_uint64(void *pObjectXXXX, _in ev_byte* buf, _in ev_uint64 nNum )
			{
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->read(buf, nNum);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CFile_write_ev_uint64_ev_byte_ev_uint64(void *pObjectXXXX, _in ev_byte* buf, _in ev_uint64 nNum )
			{
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->write(buf, nNum);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_eof_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->eof();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CFile_seek_ev_uint64_ev_uint64_FILEWAY(void *pObjectXXXX, _in ev_uint64 nPosOff, _in const int& way )
			{
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->seek(nPosOff, (EarthView::World::Core::FILEWAY&)way);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_save_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CFile* ptrNativeObject = (EarthView::World::Core::CFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->save();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_rename_ev_bool_ev_string_ev_string(_in const char* strFileName, _in const char* strNwName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				EarthView::World::Core::ev_string strNwName1 = strNwName;
				ev_bool objXXXX = EarthView::World::Core::CFile::rename(strFileName1, strNwName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_copy_ev_bool_ev_string_ev_string_ev_bool(_in const char* strSrcFileName, _in const char* strDstFolder, _in ev_bool bOverWrite )
			{
				EarthView::World::Core::ev_string strSrcFileName1 = strSrcFileName;
				EarthView::World::Core::ev_string strDstFolder1 = strDstFolder;
				ev_bool objXXXX = EarthView::World::Core::CFile::copy(strSrcFileName1, strDstFolder1, bOverWrite);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_move_ev_bool_ev_string_ev_string_ev_bool(_in const char* strSrcFileName, _in const char* strDstFolder, _in ev_bool bOverWrite )
			{
				EarthView::World::Core::ev_string strSrcFileName1 = strSrcFileName;
				EarthView::World::Core::ev_string strDstFolder1 = strDstFolder;
				ev_bool objXXXX = EarthView::World::Core::CFile::move(strSrcFileName1, strDstFolder1, bOverWrite);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_remove_ev_bool_ev_string(_in const char* strFileName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				ev_bool objXXXX = EarthView::World::Core::CFile::remove(strFileName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_exists_ev_bool_ev_string(_in const char* strFileName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				ev_bool objXXXX = EarthView::World::Core::CFile::exists(strFileName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Core_CFile_getSize_ev_uint64_ev_string(_in const char* strFileName )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				ev_uint64 objXXXX = EarthView::World::Core::CFile::getSize(strFileName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_getAttributes_ev_bool_ev_string_FileAttributes(_in const char* strFileName, _out void* attrs )
			{
				EarthView::World::Core::ev_string strFileName1 = strFileName;
				ev_bool objXXXX = EarthView::World::Core::CFile::getAttributes(strFileName1, *(EarthView::World::Core::FileAttributes*)attrs);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CFile_isAbsoluteFile_ev_bool_EVString(_in const char* filepath )
			{
				EarthView::World::Core::ev_string filepath1 = filepath;
				ev_bool objXXXX = EarthView::World::Core::CFile::isAbsoluteFile(filepath1);
				return objXXXX;
			}
		}
	}
}
