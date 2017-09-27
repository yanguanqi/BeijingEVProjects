#ifndef __EV_ANY_H__
#define __EV_ANY_H__
#include "core/ev_string.h"
#include "core/graphic_exception.h"
#include <algorithm>
#include <typeinfo>
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

           
            /**** Variant type that can hold CAny other type.
            ****/
            class CAny
            {
            public: 		
                CAny()
                    : mContent(0)
                {
                }
                template<typename ValueType>
                explicit CAny(const ValueType &value)
                    : mContent(EV_NEW_T(Cholder<ValueType>)(value))
                {
                }
                CAny(const CAny &other)
                    : mContent(other.mContent ? other.mContent->clone() : 0)
                {
                }
                virtual ~CAny()
                {
                    destroy();
                }
            public: 			
                CAny &swap(CAny &rhs)
                {
                    std::swap(mContent, rhs.mContent);
                    return *this;
                }
                template<typename ValueType>
                CAny &operator=(const ValueType &rhs)
                {
                    CAny(rhs).swap(*this);
                    return *this;
                }
                CAny &operator=(const CAny &rhs)
                {
                    CAny(rhs).swap(*this);
                    return *this;
                }
            public: 			
                ev_bool isEmpty() const
                {
                    return !mContent;
                }
                const std::type_info &getType() const
                {
                    return mContent ? mContent->getType() : typeid(void);
                }
                inline friend std::ostream &operator <<
                ( std::ostream &o, const CAny &v )
                {
                    if (v.mContent)
                        v.mContent->writeToStream(o);
                    return o;
                }
                void destroy()
                {
                    EV_DELETE_T(mContent, Cplaceholder);
                    mContent = NULL;
                }
            protected: 			
                class Cplaceholder
                {
                public: 			

                    virtual ~Cplaceholder()
                    {
                    }
                public: 			
                    virtual const std::type_info &getType() const = 0;
                    virtual Cplaceholder *clone() const = 0;

                    virtual void writeToStream(std::ostream &o) = 0;
                };
                template<typename ValueType>
                class Cholder : public Cplaceholder
                {
                public: 			
                    Cholder(const ValueType &value)
                        : held(value)
                    {
                    }
                public: 			
                    virtual const std::type_info &getType() const
                    {
                        return typeid(ValueType);
                    }
                    virtual Cplaceholder *clone() const
                    {
                        return EV_NEW_T(Cholder)(held);
                    }
                    virtual void writeToStream(std::ostream &o)
                    {
                        o << held;
                    }

                public: 			
                    ValueType held;
                };

            protected: 			
                Cplaceholder *mContent;
                template<typename ValueType>
                friend ValueType *any_cast(CAny *);

            public:

                template<typename ValueType>
                ValueType operator()() const
                {
                    if (!mContent)
                    {
                        EV_EXCEPT(CException::ERR_INVALIDPARAMS,
                                  "Bad cast from uninitialised CAny",
                                  "CAny::operator()");
                    }
                    else if(getType() == typeid(ValueType))
                    {
                        return static_cast<CAny::Cholder<ValueType> *>(mContent)->held;
                    }
                    else
                    {
                        CStringUtil::StrStreamType str;
                        str << "Bad cast from type '" << getType().name() << "' "
                            << "to '" << typeid(ValueType).name() << "'";
                        EV_EXCEPT(CException::ERR_INVALIDPARAMS,
                                  str.str().c_str(),
                                  "CAny::operator()");
                    }
                }


            };

            /****** Specialised CAny class which has built in arithmetic operators, but can
            	hold only types which support operator +,-,* and / .
            *****/
            class CAnyNumeric : public CAny
            {
            public:
                CAnyNumeric()
                    : CAny()
                {
                }
                template<typename ValueType>
                CAnyNumeric(const ValueType &value)

                {
                    mContent = EV_NEW_T(Cnumholder<ValueType>)(value);
                }
                CAnyNumeric(const CAnyNumeric &other)
                    : CAny()
                {
                    mContent = other.mContent ? other.mContent->clone() : 0;
                }
            protected:
                class Cnumplaceholder : public CAny::Cplaceholder
                {
                public: 
                    ~Cnumplaceholder()
                    {
                    }
                    virtual Cplaceholder *add(Cplaceholder *rhs) = 0;
                    virtual Cplaceholder *subtract(Cplaceholder *rhs) = 0;
                    virtual Cplaceholder *multiply(Cplaceholder *rhs) = 0;
                    virtual Cplaceholder *multiply(ev_real32 factor) = 0;
                    virtual Cplaceholder *divide(Cplaceholder *rhs) = 0;
                };
                template<typename ValueType>
                class Cnumholder : public Cnumplaceholder
                {
                public: 			
                    Cnumholder(const ValueType &value)
                        : held(value)
                    {
                    }
                public: 			
                    virtual const std::type_info &getType() const
                    {
                        return typeid(ValueType);
                    }
                    virtual Cplaceholder *clone() const
                    {
                        return EV_NEW_T(Cnumholder)(held);
                    }
                    virtual Cplaceholder *add(Cplaceholder *rhs)
                    {
                        return EV_NEW_T(Cnumholder)(held + static_cast<Cnumholder *>(rhs)->held);
                    }
                    virtual Cplaceholder *subtract(Cplaceholder *rhs)
                    {
                        return EV_NEW_T(Cnumholder)(held - static_cast<Cnumholder *>(rhs)->held);
                    }
                    virtual Cplaceholder *multiply(Cplaceholder *rhs)
                    {
                        return EV_NEW_T(Cnumholder)(held * static_cast<Cnumholder *>(rhs)->held);
                    }
                    virtual Cplaceholder *multiply(ev_real32 factor)
                    {
                        return EV_NEW_T(Cnumholder)(held * factor);
                    }
                    virtual Cplaceholder *divide(Cplaceholder *rhs)
                    {
                        return EV_NEW_T(Cnumholder)(held / static_cast<Cnumholder *>(rhs)->held);
                    }
                    virtual void writeToStream(std::ostream &o)
                    {
                        o << held;
                    }
                public: 			
                    ValueType held;
                };
                CAnyNumeric(Cplaceholder *pholder)
                {
                    mContent = pholder;
                }
            public:
                CAnyNumeric &operator=(const CAnyNumeric &rhs)
                {
                    CAnyNumeric(rhs).swap(*this);
                    return *this;
                }
                CAnyNumeric operator+(const CAnyNumeric &rhs) const
                {
                    return CAnyNumeric(
                               static_cast<Cnumplaceholder *>(mContent)->add(rhs.mContent));
                }
                CAnyNumeric operator-(const CAnyNumeric &rhs) const
                {
                    return CAnyNumeric(
                               static_cast<Cnumplaceholder *>(mContent)->subtract(rhs.mContent));
                }
                CAnyNumeric operator*(const CAnyNumeric &rhs) const
                {
                    return CAnyNumeric(
                               static_cast<Cnumplaceholder *>(mContent)->multiply(rhs.mContent));
                }
                CAnyNumeric operator*(ev_real32 factor) const
                {
                    return CAnyNumeric(
                               static_cast<Cnumplaceholder *>(mContent)->multiply(factor));
                }
                CAnyNumeric operator/(const CAnyNumeric &rhs) const
                {
                    return CAnyNumeric(
                               static_cast<Cnumplaceholder *>(mContent)->divide(rhs.mContent));
                }
                CAnyNumeric &operator+=(const CAnyNumeric &rhs)
                {
                    *this = CAnyNumeric(
                                static_cast<Cnumplaceholder *>(mContent)->add(rhs.mContent));
                    return *this;
                }
                CAnyNumeric &operator-=(const CAnyNumeric &rhs)
                {
                    *this = CAnyNumeric(
                                static_cast<Cnumplaceholder *>(mContent)->subtract(rhs.mContent));
                    return *this;
                }
                CAnyNumeric &operator*=(const CAnyNumeric &rhs)
                {
                    *this = CAnyNumeric(
                                static_cast<Cnumplaceholder *>(mContent)->multiply(rhs.mContent));
                    return *this;
                }
                CAnyNumeric &operator/=(const CAnyNumeric &rhs)
                {
                    *this = CAnyNumeric(
                                static_cast<Cnumplaceholder *>(mContent)->divide(rhs.mContent));
                    return *this;
                }


            };

            template<typename ValueType>
            ValueType *any_cast(CAny *operand)
            {
                return operand && (std::strcmp(operand->getType().name(), typeid(ValueType).name()) == 0)
                       ? &static_cast<CAny::Cholder<ValueType> *>(operand->mContent)->held
                       : 0;
            }
            template<typename ValueType>
            const ValueType *any_cast(const CAny *operand)
            {
                return any_cast<ValueType>(const_cast<CAny *>(operand));
            }
            template<typename ValueType>
            ValueType any_cast(const CAny &operand)
            {
                const ValueType *result = any_cast<ValueType>(&operand);
                if(!result)
                {
                    CStringUtil::StrStreamType str;
                    str << "Bad cast from type '" << operand.getType().name() << "' "
                        << "to '" << typeid(ValueType).name() << "'";
                    EV_EXCEPT(CException::ERR_INVALIDPARAMS,
                              str.str().c_str(),
                              "any_cast");
                }
                return *result;
            }
        }
    }
}

#endif
