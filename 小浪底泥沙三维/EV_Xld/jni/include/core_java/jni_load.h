#ifndef _JNI_Load_H__
#define _JNI_Load_H__
#include <jni.h>
#include "core/global.h"
#include "corejavaprerequisites.h"
#if EV_PLATFORM == EV_PLATFORM_ANDROID
#include <pthread.h>
#endif

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class EV_COREJAVA_DLL JNILoad {
			private:
				static JavaVM *cached_jvm;
			public:
				static jclass class_String;
				static void setCachedJVM(JavaVM *jvm) {
					cached_jvm = jvm;
				}
				static JavaVM *getCachedJVM() {
					return cached_jvm;
				}
#if EV_PLATFORM == EV_PLATFORM_ANDROID
				static pthread_key_t thread_env_key;
#endif
			};
		}
	}
}

#endif