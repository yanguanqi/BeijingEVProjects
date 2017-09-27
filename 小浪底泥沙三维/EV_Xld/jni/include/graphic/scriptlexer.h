#ifndef __ScriptLexer_H_
#define __ScriptLexer_H_
#pragma once
#include "graphic/graphic_config.h"
#include <core/sharedptr.h>
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /** These codes represent token IDs which are numerical translations of
            	own token IDs which are given precedence over these built-in ones.
            */
            enum TokenID
            {
                TID_LBRACKET = 0, 			/// {
                TID_RBRACKET, 			/// }
                TID_COLON, 			/// :
                TID_VARIABLE, 			/// $...
                TID_WORD, 			/// *
                TID_QUOTE, 			/// "*"
                TID_NEWLINE, 			/// \n
                TID_UNKNOWN,
                TID_END
            };
            /** This struct represents a token, which is an ID'd lexeme from the
            	parsing input stream.
            */
            class EV_GRAPHIC_DLL ScriptToken : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                ScriptToken(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                ScriptToken() {}
                //// This is the lexeme for this token
                EVString lexeme, file;
                //// This is the id associated with the lexeme, which comes from a lexeme-token id mapping
                ev_uint32 type;
                //// This holds the line number of the input stream where the token was found.
                ev_uint32 line;
            };
            /*typedef CSharedPtr<EarthView::World::Graphic::ScriptToken> EarthView::World::Graphic::ScriptTokenPtr;*/
            class EV_GRAPHIC_DLL ScriptTokenPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptToken>
            {
            ev_private:
                ScriptTokenPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<ScriptToken>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::ScriptToken *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::ScriptToken *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptToken>r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptToken>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                ScriptTokenPtr() : EarthView::World::Core::CSharedPtr<ScriptToken>() {}
                explicit ScriptTokenPtr(ScriptToken *ref_rep) : EarthView::World::Core::CSharedPtr<ScriptToken>(ref_rep) {}
                explicit ScriptTokenPtr(ScriptToken *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<ScriptToken>(ref_rep, inFreeMethod) {}
                ScriptTokenPtr(const ScriptTokenPtr &r) : EarthView::World::Core::CSharedPtr<ScriptToken>(r) {}

                EarthView::World::Graphic::ScriptToken *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptToken>::get();
                }
            };
            ///typedef vector<EarthView::World::Graphic::ScriptTokenPtr> EarthView::World::Graphic::ScriptTokenList;
            class EV_GRAPHIC_DLL ScriptTokenList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef vector<EarthView::World::Graphic::ScriptTokenPtr> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(_in iterator pos , _in EarthView::World::Graphic::ScriptTokenPtr const &t)
                {
                    return mList.insert(pos, t);
                }
            private:
                InternalList mList;
            ev_private:
                ScriptTokenList(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                ScriptTokenList() {}
                void push_back(_in EarthView::World::Graphic::ScriptTokenPtr const &t)
                {
                    mList.push_back(t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                EarthView::World::Graphic::ScriptTokenPtr &front()
                {
                    return mList.front();
                }
                EarthView::World::Graphic::ScriptTokenPtr &back()
                {
                    return mList.back();
                }
                void insert(_in ev_uint32 pos , _in EarthView::World::Graphic::ScriptTokenPtr const &t)
                {
                    mList.insert(begin() + pos, t);
                }
                void remove(_in ev_size_t pos)
                {
                    iterator it = mList.begin();
                    it = it + pos;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                EarthView::World::Graphic::ScriptTokenPtr &operator[](_in ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::ScriptTokenPtr const &operator[](_in ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                EarthView::World::Graphic::ScriptTokenPtr &at(_in ev_size_t n)
                {
                    reference t = mList[n];
                    return t;
                }
                EarthView::World::Graphic::ScriptTokenPtr const &at(_in ev_size_t n) const
                {
                    const_reference t =  mList[n];
                    return t;
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(_in ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void reserve(_in ev_size_t count)
                {
                    mList.reserve(count);
                }
                void clear()
                {
                    mList.clear();
                }
            };
            /*typedef CSharedPtr<EarthView::World::Graphic::ScriptTokenList> EarthView::World::Graphic::ScriptTokenListPtr;*/
            class EV_GRAPHIC_DLL ScriptTokenListPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptTokenList>
            {
            ev_private:
                ScriptTokenListPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<ScriptTokenList>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::ScriptTokenList *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::ScriptTokenList *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptTokenList> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptTokenList>*)pList->GetAt("r");
                        EV_SET_AUTO_SHARED_MUTEX_NULL
                        EV_MUTEX_CONDITIONAL(r.EV_AUTO_MUTEX_NAME)
                        {
                            EV_LOCK_MUTEX(*r.EV_AUTO_MUTEX_NAME)
                            EV_COPY_AUTO_SHARED_MUTEX(r.EV_AUTO_MUTEX_NAME)
                            pRep = r.pRep;
                            pUseCount = r.pUseCount;
                            useFreeMethod = r.useFreeMethod;
                            /// Handle zero pointer gracefully to manage STL containers
                            if(pUseCount)
                            {
                                ++(*pUseCount);
                            }
                        }
                    }
                }
            public:
                ScriptTokenListPtr() : EarthView::World::Core::CSharedPtr<ScriptTokenList>() {}
                explicit ScriptTokenListPtr(ScriptTokenList *ref_rep) : EarthView::World::Core::CSharedPtr<ScriptTokenList>(ref_rep) {}
                explicit ScriptTokenListPtr(ScriptTokenList *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<ScriptTokenList>(ref_rep, inFreeMethod) {}
                ScriptTokenListPtr(const ScriptTokenListPtr &r) : EarthView::World::Core::CSharedPtr<ScriptTokenList>(r) {}

                EarthView::World::Graphic::ScriptTokenList *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ScriptTokenList>::get();
                }
            };
            class EV_GRAPHIC_DLL CScriptLexer : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CScriptLexer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CScriptLexer();
                virtual ~CScriptLexer() {}
                /** Tokenizes the given input and returns the list of tokens found */
                EarthView::World::Graphic::ScriptTokenListPtr tokenize(_in const EVString &str, _in const EVString &source);
            private: 			/// Private utility operations
                void setToken(_in const EVString &lexeme, _in ev_uint32 line, _in const EVString &source,  EarthView::World::Graphic::ScriptTokenList *tokens);
                ev_bool isWhitespace(_in EVString::value_type c) const;
                ev_bool isNewline(_in EVString::value_type c) const;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

