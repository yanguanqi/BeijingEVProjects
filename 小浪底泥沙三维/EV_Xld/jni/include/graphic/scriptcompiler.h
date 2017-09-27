#ifndef __SCRIPTCOMPILER_H_
#define __SCRIPTCOMPILER_H_
#include "graphic/graphic_config.h"
#include <core/sharedptr.h>
#include "scriptloader.h"
#include "core/ev_string.h"
#include "gpuprogramparams.h"
#include "common.h"


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CMaterial;
            /** These enums hold the types of the concrete parsed nodes */
            enum ConcreteNodeType
            {
                CNT_VARIABLE,
                CNT_VARIABLE_ASSIGN,
                CNT_WORD,
                CNT_IMPORT,
                CNT_QUOTE,
                CNT_LBRACE,
                CNT_RBRACE,
                CNT_COLON
            };
            /** The ConcreteNode is the struct that holds an un-conditioned sub-tree of parsed input */
            class ConcreteNode;
            /*typedef CSharedPtr<EarthView::World::Graphic::ConcreteNode> EarthView::World::Graphic::ConcreteNodePtr;*/
            class EV_GRAPHIC_DLL ConcreteNodePtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNode>
            {
            ev_private:
                ConcreteNodePtr(_in EarthView::World::Core::CNameValuePairList *pList)
                : EarthView::World::Core::CSharedPtr<ConcreteNode>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::ConcreteNode *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::ConcreteNode *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNode>& r =
                        		*(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNode>*)pList->GetAt("r");
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
                ConcreteNodePtr() : EarthView::World::Core::CSharedPtr<ConcreteNode>() {}
                explicit ConcreteNodePtr(ConcreteNode *ref_rep) : EarthView::World::Core::CSharedPtr<ConcreteNode>(ref_rep) {}
                explicit ConcreteNodePtr(ConcreteNode *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<ConcreteNode>(ref_rep, inFreeMethod) {}
                ConcreteNodePtr(const ConcreteNodePtr &r) : EarthView::World::Core::CSharedPtr<ConcreteNode>(r) {}

                EarthView::World::Graphic::ConcreteNode *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNode>::get();
                }
            };
            ///typedef list<EarthView::World::Graphic::ConcreteNodePtr> EarthView::World::Graphic::ConcreteNodeList;
            class EV_GRAPHIC_DLL ConcreteNodeList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::ConcreteNodePtr> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(_in iterator pos, _in EarthView::World::Graphic::ConcreteNodePtr const &t)
                {
                    return mList.insert(pos, t);
                }

            private:
                InternalList mList;
            ev_private:
                ConcreteNodeList(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                ConcreteNodeList() {}
                void push_back(_in EarthView::World::Graphic::ConcreteNodePtr const &t)
                {
                    mList.push_back(t);
                }
                void push_front(_in EarthView::World::Graphic::ConcreteNodePtr const   &t)
                {
                    mList.push_front(t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                void pop_front()
                {
                    mList.pop_front();
                }

                EarthView::World::Graphic::ConcreteNodePtr &front()
                {
                    return mList.front();
                }
                EarthView::World::Graphic::ConcreteNodePtr &back()
                {
                    return mList.back();
                }
                EarthView::World::Graphic::ConcreteNodePtr &at(_in ev_uint32 pos)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    return *it;
                }
                void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::ConcreteNodePtr const &t)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    mList.insert(it, t);
                }
                void remove(_in ev_size_t pos)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(_in ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void clear()
                {
                    mList.clear();
                }
            };
            /*typedef CSharedPtr<EarthView::World::Graphic::ConcreteNodeList> EarthView::World::Graphic::ConcreteNodeListPtr;*/
            class EV_GRAPHIC_DLL ConcreteNodeListPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNodeList>
            {
            ev_private:
                ConcreteNodeListPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<ConcreteNodeList>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::ConcreteNodeList *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::ConcreteNodeList *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNodeList> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNodeList>*)pList->GetAt("r");
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
                ConcreteNodeListPtr() : EarthView::World::Core::CSharedPtr<ConcreteNodeList>() {}
                explicit ConcreteNodeListPtr(ConcreteNodeList *ref_rep) : EarthView::World::Core::CSharedPtr<ConcreteNodeList>(ref_rep) {}
                explicit ConcreteNodeListPtr(ConcreteNodeList *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<ConcreteNodeList>(ref_rep, inFreeMethod) {}
                ConcreteNodeListPtr(const ConcreteNodeListPtr &r) : EarthView::World::Core::CSharedPtr<ConcreteNodeList>(r) {}

                EarthView::World::Graphic::ConcreteNodeList *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::ConcreteNodeList>::get();
                }
            };
            class EV_GRAPHIC_DLL ConcreteNode : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                ConcreteNode(EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                ConcreteNode() {}
                EVString token, file;
                ev_uint32 line;
                EarthView::World::Graphic::ConcreteNodeType type;
                EarthView::World::Graphic::ConcreteNodeList children;
                EarthView::World::Graphic::ConcreteNode *parent;
            };
            /** This enum holds the types of the possible abstract nodes */
            enum AbstractNodeType
            {
                ANT_UNKNOWN,
                ANT_ATOM,
                ANT_OBJECT,
                ANT_PROPERTY,
                ANT_IMPORT,
                ANT_VARIABLE_SET,
                ANT_VARIABLE_ACCESS
            };
            class CAbstractNode;
            /*typedef CSharedPtr<EarthView::World::Graphic::CAbstractNode> EarthView::World::Graphic::AbstractNodePtr;*/
            class EV_GRAPHIC_DLL AbstractNodePtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>
            {
            ev_private:
                AbstractNodePtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::CAbstractNode *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::CAbstractNode *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>*)pList->GetAt("r");
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
                AbstractNodePtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>() {}
                explicit AbstractNodePtr(EarthView::World::Graphic::CAbstractNode *ref_rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>(ref_rep) {}
                explicit AbstractNodePtr(EarthView::World::Graphic::CAbstractNode *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>(ref_rep, inFreeMethod) {}
                AbstractNodePtr(const AbstractNodePtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>(r) {}

                EarthView::World::Graphic::CAbstractNode *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CAbstractNode>::get();
                }
            };
            ///typedef list<EarthView::World::Graphic::AbstractNodePtr> EarthView::World::Graphic::AbstractNodeList;
            class EV_GRAPHIC_DLL AbstractNodeList : public EarthView::World::Core::CBaseObject
            {
            ev_private:
                typedef list<EarthView::World::Graphic::AbstractNodePtr> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::reference reference;
                typedef InternalList::const_reference const_reference;
                typedef InternalList::value_type value_type;
                RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                iterator insert(_in iterator pos, _in EarthView::World::Graphic::AbstractNodePtr const &t)
                {
                    return mList.insert(pos, t);
                }
                void insert( iterator pos, iterator start, iterator end )
                {
                    mList.insert(pos, start, end);
                }
            private:
                InternalList mList;
            ev_private:
                AbstractNodeList(_in EarthView::World::Core::CNameValuePairList *pList) {}
            public:
                AbstractNodeList() {}
                void push_back(_in EarthView::World::Graphic::AbstractNodePtr const &t)
                {
                    mList.push_back(t);
                }
                void push_front(_in EarthView::World::Graphic::AbstractNodePtr const   &t)
                {
                    mList.push_front(t);
                }
                void pop_back()
                {
                    mList.pop_back();
                }

                void pop_front()
                {
                    mList.pop_front();
                }

                EarthView::World::Graphic::AbstractNodePtr &front()
                {
                    return mList.front();
                }
                EarthView::World::Graphic::AbstractNodePtr &back()
                {
                    return mList.back();
                }
                EarthView::World::Graphic::AbstractNodePtr &at(_in ev_uint32 pos)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    return *it;
                }
                void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::AbstractNodePtr const &t)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    mList.insert(it, t);
                }
                void remove(_in ev_size_t pos)
                {
                    iterator it = begin();
                    for(ev_uint32 i = 0; i < pos; i++)
                        it++;
                    mList.erase(it);
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void resize(_in ev_size_t newSize)
                {
                    mList.resize(newSize);
                }
                void clear()
                {
                    mList.clear();
                }
            };
            /*typedef CSharedPtr<EarthView::World::Graphic::AbstractNodeList> EarthView::World::Graphic::AbstractNodeListPtr;*/
            class EV_GRAPHIC_DLL AbstractNodeListPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::AbstractNodeList>
            {
            ev_private:
                AbstractNodeListPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<AbstractNodeList>(
                        pList && pList->Exist("ref_rep") ? (EarthView::World::Graphic::AbstractNodeList *)pList->GetAt("ref_rep") : (EarthView::World::Graphic::AbstractNodeList *) NULL
                        , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                {
                    if(pList && pList->Exist("r"))
                    {
                    	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::AbstractNodeList> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::AbstractNodeList>*)pList->GetAt("r");
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
                AbstractNodeListPtr() : EarthView::World::Core::CSharedPtr<AbstractNodeList>() {}
                explicit AbstractNodeListPtr(AbstractNodeList *ref_rep) : EarthView::World::Core::CSharedPtr<AbstractNodeList>(ref_rep) {}
                explicit AbstractNodeListPtr(AbstractNodeList *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<AbstractNodeList>(ref_rep, inFreeMethod) {}
                AbstractNodeListPtr(const AbstractNodeListPtr &r) : EarthView::World::Core::CSharedPtr<AbstractNodeList>(r) {}

                EarthView::World::Graphic::AbstractNodeList *get() const
                {
                    return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::AbstractNodeList>::get();
                }
            };
            class EV_GRAPHIC_DLL CAbstractNode : public EarthView::World::Core::CAllocatedObject
            {
            public:
                EVString file;
                ev_uint32 line;
                EarthView::World::Graphic::AbstractNodeType type;
                EarthView::World::Graphic::CAbstractNode *parent;
            ev_private:
                EarthView::World::Core::CAny context; 			/// A Cholder for translation context data
            ev_private:
                CAbstractNode(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CAbstractNode(_in CAbstractNode *ref_ptr);
                virtual ~CAbstractNode() {}
                //// Returns a new EarthView::World::Graphic::CAbstractNode which is a replica of this one.
                virtual EarthView::World::Graphic::CAbstractNode *clone() const;
                //// Returns a string value depending on the type of the EarthView::World::Graphic::CAbstractNode.
                virtual EVString getValue() const;
            };
            /** This is an abstract node which cannot be broken down further */
            class EV_GRAPHIC_DLL CAtomAbstractNode : public EarthView::World::Graphic::CAbstractNode
            {
            public:
                EVString value;
                ev_uint32 id;
            ev_private:
                CAtomAbstractNode(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				EVString getValue() const;
            public:
                CAtomAbstractNode(_in EarthView::World::Graphic::CAbstractNode *ref_ptr);
                _extfree EarthView::World::Graphic::CAbstractNode *clone() const;                
            private:
                void parseNumber() const;
            };
            class  EV_GRAPHIC_DLL AbstractNodePair: public EarthView::World::Core::CBaseObject
            {
            public:
                ev_bool first;
                EVString second;
                AbstractNodePair() {}
                AbstractNodePair(_in ev_bool fir, _in EVString sec)
                {
                    first = fir;
                    second = sec;
                }
                EarthView::World::Graphic::AbstractNodePair &operator=(_in const EarthView::World::Graphic::AbstractNodePair &other)
                {
                    first = other.first;
                    second = other.second;
                    return *this;
                }
            ev_private:
                AbstractNodePair(_in EarthView::World::Core::CNameValuePairList *pList)
                {
                    if (pList)
                    {
                        first = *(ev_bool *)pList->GetAt("fir");
                        second = (ev_char *)pList->GetAt("sec");
                    }
                }
            };
            class EV_GRAPHIC_DLL AbstractNodeMap: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                AbstractNodeMap(_in EarthView::World::Core::CNameValuePairList *pList)
                {
                }
            public:
                AbstractNodeMap() {}

                ev_bool push(_in const EVString &key, _in EVString const &val)
                {
                    if(mList.find(key) == mList.end())
                    {
                        mList[key] = val;
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                ev_bool exist(_in const EVString &key)
                {
                    return mList.find(key) != mList.end();
                }
                EarthView::World::Graphic::AbstractNodeMap &operator=(_in const EarthView::World::Graphic::AbstractNodeMap &other)
                {
                    mList = other.mList;
                    return *this;
                }
                EVString &operator[]( _in const EVString &key)
                {
                    return get(key);
                }
                EVString &get(_in const EVString &key)
                {
                    return mList[key];
                }
                void erase(_in const EVString &key)
                {
                    if(exist(key))
                        mList.erase(key);
                }
                ev_size_t size() const
                {
                    return mList.size();
                }
                void clear()
                {
                    mList.clear();
                }
                ev_bool empty() const
                {
                    return mList.empty();
                }
            ev_private:
                typedef map<EVString, EVString> InternalList;
                typedef InternalList::iterator iterator;
                typedef InternalList::const_iterator const_iterator;
                typedef InternalList::reverse_iterator reverse_iterator;
                typedef InternalList::const_reverse_iterator const_reverse_iterator;
                typedef InternalList::mapped_type mapped_type;
                typedef InternalList::key_type key_type;
                typedef InternalList::value_type value_type;
                typedef pair<InternalList::iterator, bool> _Pairib;
                RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                _Pairib insert(_in const value_type &val)
                {
                    return mList.insert(val);
                }
                iterator find(_in const EVString &key)
                {
                    return mList.find(key);
                }
                const_iterator find(_in const EVString &key) const
                {
                    return mList.find(key);
                }
            private:
                InternalList mList;
            };
            /** This specific abstract node represents a script object */
            class EV_GRAPHIC_DLL CObjectAbstractNode : public EarthView::World::Graphic::CAbstractNode
            {
            private:
                EarthView::World::Graphic::AbstractNodeMap mEnv;
            public:
                EVString name, cls;
                EarthView::World::Core::StringVector bases;
                ev_uint32 id;
                ev_bool abstract;
                EarthView::World::Graphic::AbstractNodeList children;
                EarthView::World::Graphic::AbstractNodeList values;
                EarthView::World::Graphic::AbstractNodeList overrides; 			/// For use when processing object inheritance and overriding
            ev_private:
                CObjectAbstractNode(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CObjectAbstractNode(_in EarthView::World::Graphic::CAbstractNode *ref_ptr);
                _extfree EarthView::World::Graphic::CAbstractNode *clone() const;
                EVString getValue() const;
                void addVariable(_in const EVString &name);
                void setVariable(_in const EVString &name, _in const EVString &value);
                EarthView::World::Graphic::AbstractNodePair getVariable(_in const EVString &name) const;
                const EarthView::World::Graphic::AbstractNodeMap &getVariables() const;
            };
            /** This abstract node represents a script property */
            class EV_GRAPHIC_DLL CPropertyAbstractNode : public EarthView::World::Graphic::CAbstractNode
            {
            public:
                EVString name;
                ev_uint32 id;
                EarthView::World::Graphic::AbstractNodeList values;
            ev_private:
                CPropertyAbstractNode(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CPropertyAbstractNode(_in EarthView::World::Graphic::CAbstractNode *ref_ptr);
                _extfree EarthView::World::Graphic::CAbstractNode *clone() const;
                EVString getValue() const;
            };
            /** This abstract node represents an import statement */
            class EV_GRAPHIC_DLL CImportAbstractNode : public EarthView::World::Graphic::CAbstractNode
            {
            public:
                EVString target, source;
            ev_private:
                CImportAbstractNode(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CImportAbstractNode();
                _extfree EarthView::World::Graphic::CAbstractNode *clone() const;
                EVString getValue() const;
            };
            /** This abstract node represents a variable assignment */
            class EV_GRAPHIC_DLL CVariableAccessAbstractNode : public EarthView::World::Graphic::CAbstractNode
            {
            public:
                EVString name;
            ev_private:
                CVariableAccessAbstractNode(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CVariableAccessAbstractNode(_in EarthView::World::Graphic::CAbstractNode *ref_ptr);
                _extfree EarthView::World::Graphic::CAbstractNode *clone() const;
                EVString getValue() const;
            };
            class CScriptCompilerEvent;
            class CScriptCompilerListener;
            /** This is the main class for the compiler. It calls the parser
            	and processes the CST into an AST and then uses translators
            	to translate the AST into the final resources.
            */
            class EV_GRAPHIC_DLL CScriptCompiler : public EarthView::World::Core::CAllocatedObject
            {
            public: 			/// Externally accessible types
                ///typedef map<EVString,ev_uint32> IdMap;
                class EV_GRAPHIC_DLL IdMap: public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    IdMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    IdMap() {}

                    ev_bool push(_in const EVString &key, _in ev_uint32 const &val)
                    {
                        if(mList.find(key) == mList.end())
                        {
                            mList[key] = (ev_uint32)val;
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    ev_bool exist(_in const EVString &key)
                    {
                        return mList.find(key) != mList.end();
                    }
                    ev_uint32 &operator[]( _in const EVString &key)
                    {
                        return get(key);
                    }
                    ev_uint32 &get(_in const EVString &key)
                    {
                        return mList[key];
                    }
                    void erase(_in const EVString &key)
                    {
                        if(exist(key))
                            mList.erase(key);
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                ev_private:
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    typedef map<EVString, ev_uint32> InternalList;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef std::pair< map<EVString, ev_uint32>::iterator , bool> _Pairib;
#else
                    typedef EarthView::World::Core::hashmap<EVString, ev_uint32, _StringHash> InternalList;
                    typedef pair<InternalList::iterator, bool> _Pairib;
#endif

                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::mapped_type mapped_type;
                    typedef InternalList::key_type key_type;
                    typedef InternalList::value_type value_type;
#if EV_PLATFORM == EV_PLATFORM_ANDROID
                    RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
#else
                    RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
#endif

                    _Pairib insert(_in const value_type &val)
                    {
                        return mList.insert(val);
                    }
                    iterator find(_in const EVString &key)
                    {
                        return mList.find(key);
                    }
                    const_iterator find(_in const EVString &key) const
                    {
                        return mList.find(key);
                    }
                private:
                    InternalList mList;
                };
                /// The container for errors
                class EV_GRAPHIC_DLL CError : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CError(EarthView::World::Core::CNameValuePairList *pList) { }
                public:
                    CError() { }
                    EVString file;
                    EVString message;
                    ev_int32 line;
                    ev_uint32 code;
                };
                /*typedef CSharedPtr<Error> EarthView::World::Graphic::CScriptCompiler::ErrorPtr;*/
                class EV_GRAPHIC_DLL ErrorPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>
                {
                ev_private:
                    ErrorPtr(_in EarthView::World::Core::CNameValuePairList *pList): EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>(
                            pList && pList->Exist("rep") ? (EarthView::World::Graphic::CScriptCompiler::CError *)pList->GetAt("rep") : (EarthView::World::Graphic::CScriptCompiler::CError *) NULL
                            , pList && pList->Exist("inFreeMethod") ? *(EarthView::World::Core::SharedPtrFreeMethod *)(pList->GetAt("inFreeMethod")) : EarthView::World::Core::SPFM_DELETE)
                    {
                        if(pList && pList->Exist("r"))
                        {
                        	EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError> r = *(EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>*)pList->GetAt("r");
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
                    ErrorPtr() : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>() {}
                    explicit ErrorPtr(EarthView::World::Graphic::CScriptCompiler::CError *rep) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>(rep) {}
                    explicit ErrorPtr(EarthView::World::Graphic::CScriptCompiler::CError *rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>(rep, inFreeMethod) {}
                    ErrorPtr(const ErrorPtr &r) : EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>(r) {}

                    EarthView::World::Graphic::CScriptCompiler::CError *get() const
                    {
                        return EarthView::World::Core::CSharedPtr<EarthView::World::Graphic::CScriptCompiler::CError>::get();
                    }
                };
                ///typedef list<EarthView::World::Graphic::CScriptCompiler::ErrorPtr> ErrorList;
                class EV_GRAPHIC_DLL ErrorList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef list<EarthView::World::Graphic::CScriptCompiler::ErrorPtr> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(_in iterator pos, _in EarthView::World::Graphic::CScriptCompiler::ErrorPtr const &t)
                    {
                        return mList.insert(pos, t);
                    }
                    void insert( iterator pos, iterator start, iterator end )
                    {
                        mList.insert(pos, start, end);
                    }
                private:
                    InternalList mList;
                ev_private:
                    ErrorList(_in EarthView::World::Core::CNameValuePairList *pList) {}
                public:
                    ErrorList() {}
                    void push_back(_in EarthView::World::Graphic::CScriptCompiler::ErrorPtr const &t)
                    {
                        mList.push_back(t);
                    }
                    void push_front(_in EarthView::World::Graphic::CScriptCompiler::ErrorPtr const   &t)
                    {
                        mList.push_front(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    void pop_front()
                    {
                        mList.pop_front();
                    }

                    EarthView::World::Graphic::CScriptCompiler::ErrorPtr &front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::CScriptCompiler::ErrorPtr &back()
                    {
                        return mList.back();
                    }
                    EarthView::World::Graphic::CScriptCompiler::ErrorPtr &at(_in ev_uint32 pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        return *it;
                    }
                    void insert(_in ev_uint32 pos, _in EarthView::World::Graphic::CScriptCompiler::ErrorPtr const &t)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.insert(it, t);
                    }
                    void remove(_in ev_size_t pos)
                    {
                        iterator it = begin();
                        for(ev_uint32 i = 0; i < pos; i++)
                            it++;
                        mList.erase(it);
                    }
                    ev_bool empty() const
                    {
                        return mList.empty();
                    }
                    ev_size_t size() const
                    {
                        return mList.size();
                    }
                    void resize(_in ev_size_t newSize)
                    {
                        mList.resize(newSize);
                    }
                    void clear()
                    {
                        mList.clear();
                    }
                };
                /// These are the built-in error codes
                enum CompiledError
                {
                    CE_STRINGEXPECTED,
                    CE_NUMBEREXPECTED,
                    CE_FEWERPARAMETERSEXPECTED,
                    CE_VARIABLEEXPECTED,
                    CE_UNDEFINEDVARIABLE,
                    CE_OBJECTNAMEEXPECTED,
                    CE_OBJECTALLOCATIONERROR,
                    CE_INVALIDPARAMETERS,
                    CE_DUPLICATEOVERRIDE,
                    CE_UNEXPECTEDTOKEN,
                    CE_OBJECTBASENOTFOUND,
                    CE_UNSUPPORTEDBYRENDERSYSTEM,
                    CE_REFERENCETOANONEXISTINGOBJECT,
					CE_LOCALFILEEXIST
                };
                static EVString formatErrorCode(_in ev_uint32 code);
            ev_private:
                CScriptCompiler(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CScriptCompiler();
                virtual ~CScriptCompiler() {}
                //// Takes in a string of script code and compiles it into resources
                /**
                 * @param str The script code
                 * @param source The source of the script code (e.g. a script file)
                 * @param group The resource group to place the compiled resources into
                 */
                ev_bool compile( _in const EVString &str, _in const EVString &source, _in const EVString &group);
                //// Compiles resources from the given concrete node list
                ev_bool compile( _in const EarthView::World::Graphic::ConcreteNodeListPtr &nodes, _in const EVString &group);
                //// Generates the AST from the given string script
                EarthView::World::Graphic::AbstractNodeListPtr _generateAST( _in const EVString &str, _in const EVString &source, _in ev_bool doImports , _in ev_bool doObjects, _in ev_bool doVariables );
                EarthView::World::Graphic::AbstractNodeListPtr _generateAST( _in const EVString &str, _in const EVString &source, _in ev_bool doImports , _in ev_bool doObjects);
                EarthView::World::Graphic::AbstractNodeListPtr _generateAST( _in const EVString &str, _in const EVString &source, _in ev_bool doImports );
                EarthView::World::Graphic::AbstractNodeListPtr _generateAST( _in const EVString &str, _in const EVString &source);
                //// Compiles the given abstract syntax tree
                ev_bool _compile(_in EarthView::World::Graphic::AbstractNodeListPtr nodes, _in const EVString &group, _in ev_bool doImports , _in ev_bool doObjects, _in ev_bool doVariables);
                ev_bool _compile(_in EarthView::World::Graphic::AbstractNodeListPtr nodes, _in const EVString &group, _in ev_bool doImports, _in ev_bool doObjects);
                ev_bool _compile(_in EarthView::World::Graphic::AbstractNodeListPtr nodes, _in const EVString &group, _in ev_bool doImports);
                ev_bool _compile(_in EarthView::World::Graphic::AbstractNodeListPtr nodes, _in const EVString &group);
                //// Adds the given error to the compiler's list of errors
                void addError(_in ev_uint32 code, _in const EVString &file, _in ev_int32 line, _in const EVString &msg );
                void addError(_in ev_uint32 code, _in const EVString &file, _in ev_int32 line);
                //// Sets the listener used by the compiler
                void setListener( EarthView::World::Graphic::CScriptCompilerListener *listener);
                //// Returns the currently set listener
                EarthView::World::Graphic::CScriptCompilerListener *getListener();
                //// Returns the resource group currently set for this compiler
                const EVString &getResourceGroup() const;
                //// Adds a name exclusion to the map
                /**
                 * Name exclusions identify object types which cannot accept
                 * names. This means that excluded types will always have empty names.
                 * All values in the object header are stored as object values.
                 */
                void addNameExclusion( _in const EVString &type)
                {
                    mIds[type] = -1;
                }
                //// Removes a name exclusion
                void removeNameExclusion( _in const EVString &type)
                {
                    if(mIds.exist(type)) mIds.erase(type);
                };
                //// Internal method for firing the handleEvent method
                ev_bool _fireEvent( EarthView::World::Graphic::CScriptCompilerEvent *evt, _inout void *retval);
            private: 			/// Tree processing
                EarthView::World::Graphic::AbstractNodeListPtr convertToAST( _in const EarthView::World::Graphic::ConcreteNodeListPtr &nodes);
                //// This built-in function processes import nodes
                void processImports(_inout EarthView::World::Graphic::AbstractNodeListPtr &nodes);
                //// Loads the requested script and converts it to an AST
                EarthView::World::Graphic::AbstractNodeListPtr loadImportPath( _in const EVString &name);
                //// Returns the abstract nodes from the given tree which represent the target
                EarthView::World::Graphic::AbstractNodeListPtr locateTarget(_inout AbstractNodeList *nodes, _in const EVString &target);
                //// Handles object inheritance and variable expansion
                void processObjects( EarthView::World::Graphic::AbstractNodeList *nodes, _in const EarthView::World::Graphic::AbstractNodeListPtr &top);
                //// Handles processing the variables
                void processVariables( EarthView::World::Graphic::AbstractNodeList *nodes);
                //// This function overlays the given object on the destination object following inheritance rules
                void overlayObject( _in const EarthView::World::Graphic::AbstractNodePtr &source,  CObjectAbstractNode *dest);
                //// Returns true if the given class is name excluded
                ev_bool isNameExcluded( _in const EVString &cls,  EarthView::World::Graphic::CAbstractNode *parent);
                //// This function sets up the initial values in word id map
                void initWordMap();
            private:
                /// CResource group
                EVString mGroup;
                /// The word -> id conversion table
                IdMap mIds;
                /// This is an environment map
                typedef map<EVString, EVString> Environment;
                Environment mEnv;
                typedef map<EVString, EarthView::World::Graphic::AbstractNodeListPtr> ImportCacheMap;
                ImportCacheMap mImports; 			/// The set of imported scripts to avoid circular dependencies
                typedef multimap<EVString, EVString> ImportRequestMap;
                ImportRequestMap mImportRequests; 			/// This holds the target objects for each script to be imported
                /// This stores the imports of the scripts, so they are separated and can be treated specially
                EarthView::World::Graphic::AbstractNodeList mImportTable;
                /// Error list
                ErrorList mErrors;
                /// The listener
                EarthView::World::Graphic::CScriptCompilerListener *mListener;
            private: 			/// Internal helper classes and processors
                class CAbstractTreeBuilder
                {
                private:
                    EarthView::World::Graphic::AbstractNodeListPtr mNodes;
                    EarthView::World::Graphic::CAbstractNode *mCurrent;
                    EarthView::World::Graphic::CScriptCompiler *mCompiler;
                public:
                    CAbstractTreeBuilder(_in EarthView::World::Graphic::CScriptCompiler *compiler);
                    const EarthView::World::Graphic::AbstractNodeListPtr &getResult() const;
                    void visit( EarthView::World::Graphic::ConcreteNode *node);
                    static void visit( CAbstractTreeBuilder *visitor, _in const EarthView::World::Graphic::ConcreteNodeList &nodes);
                };
                friend class CAbstractTreeBuilder;
            public: 			/// Public translator definitions
                /// This enum are built-in word id values
                enum CompliedID
                {
                    ID_ON = 1,
                    ID_OFF = 2,
                    ID_TRUE = 1,
                    ID_FALSE = 2,
                    ID_YES = 1,
                    ID_NO = 2
                };
            };
            /**
             * This struct is a base class for events which can be thrown by the compilers and caught by
             * subscribers. There are a set number of standard events which are used by EV_World's core.
             * New event types may be derived for more custom compiler processing.
             */
            class EV_GRAPHIC_DLL CScriptCompilerEvent: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : mType((ev_char *)pList->GetAt("type"))
                {
                }
            public:
                EVString mType;
                CScriptCompilerEvent( _in const EVString &type): mType(type) {}
                virtual ~CScriptCompilerEvent() {}
            private: 			/// Non-copyable
                CScriptCompilerEvent( _in const CScriptCompilerEvent &);
                EarthView::World::Graphic::CScriptCompilerEvent &operator = ( _in const EarthView::World::Graphic::CScriptCompilerEvent &);
            };
            /** This is a listener for the compiler. The compiler can be customized with
            	this listener. It lets you listen in on events occuring during compilation,
            	hook them, and change the behavior.
            */
            class EV_GRAPHIC_DLL CScriptCompilerListener: public EarthView::World::Core::CBaseObject
            {
            ev_private:
                CScriptCompilerListener(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CScriptCompilerListener();
                virtual ~CScriptCompilerListener() {}
                //// Returns the concrete node list from the given file
                virtual EarthView::World::Graphic::ConcreteNodeListPtr importFile( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EVString &name);
                //// Allows for responding to and overriding behavior before a CST is translated into an AST
                virtual void preConversion( EarthView::World::Graphic::CScriptCompiler *compiler, _in EarthView::World::Graphic::ConcreteNodeListPtr nodes);
                //// Allows vetoing of continued compilation after the entire AST conversion process finishes
                /**
                 @remarks	Once the script is turned completely into an AST, including import
                			and override handling, this function allows a listener to exit
                			the compilation process.
                 @return True continues compilation, false aborts
                 */
                virtual ev_bool postConversion( EarthView::World::Graphic::CScriptCompiler *compiler, _in const EarthView::World::Graphic::AbstractNodeListPtr &nodes);
                //// Called when an error occurred
                virtual void handleError( EarthView::World::Graphic::CScriptCompiler *compiler, _in ev_uint32 code, _in const EVString &file, _in ev_int32 line, _in const EVString &msg);
                //// Called when an event occurs during translation, return true if handled
                /**
                 @remarks	This function is called from the translators when an event occurs that
                			that can be responded to. Often this is overriding names, or it can be a request for
                			custom resource creation.
                 @arg compiler A reference to the compiler
                 @arg evt The event object holding information about the event to be processed
                 @arg retval A possible return value from handlers
                 @return True if the handler processed the event
                */
                virtual ev_bool handleEvent( EarthView::World::Graphic::CScriptCompiler *compiler,  EarthView::World::Graphic::CScriptCompilerEvent *evt, _inout void *retval);
            };
            class CScriptTranslator;
            class CScriptTranslatorManager;
            /** Manages threaded compilation of scripts. This script loader forwards
            	scripts compilations to a specific compiler instance.
            */
            class EV_GRAPHIC_DLL CScriptCompilerManager : public EarthView::World::Graphic::CScriptLoader
            {
            private:
                static EarthView::World::Graphic::CScriptCompilerManager *ms_Singleton;
            private:
                EV_AUTO_MUTEX
                /// A list of patterns loaded by this compiler manager
                EarthView::World::Core::StringVector mScriptPatterns;
                /// A pointer to the listener used for compiling scripts
                EarthView::World::Graphic::CScriptCompilerListener *mListener;
                /// Stores a map from object types to the translators that handle them
                vector<EarthView::World::Graphic::CScriptTranslatorManager *> mManagers;
                /// A pointer to the built-in EarthView::World::Graphic::CScriptTranslatorManager
                EarthView::World::Graphic::CScriptTranslatorManager *mBuiltinTranslatorManager;
                /// A pointer to the specific compiler instance used
                EV_THREAD_POINTER(EarthView::World::Graphic::CScriptCompiler, mScriptCompiler);
            ev_private:
                CScriptCompilerManager(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CScriptCompilerManager();
                virtual ~CScriptCompilerManager();
                static EarthView::World::Graphic::CScriptCompilerManager &getSingleton();
                static EarthView::World::Graphic::CScriptCompilerManager *getSingletonPtr();

                //// Sets the listener used for compiler instances
                void setListener( EarthView::World::Graphic::CScriptCompilerListener *ref_listener);
                //// Returns the currently set listener used for compiler instances
                EarthView::World::Graphic::CScriptCompilerListener *getListener();
                //// Adds the given translator manager to the list of managers
                void addTranslatorManager( EarthView::World::Graphic::CScriptTranslatorManager *ref_man);
                //// Removes the given translator manager from the list of managers
                void removeTranslatorManager( EarthView::World::Graphic::CScriptTranslatorManager *man);
                //// Clears all translator managers
                void clearTranslatorManagers();
                //// Retrieves a EarthView::World::Graphic::CScriptTranslator from the supported managers
                EarthView::World::Graphic::CScriptTranslator *getTranslator( _in const EarthView::World::Graphic::AbstractNodePtr &node);
                //// Adds a script extension that can be handled (e.g. *.material, *.pu, etc.)
                void addScriptPattern( _in const EVString &pattern);
                //// @copydoc CScriptLoader::getScriptPatterns
                const EarthView::World::Core::StringVector &getScriptPatterns() const;
                //// @copydoc CScriptLoader::parseScript
                void parseScript( EarthView::World::Core::DataStreamPtr &stream, _in const EVString &groupName);
                //// @copydoc CScriptLoader::getLoadingOrder
                Real getLoadingOrder() const;
            };
            /// Standard event types
            class EV_GRAPHIC_DLL CPreApplyTextureAliasesScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CPreApplyTextureAliasesScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mMaterial((EarthView::World::Graphic::CMaterial *)pList->GetAt("material")), mAliases((EarthView::World::Core::AliasTextureNamePairList *)pList->GetAt("aliases"))
                {
                }
            public:
                EarthView::World::Graphic::CMaterial *mMaterial;
                EarthView::World::Core::AliasTextureNamePairList *mAliases;
                static EVString eventType;
                CPreApplyTextureAliasesScriptCompilerEvent( EarthView::World::Graphic::CMaterial *material,  EarthView::World::Core::AliasTextureNamePairList *aliases)
                    : CScriptCompilerEvent(eventType), mMaterial(material), mAliases(aliases) {}
            };
            class EV_GRAPHIC_DLL CProcessResourceNameScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CProcessResourceNameScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mResourceType(*(ResourceType *)pList->GetAt("resourceType")), mName((ev_char *)pList->GetAt("name"))
                {
                }
            public:
                enum ResourceType
                {
                    TEXTURE,
                    MATERIAL,
                    GPU_PROGRAM,
                    COMPOSITOR
                };
                EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::ResourceType mResourceType;
                EVString mName;
                static EVString eventType;
                CProcessResourceNameScriptCompilerEvent(_in EarthView::World::Graphic::CProcessResourceNameScriptCompilerEvent::ResourceType resourceType, _in const EVString &name)
                    : CScriptCompilerEvent(eventType), mResourceType(resourceType), mName(name) {}
            };
            class EV_GRAPHIC_DLL CProcessNameExclusionScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CProcessNameExclusionScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mClass((ev_char *)pList->GetAt("cls")), mParent((EarthView::World::Graphic::CAbstractNode *)pList->GetAt("ref_parent"))
                {
                }
            public:
                EVString mClass;
                EarthView::World::Graphic::CAbstractNode *mParent;
                static EVString eventType;
                CProcessNameExclusionScriptCompilerEvent( _in const EVString &cls,  EarthView::World::Graphic::CAbstractNode *ref_parent)
                    : CScriptCompilerEvent(eventType), mClass(cls), mParent(ref_parent) {}
            };
            class EV_GRAPHIC_DLL CCreateMaterialScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CCreateMaterialScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mFile((ev_char *)pList->GetAt("file")), mName((ev_char *)pList->GetAt("name")), mResourceGroup((ev_char *)pList->GetAt("resourceGroup"))
                {
                }
            public:
                EVString mFile, mName, mResourceGroup;
                static EVString eventType;
                CCreateMaterialScriptCompilerEvent( _in const EVString &file, _in const EVString &name, _in const EVString &resourceGroup)
                    : CScriptCompilerEvent(eventType), mFile(file), mName(name), mResourceGroup(resourceGroup) {}
            };
            class EV_GRAPHIC_DLL CCreateGpuProgramScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CCreateGpuProgramScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mFile((ev_char *)pList->GetAt("file")), mName((ev_char *)pList->GetAt("name")), mResourceGroup((ev_char *)pList->GetAt("resourceGroup")),
                      mSource((ev_char *)pList->GetAt("source")), mSyntax((ev_char *)pList->GetAt("syntax")), mProgramType(*(EarthView::World::Graphic::GpuProgramType *)pList->GetAt("programType"))
                {
                }
            public:
                EVString mFile, mName, mResourceGroup, mSource, mSyntax;
                EarthView::World::Graphic::GpuProgramType mProgramType;
                static EVString eventType;
                CCreateGpuProgramScriptCompilerEvent( _in const EVString &file, _in const EVString &name, _in const EVString &resourceGroup, _in const EVString &source,
                                                      const EVString &syntax, EarthView::World::Graphic::GpuProgramType programType)
                    : CScriptCompilerEvent(eventType), mFile(file), mName(name), mResourceGroup(resourceGroup), mSource(source),
                      mSyntax(syntax), mProgramType(programType)
                {}
            };
            class EV_GRAPHIC_DLL CCreateHighLevelGpuProgramScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CCreateHighLevelGpuProgramScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mFile((ev_char *)pList->GetAt("file")), mName((ev_char *)pList->GetAt("name")), mResourceGroup((ev_char *)pList->GetAt("resourceGroup")),
                      mSource((ev_char *)pList->GetAt("source")), mLanguage((ev_char *)pList->GetAt("language")), mProgramType(*(EarthView::World::Graphic::GpuProgramType *)pList->GetAt("programType"))
                {
                }
            public:
                EVString mFile, mName, mResourceGroup, mSource, mLanguage;
                EarthView::World::Graphic::GpuProgramType mProgramType;
                static EVString eventType;
                CCreateHighLevelGpuProgramScriptCompilerEvent( _in const EVString &file, _in const EVString &name, _in const EVString &resourceGroup, _in const EVString &source,
                        _in const EVString &language, _in EarthView::World::Graphic::GpuProgramType programType)
                    : CScriptCompilerEvent(eventType), mFile(file), mName(name), mResourceGroup(resourceGroup), mSource(source),
                      mLanguage(language), mProgramType(programType)
                {}
            };
            class EV_GRAPHIC_DLL CCreateGpuSharedParametersScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CCreateGpuSharedParametersScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mFile((ev_char *)pList->GetAt("file")), mName((ev_char *)pList->GetAt("name")), mResourceGroup((ev_char *)pList->GetAt("resourceGroup"))
                {
                }
            public:
                EVString mFile, mName, mResourceGroup;
                static EVString eventType;
                CCreateGpuSharedParametersScriptCompilerEvent( _in const EVString &file, _in const EVString &name, _in const EVString &resourceGroup)
                    : CScriptCompilerEvent(eventType), mFile(file), mName(name), mResourceGroup(resourceGroup) {}
            };
            class EV_GRAPHIC_DLL CCreateParticleSystemScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CCreateParticleSystemScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mFile((ev_char *)pList->GetAt("file")), mName((ev_char *)pList->GetAt("name")), mResourceGroup((ev_char *)pList->GetAt("resourceGroup"))
                {
                }
            public:
                EVString mFile, mName, mResourceGroup;
                static EVString eventType;
                CCreateParticleSystemScriptCompilerEvent( _in const EVString &file, _in const EVString &name, _in const EVString &resourceGroup)
                    : CScriptCompilerEvent(eventType), mFile(file), mName(name), mResourceGroup(resourceGroup) {}
            };
            class EV_GRAPHIC_DLL CCreateCompositorScriptCompilerEvent : public EarthView::World::Graphic::CScriptCompilerEvent
            {
            ev_private:
                CCreateCompositorScriptCompilerEvent(_in EarthView::World::Core::CNameValuePairList *pList)
                    : CScriptCompilerEvent(eventType), mFile((ev_char *)pList->GetAt("file")), mName((ev_char *)pList->GetAt("name")), mResourceGroup((ev_char *)pList->GetAt("resourceGroup"))
                {
                }
            public:
                EVString mFile, mName, mResourceGroup;
                static EVString eventType;
                CCreateCompositorScriptCompilerEvent( _in const EVString &file, _in const EVString &name, _in const EVString &resourceGroup)
                    : CScriptCompilerEvent(eventType), mFile(file), mName(name), mResourceGroup(resourceGroup) {}
            };
            //// This enum defines the integer ids for keywords this compiler handles
            enum KeywordID
            {
                ID_MATERIAL = 3,
                ID_VERTEX_PROGRAM,
                ID_GEOMETRY_PROGRAM,
                ID_FRAGMENT_PROGRAM,
                ID_TECHNIQUE,
                ID_PASS,
                ID_TEXTURE_UNIT,
                ID_VERTEX_PROGRAM_REF,
                ID_GEOMETRY_PROGRAM_REF,
                ID_FRAGMENT_PROGRAM_REF,
                ID_SHADOW_CASTER_VERTEX_PROGRAM_REF,
                ID_SHADOW_CASTER_FRAGMENT_PROGRAM_REF,
                ID_SHADOW_RECEIVER_VERTEX_PROGRAM_REF,
                ID_SHADOW_RECEIVER_FRAGMENT_PROGRAM_REF,
                ID_SHADOW_CASTER_MATERIAL,
                ID_SHADOW_RECEIVER_MATERIAL,

                ID_LOD_VALUES,
                ID_LOD_STRATEGY,
                ID_LOD_DISTANCES,
                ID_RECEIVE_SHADOWS,
                ID_TRANSPARENCY_CASTS_SHADOWS,
                ID_SET_TEXTURE_ALIAS,
                ID_SOURCE,
                ID_SYNTAX,
                ID_DEFAULT_PARAMS,
                ID_PARAM_INDEXED,
                ID_PARAM_NAMED,
                ID_PARAM_INDEXED_AUTO,
                ID_PARAM_NAMED_AUTO,
                ID_SCHEME,
                ID_LOD_INDEX,
                ID_GPU_VENDOR_RULE,
                ID_GPU_DEVICE_RULE,
                ID_INCLUDE,
                ID_EXCLUDE,

                ID_AMBIENT,
                ID_DIFFUSE,
                ID_SPECULAR,
                ID_EMISSIVE,
                ID_VERTEXCOLOUR,
                ID_SCENE_BLEND,
                ID_COLOUR_BLEND,
                ID_ONE,
                ID_ZERO,
                ID_DEST_COLOUR,
                ID_SRC_COLOUR,
                ID_ONE_MINUS_DEST_COLOUR,
                ID_ONE_MINUS_SRC_COLOUR,
                ID_DEST_ALPHA,
                ID_SRC_ALPHA,
                ID_ONE_MINUS_DEST_ALPHA,
                ID_ONE_MINUS_SRC_ALPHA,
                ID_SEPARATE_SCENE_BLEND,
                ID_SCENE_BLEND_OP,
                ID_REVERSE_SUBTRACT,
                ID_MIN,
                ID_MAX,
                ID_SEPARATE_SCENE_BLEND_OP,
                ID_DEPTH_CHECK,
                ID_DEPTH_WRITE,
                ID_DEPTH_FUNC,
                ID_DEPTH_BIAS,
                ID_ITERATION_DEPTH_BIAS,
                ID_ALWAYS_FAIL,
                ID_ALWAYS_PASS,
                ID_LESS_EQUAL,
                ID_LESS,
                ID_EQUAL,
                ID_NOT_EQUAL,
                ID_GREATER_EQUAL,
                ID_GREATER,
                ID_ALPHA_REJECTION,
                ID_ALPHA_TO_COVERAGE,
                ID_LIGHT_SCISSOR,
                ID_LIGHT_CLIP_PLANES,
                ID_TRANSPARENT_SORTING,
                ID_ILLUMINATION_STAGE,
                ID_DECAL,
                ID_CULL_HARDWARE,
                ID_CLOCKWISE,
                ID_ANTICLOCKWISE,
                ID_CULL_SOFTWARE,
                ID_BACK,
                ID_FRONT,
                ID_NORMALISE_NORMALS,
                ID_LIGHTING,
                ID_SHADING,
                ID_FLAT,
                ID_GOURAUD,
                ID_PHONG,
                ID_POLYGON_MODE,
                ID_SOLID,
                ID_WIREFRAME,
                ID_POINTS,
                ID_POLYGON_MODE_OVERRIDEABLE,
                ID_FOG_OVERRIDE,
                ID_NONE,
                ID_LINEAR,
                ID_EXP,
                ID_EXP2,
                ID_COLOUR_WRITE,
                ID_MAX_LIGHTS,
                ID_START_LIGHT,
                ID_ITERATION,
                ID_ONCE,
                ID_ONCE_PER_LIGHT,
                ID_PER_LIGHT,
                ID_PER_N_LIGHTS,
                ID_POINT,
                ID_SPOT,
                ID_DIRECTIONAL,
                ID_LIGHT_MASK,
                ID_POINT_SIZE,
                ID_POINT_SPRITES,
                ID_POINT_SIZE_ATTENUATION,
                ID_POINT_SIZE_MIN,
                ID_POINT_SIZE_MAX,
                ID_TEXTURE_ALIAS,
                ID_TEXTURE,
                ID_1D,
                ID_2D,
                ID_3D,
                ID_CUBIC,
                ID_UNLIMITED,
                ID_ALPHA,
                ID_GAMMA,
                ID_ANIM_TEXTURE,
                ID_CUBIC_TEXTURE,
                ID_SEPARATE_UV,
                ID_COMBINED_UVW,
                ID_TEX_COORD_SET,
                ID_TEX_ADDRESS_MODE,
                ID_WRAP,
                ID_CLAMP,
                ID_BORDER,
                ID_MIRROR,
                ID_TEX_BORDER_COLOUR,
                ID_FILTERING,
                ID_BILINEAR,
                ID_TRILINEAR,
                ID_ANISOTROPIC,
                ID_MAX_ANISOTROPY,
                ID_MIPMAP_BIAS,
                ID_COLOUR_OP,
                ID_REPLACE,
                ID_ADD,
                ID_MODULATE,
                ID_ALPHA_BLEND,
                ID_COLOUR_OP_EX,
                ID_SOURCE1,
                ID_SOURCE2,
                ID_MODULATE_X2,
                ID_MODULATE_X4,
                ID_ADD_SIGNED,
                ID_ADD_SMOOTH,
                ID_SUBTRACT,
                ID_BLEND_DIFFUSE_COLOUR,
                ID_BLEND_DIFFUSE_ALPHA,
                ID_BLEND_TEXTURE_ALPHA,
                ID_BLEND_CURRENT_ALPHA,
                ID_BLEND_MANUAL,
                ID_DOT_PRODUCT,
                ID_SRC_CURRENT,
                ID_SRC_TEXTURE,
                ID_SRC_DIFFUSE,
                ID_SRC_SPECULAR,
                ID_SRC_MANUAL,
                ID_COLOUR_OP_MULTIPASS_FALLBACK,
                ID_ALPHA_OP_EX,
                ID_ENV_MAP,
                ID_SPHERICAL,
                ID_PLANAR,
                ID_CUBIC_REFLECTION,
                ID_CUBIC_NORMAL,
                ID_SCROLL,
                ID_SCROLL_ANIM,
                ID_ROTATE,
                ID_ROTATE_ANIM,
                ID_SCALE,
                ID_WAVE_XFORM,
                ID_SCROLL_X,
                ID_SCROLL_Y,
                ID_SCALE_X,
                ID_SCALE_Y,
                ID_SINE,
                ID_TRIANGLE,
                ID_SQUARE,
                ID_SAWTOOTH,
                ID_INVERSE_SAWTOOTH,
                ID_TRANSFORM,
                ID_BINDING_TYPE,
                ID_VERTEX,
                ID_FRAGMENT,
                ID_CONTENT_TYPE,
                ID_NAMED,
                ID_SHADOW,
                ID_TEXTURE_SOURCE,
                ID_SHARED_PARAMS,
                ID_SHARED_PARAM_NAMED,
                ID_SHARED_PARAMS_REF,
                ID_PARTICLE_SYSTEM,
                ID_EMITTER,
                ID_AFFECTOR,
                ID_COMPOSITOR,
                ID_TARGET,
                ID_TARGET_OUTPUT,
                ID_INPUT,
                ID_PREVIOUS,
                ID_TARGET_WIDTH,
                ID_TARGET_HEIGHT,
                ID_TARGET_WIDTH_SCALED,
                ID_TARGET_HEIGHT_SCALED,
                ID_COMPOSITOR_LOGIC,
                ID_TEXTURE_REF,
                ID_SCOPE_LOCAL,
                ID_SCOPE_CHAIN,
                ID_SCOPE_GLOBAL,
                ID_POOLED,
                ///ID_GAMMA, - already registered for material
                ID_NO_FSAA,
                ID_DEPTH_POOL,
                ID_ONLY_INITIAL,
                ID_VISIBILITY_MASK,
                ID_LOD_BIAS,
                ID_MATERIAL_SCHEME,
                ID_SHADOWS_ENABLED,
                ID_CLEAR,
                ID_STENCIL,
                ID_RENDER_SCENE,
                ID_RENDER_QUAD,
                ID_IDENTIFIER,
                ID_FIRST_RENDER_QUEUE,
                ID_LAST_RENDER_QUEUE,
                ID_QUAD_NORMALS,
                ID_CAMERA_FAR_CORNERS_VIEW_SPACE,
                ID_CAMERA_FAR_CORNERS_WORLD_SPACE,
                ID_BUFFERS,
                ID_COLOUR,
                ID_DEPTH,
                ID_COLOUR_VALUE,
                ID_DEPTH_VALUE,
                ID_STENCIL_VALUE,
                ID_CHECK,
                ID_COMP_FUNC,
                ID_REF_VALUE,
                ID_MASK,
                ID_FAIL_OP,
                ID_KEEP,
                ID_INCREMENT,
                ID_DECREMENT,
                ID_INCREMENT_WRAP,
                ID_DECREMENT_WRAP,
                ID_INVERT,
                ID_DEPTH_FAIL_OP,
                ID_PASS_OP,
                ID_TWO_SIDED,
#ifdef RTSHADER_SYSTEM_BUILD_CORE_SHADERS
                ID_RT_SHADER_SYSTEM,
#endif
                ID_END_BUILTIN_IDS
            };
            /** @} */
            /** @} */
        }
    }
}

#endif

