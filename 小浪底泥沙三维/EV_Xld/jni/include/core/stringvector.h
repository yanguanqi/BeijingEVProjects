#ifndef _StringVector_H__
#define _StringVector_H__
#include "core/stringdefines.h"
#include "core/sharedptr.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {
            ////typedef vector<EVString> EarthView::World::Core::StringVector;
            class EV_CORE_DLL StringVector : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                StringVector(_in EarthView::World::Core::CNameValuePairList *pList) {}
            ev_private:
                typedef vector<EVString> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			////保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(iterator pos, EVString const &t)
                {
                    return mList.insert(pos, t);
                }
                void insert(iterator loc, iterator start, iterator end)
                {
                    mList.insert(loc, start, end);
                }
            private:
                InternalList mList;
            public:
                StringVector() {}
                void push_back(EVString const &t)
                {
                    mList.push_back(t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                EVString &front()
                {
                    return mList.front();
                }
                EVString &back()
                {
                    return mList.back();
                }
                void insert(ev_uint32 pos, EVString const &t)
                {
                    mList.insert(begin() + pos, t);
                }
                void remove(ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                EVString &operator[](ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EVString const &operator[](ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                EVString &at(ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EVString const &at(ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void reserve(ev_size_t count)
                {
                    mList.reserve(count);
                }
                void clear()
                {
                    mList.clear();
                }
				void swap(StringVector& rhs)
				{
					mList.swap(rhs.mList);
				}

            };
            /*****typedef CSharedPtr<EarthView::World::Core::StringVector> EarthView::World::Core::StringVectorPtr;*****/
            class EV_CORE_DLL StringVectorPtr : public EarthView::World::Core::CBaseObject, public CSharedPtr<EarthView::World::Core::StringVector>
            {
            ev_private:
                StringVectorPtr(_in EarthView::World::Core::CNameValuePairList *pList): CSharedPtr<StringVector>(
                        pList && pList->Exist("rep") ? (EarthView::World::Core::StringVector *)pList->GetAt("rep") : (EarthView::World::Core::StringVector *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                        CSharedPtr<EarthView::World::Core::StringVector>r = *(CSharedPtr<EarthView::World::Core::StringVector>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            //// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                StringVectorPtr() : CSharedPtr<StringVector>() {}
                explicit StringVectorPtr(StringVector *rep) : CSharedPtr<StringVector>(rep) {}
                explicit StringVectorPtr(StringVector *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : CSharedPtr<StringVector>(rep, inFreeMethod) {}
                StringVectorPtr(const StringVectorPtr &r) : CSharedPtr<StringVector>(r) {}

                EarthView::World::Core::StringVector *get() const
                {
                    return CSharedPtr<EarthView::World::Core::StringVector>::get();
                }
            };
        }
    }
}

#endif

