#ifndef _Jarray_Utility_H__
#define _Jarray_Utility_H__
#include <jni.h>

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			template<class T, class U>
			class JarrayUtil {
			public:
				inline static void convert(T *source, U *destination, int size){
					for(int i = 0; i < size; i++) {
						destination[i] = source[i];
					}
				}
			};
		}
	}
}

#endif