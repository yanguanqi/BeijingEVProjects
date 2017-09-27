#ifndef _Native_Pointer_Collection_H__
#define _Native_Pointer_Collection_H__
#include "core/mutex.h"
#include <set>
using namespace std;

namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class NativePointerCollection{
			public:
				static bool exist(void *pObj);
				static void add(void *pObj);
				static void remove(void *pObj);
			private:
				static set<void *> mSet;
				static CRecursiveMutex mMutex;
			};
		}
	}
}

#endif