#ifndef _Included_com_earthview_world_swing_RenderCanvas
#define _Included_com_earthview_world_swing_RenderCanvas
#ifdef __cplusplus
extern "C" {
#endif

namespace EarthView {
	namespace World {
		namespace Core {

			#undef com_earthview_world_swing_RenderCanvas_FOCUS_TRAVERSABLE_UNKNOWN
			#define com_earthview_world_swing_RenderCanvas_FOCUS_TRAVERSABLE_UNKNOWN 0L
			#undef com_earthview_world_swing_RenderCanvas_FOCUS_TRAVERSABLE_DEFAULT
			#define com_earthview_world_swing_RenderCanvas_FOCUS_TRAVERSABLE_DEFAULT 1L
			#undef com_earthview_world_swing_RenderCanvas_FOCUS_TRAVERSABLE_SET
			#define com_earthview_world_swing_RenderCanvas_FOCUS_TRAVERSABLE_SET 2L
			#undef com_earthview_world_swing_RenderCanvas_TOP_ALIGNMENT
			#define com_earthview_world_swing_RenderCanvas_TOP_ALIGNMENT 0.0f
			#undef com_earthview_world_swing_RenderCanvas_CENTER_ALIGNMENT
			#define com_earthview_world_swing_RenderCanvas_CENTER_ALIGNMENT 0.5f
			#undef com_earthview_world_swing_RenderCanvas_BOTTOM_ALIGNMENT
			#define com_earthview_world_swing_RenderCanvas_BOTTOM_ALIGNMENT 1.0f
			#undef com_earthview_world_swing_RenderCanvas_LEFT_ALIGNMENT
			#define com_earthview_world_swing_RenderCanvas_LEFT_ALIGNMENT 0.0f
			#undef com_earthview_world_swing_RenderCanvas_RIGHT_ALIGNMENT
			#define com_earthview_world_swing_RenderCanvas_RIGHT_ALIGNMENT 1.0f
			#undef com_earthview_world_swing_RenderCanvas_serialVersionUID
			#define com_earthview_world_swing_RenderCanvas_serialVersionUID -7644114512714619750i64
			#undef com_earthview_world_swing_RenderCanvas_serialVersionUID
			#define com_earthview_world_swing_RenderCanvas_serialVersionUID -2284879212465893870i64
			/*
			 * Class:     com_earthview_world_swing_RenderCanvas
			 * Method:    paint
			 * Signature: (Ljava/awt/Graphics;)V
			 */
			JNIEXPORT void JNICALL Java_com_earthview_world_swing_RenderCanvas_paint
			  (JNIEnv *, jobject, jobject);

		}
	}
}

#ifdef __cplusplus
}
#endif
#endif
