#ifndef __AllocatedObject_H__
#define __AllocatedObject_H__
#pragma once
#include "core/global.h"
#include "core/memoryallocatorconfig.h"
#include "core/name_value_pair.h"
#include "core/classfactory.h"

//#ifdef new
//#undef new
//#endif
//#ifdef delete
//#undef delete
//#endif

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            ///class CNameValuePairList;
            /// <summary>
            /// 所有导出类的基类
            /// 类体为空
            /// 一般来说，数学类等占用内存小的导出类从该类派生
            /// 该类的对象不会添加到对象集合中
            /// </summary>
            class EV_CORE_DLL CBaseObject
            {
            public:
                CBaseObject();
                virtual ~CBaseObject();
                bool isExternFree()
                {
                    return mbExternFree;
                }
                void setExternFree(bool bExternFree);
                void keepAlive();
                void restoreAlive();
				ev_string getInstanceTypeName();
				///jni运行环境指针
				void registerJavaReference(ev_void *obj);
				ev_void * getJavaReference() const;
				///用户自定义扩展类
				void setCustomExtend(ev_bool customExtend);
				ev_bool isCustomExtend() const
				{
					return mbCustomExtend;
				}
				ev_int16 increaseCast();
				ev_int16 decreaseCast();
            ev_private:
                CBaseObject(EarthView::World::Core::CNameValuePairList *pList);
            private:
                ev_bool mbExternFree;
                //ev_bool mbKeepAliveOnce;
                //ev_bool mbOldExternFree;
				ev_bool mbCustomExtend;
				volatile ev_int16 mCount;
			protected:
				///jni运行环境指针
				ev_void *_gRef;
				virtual ev_void unRegisterJavaReference(){};
            };
            class EV_CORE_DLL CAllocatedObject : public EarthView::World::Core::CBaseObject
            {
            public:
                explicit CAllocatedObject();
                virtual ~CAllocatedObject();
            ev_private:
                CAllocatedObject(EarthView::World::Core::CNameValuePairList *pList);
            public:
#ifndef new
                //// operator new, with debug line info
                void *operator new(ev_size_t sz, const ev_char *file, ev_int32 line, const ev_char *func);
                void *operator new(ev_size_t sz);
                //// placement operator new
                void *operator new(ev_size_t sz, void *ptr);
                //// array operator new, with debug line info
                void *operator new[] ( ev_size_t sz, const ev_char *file, ev_int32 line, const ev_char *func );
                void *operator new[] ( ev_size_t sz );
                void operator delete( void *ptr );
                /// Corresponding operator for placement delete (second param same as the first)
                void operator delete( void *ptr, void * );
                /// only called if there is an exception in corresponding 'new'
                void operator delete( void *ptr, const ev_char * , ev_int32 , const ev_char *  );
                void operator delete[] ( void *ptr );
                void operator delete[] ( void *ptr, const ev_char * , ev_int32 , const ev_char *  );
#endif
            };

            /** @} */
            /** @} */
        }
    }
}

#endif

