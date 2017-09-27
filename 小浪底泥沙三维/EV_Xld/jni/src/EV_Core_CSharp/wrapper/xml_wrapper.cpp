/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/xml.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_createXml_ev_bool_ev_string(void *pObjectXXXX, _in const char* strRootName )
			{
				EarthView::World::Core::ev_string strRootName1 = strRootName;
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createXml(strRootName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_createXml_ev_bool_ev_string_enumXmlEncodingType(void *pObjectXXXX, _in const char* strRootName, _in int encodingType )
			{
				EarthView::World::Core::ev_string strRootName1 = strRootName;
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createXml(strRootName1, (EarthView::World::Core::CXmlFile::enumXmlEncodingType)encodingType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_loadFile_ev_bool_enumXmlEncodingType(void *pObjectXXXX, _in int encodingType )
			{
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->loadFile((EarthView::World::Core::CXmlFile::enumXmlEncodingType)encodingType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_loadFile_ev_bool_ev_string_enumXmlEncodingType(void *pObjectXXXX, _in const char* strFilename, _in int encodingType )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->loadFile(strFilename1, (EarthView::World::Core::CXmlFile::enumXmlEncodingType)encodingType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_loadString_ev_bool_ev_string_enumXmlEncodingType(void *pObjectXXXX, _in const char* strXmlString, _in int encodingType )
			{
				EarthView::World::Core::ev_string strXmlString1 = strXmlString;
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->loadString(strXmlString1, (EarthView::World::Core::CXmlFile::enumXmlEncodingType)encodingType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlFile_toString_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->toString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_saveFile_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 iUnbuffered )
			{
				const EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->saveFile(iUnbuffered);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_saveFile_ev_bool_ev_string_ev_int32(void *pObjectXXXX, _in const char* strFilename, _in ev_int32 iUnbuffered )
			{
				EarthView::World::Core::ev_string strFilename1 = strFilename;
				const EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->saveFile(strFilename1, iUnbuffered);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_isLoaded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CXmlFile_unload_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ptrNativeObject->unload();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlFile_getRoot_CXmlElement(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getRoot();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_getRoot_ev_bool_CXmlElement(void *pObjectXXXX, _out void* rootElement )
			{
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRoot(*(EarthView::World::Core::CXmlElement*)rootElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlFile_getVersion_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getVersion();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlFile_getEncoding_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getEncoding();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlFile_getLastErrorDescript_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getLastErrorDescript();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlFile_setVersion_ev_bool_ev_string(void *pObjectXXXX, _in const char* strVersion )
			{
				EarthView::World::Core::ev_string strVersion1 = strVersion;
				EarthView::World::Core::CXmlFile* ptrNativeObject = (EarthView::World::Core::CXmlFile*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setVersion(strVersion1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_OperatorAssign_CXmlElement_CXmlElement(void *pObjXXXX, _in const void* another )
			{
				EarthView::World::Core::CXmlElement& objXXXX = *((EarthView::World::Core::CXmlElement*) pObjXXXX);
				objXXXX = *(EarthView::World::Core::CXmlElement*)another;
				EarthView::World::Core::CXmlElement *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_createElement_ev_bool_ev_string(void *pObjectXXXX, _in const char* strName )
			{
				EarthView::World::Core::ev_string strName1 = strName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createElement(strName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_createElement_ev_bool_ev_string_ev_string(void *pObjectXXXX, _in const char* strName, _in const char* strValue )
			{
				EarthView::World::Core::ev_string strName1 = strName;
				EarthView::World::Core::ev_string strValue1 = strValue;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createElement(strName1, strValue1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CXmlElement_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_isShareMode_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isShareMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlElement_getName_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_setName_ev_bool_ev_string(void *pObjectXXXX, _in const char* strName )
			{
				EarthView::World::Core::ev_string strName1 = strName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setName(strName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlElement_getValueString_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getValueString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_setValue_ev_bool_ev_string(void *pObjectXXXX, _in const char* strValue )
			{
				EarthView::World::Core::ev_string strValue1 = strValue;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setValue(strValue1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlElement_getAttributeString_ev_string_ev_string(void *pObjectXXXX, _in const char* strAttributeName )
			{
				EarthView::World::Core::ev_string strAttributeName1 = strAttributeName;
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getAttributeString(strAttributeName1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getAttributeString_ev_bool_ev_uint32_ev_string_ev_string(void *pObjectXXXX, _in ev_uint32 nAttributeIndex, _out char*& strAttributeName, _out char*& strAttributeValue )
			{
				EarthView::World::Core::ev_string strAttributeName1 = strAttributeName;
				EarthView::World::Core::ev_string strAttributeValue1 = strAttributeValue;
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAttributeString(nAttributeIndex, strAttributeName1, strAttributeValue1);
				strAttributeName=strAttributeName1.makeBuffer();strAttributeValue=strAttributeValue1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_getAttributeCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getAttributeCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_setAttribute_ev_bool_ev_string_ev_string(void *pObjectXXXX, _in const char* strAttributeName, _in const char* strAttributeValue )
			{
				EarthView::World::Core::ev_string strAttributeName1 = strAttributeName;
				EarthView::World::Core::ev_string strAttributeValue1 = strAttributeValue;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setAttribute(strAttributeName1, strAttributeValue1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_setAttribute_ev_bool_ev_string_ev_real64(void *pObjectXXXX, _in const char* strAttributeName, _in const ev_real64& dbAttributeValue )
			{
				EarthView::World::Core::ev_string strAttributeName1 = strAttributeName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setAttribute(strAttributeName1, dbAttributeValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_setAttribute_ev_bool_ev_string_ev_int32(void *pObjectXXXX, _in const char* strAttributeName, _in const ev_int32& intAttributeValue )
			{
				EarthView::World::Core::ev_string strAttributeName1 = strAttributeName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setAttribute(strAttributeName1, intAttributeValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_removeAttribute_ev_bool_ev_string(void *pObjectXXXX, _in const char* strAttributeName )
			{
				EarthView::World::Core::ev_string strAttributeName1 = strAttributeName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeAttribute(strAttributeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_removeAllAttribute_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->removeAllAttribute();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_isLeaf_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLeaf();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_isMyChild_ev_bool_CXmlElement(void *pObjectXXXX, _in const void* xmlElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isMyChild(*(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_isRoot_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isRoot();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getParent_CXmlElement(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getParent();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getParent_ev_bool_CXmlElement(void *pObjectXXXX, _out void* xmlElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getParent(*(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_getChildCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getChildCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getFirstChild_CXmlElement(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getFirstChild();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getFirstChild_CXmlElement_ev_string(void *pObjectXXXX, _in const char* strChildName )
			{
				EarthView::World::Core::ev_string strChildName1 = strChildName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getFirstChild(strChildName1);
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getFirstChild_ev_bool_CXmlElement(void *pObjectXXXX, _out void* xmlElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getFirstChild(*(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getFirstChild_ev_bool_ev_string_CXmlElement(void *pObjectXXXX, _in const char* strChildName, _out void* xmlElement )
			{
				EarthView::World::Core::ev_string strChildName1 = strChildName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getFirstChild(strChildName1, *(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getLastChild_CXmlElement(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getLastChild();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getLastChild_CXmlElement_ev_string(void *pObjectXXXX, _in const char* strChildName )
			{
				EarthView::World::Core::ev_string strChildName1 = strChildName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getLastChild(strChildName1);
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getLastChild_ev_bool_CXmlElement(void *pObjectXXXX, _out void* xmlElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLastChild(*(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getLastChild_ev_bool_ev_string_CXmlElement(void *pObjectXXXX, _in const char* strChildName, _out void* xmlElement )
			{
				EarthView::World::Core::ev_string strChildName1 = strChildName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLastChild(strChildName1, *(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getChild_ev_bool_ev_uint32_CXmlElement(void *pObjectXXXX, _in ev_uint32 nIndex, _out void* xmlElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getChild(nIndex, *(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getNextSibling_CXmlElement(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getNextSibling();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getNextSibling_CXmlElement_ev_string(void *pObjectXXXX, _in const char* strSiblingName )
			{
				EarthView::World::Core::ev_string strSiblingName1 = strSiblingName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getNextSibling(strSiblingName1);
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getNextSibling_ev_bool_CXmlElement(void *pObjectXXXX, _out void* xmlElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNextSibling(*(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getNextSibling_ev_bool_ev_string_CXmlElement(void *pObjectXXXX, _in const char* strSiblingName, _out void* xmlElement )
			{
				EarthView::World::Core::ev_string strSiblingName1 = strSiblingName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNextSibling(strSiblingName1, *(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getPrevSibling_CXmlElement(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getPrevSibling();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CXmlElement_getPrevSibling_CXmlElement_ev_string(void *pObjectXXXX, _in const char* strSiblingName )
			{
				EarthView::World::Core::ev_string strSiblingName1 = strSiblingName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->getPrevSibling(strSiblingName1);
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getPrevSibling_ev_bool_CXmlElement(void *pObjectXXXX, _out void* xmlElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getPrevSibling(*(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getPrevSibling_ev_bool_ev_string_CXmlElement(void *pObjectXXXX, _in const char* strSiblingName, _out void* xmlElement )
			{
				EarthView::World::Core::ev_string strSiblingName1 = strSiblingName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getPrevSibling(strSiblingName1, *(EarthView::World::Core::CXmlElement*)xmlElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlElement_getComment_ev_string_ev_uint32(void *pObjectXXXX, _in ev_uint32 nIndex )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getComment(nIndex);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_getComment_ev_bool_ev_uint32_ev_string(void *pObjectXXXX, _in ev_uint32 nIndex, _out char*& strComment )
			{
				EarthView::World::Core::ev_string strComment1 = strComment;
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getComment(nIndex, strComment1);
				strComment=strComment1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_getCommentCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getCommentCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_appendComment_ev_uint32_ev_string(void *pObjectXXXX, _in const char* strCommnetContent )
			{
				EarthView::World::Core::ev_string strCommnetContent1 = strCommnetContent;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->appendComment(strCommnetContent1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_removeComment_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 nIndex )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeComment(nIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_removeAllComment_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->removeAllComment();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_appendChild_ev_bool_CXmlElement(void *pObjectXXXX, _in const void* appendElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->appendChild(*(EarthView::World::Core::CXmlElement*)appendElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_insertChildBefore_ev_bool_CXmlElement_CXmlElement(void *pObjectXXXX, _in const void* addThis, _inout void* beforeThis )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->insertChildBefore(*(EarthView::World::Core::CXmlElement*)addThis, *(EarthView::World::Core::CXmlElement*)beforeThis);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CXmlElement_insertChildAfter_ev_bool_CXmlElement_CXmlElement(void *pObjectXXXX, _in const void* addThis, _inout void* afterThis )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->insertChildAfter(*(EarthView::World::Core::CXmlElement*)addThis, *(EarthView::World::Core::CXmlElement*)afterThis);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_removeChild_ev_uint32_CXmlElement(void *pObjectXXXX, _in const void* removeElement )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->removeChild(*(EarthView::World::Core::CXmlElement*)removeElement);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_removeChild_ev_uint32_ev_string(void *pObjectXXXX, _in const char* strElementName )
			{
				EarthView::World::Core::ev_string strElementName1 = strElementName;
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->removeChild(strElementName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CXmlElement_removeAllChildren_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->removeAllChildren();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CXmlElement_toString_ev_string(void *pObjectXXXX )
			{
				const EarthView::World::Core::CXmlElement* ptrNativeObject = (EarthView::World::Core::CXmlElement*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->toString();
				return objXXXX.makeBuffer();
			}
		}
	}
}
