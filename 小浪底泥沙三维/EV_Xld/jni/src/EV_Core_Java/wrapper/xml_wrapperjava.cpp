/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/xml.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_core_XmlFile_00024enumXmlEncodingTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CXmlFile::xmlEncodingUnknown,
					CXmlFile::xmlEncodingUtf8,
					CXmlFile::xmlEncodingLegacy,
					CXmlFile::xmlEncodingDefault,
					CXmlFile::xmlEncodingGB2312
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_createXml_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strRootName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strRootName_ch = (const ev_char*)__env->GetStringUTFChars(strRootName_j,JNI_FALSE);
				const ev_string strRootName = strRootName_ch;
				__env->ReleaseStringUTFChars(strRootName_j, (const char *)strRootName_ch);
				#else
				const ev_wchar* strRootName_ch = (const ev_wchar*)__env->GetStringChars(strRootName_j,JNI_FALSE);
				const ev_string strRootName = strRootName_ch;
				__env->ReleaseStringChars(strRootName_j, (const jchar *)strRootName_ch);
				#endif
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->createXml(strRootName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_createXml_1ev_1string_1enumXmlEncodingType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strRootName_j, jint encodingType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strRootName_ch = (const ev_char*)__env->GetStringUTFChars(strRootName_j,JNI_FALSE);
				const ev_string strRootName = strRootName_ch;
				__env->ReleaseStringUTFChars(strRootName_j, (const char *)strRootName_ch);
				#else
				const ev_wchar* strRootName_ch = (const ev_wchar*)__env->GetStringChars(strRootName_j,JNI_FALSE);
				const ev_string strRootName = strRootName_ch;
				__env->ReleaseStringChars(strRootName_j, (const jchar *)strRootName_ch);
				#endif
				EarthView::World::Core::CXmlFile::enumXmlEncodingType encodingType = (EarthView::World::Core::CXmlFile::enumXmlEncodingType) encodingType_j;
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->createXml(strRootName, encodingType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_loadFile_1enumXmlEncodingType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint encodingType_j)
			{
				EarthView::World::Core::CXmlFile::enumXmlEncodingType encodingType = (EarthView::World::Core::CXmlFile::enumXmlEncodingType) encodingType_j;
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->loadFile(encodingType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_loadFile_1ev_1string_1enumXmlEncodingType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j, jint encodingType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				EarthView::World::Core::CXmlFile::enumXmlEncodingType encodingType = (EarthView::World::Core::CXmlFile::enumXmlEncodingType) encodingType_j;
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->loadFile(strFilename, encodingType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_loadString_1ev_1string_1enumXmlEncodingType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strXmlString_j, jint encodingType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strXmlString_ch = (const ev_char*)__env->GetStringUTFChars(strXmlString_j,JNI_FALSE);
				const ev_string strXmlString = strXmlString_ch;
				__env->ReleaseStringUTFChars(strXmlString_j, (const char *)strXmlString_ch);
				#else
				const ev_wchar* strXmlString_ch = (const ev_wchar*)__env->GetStringChars(strXmlString_j,JNI_FALSE);
				const ev_string strXmlString = strXmlString_ch;
				__env->ReleaseStringChars(strXmlString_j, (const jchar *)strXmlString_ch);
				#endif
				EarthView::World::Core::CXmlFile::enumXmlEncodingType encodingType = (EarthView::World::Core::CXmlFile::enumXmlEncodingType) encodingType_j;
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->loadString(strXmlString, encodingType);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlFile_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_string __values1 = pObjectX->toString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_saveFile_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint iUnbuffered_j)
			{
				ev_int32 iUnbuffered = (ev_int32) iUnbuffered_j;
				const 				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->saveFile(iUnbuffered);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_saveFile_1ev_1string_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strFilename_j, jint iUnbuffered_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strFilename_ch = (const ev_char*)__env->GetStringUTFChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringUTFChars(strFilename_j, (const char *)strFilename_ch);
				#else
				const ev_wchar* strFilename_ch = (const ev_wchar*)__env->GetStringChars(strFilename_j,JNI_FALSE);
				const ev_string strFilename = strFilename_ch;
				__env->ReleaseStringChars(strFilename_j, (const jchar *)strFilename_ch);
				#endif
				ev_int32 iUnbuffered = (ev_int32) iUnbuffered_j;
				const 				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->saveFile(strFilename, iUnbuffered);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLoaded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_XmlFile_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				pObjectX->unload();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlFile_getRoot_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getRoot();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_getRoot_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rootElement_j)
			{
				EarthView::World::Core::CXmlElement &rootElement = *(EarthView::World::Core::CXmlElement*) rootElement_j;
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->getRoot(rootElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlFile_getVersion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_string __values1 = pObjectX->getVersion();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlFile_getEncoding_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_string __values1 = pObjectX->getEncoding();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlFile_getLastErrorDescript_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_string __values1 = pObjectX->getLastErrorDescript();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlFile_setVersion_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strVersion_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strVersion_ch = (const ev_char*)__env->GetStringUTFChars(strVersion_j,JNI_FALSE);
				const ev_string strVersion = strVersion_ch;
				__env->ReleaseStringUTFChars(strVersion_j, (const char *)strVersion_ch);
				#else
				const ev_wchar* strVersion_ch = (const ev_wchar*)__env->GetStringChars(strVersion_j,JNI_FALSE);
				const ev_string strVersion = strVersion_ch;
				__env->ReleaseStringChars(strVersion_j, (const jchar *)strVersion_ch);
				#endif
				EarthView::World::Core::CXmlFile *pObjectX = (EarthView::World::Core::CXmlFile*) pObjXXXX;
				ev_bool __values1 = pObjectX->setVersion(strVersion);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_OperatorAssign_1CXmlElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong another_j )
			{
				EarthView::World::Core::CXmlElement& pObjectX = *(EarthView::World::Core::CXmlElement*) pObjXXXX;
				const EarthView::World::Core::CXmlElement &another = *(EarthView::World::Core::CXmlElement*) another_j;
				pObjectX = another;
				EarthView::World::Core::CXmlElement& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_createElement_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
				const ev_string strName = strName_ch;
				__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
				#else
				const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
				const ev_string strName = strName_ch;
				__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->createElement(strName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_createElement_1ev_1string_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j, jstring strValue_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
				const ev_string strName = strName_ch;
				__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
				#else
				const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
				const ev_string strName = strName_ch;
				__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strValue_ch = (const ev_char*)__env->GetStringUTFChars(strValue_j,JNI_FALSE);
				const ev_string strValue = strValue_ch;
				__env->ReleaseStringUTFChars(strValue_j, (const char *)strValue_ch);
				#else
				const ev_wchar* strValue_ch = (const ev_wchar*)__env->GetStringChars(strValue_j,JNI_FALSE);
				const ev_string strValue = strValue_ch;
				__env->ReleaseStringChars(strValue_j, (const jchar *)strValue_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->createElement(strName, strValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_XmlElement_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_isShareMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->isShareMode();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlElement_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_string __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_setName_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
				const ev_string strName = strName_ch;
				__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
				#else
				const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
				const ev_string strName = strName_ch;
				__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->setName(strName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlElement_getValueString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_string __values1 = pObjectX->getValueString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_setValue_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strValue_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strValue_ch = (const ev_char*)__env->GetStringUTFChars(strValue_j,JNI_FALSE);
				const ev_string strValue = strValue_ch;
				__env->ReleaseStringUTFChars(strValue_j, (const char *)strValue_ch);
				#else
				const ev_wchar* strValue_ch = (const ev_wchar*)__env->GetStringChars(strValue_j,JNI_FALSE);
				const ev_string strValue = strValue_ch;
				__env->ReleaseStringChars(strValue_j, (const jchar *)strValue_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->setValue(strValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlElement_getAttributeString_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strAttributeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strAttributeName_ch = (const ev_char*)__env->GetStringUTFChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringUTFChars(strAttributeName_j, (const char *)strAttributeName_ch);
				#else
				const ev_wchar* strAttributeName_ch = (const ev_wchar*)__env->GetStringChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringChars(strAttributeName_j, (const jchar *)strAttributeName_ch);
				#endif
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_string __values1 = pObjectX->getAttributeString(strAttributeName);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getAttributeString_1ev_1uint32_1ev_1string_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nAttributeIndex_j, jlong strAttributeName_j, jlong strAttributeValue_j)
			{
				ev_uint32 nAttributeIndex = (ev_uint32) nAttributeIndex_j;
				ev_string &strAttributeName = *(ev_string*) strAttributeName_j;
				ev_string &strAttributeValue = *(ev_string*) strAttributeValue_j;
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getAttributeString(nAttributeIndex, strAttributeName, strAttributeValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getAttributeCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getAttributeCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_setAttribute_1ev_1string_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strAttributeName_j, jstring strAttributeValue_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strAttributeName_ch = (const ev_char*)__env->GetStringUTFChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringUTFChars(strAttributeName_j, (const char *)strAttributeName_ch);
				#else
				const ev_wchar* strAttributeName_ch = (const ev_wchar*)__env->GetStringChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringChars(strAttributeName_j, (const jchar *)strAttributeName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strAttributeValue_ch = (const ev_char*)__env->GetStringUTFChars(strAttributeValue_j,JNI_FALSE);
				const ev_string strAttributeValue = strAttributeValue_ch;
				__env->ReleaseStringUTFChars(strAttributeValue_j, (const char *)strAttributeValue_ch);
				#else
				const ev_wchar* strAttributeValue_ch = (const ev_wchar*)__env->GetStringChars(strAttributeValue_j,JNI_FALSE);
				const ev_string strAttributeValue = strAttributeValue_ch;
				__env->ReleaseStringChars(strAttributeValue_j, (const jchar *)strAttributeValue_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->setAttribute(strAttributeName, strAttributeValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_setAttribute_1ev_1string_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strAttributeName_j, jdouble dbAttributeValue_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strAttributeName_ch = (const ev_char*)__env->GetStringUTFChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringUTFChars(strAttributeName_j, (const char *)strAttributeName_ch);
				#else
				const ev_wchar* strAttributeName_ch = (const ev_wchar*)__env->GetStringChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringChars(strAttributeName_j, (const jchar *)strAttributeName_ch);
				#endif
				const ev_real64 dbAttributeValue = (const ev_real64) dbAttributeValue_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->setAttribute(strAttributeName, dbAttributeValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_setAttribute_1ev_1string_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strAttributeName_j, jint intAttributeValue_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strAttributeName_ch = (const ev_char*)__env->GetStringUTFChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringUTFChars(strAttributeName_j, (const char *)strAttributeName_ch);
				#else
				const ev_wchar* strAttributeName_ch = (const ev_wchar*)__env->GetStringChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringChars(strAttributeName_j, (const jchar *)strAttributeName_ch);
				#endif
				const ev_int32 intAttributeValue = (const ev_int32) intAttributeValue_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->setAttribute(strAttributeName, intAttributeValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_removeAttribute_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strAttributeName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strAttributeName_ch = (const ev_char*)__env->GetStringUTFChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringUTFChars(strAttributeName_j, (const char *)strAttributeName_ch);
				#else
				const ev_wchar* strAttributeName_ch = (const ev_wchar*)__env->GetStringChars(strAttributeName_j,JNI_FALSE);
				const ev_string strAttributeName = strAttributeName_ch;
				__env->ReleaseStringChars(strAttributeName_j, (const jchar *)strAttributeName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeAttribute(strAttributeName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_removeAllAttribute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->removeAllAttribute();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_isLeaf_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLeaf();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_isMyChild_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				const EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->isMyChild(xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_isRoot_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->isRoot();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getParent();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getParent_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getParent(xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getChildCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getChildCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getFirstChild_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getFirstChild();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getFirstChild_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strChildName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strChildName_ch = (const ev_char*)__env->GetStringUTFChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringUTFChars(strChildName_j, (const char *)strChildName_ch);
				#else
				const ev_wchar* strChildName_ch = (const ev_wchar*)__env->GetStringChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringChars(strChildName_j, (const jchar *)strChildName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getFirstChild(strChildName);
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getFirstChild_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getFirstChild(xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getFirstChild_1ev_1string_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strChildName_j, jlong xmlElement_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strChildName_ch = (const ev_char*)__env->GetStringUTFChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringUTFChars(strChildName_j, (const char *)strChildName_ch);
				#else
				const ev_wchar* strChildName_ch = (const ev_wchar*)__env->GetStringChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringChars(strChildName_j, (const jchar *)strChildName_ch);
				#endif
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getFirstChild(strChildName, xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getLastChild_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getLastChild();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getLastChild_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strChildName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strChildName_ch = (const ev_char*)__env->GetStringUTFChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringUTFChars(strChildName_j, (const char *)strChildName_ch);
				#else
				const ev_wchar* strChildName_ch = (const ev_wchar*)__env->GetStringChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringChars(strChildName_j, (const jchar *)strChildName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getLastChild(strChildName);
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getLastChild_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLastChild(xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getLastChild_1ev_1string_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strChildName_j, jlong xmlElement_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strChildName_ch = (const ev_char*)__env->GetStringUTFChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringUTFChars(strChildName_j, (const char *)strChildName_ch);
				#else
				const ev_wchar* strChildName_ch = (const ev_wchar*)__env->GetStringChars(strChildName_j,JNI_FALSE);
				const ev_string strChildName = strChildName_ch;
				__env->ReleaseStringChars(strChildName_j, (const jchar *)strChildName_ch);
				#endif
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLastChild(strChildName, xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getChild_1ev_1uint32_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nIndex_j, jlong xmlElement_j)
			{
				ev_uint32 nIndex = (ev_uint32) nIndex_j;
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getChild(nIndex, xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getNextSibling_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getNextSibling();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getNextSibling_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSiblingName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSiblingName_ch = (const ev_char*)__env->GetStringUTFChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringUTFChars(strSiblingName_j, (const char *)strSiblingName_ch);
				#else
				const ev_wchar* strSiblingName_ch = (const ev_wchar*)__env->GetStringChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringChars(strSiblingName_j, (const jchar *)strSiblingName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getNextSibling(strSiblingName);
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getNextSibling_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getNextSibling(xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getNextSibling_1ev_1string_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSiblingName_j, jlong xmlElement_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSiblingName_ch = (const ev_char*)__env->GetStringUTFChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringUTFChars(strSiblingName_j, (const char *)strSiblingName_ch);
				#else
				const ev_wchar* strSiblingName_ch = (const ev_wchar*)__env->GetStringChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringChars(strSiblingName_j, (const jchar *)strSiblingName_ch);
				#endif
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getNextSibling(strSiblingName, xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getPrevSibling_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getPrevSibling();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getPrevSibling_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSiblingName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSiblingName_ch = (const ev_char*)__env->GetStringUTFChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringUTFChars(strSiblingName_j, (const char *)strSiblingName_ch);
				#else
				const ev_wchar* strSiblingName_ch = (const ev_wchar*)__env->GetStringChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringChars(strSiblingName_j, (const jchar *)strSiblingName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->getPrevSibling(strSiblingName);
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getPrevSibling_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getPrevSibling(xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getPrevSibling_1ev_1string_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strSiblingName_j, jlong xmlElement_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strSiblingName_ch = (const ev_char*)__env->GetStringUTFChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringUTFChars(strSiblingName_j, (const char *)strSiblingName_ch);
				#else
				const ev_wchar* strSiblingName_ch = (const ev_wchar*)__env->GetStringChars(strSiblingName_j,JNI_FALSE);
				const ev_string strSiblingName = strSiblingName_ch;
				__env->ReleaseStringChars(strSiblingName_j, (const jchar *)strSiblingName_ch);
				#endif
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getPrevSibling(strSiblingName, xmlElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlElement_getComment_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nIndex_j)
			{
				ev_uint32 nIndex = (ev_uint32) nIndex_j;
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_string __values1 = pObjectX->getComment(nIndex);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_getComment_1ev_1uint32_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nIndex_j, jlong strComment_j)
			{
				ev_uint32 nIndex = (ev_uint32) nIndex_j;
				ev_string &strComment = *(ev_string*) strComment_j;
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->getComment(nIndex, strComment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_getCommentCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getCommentCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_appendComment_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strCommnetContent_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strCommnetContent_ch = (const ev_char*)__env->GetStringUTFChars(strCommnetContent_j,JNI_FALSE);
				const ev_string strCommnetContent = strCommnetContent_ch;
				__env->ReleaseStringUTFChars(strCommnetContent_j, (const char *)strCommnetContent_ch);
				#else
				const ev_wchar* strCommnetContent_ch = (const ev_wchar*)__env->GetStringChars(strCommnetContent_j,JNI_FALSE);
				const ev_string strCommnetContent = strCommnetContent_ch;
				__env->ReleaseStringChars(strCommnetContent_j, (const jchar *)strCommnetContent_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->appendComment(strCommnetContent);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_removeComment_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nIndex_j)
			{
				ev_uint32 nIndex = (ev_uint32) nIndex_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeComment(nIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_removeAllComment_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->removeAllComment();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_appendChild_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong appendElement_j)
			{
				const EarthView::World::Core::CXmlElement &appendElement = *(EarthView::World::Core::CXmlElement*) appendElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->appendChild(appendElement);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_insertChildBefore_1CXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong addThis_j, jlong beforeThis_j)
			{
				const EarthView::World::Core::CXmlElement &addThis = *(EarthView::World::Core::CXmlElement*) addThis_j;
				EarthView::World::Core::CXmlElement &beforeThis = *(EarthView::World::Core::CXmlElement*) beforeThis_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->insertChildBefore(addThis, beforeThis);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_XmlElement_insertChildAfter_1CXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong addThis_j, jlong afterThis_j)
			{
				const EarthView::World::Core::CXmlElement &addThis = *(EarthView::World::Core::CXmlElement*) addThis_j;
				EarthView::World::Core::CXmlElement &afterThis = *(EarthView::World::Core::CXmlElement*) afterThis_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->insertChildAfter(addThis, afterThis);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_removeChild_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong removeElement_j)
			{
				const EarthView::World::Core::CXmlElement &removeElement = *(EarthView::World::Core::CXmlElement*) removeElement_j;
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->removeChild(removeElement);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_removeChild_1ev_1string(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strElementName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strElementName_ch = (const ev_char*)__env->GetStringUTFChars(strElementName_j,JNI_FALSE);
				const ev_string strElementName = strElementName_ch;
				__env->ReleaseStringUTFChars(strElementName_j, (const char *)strElementName_ch);
				#else
				const ev_wchar* strElementName_ch = (const ev_wchar*)__env->GetStringChars(strElementName_j,JNI_FALSE);
				const ev_string strElementName = strElementName_ch;
				__env->ReleaseStringChars(strElementName_j, (const jchar *)strElementName_ch);
				#endif
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->removeChild(strElementName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_XmlElement_removeAllChildren_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->removeAllChildren();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_XmlElement_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CXmlElement *pObjectX = (EarthView::World::Core::CXmlElement*) pObjXXXX;
				ev_string __values1 = pObjectX->toString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
