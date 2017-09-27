#ifndef _Global_Reference_H__
#define _Global_Reference_H__
#include <jni.h>
#include "core/global.h"
#include "core/multibytestring.h"
#include "jni_load.h"

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class EV_DLL_EXPORT GlobalReference{
			private:
				jobject obj;
				jclass clazz;
				map<ev_string, jmethodID> methods;
			public:
				GlobalReference(jobject &obj) {
					JNIEnv * env;
					//EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&env, NULL);
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&env, NULL);
							__jniAttachable = true;
						}
					#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&env, NULL);
					#endif
					jobject gObj = env->NewGlobalRef(obj);
					this->obj = gObj;
					/*
#if EV_PLATFORM ==  EV_PLATFORM_ANDROID
					JNIEnv* __mainEnv = (JNIEnv*)pthread_getspecific(EarthView::World::Core::JNILoad::thread_env_key);
					if(!__mainEnv)
					{
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
					}
#else
					EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
#endif
					*/
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
					#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
					#endif
				}
				jobject getJObject() {
					return this->obj;
				}
				void setClass(jclass clazz) { 
					this->clazz = clazz; 
				}
				jclass getClass() { 
					return this->clazz; 
				}
				void setMethod(ev_string name, jmethodID method) { 
					this->methods.insert(make_pair(name, method)); 
				}
				jmethodID getMethod(ev_string name) {
					map<ev_string, jmethodID>::iterator it = this->methods.find(name);
					if(it != this->methods.end()) {
						return it->second;
					} else {
						return NULL;
					}
				}
				~GlobalReference() {
					if(this->obj != NULL){
						JNIEnv * env;
						//EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&env, NULL);
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&env, NULL);
							__jniAttachable = true;
						}
					#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&env, NULL);
					#endif
						env->DeleteGlobalRef(this->obj);
						/*
#if EV_PLATFORM ==  EV_PLATFORM_ANDROID
						JNIEnv* __mainEnv = (JNIEnv*)pthread_getspecific(EarthView::World::Core::JNILoad::thread_env_key);
						if(!__mainEnv)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
#endif
						*/
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
					#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
					#endif
						//this->env->DeleteGlobalRef(this->obj);
					}	
				};
			};
		}
	}
}

#endif