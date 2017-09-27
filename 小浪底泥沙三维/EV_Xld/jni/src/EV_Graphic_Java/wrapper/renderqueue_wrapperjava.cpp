/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueue.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_RenderQueueGroupIDHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					RENDER_QUEUE_BACKGROUND,
					RENDER_QUEUE_SKIES_EARLY,
					RENDER_QUEUE_1,
					RENDER_QUEUE_2,
					RENDER_QUEUE_WORLD_GEOMETRY_1,
					RENDER_QUEUE_3,
					RENDER_QUEUE_4,
					RENDER_QUEUE_MAIN,
					RENDER_QUEUE_6,
					RENDER_QUEUE_7,
					RENDER_QUEUE_WORLD_GEOMETRY_2,
					RENDER_QUEUE_8,
					RENDER_QUEUE_9,
					RENDER_QUEUE_TRANSPARENT,
					RENDER_QUEUE_SKIES_LATE,
					RENDER_QUEUE_OVERLAY,
					RENDER_QUEUE_MAX
				};
				jintArray array = __env->NewIntArray(17);
				__env->SetIntArrayRegion(array, 0, 17, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*)pObjXXXX;
				jshort __values1_j = (jshort) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupPair_set_1first_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*)pObjXXXX;
				pObjectX->first = (ev_uint8)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupPair_set_1second_1CRenderQueueGroup(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CRenderQueueGroup*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupIterator_OperatorPlusLeftIncrease_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& pObjectX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				++pObjectX;
				return (jlong)pObjXXXX;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupIterator_OperatorPlusRightIncrease_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint _j )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& pObjectX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator __values1 = pObjectX++;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *returnvalues = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupIterator_OperatorNotEquals_1RenderQueueGroupIterator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& pObjectX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator &o = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) o_j;
				bool __values1 = (pObjectX != o);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupIterator_OperatorEquals_1RenderQueueGroupIterator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator& pObjectX = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator &o = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) o_j;
				bool __values1 = (pObjectX == o);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_00024RenderQueueGroupIterator_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& __values1 = pObjectX->getValue();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_insert_1RenderQueueGroupPair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair v = *(EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair*) v_j;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjXXXX;
				pObjectX->insert(v);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_find_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort key_j)
			{
				ev_uint8 key = (ev_uint8) key_j;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator __values1 = pObjectX->find(key);
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *returnvalues = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_begin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator __values1 = pObjectX->begin();
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *returnvalues = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_end_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator __values1 = pObjectX->end();
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator *returnvalues = new EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderQueueGroupMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap *pObjectX = (EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024QueueGroupIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::QueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_OperatorAssign_1ConstQueueGroupIterator(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator& pObjectX = *(EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator &other = *(EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) other_j;
				pObjectX = other;
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_00024ConstQueueGroupIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator *pObjectX = (EarthView::World::Graphic::CRenderQueue::ConstQueueGroupIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueue::RenderQueueGroupMap::RenderQueueGroupPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			class JCRenderableListenerProxy : public EarthView::World::Graphic::CRenderQueue::CRenderableListener
			{
			 private:
				EarthView::World::Core::ev_string m_renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback;
			public:
				JCRenderableListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableListener(pList)
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
				void register_renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback = __method;
				}
				virtual ev_bool renderableQueued(EarthView::World::Graphic::CRenderable* rend, ev_uint8 groupID, ev_uint16 priority, EarthView::World::Graphic::CTechnique** ppTech, EarthView::World::Graphic::CRenderQueue* pQueue)
				{
					if (this->_gRef != NULL && this->m_renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback != "" && this->isCustomExtend())
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
						jlong rend_j = (jlong) rend;
						jshort groupID_j = (jshort) groupID;
						jint priority_j = (jint) priority;
						jlong ppTech_j = (jlong) ppTech;
						jlong pQueue_j = (jlong) pQueue;
						jmethodID __method = __gr->getMethod("renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , rend_j, groupID_j, priority_j, ppTech_j, pQueue_j);
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
						return this->CRenderableListener::renderableQueued(rend, groupID, priority, ppTech, pQueue);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderableListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderableListener_renderableQueued_1CRenderable_1ev_1uint8_1ev_1uint16_1CTechnique_1CRenderQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jshort groupID_j, jint priority_j, jlong ppTech_j, jlong pQueue_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				ev_uint8 groupID = (ev_uint8) groupID_j;
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Graphic::CTechnique **ppTech = (EarthView::World::Graphic::CTechnique**) ppTech_j;
				EarthView::World::Graphic::CRenderQueue *pQueue = (EarthView::World::Graphic::CRenderQueue*) pQueue_j;
				EarthView::World::Graphic::CRenderQueue::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderQueue::CRenderableListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderQueue::CRenderableListener::renderableQueued(rend, groupID, priority, ppTech, pQueue);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->renderableQueued(rend, groupID, priority, ppTech, pQueue);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderableListener_register_1renderableQueued_1CRenderable_1ev_1uint8_1ev_1uint16_1CTechnique_1CRenderQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableListenerProxy *pObjectX = (JCRenderableListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"renderableQueued_CRenderable_ev_uint8_ev_uint16_CTechnique_CRenderQueue_callback", "(JSIJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_00024RenderableListener_renderableQueued_1CRenderable_1ev_1uint8_1ev_1uint16_1CTechnique_1CRenderQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jshort groupID_j, jint priority_j, jlong ppTech_j, jlong pQueue_j)
			{
				EarthView::World::Graphic::CRenderable *rend = (EarthView::World::Graphic::CRenderable*) rend_j;
				ev_uint8 groupID = (ev_uint8) groupID_j;
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Graphic::CTechnique **ppTech = (EarthView::World::Graphic::CTechnique**) ppTech_j;
				EarthView::World::Graphic::CRenderQueue *pQueue = (EarthView::World::Graphic::CRenderQueue*) pQueue_j;
				EarthView::World::Graphic::CRenderQueue::CRenderableListener *pObjectX = (EarthView::World::Graphic::CRenderQueue::CRenderableListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CRenderQueue::CRenderableListener::renderableQueued(rend, groupID, priority, ppTech, pQueue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_clear_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean destroyPassMaps_j)
			{
				ev_bool destroyPassMaps = (ev_bool) destroyPassMaps_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->clear(destroyPassMaps);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_getQueueGroup_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort qid_j)
			{
				ev_uint8 qid = (ev_uint8) qid_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup* __values1 = pObjectX->getQueueGroup(qid);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_addRenderable_1CRenderable_1ev_1uint8_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pRend_j, jshort groupID_j, jint priority_j)
			{
				EarthView::World::Graphic::CRenderable *ref_pRend = (EarthView::World::Graphic::CRenderable*) ref_pRend_j;
				ev_uint8 groupID = (ev_uint8) groupID_j;
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->addRenderable(ref_pRend, groupID, priority);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_addRenderable_1CRenderable_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pRend_j, jshort groupId_j)
			{
				EarthView::World::Graphic::CRenderable *ref_pRend = (EarthView::World::Graphic::CRenderable*) ref_pRend_j;
				ev_uint8 groupId = (ev_uint8) groupId_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->addRenderable(ref_pRend, groupId);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_addRenderable_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pRend_j)
			{
				EarthView::World::Graphic::CRenderable *ref_pRend = (EarthView::World::Graphic::CRenderable*) ref_pRend_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->addRenderable(ref_pRend);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_existRenderable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->existRenderable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_graphic_RenderQueue_getDefaultQueueGroup_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				ev_uint8 __values1 = pObjectX->getDefaultQueueGroup();
				jshort __values1_j = (jshort) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_setDefaultRenderablePriority_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint priority_j)
			{
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->setDefaultRenderablePriority(priority);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueue_getDefaultRenderablePriority_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getDefaultRenderablePriority();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_setDefaultQueueGroup_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort grp_j)
			{
				ev_uint8 grp = (ev_uint8) grp_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->setDefaultQueueGroup(grp);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue__1getQueueGroupIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator __values1 = pObjectX->_getQueueGroupIterator();
				EarthView::World::Graphic::CRenderQueue::QueueGroupIterator *returnvalues = new EarthView::World::Graphic::CRenderQueue::QueueGroupIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_setSplitPassesByLightingType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->setSplitPassesByLightingType(split);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_getSplitPassesByLightingType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSplitPassesByLightingType();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_setSplitNoShadowPasses_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->setSplitNoShadowPasses(split);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_getSplitNoShadowPasses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSplitNoShadowPasses();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_setShadowCastersCannotBeReceivers_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean ind_j)
			{
				ev_bool ind = (ev_bool) ind_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->setShadowCastersCannotBeReceivers(ind);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueue_getShadowCastersCannotBeReceivers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				ev_bool __values1 = pObjectX->getShadowCastersCannotBeReceivers();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_setRenderableListener_1CRenderableListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Graphic::CRenderQueue::CRenderableListener *ref_listener = (EarthView::World::Graphic::CRenderQueue::CRenderableListener*) ref_listener_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->setRenderableListener(ref_listener);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueue_getRenderableListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueue::CRenderableListener* __values1 = pObjectX->getRenderableListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_merge_1CRenderQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::CRenderQueue *rhs = (const EarthView::World::Graphic::CRenderQueue*) rhs_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->merge(rhs);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueue_processVisibleObject_1CMovableObject_1CCamera_1ev_1bool_1VisibleObjectsBoundsInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mo_j, jlong cam_j, jboolean onlyShadowCasters_j, jlong visibleBounds_j)
			{
				EarthView::World::Graphic::CMovableObject *mo = (EarthView::World::Graphic::CMovableObject*) mo_j;
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				ev_bool onlyShadowCasters = (ev_bool) onlyShadowCasters_j;
				EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds = (EarthView::World::Graphic::VisibleObjectsBoundsInfo*) visibleBounds_j;
				EarthView::World::Graphic::CRenderQueue *pObjectX = (EarthView::World::Graphic::CRenderQueue*) pObjXXXX;
				pObjectX->processVisibleObject(mo, cam, onlyShadowCasters, visibleBounds);
			}
		}
	}
}
