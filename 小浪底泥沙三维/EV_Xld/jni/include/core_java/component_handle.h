#ifndef _Included_com_earthview_world_swing_ComponentHandle
#define _Included_com_earthview_world_swing_ComponentHandle
#ifdef __cplusplus
extern "C" {
#endif

namespace EarthView {
	namespace World {
		namespace Core {

			/*
			* Class:     com_earthview_world_swing_ComponentHandle
			* Method:    getWindowHandle
			* Signature: (Ljava/awt/Component;)J
			*/
			JNIEXPORT jlong JNICALL Java_com_earthview_world_swing_ComponentHandle_getWindowHandle
				(JNIEnv *, jclass, jobject);

		}
	}
}

#ifdef __cplusplus
}
#endif
#endif
