#ifndef ___Iterator_Range_H__
#define ___Iterator_Range_H__

#include "core/global.h"

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /**
             *
             * \brief Base for an CIterator_range
             *
             * \param T iterator type
             *
             */
            template <typename T>
            class CIterator_range
            {

                T mBegin, mEnd;
            public :

                /** Constructor.
                @remarks
                Provide a start and end iterator to initialise.
                */
                CIterator_range( T b , T e ) : mBegin(b) , mEnd(e) {}
                ////access to the begin of the range
                T begin() const
                {
                    return mBegin;
                }

                ////access to the end of the range
                T end() const
                {
                    return mEnd;
                }

                ////informs if there are any elements in the range
                ev_bool empty() const
                {
                    return mBegin = mEnd ;
                }
                ////comparison for equality
                ev_bool equal( const CIterator_range &other ) const
                {
                    return mBegin == other.mBegin && mEnd == other.mEnd;
                }
                ////comparison operator for equality
                ev_bool operator==( const CIterator_range &rhs ) const
                {
                    return equal( rhs ) ;
                }

                ////comparison operator for inequality
                ev_bool operator!=( const CIterator_range &rhs ) const
                {
                    return !operator==(rhs);
                }
                /**
                \brief typedef to fulfill container interface

                \note there is no distinction between const_iterator and iterator.

                */
                typedef T iterator;

                /**
                \brief typedef to fulfill container interface

                \note there is no distinction between const_iterator and iterator.

                */
                typedef T const_iterator;

                //// defines the real used type
                typedef CIterator_range<T> type;
            };


            /**
             *
             * \brief Predefined type
             *
             * \param T iterator type
             *
             * compatility class for CVectorIterator
            */
            template<typename T>
            struct VectorRange : public CIterator_range<typename T::iterator>
            {
                /** Constructor.
                @remarks
                	Provide a container to initialise.
                */
                VectorRange( T &c )
                    : CIterator_range<typename T::iterator>( c.begin(), c.end() )
                {}
                /** Constructor.
                @remarks
                Provide a start and end iterator to initialise.
                */
                VectorRange( typename T::iterator b, typename T::iterator e )
                    : CIterator_range<typename T::iterator>( b, e )
                {}
                ////comparison operator for equality
                ev_bool operator==( const VectorRange &rhs ) const
                {
                    return equal( rhs) ;
                }
                ////comparison operator for inequality
                ev_bool operator!=( const VectorRange &rhs ) const
                {
                    return !equal( rhs) ;
                }

#ifdef __EV_Iterator_Range_H__
                ////cast operator to a CVectorIterator
                operator CVectorIterator<T>()
                {
                    return CVectorIterator<T>( this->begin(), this->end());
                }
                ////cast operator to a CConstVectorIterator
                operator CConstVectorIterator<T>()
                {
                    return CConstVectorIterator<T>( this->begin(), this->end());
                }
#endif

            };
            /**
             *
             * \brief Predefined type
             *
             * \param T iterator type
             *
             * compatility class for CConstVectorIterator
            */
            template<typename T>
            struct ConstVectorRange : public CIterator_range<typename T::const_iterator>
            {
                /** Constructor.
                @remarks
                	Provide a container to initialise.
                */
                ConstVectorRange( const T &c )
                    : CIterator_range<typename T::const_iterator>( c.begin(), c.end() )
                {}
                /** Constructor.
                @remarks
                Provide a start and end iterator to initialise.
                */
                ConstVectorRange( typename T::iterator b, typename T::iterator e )
                    : CIterator_range<typename T::const_iterator>( b, e )
                {}
                /** Constructor.
                @remarks
                Provide a start and end const_iterator to initialise.
                */
                ConstVectorRange( typename T::const_iterator b, typename T::const_iterator e )
                    : CIterator_range<typename T::const_iterator>( b, e )
                {}
                /** Constructor.
                @remarks
                Provide a VectorRange to initialise.
                */
                ConstVectorRange( const VectorRange<T>& rhs  )
                    : CIterator_range<typename T::const_iterator>( rhs.begin(), rhs.end() )
                {}
                ////comparison operator for equality
                ev_bool operator==( const ConstVectorRange &rhs ) const
                {
                    return equal( rhs) ;
                }
                ////comparison operator for inequality
                ev_bool operator!=( const ConstVectorRange &rhs ) const
                {
                    return !equal( rhs) ;
                }




#ifdef __EV_Iterator_Wrapper_H__
                ////cast operator to a CConstVectorIterator
                operator CConstVectorIterator<T>()
                {
                    return  CConstVectorIterator<T>( this->begin(), this->end());
                }
#endif

            };

            /**
             *
             * \brief Predefined type
             *
             * \param T iterator type
             *
             * compatility class for CMapIterator
            */
            template<typename T>
            struct MapRange : public CIterator_range<typename T::iterator>
            {
                /** Constructor.
                @remarks
                	Provide a container to initialise.
                */
                MapRange( T &c )
                    : CIterator_range<typename T::iterator>( c.begin(), c.end() )
                {}
                /** Constructor.
                @remarks
                Provide a start and end iterator to initialise.
                */
                MapRange( typename T::iterator b, typename T::iterator e )
                    : CIterator_range<typename T::iterator>( b, e )
                {}
                ////comparison operator for equality
                ev_bool operator==( const MapRange &rhs ) const
                {
                    return equal( rhs) ;
                }
                ////comparison operator for inequality
                ev_bool operator!=( const MapRange &rhs ) const
                {
                    return !equal( rhs) ;
                }

#ifdef __EV_Iterator_Wrapper_H__
                ////cast operator to a CMapIterator
                operator CMapIterator<T>()
                {
                    return CMapIterator<T>( this->begin(), this->end());
                }
                ////cast operator to a CConstMapIterator
                operator CConstMapIterator<T>()
                {
                    return CConstMapIterator<T>( this->begin(), this->end());
                }
#endif

            };
            /**
             *
             * \brief Predefined type
             *
             * \param T iterator type
             *
             * compatility class for CConstMapIterator
            */
            template<typename T>
            struct ConstMapRange : public CIterator_range<typename T::const_iterator>
            {
                /** Constructor.
                @remarks
                	Provide a container to initialise.
                */
                ConstMapRange( const T &c )
                    : CIterator_range<typename T::const_iterator>( c.begin(), c.end() )
                {}
                /** Constructor.
                @remarks
                Provide a start and end iterator to initialise.
                */
                ConstMapRange( typename T::iterator b, typename T::iterator e )
                    : CIterator_range<typename T::const_iterator>( b, e )
                {}

                /** Constructor.
                @remarks
                Provide a start and end const_iterator to initialise.
                */
                ConstMapRange( typename T::const_iterator b, typename T::const_iterator e )
                    : CIterator_range<typename T::const_iterator>( b, e )
                {}
                /** Constructor.
                @remarks
                Provide a MapRange to initialise.
                */
                ConstMapRange( const MapRange<T>& rhs  )
                    : CIterator_range<typename T::const_iterator>( rhs.begin(), rhs.end() )
                {}

                ////comparison operator for equality
                ev_bool operator==( const ConstMapRange &rhs ) const
                {
                    return equal( rhs) ;
                }
                ////comparison operator for inequality
                ev_bool operator!=( const ConstMapRange &rhs ) const
                {
                    return !equal( rhs) ;
                }

#ifdef __EV_Iterator_Wrapper_H__
                ////cast operator to a CConstMapIterator
                operator CConstMapIterator<T>()
                {
                    return  CConstMapIterator<T>( this->begin(), this->end());
                }
#endif

            };

        }
    }
}

#endif

