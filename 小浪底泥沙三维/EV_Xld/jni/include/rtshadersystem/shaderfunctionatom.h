#ifndef _ShaderFunctionAtom_
#define _ShaderFunctionAtom_
#include "shaderprerequisites.h"
#include "shaderparameter.h"
#include <gpuprogram.h>
#include <singleton.h>
#include <stringvector.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                /** A class that represents an atomic code section of shader based program function.
                */
                class EV_RTSS_DLL CFunctionAtom : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    CFunctionAtom(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    /// Interface.
                public:
                    /** Class default constructor. */
                    CFunctionAtom();
                    /** Class default destructor. */
                    virtual ~CFunctionAtom() {}
                    /** Get the group execution order of this function atom. */
                    int						getGroupExecutionOrder		() const;

                    /** Get an internal execution order within a group of this function atom. */
                    int						getInternalExecutionOrder	() const;
                ev_private:
                    /** Abstract method that writes a source code to the given output stream in the target shader language. */
                    virtual void			writeSourceCode				(std::ostream &os, const EVString &targetLanguage) const
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }
                public:
                    /** Return the type of this atom instance implementation. */
                    virtual EVString	getFunctionAtomType			()
                    {
                        EV_EXCEPT(EarthView::World::Core::CException::ERR_NOT_IMPLEMENTED, "", "");
                    }
                    /// Attributes.
                protected:
                    int			mGroupExecutionOrder;						/// The owner group execution order.
                    int			mInternalExecutionOrder;						/// The execution order within the group.
                };
                /** A class that represents a function operand (its the combination of a parameter the in/out semantic and the used fields)
                */
                class EV_RTSS_DLL COperand : public EarthView::World::Core::CAllocatedObject
                {
                ev_private:
                    COperand(_in EarthView::World::Core::CNameValuePairList *pList);
                public:
                    /// InOut semantic
                    enum OpSemantic
                    {
                        //// The parameter is a input parameter
                        OPS_IN,
                        //// The parameter is a output parameter
                        OPS_OUT,
                        //// The parameter is a input/output parameter
                        OPS_INOUT
                    };
                    /// Used field mask
                    enum OpMask
                    {
                        OPM_ALL = 1 << 0,
                        OPM_X	= 1 << 1,
                        OPM_Y	= 1 << 2,
                        OPM_Z	= 1 << 3,
                        OPM_W	= 1 << 4
                    };
                    /** Class constructor
                    @param parameter A function parameter.
                    @param opSemantic The in/out semantic of the parameter.
                    @param opMask The field mask of the parameter.
                    */
                    /*COperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic, int opMask = COperand::OPM_ALL, ev_uint16 indirectionLevel = 0);*/
                    COperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic, int opMask , ev_uint16 indirectionLevel);
                    COperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic, int opMask);
                    COperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic);
                    /** Copy constructor */
                    COperand(const COperand &rhs);
                    COperand();
                    /** Copy the given Operand to this Operand.
                    @param rhs The other Operand to copy to this state.
                    */
                    EarthView::World::Graphic::RTShaderSystem::COperand &operator= (const EarthView::World::Graphic::RTShaderSystem::COperand &rhs);
                    /** Class destructor */
                    ~COperand();
                    /** Returns the parameter object as weak reference */
                    const EarthView::World::Graphic::RTShaderSystem::ParameterPtr &getParameter	()	const
                    {
                        return mParameter;
                    }
                    /** Returns true if not all fields used. (usage is described through semantic)*/
                    bool				hasFreeFields	()	const
                    {
                        return ((mMask & ~OPM_ALL) && ((mMask & ~OPM_X) || (mMask & ~OPM_Y) || (mMask & ~OPM_Z) || (mMask & ~OPM_W)));
                    }

                    /** Returns the mask bitfield. */
                    int					getMask			()	const
                    {
                        return mMask;
                    }
                    /** Returns the operand semantic (do we read/write or both with the parameter). */
                    EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic			getSemantic		()	const
                    {
                        return mSemantic;
                    }
                    /** Returns the level of indirection.
                    The greater the indirection level the more the parameter needs to be nested in brackets.
                    For example given 4 parameters x1...x4 with the indirections levels 0,1,1,2
                    respectively. The parameters should form the following string: x1[x2][x3[x4]].
                    */
                    ev_uint16				getIndirectionLevel()	const
                    {
                        return mIndirectionLevel;
                    }
                    /** Returns the parameter name and the usage mask like this 'color.xyz' */
                    EVString				toString		()	const;
                    /** Returns the given mask as string representation. */
                    static EVString				getMaskAsString		(int mask);
                    /** Return the float count of the given mask. */
                    static int					getFloatCount		(int mask);
                    /** Return the gpu constant type of the given mask. */
                    static EarthView::World::Graphic::GpuConstantType		getGpuConstantType	(int mask);
                protected:
                    EarthView::World::Graphic::RTShaderSystem::ParameterPtr	mParameter;							//// The parameter being carried by the operand
                    EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic		mSemantic;							//// Tells if the parameter is of type input,output or both
                    int				mMask;								//// Which part of the parameter should be passed (x,y,z,w)
                    ev_uint16			mIndirectionLevel;  				//// The level of indirection. @see getIndirectionLevel
                };
                /** A class that represents function invocation code from shader based program function.
                */
                class EV_RTSS_DLL CFunctionInvocation : public EarthView::World::Graphic::RTShaderSystem::CFunctionAtom
                {
                    /// Interface.
                public:
                    /*typedef vector<EarthView::World::Graphic::RTShaderSystem::COperand> EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector;*/
                    class EV_RTSS_DLL OperandVector : public EarthView::World::Core::CBaseObject
                    {
                    ev_private:
                        typedef vector<EarthView::World::Graphic::RTShaderSystem::COperand> InternalList;
                        typedef InternalList::iterator iterator;
                        typedef InternalList::const_iterator const_iterator;
                        typedef InternalList::reverse_iterator reverse_iterator;
                        typedef InternalList::const_reverse_iterator const_reverse_iterator;
                        typedef InternalList::reference reference;
                        typedef InternalList::const_reference const_reference;
                        typedef InternalList::value_type value_type;
                        RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                        iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::COperand const &t)
                        {
                            return mList.insert(pos, t);
                        }
                    private:
                        InternalList mList;
                    ev_private:
                        OperandVector(_in EarthView::World::Core::CNameValuePairList *pList) {}
                    public:
                        OperandVector() {}
                        void push_back(EarthView::World::Graphic::RTShaderSystem::COperand t)
                        {
                            mList.push_back(t);
                        }
                        void pop_back()
                        {
                            mList.pop_back();
                        }

                        EarthView::World::Graphic::RTShaderSystem::COperand &front()
                        {
                            return mList.front();
                        }
                        EarthView::World::Graphic::RTShaderSystem::COperand &back()
                        {
                            return mList.back();
                        }
                        void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::COperand const &t)
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
                        EarthView::World::Graphic::RTShaderSystem::COperand &operator[](ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::RTShaderSystem::COperand const &operator[](ev_size_t n) const
                        {
                            const_reference t =  mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::RTShaderSystem::COperand &at(ev_size_t n)
                        {
                            reference t = mList[n];
                            return t;
                        }
                        EarthView::World::Graphic::RTShaderSystem::COperand const &at(ev_size_t n) const
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
                    };
                    /** Class constructor
                    @param functionName The name of the function to invoke.
                    @param groupOrder The group order of this invocation.
                    @param internalOrder The internal order of this invocation.
                    @param returnType The return type of the used function.
                    */
                    /*CFunctionInvocation(const EVString& functionName, int groupOrder, int internalOrder, EVString returnType = "void");*/
                    CFunctionInvocation(const EVString &functionName, int groupOrder, int internalOrder, EVString returnType);
                    CFunctionInvocation(const EVString &functionName, int groupOrder, int internalOrder);
                    /** Copy constructor */
                    CFunctionInvocation(const CFunctionInvocation &rhs);
                ev_private:
                    CFunctionInvocation(_in EarthView::World::Core::CNameValuePairList *pList);
                    /**
                    @see FunctionAtom::writeSourceCode
                    */
                    virtual void			writeSourceCode	(std::ostream &os, const EVString &targetLanguage) const;
                public:
                    /**
                    @see FunctionAtom::getFunctionAtomType
                    */
                    virtual EVString	getFunctionAtomType ()
                    {
                        return Type;
                    }
                    /** Get a list of parameters this function invocation will use in the function call as arguments. */
                    EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector			&getOperandList	()
                    {
                        return mOperands;
                    }

                    /** Push a new operand (on the end) to the function.
                    @param parameter A function parameter.
                    @param opSemantic The in/out semantic of the parameter.
                    @param opMask The field mask of the parameter.
                    @param indirectionLevel The level of nesting inside brackets
                    */
                    /*void pushOperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic, int opMask = COperand::OPM_ALL, int indirectionLevel = 0);*/
                    void pushOperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic, int opMask, int indirectionLevel);
                    void pushOperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic, int opMask);
                    void pushOperand(EarthView::World::Graphic::RTShaderSystem::ParameterPtr parameter, EarthView::World::Graphic::RTShaderSystem::COperand::OpSemantic opSemantic);
                    /** Return the function name */
                    const EVString			&getFunctionName	() const
                    {
                        return mFunctionName;
                    }
                    /** Return the return type */
                    const EVString			&getReturnType	() const
                    {
                        return mReturnType;
                    }
                    /** Determines if the current object is equal to the compared one. */
                    bool operator == ( const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs ) const;
                    /** Determines if the current object is not equal to the compared one. */
                    bool operator != ( const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs ) const;
                    /** Determines if the current object is less than the compared one. */
                    bool operator <  ( const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs ) const;
                    bool operator >  ( const EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation &rhs ) const;

                    //// The type of this class.
                    static EVString Type;
                    /// Attributes.
                protected:
                    EVString				mFunctionName;
                    EVString				mReturnType;
                    EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation::OperandVector		mOperands;

                ev_private:
                    /** Comparator function to be used for sorting.
                      Implemented as a struct to make it easier for the compiler to inline
                        */
                    struct FunctionInvocationLessThan
                    {
                        bool operator ()(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation const &lhs, EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation const &rhs) const;
                    };
                    /** Comparator function to be used for comparisons.
                        Implemented as a struct to make it easier for the compiler to inline
                    */
                    struct FunctionInvocationCompare
                    {
                        bool operator ()(EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation const &lhs, EarthView::World::Graphic::RTShaderSystem::CFunctionInvocation const &rhs) const;
                    };
                };
                ///typedef vector<EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*>					FunctionAtomInstanceList;
                class EV_RTSS_DLL FunctionAtomInstanceList : public EarthView::World::Core::CBaseObject
                {
                ev_private:
                    typedef vector<EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *> InternalList;
                    typedef InternalList::iterator iterator;
                    typedef InternalList::const_iterator const_iterator;
                    typedef InternalList::reverse_iterator reverse_iterator;
                    typedef InternalList::const_reverse_iterator const_reverse_iterator;
                    typedef InternalList::reference reference;
                    typedef InternalList::const_reference const_reference;
                    typedef InternalList::value_type value_type;
                    RESERVE_CONTAINER_FUNCTION(mList); 				///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
                    iterator insert(iterator pos, EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *const &t)
                    {
                        return mList.insert(pos, t);
                    }
                private:
                    InternalList mList;
                ev_private:
                    FunctionAtomInstanceList(_in EarthView::World::Core::CNameValuePairList *pList) {};
                public:
                    FunctionAtomInstanceList() {};
                    void push_back(EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *t)
                    {
                        mList.push_back(t);
                    }
                    void pop_back()
                    {
                        mList.pop_back();
                    }

                    EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& front()
                    {
                        return mList.front();
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& back()
                    {
                        return mList.back();
                    }
                    void insert(ev_uint32 pos, EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *const &t)
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
                    EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& operator[](ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *const &operator[](ev_size_t n) const
                    {
                        const_reference t =  mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunctionAtom*& at(ev_size_t n)
                    {
                        reference t = mList[n];
                        return t;
                    }
                    EarthView::World::Graphic::RTShaderSystem::CFunctionAtom *const &at(ev_size_t n) const
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
                };
                typedef FunctionAtomInstanceList::iterator 			FunctionAtomInstanceIterator;
                typedef FunctionAtomInstanceList::const_iterator	FunctionAtomInstanceConstIterator;
            }
        }
    }
}

#endif

