/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/scriptcompiler.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ConcreteNodeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CNT_VARIABLE,
					CNT_VARIABLE_ASSIGN,
					CNT_WORD,
					CNT_IMPORT,
					CNT_QUOTE,
					CNT_LBRACE,
					CNT_RBRACE,
					CNT_COLON
				};
				jintArray array = __env->NewIntArray(8);
				__env->SetIntArrayRegion(array, 0, 8, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNodePtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConcreteNodePtr *pObjectX = (EarthView::World::Graphic::ConcreteNodePtr*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNode* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_push_1back_1ConcreteNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::ConcreteNodePtr &t = *(EarthView::World::Graphic::ConcreteNodePtr*) t_j;
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_push_1front_1ConcreteNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::ConcreteNodePtr &t = *(EarthView::World::Graphic::ConcreteNodePtr*) t_j;
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNodePtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNodePtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNodePtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_insert_1ev_1uint32_1ConcreteNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::ConcreteNodePtr &t = *(EarthView::World::Graphic::ConcreteNodePtr*) t_j;
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNodeList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNodeList *pObjectX = (EarthView::World::Graphic::ConcreteNodeList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNodeListPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ConcreteNodeListPtr *pObjectX = (EarthView::World::Graphic::ConcreteNodeListPtr*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNodeList* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConcreteNode_get_1file_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->file;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNode_set_1file_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->file = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ConcreteNode_get_1token_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->token;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNode_set_1token_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->token = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNode_get_1line_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->line);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNode_set_1line_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				pObjectX->line = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ConcreteNode_get_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->type);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNode_set_1type_1ConcreteNodeType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				pObjectX->type = (EarthView::World::Graphic::ConcreteNodeType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNode_get_1children_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->children);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNode_set_1children_1ConcreteNodeList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				pObjectX->children = *(EarthView::World::Graphic::ConcreteNodeList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ConcreteNode_get_1parent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->parent);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ConcreteNode_set_1parent_1ConcreteNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::ConcreteNode *pObjectX = (EarthView::World::Graphic::ConcreteNode*)pObjXXXX;
				pObjectX->parent = (EarthView::World::Graphic::ConcreteNode*) __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_AbstractNodeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					ANT_UNKNOWN,
					ANT_ATOM,
					ANT_OBJECT,
					ANT_PROPERTY,
					ANT_IMPORT,
					ANT_VARIABLE_SET,
					ANT_VARIABLE_ACCESS
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodePtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AbstractNodePtr *pObjectX = (EarthView::World::Graphic::AbstractNodePtr*) pObjXXXX;
				EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_push_1back_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::AbstractNodePtr &t = *(EarthView::World::Graphic::AbstractNodePtr*) t_j;
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_push_1front_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::AbstractNodePtr &t = *(EarthView::World::Graphic::AbstractNodePtr*) t_j;
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodePtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodePtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodePtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_insert_1ev_1uint32_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::AbstractNodePtr &t = *(EarthView::World::Graphic::AbstractNodePtr*) t_j;
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AbstractNodeList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodeList *pObjectX = (EarthView::World::Graphic::AbstractNodeList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeListPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AbstractNodeListPtr *pObjectX = (EarthView::World::Graphic::AbstractNodeListPtr*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodeList* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCAbstractNodeProxy : public EarthView::World::Graphic::CAbstractNode
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_getValue_void_callback;
			public:
				JCAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CAbstractNode(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAbstractNode *__values1 = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAbstractNode::clone();
					}
				}
				virtual EVString getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CAbstractNode::getValue();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAbstractNodeProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AbstractNode_get_1file_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->file;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNode_set_1file_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->file = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNode_get_1line_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->line);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNode_set_1line_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				pObjectX->line = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AbstractNode_get_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->type);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNode_set_1type_1AbstractNodeType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				pObjectX->type = (EarthView::World::Graphic::AbstractNodeType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNode_get_1parent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->parent);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNode_set_1parent_1CAbstractNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*)pObjXXXX;
				pObjectX->parent = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNode_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAbstractNodeProxy))
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CAbstractNode::clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNode_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAbstractNodeProxy *pObjectX = (JCAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNode_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*) pObjXXXX;
				EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CAbstractNode::clone();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AbstractNode_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAbstractNodeProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CAbstractNode::getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNode_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAbstractNodeProxy *pObjectX = (JCAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AbstractNode_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAbstractNode *pObjectX = (EarthView::World::Graphic::CAbstractNode*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CAbstractNode::getValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			class JCAtomAbstractNodeProxy : public EarthView::World::Graphic::CAtomAbstractNode
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_getValue_void_callback;
			public:
				JCAtomAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CAtomAbstractNode(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				virtual EVString getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CAtomAbstractNode::getValue();
					}
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAbstractNode *__values1 = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CAtomAbstractNode::clone();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAtomAbstractNodeProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_get_1value_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->value;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_set_1value_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->value = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_get_1id_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->id);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_set_1id_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*)pObjXXXX;
				pObjectX->id = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAtomAbstractNodeProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CAtomAbstractNode::getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAtomAbstractNodeProxy *pObjectX = (JCAtomAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CAtomAbstractNode::getValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAtomAbstractNodeProxy))
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CAtomAbstractNode::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAtomAbstractNodeProxy *pObjectX = (JCAtomAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AtomAbstractNode_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAtomAbstractNode *pObjectX = (EarthView::World::Graphic::CAtomAbstractNode*) pObjXXXX;
				EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CAtomAbstractNode::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AbstractNodePair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodePair *pObjectX = (EarthView::World::Graphic::AbstractNodePair*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodePair_set_1first_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::AbstractNodePair *pObjectX = (EarthView::World::Graphic::AbstractNodePair*)pObjXXXX;
				pObjectX->first = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AbstractNodePair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodePair *pObjectX = (EarthView::World::Graphic::AbstractNodePair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->second;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodePair_set_1second_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::AbstractNodePair *pObjectX = (EarthView::World::Graphic::AbstractNodePair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->second = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodePair_OperatorAssign_1AbstractNodePair(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Graphic::AbstractNodePair& pObjectX = *(EarthView::World::Graphic::AbstractNodePair*) pObjXXXX;
				const EarthView::World::Graphic::AbstractNodePair &other = *(EarthView::World::Graphic::AbstractNodePair*) other_j;
				pObjectX = other;
				EarthView::World::Graphic::AbstractNodePair& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_push_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jstring val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
				EVString val = val_ch;
				__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
				#else
				const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
				EVString val = val_ch;
				__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
				#endif
				EarthView::World::Graphic::AbstractNodeMap *pObjectX = (EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::AbstractNodeMap *pObjectX = (EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_OperatorAssign_1AbstractNodeMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Graphic::AbstractNodeMap& pObjectX = *(EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				const EarthView::World::Graphic::AbstractNodeMap &other = *(EarthView::World::Graphic::AbstractNodeMap*) other_j;
				pObjectX = other;
				EarthView::World::Graphic::AbstractNodeMap& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::AbstractNodeMap& pObjectX = *(EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EVString& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::AbstractNodeMap *pObjectX = (EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				EVString& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::AbstractNodeMap *pObjectX = (EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AbstractNodeMap *pObjectX = (EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::AbstractNodeMap *pObjectX = (EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AbstractNodeMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AbstractNodeMap *pObjectX = (EarthView::World::Graphic::AbstractNodeMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCObjectAbstractNodeProxy : public EarthView::World::Graphic::CObjectAbstractNode
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_getValue_void_callback;
			public:
				JCObjectAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CObjectAbstractNode(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAbstractNode *__values1 = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CObjectAbstractNode::clone();
					}
				}
				virtual EVString getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CObjectAbstractNode::getValue();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCObjectAbstractNodeProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1cls_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->cls;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1cls_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->cls = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1bases_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->bases);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1bases_1StringVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				pObjectX->bases = *(EarthView::World::Core::StringVector*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1id_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->id);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1id_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				pObjectX->id = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1abstract_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->abstract);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1abstract_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				pObjectX->abstract = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1children_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->children);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1children_1AbstractNodeList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				pObjectX->children = *(EarthView::World::Graphic::AbstractNodeList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1values_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->values);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1values_1AbstractNodeList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				pObjectX->values = *(EarthView::World::Graphic::AbstractNodeList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_get_1overrides_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->overrides);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_set_1overrides_1AbstractNodeList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*)pObjXXXX;
				pObjectX->overrides = *(EarthView::World::Graphic::AbstractNodeList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCObjectAbstractNodeProxy))
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CObjectAbstractNode::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCObjectAbstractNodeProxy *pObjectX = (JCObjectAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CObjectAbstractNode::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCObjectAbstractNodeProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CObjectAbstractNode::getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCObjectAbstractNodeProxy *pObjectX = (JCObjectAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CObjectAbstractNode::getValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_addVariable_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				pObjectX->addVariable(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_setVariable_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring value_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				pObjectX->setVariable(name, value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_getVariable_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				const 				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodePair __values1 = pObjectX->getVariable(name);
				EarthView::World::Graphic::AbstractNodePair *returnvalues = new EarthView::World::Graphic::AbstractNodePair(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ObjectAbstractNode_getVariables_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CObjectAbstractNode *pObjectX = (EarthView::World::Graphic::CObjectAbstractNode*) pObjXXXX;
				const EarthView::World::Graphic::AbstractNodeMap& __values1 = pObjectX->getVariables();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			class JCPropertyAbstractNodeProxy : public EarthView::World::Graphic::CPropertyAbstractNode
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_getValue_void_callback;
			public:
				JCPropertyAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CPropertyAbstractNode(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAbstractNode *__values1 = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CPropertyAbstractNode::clone();
					}
				}
				virtual EVString getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CPropertyAbstractNode::getValue();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPropertyAbstractNodeProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_get_1id_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->id);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_set_1id_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*)pObjXXXX;
				pObjectX->id = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_get_1values_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->values);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_set_1values_1AbstractNodeList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*)pObjXXXX;
				pObjectX->values = *(EarthView::World::Graphic::AbstractNodeList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPropertyAbstractNodeProxy))
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CPropertyAbstractNode::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPropertyAbstractNodeProxy *pObjectX = (JCPropertyAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjXXXX;
				EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CPropertyAbstractNode::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPropertyAbstractNodeProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CPropertyAbstractNode::getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPropertyAbstractNodeProxy *pObjectX = (JCPropertyAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PropertyAbstractNode_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPropertyAbstractNode *pObjectX = (EarthView::World::Graphic::CPropertyAbstractNode*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CPropertyAbstractNode::getValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			class JCImportAbstractNodeProxy : public EarthView::World::Graphic::CImportAbstractNode
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_getValue_void_callback;
			public:
				JCImportAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CImportAbstractNode(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAbstractNode *__values1 = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CImportAbstractNode::clone();
					}
				}
				virtual EVString getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CImportAbstractNode::getValue();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCImportAbstractNodeProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_get_1source_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->source;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_set_1source_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->source = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_get_1target_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->target;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_set_1target_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->target = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCImportAbstractNodeProxy))
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CImportAbstractNode::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCImportAbstractNodeProxy *pObjectX = (JCImportAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*) pObjXXXX;
				EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CImportAbstractNode::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCImportAbstractNodeProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CImportAbstractNode::getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCImportAbstractNodeProxy *pObjectX = (JCImportAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ImportAbstractNode_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CImportAbstractNode *pObjectX = (EarthView::World::Graphic::CImportAbstractNode*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CImportAbstractNode::getValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			class JCVariableAccessAbstractNodeProxy : public EarthView::World::Graphic::CVariableAccessAbstractNode
			{
			 private:
				EarthView::World::Core::ev_string m_ev_clone_void_callback;
				EarthView::World::Core::ev_string m_getValue_void_callback;
			public:
				JCVariableAccessAbstractNodeProxy(EarthView::World::Core::CNameValuePairList *pList) : CVariableAccessAbstractNode(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_void_callback = __method;
				}
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				virtual EarthView::World::Graphic::CAbstractNode* clone() const
				{
					if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("ev_clone_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAbstractNode *__values1 = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CVariableAccessAbstractNode::clone();
					}
				}
				virtual EVString getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getValue_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EVString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->CVariableAccessAbstractNode::getValue();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVariableAccessAbstractNodeProxy);
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_get_1name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVariableAccessAbstractNode *pObjectX = (EarthView::World::Graphic::CVariableAccessAbstractNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_set_1name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CVariableAccessAbstractNode *pObjectX = (EarthView::World::Graphic::CVariableAccessAbstractNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVariableAccessAbstractNode *pObjectX = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVariableAccessAbstractNodeProxy))
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CVariableAccessAbstractNode::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVariableAccessAbstractNodeProxy *pObjectX = (JCVariableAccessAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVariableAccessAbstractNode *pObjectX = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjXXXX;
				EarthView::World::Graphic::CAbstractNode* __values1 = pObjectX->EarthView::World::Graphic::CVariableAccessAbstractNode::clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVariableAccessAbstractNode *pObjectX = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVariableAccessAbstractNodeProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CVariableAccessAbstractNode::getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getValue();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVariableAccessAbstractNodeProxy *pObjectX = (JCVariableAccessAbstractNodeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_VariableAccessAbstractNode_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVariableAccessAbstractNode *pObjectX = (EarthView::World::Graphic::CVariableAccessAbstractNode*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CVariableAccessAbstractNode::getValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_push_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_uint32 val = (ev_uint32) val_j;
				EarthView::World::Graphic::CScriptCompiler::IdMap *pObjectX = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler::IdMap *pObjectX = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CScriptCompiler::IdMap& pObjectX = *(EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_uint32& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler::IdMap *pObjectX = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				ev_uint32& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler::IdMap *pObjectX = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompiler::IdMap *pObjectX = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::IdMap *pObjectX = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024IdMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompiler::IdMap *pObjectX = (EarthView::World::Graphic::CScriptCompiler::IdMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_get_1file_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->file;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_set_1file_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->file = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_get_1message_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->message;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_set_1message_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->message = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_get_1line_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->line);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_set_1line_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				pObjectX->line = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_get_1code_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->code);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024EVError_set_1code_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CScriptCompiler::CError *pObjectX = (EarthView::World::Graphic::CScriptCompiler::CError*)pObjXXXX;
				pObjectX->code = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompiler::ErrorPtr *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorPtr*) pObjXXXX;
				EarthView::World::Graphic::CScriptCompiler::CError* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_push_1back_1ErrorPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr &t = *(EarthView::World::Graphic::CScriptCompiler::ErrorPtr*) t_j;
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_push_1front_1ErrorPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr &t = *(EarthView::World::Graphic::CScriptCompiler::ErrorPtr*) t_j;
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_insert_1ev_1uint32_1ErrorPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CScriptCompiler::ErrorPtr &t = *(EarthView::World::Graphic::CScriptCompiler::ErrorPtr*) t_j;
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024ErrorList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler::ErrorList *pObjectX = (EarthView::World::Graphic::CScriptCompiler::ErrorList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024CompiledErrorHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CScriptCompiler::CE_STRINGEXPECTED,
					CScriptCompiler::CE_NUMBEREXPECTED,
					CScriptCompiler::CE_FEWERPARAMETERSEXPECTED,
					CScriptCompiler::CE_VARIABLEEXPECTED,
					CScriptCompiler::CE_UNDEFINEDVARIABLE,
					CScriptCompiler::CE_OBJECTNAMEEXPECTED,
					CScriptCompiler::CE_OBJECTALLOCATIONERROR,
					CScriptCompiler::CE_INVALIDPARAMETERS,
					CScriptCompiler::CE_DUPLICATEOVERRIDE,
					CScriptCompiler::CE_UNEXPECTEDTOKEN,
					CScriptCompiler::CE_OBJECTBASENOTFOUND,
					CScriptCompiler::CE_UNSUPPORTEDBYRENDERSYSTEM,
					CScriptCompiler::CE_REFERENCETOANONEXISTINGOBJECT,
					CScriptCompiler::CE_LOCALFILEEXIST
				};
				jintArray array = __env->NewIntArray(14);
				__env->SetIntArrayRegion(array, 0, 14, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ScriptCompiler_formatErrorCode_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong code_j)
			{
				ev_uint32 code = (ev_uint32) code_j;
				EVString __values1 = EarthView::World::Graphic::CScriptCompiler::formatErrorCode(code);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler_compile_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j, jstring source_j, jstring group_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->compile(str, source, group);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler_compile_1ConcreteNodeListPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodes_j, jstring group_j)
			{
				const EarthView::World::Graphic::ConcreteNodeListPtr &nodes = *(EarthView::World::Graphic::ConcreteNodeListPtr*) nodes_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->compile(nodes, group);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1generateAST_1EVString_1EVString_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j, jstring source_j, jboolean doImports_j, jboolean doObjects_j, jboolean doVariables_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				ev_bool doImports = (ev_bool) doImports_j;
				ev_bool doObjects = (ev_bool) doObjects_j;
				ev_bool doVariables = (ev_bool) doVariables_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr __values1 = pObjectX->_generateAST(str, source, doImports, doObjects, doVariables);
				EarthView::World::Graphic::AbstractNodeListPtr *returnvalues = new EarthView::World::Graphic::AbstractNodeListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1generateAST_1EVString_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j, jstring source_j, jboolean doImports_j, jboolean doObjects_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				ev_bool doImports = (ev_bool) doImports_j;
				ev_bool doObjects = (ev_bool) doObjects_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr __values1 = pObjectX->_generateAST(str, source, doImports, doObjects);
				EarthView::World::Graphic::AbstractNodeListPtr *returnvalues = new EarthView::World::Graphic::AbstractNodeListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1generateAST_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j, jstring source_j, jboolean doImports_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				ev_bool doImports = (ev_bool) doImports_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr __values1 = pObjectX->_generateAST(str, source, doImports);
				EarthView::World::Graphic::AbstractNodeListPtr *returnvalues = new EarthView::World::Graphic::AbstractNodeListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1generateAST_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j, jstring source_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
				#else
				const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
				const EVString str = str_ch;
				__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* source_ch = (const ev_char*)__env->GetStringUTFChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringUTFChars(source_j, (const char *)source_ch);
				#else
				const ev_wchar* source_ch = (const ev_wchar*)__env->GetStringChars(source_j,JNI_FALSE);
				const EVString source = source_ch;
				__env->ReleaseStringChars(source_j, (const jchar *)source_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				EarthView::World::Graphic::AbstractNodeListPtr __values1 = pObjectX->_generateAST(str, source);
				EarthView::World::Graphic::AbstractNodeListPtr *returnvalues = new EarthView::World::Graphic::AbstractNodeListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1compile_1AbstractNodeListPtr_1EVString_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodes_j, jstring group_j, jboolean doImports_j, jboolean doObjects_j, jboolean doVariables_j)
			{
				EarthView::World::Graphic::AbstractNodeListPtr nodes = *(EarthView::World::Graphic::AbstractNodeListPtr*) nodes_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool doImports = (ev_bool) doImports_j;
				ev_bool doObjects = (ev_bool) doObjects_j;
				ev_bool doVariables = (ev_bool) doVariables_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->_compile(nodes, group, doImports, doObjects, doVariables);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1compile_1AbstractNodeListPtr_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodes_j, jstring group_j, jboolean doImports_j, jboolean doObjects_j)
			{
				EarthView::World::Graphic::AbstractNodeListPtr nodes = *(EarthView::World::Graphic::AbstractNodeListPtr*) nodes_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool doImports = (ev_bool) doImports_j;
				ev_bool doObjects = (ev_bool) doObjects_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->_compile(nodes, group, doImports, doObjects);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1compile_1AbstractNodeListPtr_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodes_j, jstring group_j, jboolean doImports_j)
			{
				EarthView::World::Graphic::AbstractNodeListPtr nodes = *(EarthView::World::Graphic::AbstractNodeListPtr*) nodes_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				ev_bool doImports = (ev_bool) doImports_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->_compile(nodes, group, doImports);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1compile_1AbstractNodeListPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong nodes_j, jstring group_j)
			{
				EarthView::World::Graphic::AbstractNodeListPtr nodes = *(EarthView::World::Graphic::AbstractNodeListPtr*) nodes_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
				#else
				const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
				const EVString group = group_ch;
				__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->_compile(nodes, group);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_addError_1ev_1uint32_1EVString_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong code_j, jstring file_j, jint line_j, jstring msg_j)
			{
				ev_uint32 code = (ev_uint32) code_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
				#else
				const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
				#endif
				ev_int32 line = (ev_int32) line_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
				#else
				const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				pObjectX->addError(code, file, line, msg);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_addError_1ev_1uint32_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong code_j, jstring file_j, jint line_j)
			{
				ev_uint32 code = (ev_uint32) code_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
				#else
				const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
				#endif
				ev_int32 line = (ev_int32) line_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				pObjectX->addError(code, file, line);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_setListener_1CScriptCompilerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
			{
				EarthView::World::Graphic::CScriptCompilerListener *listener = (EarthView::World::Graphic::CScriptCompilerListener*) listener_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				pObjectX->setListener(listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				EarthView::World::Graphic::CScriptCompilerListener* __values1 = pObjectX->getListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompiler_getResourceGroup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				const EVString& __values1 = pObjectX->getResourceGroup();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_addNameExclusion_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				pObjectX->addNameExclusion(type);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompiler_removeNameExclusion_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring type_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* type_ch = (const ev_char*)__env->GetStringUTFChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringUTFChars(type_j, (const char *)type_ch);
				#else
				const ev_wchar* type_ch = (const ev_wchar*)__env->GetStringChars(type_j,JNI_FALSE);
				const EVString type = type_ch;
				__env->ReleaseStringChars(type_j, (const jchar *)type_ch);
				#endif
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				pObjectX->removeNameExclusion(type);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompiler__1fireEvent_1CScriptCompilerEvent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong evt_j, jlong retval_j)
			{
				EarthView::World::Graphic::CScriptCompilerEvent *evt = (EarthView::World::Graphic::CScriptCompilerEvent*) evt_j;
				void *retval = (void*) retval_j;
				EarthView::World::Graphic::CScriptCompiler *pObjectX = (EarthView::World::Graphic::CScriptCompiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->_fireEvent(evt, retval);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ScriptCompiler_00024CompliedIDHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CScriptCompiler::ID_ON,
					CScriptCompiler::ID_OFF,
					CScriptCompiler::ID_TRUE,
					CScriptCompiler::ID_FALSE,
					CScriptCompiler::ID_YES,
					CScriptCompiler::ID_NO
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ScriptCompilerEvent_get_1mType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerEvent_set_1mType_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			class JCScriptCompilerListenerProxy : public EarthView::World::Graphic::CScriptCompilerListener
			{
			 private:
				EarthView::World::Core::ev_string m_importFile_CScriptCompiler_EVString_callback;
				EarthView::World::Core::ev_string m_preConversion_CScriptCompiler_ConcreteNodeListPtr_callback;
				EarthView::World::Core::ev_string m_postConversion_CScriptCompiler_AbstractNodeListPtr_callback;
				EarthView::World::Core::ev_string m_handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback;
				EarthView::World::Core::ev_string m_handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback;
			public:
				JCScriptCompilerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptCompilerListener(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_importFile_CScriptCompiler_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_importFile_CScriptCompiler_EVString_callback = __method;
				}
				void register_preConversion_CScriptCompiler_ConcreteNodeListPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preConversion_CScriptCompiler_ConcreteNodeListPtr_callback = __method;
				}
				void register_postConversion_CScriptCompiler_AbstractNodeListPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postConversion_CScriptCompiler_AbstractNodeListPtr_callback = __method;
				}
				void register_handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback = __method;
				}
				void register_handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback = __method;
				}
				virtual EarthView::World::Graphic::ConcreteNodeListPtr importFile(EarthView::World::Graphic::CScriptCompiler* compiler, const EVString& name)
				{
					if (this->_gRef != NULL && this->m_importFile_CScriptCompiler_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong compiler_j = (jlong) compiler;
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("importFile_CScriptCompiler_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , compiler_j, name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::ConcreteNodeListPtr __values1 = *(EarthView::World::Graphic::ConcreteNodeListPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptCompilerListener::importFile(compiler, name);
					}
				}
				virtual void preConversion(EarthView::World::Graphic::CScriptCompiler* compiler, EarthView::World::Graphic::ConcreteNodeListPtr nodes)
				{
					if (this->_gRef != NULL && this->m_preConversion_CScriptCompiler_ConcreteNodeListPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong compiler_j = (jlong) compiler;
						jlong nodes_j = (jlong) &nodes;
						jmethodID __method = __gr->getMethod("preConversion_CScriptCompiler_ConcreteNodeListPtr_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, nodes_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CScriptCompilerListener::preConversion(compiler, nodes);
					}
				}
				virtual ev_bool postConversion(EarthView::World::Graphic::CScriptCompiler* compiler, const EarthView::World::Graphic::AbstractNodeListPtr& nodes)
				{
					if (this->_gRef != NULL && this->m_postConversion_CScriptCompiler_AbstractNodeListPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong compiler_j = (jlong) compiler;
						jlong nodes_j = (jlong) &nodes;
						jmethodID __method = __gr->getMethod("postConversion_CScriptCompiler_AbstractNodeListPtr_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , compiler_j, nodes_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptCompilerListener::postConversion(compiler, nodes);
					}
				}
				virtual void handleError(EarthView::World::Graphic::CScriptCompiler* compiler, ev_uint32 code, const EVString& file, ev_int32 line, const EVString& msg)
				{
					if (this->_gRef != NULL && this->m_handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong compiler_j = (jlong) compiler;
						jlong code_j = (jlong) code;
						EarthView::World::Core::ev_wstring file_wch = file;
						jstring file_j = __env->NewString((const jchar*)file_wch.getString(), file_wch.size());
						jint line_j = (jint) line;
						EarthView::World::Core::ev_wstring msg_wch = msg;
						jstring msg_j = __env->NewString((const jchar*)msg_wch.getString(), msg_wch.size());
						jmethodID __method = __gr->getMethod("handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback");
						__env->CallVoidMethod(__obj, __method , compiler_j, code_j, file_j, line_j, msg_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CScriptCompilerListener::handleError(compiler, code, file, line, msg);
					}
				}
				virtual ev_bool handleEvent(EarthView::World::Graphic::CScriptCompiler* compiler, EarthView::World::Graphic::CScriptCompilerEvent* evt, void* retval)
				{
					if (this->_gRef != NULL && this->m_handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong compiler_j = (jlong) compiler;
						jlong evt_j = (jlong) evt;
						jlong retval_j = (jlong) retval;
						jmethodID __method = __gr->getMethod("handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , compiler_j, evt_j, retval_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_bool __values1 = (ev_bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptCompilerListener::handleEvent(compiler, evt, retval);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScriptCompilerListenerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_importFile_1CScriptCompiler_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jstring name_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerListenerProxy))
				{
					EarthView::World::Graphic::ConcreteNodeListPtr __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerListener::importFile(compiler, name);
					EarthView::World::Graphic::ConcreteNodeListPtr *returnvalues = new EarthView::World::Graphic::ConcreteNodeListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::ConcreteNodeListPtr __values1 = pObjectX->importFile(compiler, name);
					EarthView::World::Graphic::ConcreteNodeListPtr *returnvalues = new EarthView::World::Graphic::ConcreteNodeListPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_register_1importFile_1CScriptCompiler_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerListenerProxy *pObjectX = (JCScriptCompilerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_importFile_CScriptCompiler_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"importFile_CScriptCompiler_EVString_callback", "(JLjava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_importFile_1CScriptCompiler_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jstring name_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				EarthView::World::Graphic::ConcreteNodeListPtr __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerListener::importFile(compiler, name);
				EarthView::World::Graphic::ConcreteNodeListPtr *returnvalues = new EarthView::World::Graphic::ConcreteNodeListPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_preConversion_1CScriptCompiler_1ConcreteNodeListPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong nodes_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				EarthView::World::Graphic::ConcreteNodeListPtr nodes = *(EarthView::World::Graphic::ConcreteNodeListPtr*) nodes_j;
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CScriptCompilerListener::preConversion(compiler, nodes);
				}
				else
				{
					pObjectX->preConversion(compiler, nodes);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_register_1preConversion_1CScriptCompiler_1ConcreteNodeListPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerListenerProxy *pObjectX = (JCScriptCompilerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preConversion_CScriptCompiler_ConcreteNodeListPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preConversion_CScriptCompiler_ConcreteNodeListPtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_preConversion_1CScriptCompiler_1ConcreteNodeListPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong nodes_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				EarthView::World::Graphic::ConcreteNodeListPtr nodes = *(EarthView::World::Graphic::ConcreteNodeListPtr*) nodes_j;
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CScriptCompilerListener::preConversion(compiler, nodes);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_postConversion_1CScriptCompiler_1AbstractNodeListPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong nodes_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodeListPtr &nodes = *(EarthView::World::Graphic::AbstractNodeListPtr*) nodes_j;
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerListener::postConversion(compiler, nodes);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->postConversion(compiler, nodes);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_register_1postConversion_1CScriptCompiler_1AbstractNodeListPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerListenerProxy *pObjectX = (JCScriptCompilerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postConversion_CScriptCompiler_AbstractNodeListPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postConversion_CScriptCompiler_AbstractNodeListPtr_callback", "(JJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_postConversion_1CScriptCompiler_1AbstractNodeListPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong nodes_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				const EarthView::World::Graphic::AbstractNodeListPtr &nodes = *(EarthView::World::Graphic::AbstractNodeListPtr*) nodes_j;
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerListener::postConversion(compiler, nodes);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_handleError_1CScriptCompiler_1ev_1uint32_1EVString_1ev_1int32_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong code_j, jstring file_j, jint line_j, jstring msg_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				ev_uint32 code = (ev_uint32) code_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
				#else
				const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
				#endif
				ev_int32 line = (ev_int32) line_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
				#else
				const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
				#endif
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CScriptCompilerListener::handleError(compiler, code, file, line, msg);
				}
				else
				{
					pObjectX->handleError(compiler, code, file, line, msg);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_register_1handleError_1CScriptCompiler_1ev_1uint32_1EVString_1ev_1int32_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerListenerProxy *pObjectX = (JCScriptCompilerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleError_CScriptCompiler_ev_uint32_EVString_ev_int32_EVString_callback", "(JJLjava/lang/String;ILjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_handleError_1CScriptCompiler_1ev_1uint32_1EVString_1ev_1int32_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong code_j, jstring file_j, jint line_j, jstring msg_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				ev_uint32 code = (ev_uint32) code_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
				#else
				const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
				const EVString file = file_ch;
				__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
				#endif
				ev_int32 line = (ev_int32) line_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* msg_ch = (const ev_char*)__env->GetStringUTFChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringUTFChars(msg_j, (const char *)msg_ch);
				#else
				const ev_wchar* msg_ch = (const ev_wchar*)__env->GetStringChars(msg_j,JNI_FALSE);
				const EVString msg = msg_ch;
				__env->ReleaseStringChars(msg_j, (const jchar *)msg_ch);
				#endif
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CScriptCompilerListener::handleError(compiler, code, file, line, msg);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_handleEvent_1CScriptCompiler_1CScriptCompilerEvent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong evt_j, jlong retval_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				EarthView::World::Graphic::CScriptCompilerEvent *evt = (EarthView::World::Graphic::CScriptCompilerEvent*) evt_j;
				void *retval = (void*) retval_j;
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerListener::handleEvent(compiler, evt, retval);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->handleEvent(compiler, evt, retval);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_register_1handleEvent_1CScriptCompiler_1CScriptCompilerEvent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerListenerProxy *pObjectX = (JCScriptCompilerListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"handleEvent_CScriptCompiler_CScriptCompilerEvent_void_callback", "(JJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ScriptCompilerListener_handleEvent_1CScriptCompiler_1CScriptCompilerEvent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong compiler_j, jlong evt_j, jlong retval_j)
			{
				EarthView::World::Graphic::CScriptCompiler *compiler = (EarthView::World::Graphic::CScriptCompiler*) compiler_j;
				EarthView::World::Graphic::CScriptCompilerEvent *evt = (EarthView::World::Graphic::CScriptCompilerEvent*) evt_j;
				void *retval = (void*) retval_j;
				EarthView::World::Graphic::CScriptCompilerListener *pObjectX = (EarthView::World::Graphic::CScriptCompilerListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerListener::handleEvent(compiler, evt, retval);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCScriptCompilerManagerProxy : public EarthView::World::Graphic::CScriptCompilerManager
			{
			 private:
				EarthView::World::Core::ev_string m_getScriptPatterns_void_callback;
				EarthView::World::Core::ev_string m_parseScript_DataStreamPtr_EVString_callback;
				EarthView::World::Core::ev_string m_getLoadingOrder_void_callback;
			public:
				JCScriptCompilerManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScriptCompilerManager(pList)
				{
				}
				ev_void unRegisterJavaReference()
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
					if(__gr != NULL)
					{
						delete __gr;
						this->registerJavaReference(NULL);
					}
				}
			public:
				void register_getScriptPatterns_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getScriptPatterns_void_callback = __method;
				}
				void register_parseScript_DataStreamPtr_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_parseScript_DataStreamPtr_EVString_callback = __method;
				}
				void register_getLoadingOrder_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLoadingOrder_void_callback = __method;
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if (this->_gRef != NULL && this->m_getScriptPatterns_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getScriptPatterns_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Core::StringVector &__values1 = *(const EarthView::World::Core::StringVector*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptCompilerManager::getScriptPatterns();
					}
				}
				virtual void parseScript(EarthView::World::Core::DataStreamPtr& stream, const EVString& groupName)
				{
					if (this->_gRef != NULL && this->m_parseScript_DataStreamPtr_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong stream_j = (jlong) &stream;
						EarthView::World::Core::ev_wstring groupName_wch = groupName;
						jstring groupName_j = __env->NewString((const jchar*)groupName_wch.getString(), groupName_wch.size());
						jmethodID __method = __gr->getMethod("parseScript_DataStreamPtr_EVString_callback");
						__env->CallVoidMethod(__obj, __method , stream_j, groupName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->CScriptCompilerManager::parseScript(stream, groupName);
					}
				}
				virtual Real getLoadingOrder() const
				{
					if (this->_gRef != NULL && this->m_getLoadingOrder_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLoadingOrder_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						Real __values1 = (Real) __values1_j;
						return __values1;
					}
					else
					{
						return this->CScriptCompilerManager::getLoadingOrder();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCScriptCompilerManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CScriptCompilerManager& __values1 = EarthView::World::Graphic::CScriptCompilerManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CScriptCompilerManager* __values1 = EarthView::World::Graphic::CScriptCompilerManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_setListener_1CScriptCompilerListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CScriptCompilerListener *ref_listener = (EarthView::World::Graphic::CScriptCompilerListener*) ref_listener_j;
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				pObjectX->setListener(ref_listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				EarthView::World::Graphic::CScriptCompilerListener* __values1 = pObjectX->getListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_addTranslatorManager_1CScriptTranslatorManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_man_j)
			{
				EarthView::World::Graphic::CScriptTranslatorManager *ref_man = (EarthView::World::Graphic::CScriptTranslatorManager*) ref_man_j;
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				pObjectX->addTranslatorManager(ref_man);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_removeTranslatorManager_1CScriptTranslatorManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong man_j)
			{
				EarthView::World::Graphic::CScriptTranslatorManager *man = (EarthView::World::Graphic::CScriptTranslatorManager*) man_j;
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				pObjectX->removeTranslatorManager(man);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_clearTranslatorManagers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				pObjectX->clearTranslatorManagers();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getTranslator_1AbstractNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				const EarthView::World::Graphic::AbstractNodePtr &node = *(EarthView::World::Graphic::AbstractNodePtr*) node_j;
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				EarthView::World::Graphic::CScriptTranslator* __values1 = pObjectX->getTranslator(node);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_addScriptPattern_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pattern_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pattern_ch = (const ev_char*)__env->GetStringUTFChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringUTFChars(pattern_j, (const char *)pattern_ch);
				#else
				const ev_wchar* pattern_ch = (const ev_wchar*)__env->GetStringChars(pattern_j,JNI_FALSE);
				const EVString pattern = pattern_ch;
				__env->ReleaseStringChars(pattern_j, (const jchar *)pattern_ch);
				#endif
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				pObjectX->addScriptPattern(pattern);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getScriptPatterns_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerManagerProxy))
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerManager::getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Core::StringVector& __values1 = pObjectX->getScriptPatterns();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_register_1getScriptPatterns_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerManagerProxy *pObjectX = (JCScriptCompilerManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getScriptPatterns_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getScriptPatterns_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getScriptPatterns_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				const EarthView::World::Core::StringVector& __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerManager::getScriptPatterns();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_parseScript_1DataStreamPtr_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CScriptCompilerManager::parseScript(stream, groupName);
				}
				else
				{
					pObjectX->parseScript(stream, groupName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_register_1parseScript_1DataStreamPtr_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerManagerProxy *pObjectX = (JCScriptCompilerManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_parseScript_DataStreamPtr_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"parseScript_DataStreamPtr_EVString_callback", "(JLjava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_parseScript_1DataStreamPtr_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j, jstring groupName_j)
			{
				EarthView::World::Core::DataStreamPtr &stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CScriptCompilerManager::parseScript(stream, groupName);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getLoadingOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCScriptCompilerManagerProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerManager::getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLoadingOrder();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_register_1getLoadingOrder_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCScriptCompilerManagerProxy *pObjectX = (JCScriptCompilerManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLoadingOrder_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLoadingOrder_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ScriptCompilerManager_getLoadingOrder_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CScriptCompilerManager *pObjectX = (EarthView::World::Graphic::CScriptCompilerManager*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CScriptCompilerManager::getLoadingOrder();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PreApplyTextureAliasesScriptCompilerEvent_get_1mMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mMaterial);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PreApplyTextureAliasesScriptCompilerEvent_set_1mMaterial_1CMaterial(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*)pObjXXXX;
				pObjectX->mMaterial = (EarthView::World::Graphic::CMaterial*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PreApplyTextureAliasesScriptCompilerEvent_get_1mAliases_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mAliases);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PreApplyTextureAliasesScriptCompilerEvent_set_1mAliases_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent*)pObjXXXX;
				pObjectX->mAliases = (EarthView::World::Core::CommonStringPairList*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_PreApplyTextureAliasesScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PreApplyTextureAliasesScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CPreApplyTextureAliasesScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ProcessResourceNameScriptCompilerEvent_00024ResourceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CProcessResourceNameScriptCompilerEvent::TEXTURE,
					CProcessResourceNameScriptCompilerEvent::MATERIAL,
					CProcessResourceNameScriptCompilerEvent::GPU_PROGRAM,
					CProcessResourceNameScriptCompilerEvent::COMPOSITOR
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ProcessResourceNameScriptCompilerEvent_get_1mResourceType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mResourceType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProcessResourceNameScriptCompilerEvent_set_1mResourceType_1ResourceType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*)pObjXXXX;
				pObjectX->mResourceType = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::ResourceType)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ProcessResourceNameScriptCompilerEvent_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProcessResourceNameScriptCompilerEvent_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ProcessResourceNameScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProcessResourceNameScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ProcessNameExclusionScriptCompilerEvent_get_1mClass_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mClass;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProcessNameExclusionScriptCompilerEvent_set_1mClass_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mClass = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProcessNameExclusionScriptCompilerEvent_get_1mParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->mParent);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProcessNameExclusionScriptCompilerEvent_set_1mParent_1CAbstractNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent*)pObjXXXX;
				pObjectX->mParent = (EarthView::World::Graphic::CAbstractNode*) __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_ProcessNameExclusionScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProcessNameExclusionScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CProcessNameExclusionScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_get_1mResourceGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mResourceGroup;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_set_1mResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mResourceGroup = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_get_1mFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_set_1mFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateMaterialScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CCreateMaterialScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_get_1mResourceGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mResourceGroup;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_set_1mResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mResourceGroup = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_get_1mSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mSource;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_set_1mSource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mSource = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_get_1mSyntax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mSyntax;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_set_1mSyntax_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mSyntax = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_get_1mFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_set_1mFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_get_1mProgramType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mProgramType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_set_1mProgramType_1GpuProgramType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent*)pObjXXXX;
				pObjectX->mProgramType = (EarthView::World::Graphic::GpuProgramType)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuProgramScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CCreateGpuProgramScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_get_1mResourceGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mResourceGroup;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_set_1mResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mResourceGroup = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_get_1mSource_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mSource;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_set_1mSource_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mSource = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_get_1mLanguage_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mLanguage;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_set_1mLanguage_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mLanguage = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_get_1mFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_set_1mFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_get_1mProgramType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mProgramType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_set_1mProgramType_1GpuProgramType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent*)pObjXXXX;
				pObjectX->mProgramType = (EarthView::World::Graphic::GpuProgramType)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateHighLevelGpuProgramScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CCreateHighLevelGpuProgramScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_get_1mResourceGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mResourceGroup;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_set_1mResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mResourceGroup = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_get_1mFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_set_1mFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateGpuSharedParametersScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CCreateGpuSharedParametersScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_get_1mResourceGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mResourceGroup;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_set_1mResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mResourceGroup = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_get_1mFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_set_1mFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateParticleSystemScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CCreateParticleSystemScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_get_1mName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_set_1mName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_get_1mResourceGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mResourceGroup;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_set_1mResourceGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mResourceGroup = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_get_1mFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_set_1mFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent *pObjectX = (EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_get_1eventType_1void(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Core::ev_wstring __values1_ch = EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent::eventType;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_CreateCompositorScriptCompilerEvent_set_1eventType_1EVString(JNIEnv *__env, jclass __clazz, jstring __values1_j)
			{
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				EarthView::World::Graphic::CCreateCompositorScriptCompilerEvent::eventType = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_KeywordIDHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					ID_MATERIAL,
					ID_VERTEX_PROGRAM,
					ID_GEOMETRY_PROGRAM,
					ID_FRAGMENT_PROGRAM,
					ID_TECHNIQUE,
					ID_PASS,
					ID_TEXTURE_UNIT,
					ID_VERTEX_PROGRAM_REF,
					ID_GEOMETRY_PROGRAM_REF,
					ID_FRAGMENT_PROGRAM_REF,
					ID_SHADOW_CASTER_VERTEX_PROGRAM_REF,
					ID_SHADOW_CASTER_FRAGMENT_PROGRAM_REF,
					ID_SHADOW_RECEIVER_VERTEX_PROGRAM_REF,
					ID_SHADOW_RECEIVER_FRAGMENT_PROGRAM_REF,
					ID_SHADOW_CASTER_MATERIAL,
					ID_SHADOW_RECEIVER_MATERIAL,
					ID_LOD_VALUES,
					ID_LOD_STRATEGY,
					ID_LOD_DISTANCES,
					ID_RECEIVE_SHADOWS,
					ID_TRANSPARENCY_CASTS_SHADOWS,
					ID_SET_TEXTURE_ALIAS,
					ID_SOURCE,
					ID_SYNTAX,
					ID_DEFAULT_PARAMS,
					ID_PARAM_INDEXED,
					ID_PARAM_NAMED,
					ID_PARAM_INDEXED_AUTO,
					ID_PARAM_NAMED_AUTO,
					ID_SCHEME,
					ID_LOD_INDEX,
					ID_GPU_VENDOR_RULE,
					ID_GPU_DEVICE_RULE,
					ID_INCLUDE,
					ID_EXCLUDE,
					ID_AMBIENT,
					ID_DIFFUSE,
					ID_SPECULAR,
					ID_EMISSIVE,
					ID_VERTEXCOLOUR,
					ID_SCENE_BLEND,
					ID_COLOUR_BLEND,
					ID_ONE,
					ID_ZERO,
					ID_DEST_COLOUR,
					ID_SRC_COLOUR,
					ID_ONE_MINUS_DEST_COLOUR,
					ID_ONE_MINUS_SRC_COLOUR,
					ID_DEST_ALPHA,
					ID_SRC_ALPHA,
					ID_ONE_MINUS_DEST_ALPHA,
					ID_ONE_MINUS_SRC_ALPHA,
					ID_SEPARATE_SCENE_BLEND,
					ID_SCENE_BLEND_OP,
					ID_REVERSE_SUBTRACT,
					ID_MIN,
					ID_MAX,
					ID_SEPARATE_SCENE_BLEND_OP,
					ID_DEPTH_CHECK,
					ID_DEPTH_WRITE,
					ID_DEPTH_FUNC,
					ID_DEPTH_BIAS,
					ID_ITERATION_DEPTH_BIAS,
					ID_ALWAYS_FAIL,
					ID_ALWAYS_PASS,
					ID_LESS_EQUAL,
					ID_LESS,
					ID_EQUAL,
					ID_NOT_EQUAL,
					ID_GREATER_EQUAL,
					ID_GREATER,
					ID_ALPHA_REJECTION,
					ID_ALPHA_TO_COVERAGE,
					ID_LIGHT_SCISSOR,
					ID_LIGHT_CLIP_PLANES,
					ID_TRANSPARENT_SORTING,
					ID_ILLUMINATION_STAGE,
					ID_DECAL,
					ID_CULL_HARDWARE,
					ID_CLOCKWISE,
					ID_ANTICLOCKWISE,
					ID_CULL_SOFTWARE,
					ID_BACK,
					ID_FRONT,
					ID_NORMALISE_NORMALS,
					ID_LIGHTING,
					ID_SHADING,
					ID_FLAT,
					ID_GOURAUD,
					ID_PHONG,
					ID_POLYGON_MODE,
					ID_SOLID,
					ID_WIREFRAME,
					ID_POINTS,
					ID_POLYGON_MODE_OVERRIDEABLE,
					ID_FOG_OVERRIDE,
					ID_NONE,
					ID_LINEAR,
					ID_EXP,
					ID_EXP2,
					ID_COLOUR_WRITE,
					ID_MAX_LIGHTS,
					ID_START_LIGHT,
					ID_ITERATION,
					ID_ONCE,
					ID_ONCE_PER_LIGHT,
					ID_PER_LIGHT,
					ID_PER_N_LIGHTS,
					ID_POINT,
					ID_SPOT,
					ID_DIRECTIONAL,
					ID_LIGHT_MASK,
					ID_POINT_SIZE,
					ID_POINT_SPRITES,
					ID_POINT_SIZE_ATTENUATION,
					ID_POINT_SIZE_MIN,
					ID_POINT_SIZE_MAX,
					ID_TEXTURE_ALIAS,
					ID_TEXTURE,
					ID_1D,
					ID_2D,
					ID_3D,
					ID_CUBIC,
					ID_UNLIMITED,
					ID_ALPHA,
					ID_GAMMA,
					ID_ANIM_TEXTURE,
					ID_CUBIC_TEXTURE,
					ID_SEPARATE_UV,
					ID_COMBINED_UVW,
					ID_TEX_COORD_SET,
					ID_TEX_ADDRESS_MODE,
					ID_WRAP,
					ID_CLAMP,
					ID_BORDER,
					ID_MIRROR,
					ID_TEX_BORDER_COLOUR,
					ID_FILTERING,
					ID_BILINEAR,
					ID_TRILINEAR,
					ID_ANISOTROPIC,
					ID_MAX_ANISOTROPY,
					ID_MIPMAP_BIAS,
					ID_COLOUR_OP,
					ID_REPLACE,
					ID_ADD,
					ID_MODULATE,
					ID_ALPHA_BLEND,
					ID_COLOUR_OP_EX,
					ID_SOURCE1,
					ID_SOURCE2,
					ID_MODULATE_X2,
					ID_MODULATE_X4,
					ID_ADD_SIGNED,
					ID_ADD_SMOOTH,
					ID_SUBTRACT,
					ID_BLEND_DIFFUSE_COLOUR,
					ID_BLEND_DIFFUSE_ALPHA,
					ID_BLEND_TEXTURE_ALPHA,
					ID_BLEND_CURRENT_ALPHA,
					ID_BLEND_MANUAL,
					ID_DOT_PRODUCT,
					ID_SRC_CURRENT,
					ID_SRC_TEXTURE,
					ID_SRC_DIFFUSE,
					ID_SRC_SPECULAR,
					ID_SRC_MANUAL,
					ID_COLOUR_OP_MULTIPASS_FALLBACK,
					ID_ALPHA_OP_EX,
					ID_ENV_MAP,
					ID_SPHERICAL,
					ID_PLANAR,
					ID_CUBIC_REFLECTION,
					ID_CUBIC_NORMAL,
					ID_SCROLL,
					ID_SCROLL_ANIM,
					ID_ROTATE,
					ID_ROTATE_ANIM,
					ID_SCALE,
					ID_WAVE_XFORM,
					ID_SCROLL_X,
					ID_SCROLL_Y,
					ID_SCALE_X,
					ID_SCALE_Y,
					ID_SINE,
					ID_TRIANGLE,
					ID_SQUARE,
					ID_SAWTOOTH,
					ID_INVERSE_SAWTOOTH,
					ID_TRANSFORM,
					ID_BINDING_TYPE,
					ID_VERTEX,
					ID_FRAGMENT,
					ID_CONTENT_TYPE,
					ID_NAMED,
					ID_SHADOW,
					ID_TEXTURE_SOURCE,
					ID_SHARED_PARAMS,
					ID_SHARED_PARAM_NAMED,
					ID_SHARED_PARAMS_REF,
					ID_PARTICLE_SYSTEM,
					ID_EMITTER,
					ID_AFFECTOR,
					ID_COMPOSITOR,
					ID_TARGET,
					ID_TARGET_OUTPUT,
					ID_INPUT,
					ID_PREVIOUS,
					ID_TARGET_WIDTH,
					ID_TARGET_HEIGHT,
					ID_TARGET_WIDTH_SCALED,
					ID_TARGET_HEIGHT_SCALED,
					ID_COMPOSITOR_LOGIC,
					ID_TEXTURE_REF,
					ID_SCOPE_LOCAL,
					ID_SCOPE_CHAIN,
					ID_SCOPE_GLOBAL,
					ID_POOLED,
					ID_NO_FSAA,
					ID_DEPTH_POOL,
					ID_ONLY_INITIAL,
					ID_VISIBILITY_MASK,
					ID_LOD_BIAS,
					ID_MATERIAL_SCHEME,
					ID_SHADOWS_ENABLED,
					ID_CLEAR,
					ID_STENCIL,
					ID_RENDER_SCENE,
					ID_RENDER_QUAD,
					ID_IDENTIFIER,
					ID_FIRST_RENDER_QUEUE,
					ID_LAST_RENDER_QUEUE,
					ID_QUAD_NORMALS,
					ID_CAMERA_FAR_CORNERS_VIEW_SPACE,
					ID_CAMERA_FAR_CORNERS_WORLD_SPACE,
					ID_BUFFERS,
					ID_COLOUR,
					ID_DEPTH,
					ID_COLOUR_VALUE,
					ID_DEPTH_VALUE,
					ID_STENCIL_VALUE,
					ID_CHECK,
					ID_COMP_FUNC,
					ID_REF_VALUE,
					ID_MASK,
					ID_FAIL_OP,
					ID_KEEP,
					ID_INCREMENT,
					ID_DECREMENT,
					ID_INCREMENT_WRAP,
					ID_DECREMENT_WRAP,
					ID_INVERT,
					ID_DEPTH_FAIL_OP,
					ID_PASS_OP,
					ID_TWO_SIDED,
					ID_END_BUILTIN_IDS
				};
				jintArray array = __env->NewIntArray(256);
				__env->SetIntArrayRegion(array, 0, 256, enum_values);
				return array;
			}
		}
	}
}
