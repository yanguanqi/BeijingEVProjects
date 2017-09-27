#ifndef _ATOMIC_INT_H_H_
#define _ATOMIC_INT_H_H_

#include "core/global.h"
#include "core/mutex.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World 
	{
		namespace Core
		{
			class EV_CORE_DLL CAtomicInt : public EarthView::World::Core::CBaseObject
			{
			ev_private:
				CAtomicInt(_in EarthView::World::Core::CNameValuePairList *pList)
				{
					if(pList)
					{
						if(pList->Count()==1)
						{
							if (pList->Exist("value"))
							{
								this->ref_=*(ev_int32 *)pList->GetAt("value");
							}else if (pList->Exist("other"))
							{
								this->ref_=(*(EarthView::World::Core::CAtomicInt *)pList->GetAt("value")).ref_;
							}
						}
					}
				}
			public:
				CAtomicInt(ev_int32 value=0)
					: ref_(value)
				{}
				CAtomicInt(const CAtomicInt &other)
					:ref_(other.ref_)
				{}

				ev_bool operator!() const { return !ref_;}
				operator ev_int32() const { return ref_; }

				ev_bool operator==(const ev_int32 value) const
				{
					return ref_==value;
				}
				ev_bool operator!=(const ev_int32 value) const
				{
					return ref_!=value;
				}

				EarthView::World::Core::CAtomicInt& operator=(const EarthView::World::Core::CAtomicInt &other)
				{
					ref_=other.ref_;
					return *this;
				}
				EarthView::World::Core::CAtomicInt& operator=(ev_int32 value)
				{
					ref_=value;
					return *this;
				}

				ev_bool ref();
				//ev_bool ref()
				//{
				//	Lock the ref_
				//	CMutexLocker locker(&lock);
				//	increment ref_
				//	++ref_;
				//	return ref_!=0;
				//}
				ev_bool deref();
				//ev_bool deref()
				//{
				//	CMutexLocker locker(&lock);
				//	--ref_;

				//	return ref_!=0;
				//}

				static ev_bool isReferenceCountingNative();
				static ev_bool isReferenceCountingWaitFree();

				static ev_bool isTestAndSetNative();
				static ev_bool isTestAndSetWaitFree();

				ev_bool testAndSetRelaxed(ev_int32  expectedValue, ev_int32  newValue);
				ev_bool testAndSetAcquire(ev_int32  expectedValue, ev_int32  newValue);
				ev_bool testAndSetRelease(ev_int32  expectedValue, ev_int32  newValue);
				ev_bool testAndSetOrdered(ev_int32  expectedValue, ev_int32  newValue);

				static ev_bool isFetchAndStoreNative();
				static ev_bool isFetchAndStoreWaitFree();

				ev_int32  fetchAndStoreRelaxed(ev_int32  newValue);
				ev_int32  fetchAndStoreAcquire(ev_int32  newValue);
				ev_int32  fetchAndStoreRelease(ev_int32  newValue);
				ev_int32  fetchAndStoreOrdered(ev_int32  newValue);

				static ev_bool isFetchAndAddNative();
				static ev_bool isFetchAndAddWaitFree();

				ev_int32  fetchAndAddRelaxed(ev_int32  valueToAdd);
				ev_int32  fetchAndAddAcquire(ev_int32  valueToAdd);
				ev_int32  fetchAndAddRelease(ev_int32  valueToAdd);
				ev_int32  fetchAndAddOrdered(ev_int32  valueToAdd);

			private:
				volatile ev_int32 ref_;
				//mutable CMutex	lock;
			};

			template <typename T>
			inline void qAtomicAssign(T *&d, T *x)
			{
				if (d == x)
					return;
				x->ref.ref();
				if (!d->ref.deref())
					delete d;
				d = x;
			}

			template <typename T>
			inline void qAtomicDetach(T *&d)
			{
				if (d->ref == 1)
					return;
				T *x = d;
				d = new T(*d);
				if (!x->ref.deref())
					delete x;
			}


		} // namespace Core
	} // namespace World
} // namespace EarthView

#endif //_ATOMIC_INT_H_H_

