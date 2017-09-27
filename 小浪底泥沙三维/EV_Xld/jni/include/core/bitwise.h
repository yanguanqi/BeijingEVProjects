#ifndef _Bitwise_H__
#define _Bitwise_H__
#pragma once

#include "core/global.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            /** Class for manipulating bit patterns.
            */
            class CBitwise
            {
            public:
                /** Returns the most significant bit set in a value.
                */
                static FORCEINLINE ev_uint32 mostSignificantBitSet(ev_uint32 value)
                {
                    ev_uint32 result = 0;
                    while (value != 0)
                    {
                        ++result;
                        value >>= 1;
                    }
                    return result - 1;
                }
                /** Returns the closest power-of-two number greater or equal to value.
                    @note 0 and 1 are powers of two, so
                        firstPO2From(0)==0 and firstPO2From(1)==1.
                */
                static FORCEINLINE ev_uint32 firstPO2From(ev_uint32 n)
                {
                    --n;
                    n |= n >> 16;
                    n |= n >> 8;
                    n |= n >> 4;
                    n |= n >> 2;
                    n |= n >> 1;
                    ++n;
                    return n;
                }
                /** Determines whether the number is power-of-two or not.
                    @note 0 and 1 are tread as power of two.
                */
                template<typename T>
                static FORCEINLINE ev_bool isPO2(T n)
                {
                    return (n & (n - 1)) == 0;
                }
                /** Returns the number of bits a pattern must be shifted right by to
                    remove right-hand zeros.
                */
                template<typename T>
                static FORCEINLINE ev_uint32 getBitShift(T mask)
                {
                    if (mask == 0)
                        return 0;
                    ev_uint32 result = 0;
                    while ((mask & 1) == 0)
                    {
                        ++result;
                        mask >>= 1;
                    }
                    return result;
                }
                /** Takes a value with a given src bit mask, and produces another
                    value with a desired bit mask.
                    @remarks
                        This routine is useful for colour conversion.
                */
                template<typename SrcT, typename DestT>
                static inline DestT convertBitPattern(SrcT srcValue, SrcT srcBitMask, DestT destBitMask)
                {
                    /// Mask off irrelevant source value bits (if any)
                    srcValue = srcValue & srcBitMask;
                    /// Shift source down to bottom of DWORD
                    const ev_uint32 srcBitShift = getBitShift(srcBitMask);
                    srcValue >>= srcBitShift;
                    /// Get max value possible in source from srcMask
                    const SrcT srcMax = srcBitMask >> srcBitShift;
                    /// Get max available in dest
                    const ev_uint32 destBitShift = getBitShift(destBitMask);
                    const DestT destMax = destBitMask >> destBitShift;
                    /// Scale source value into destination, and shift back
                    DestT destValue = (srcValue * destMax) / srcMax;
                    return (destValue << destBitShift);
                }
                /**
                 * Convert N bit colour channel value to P bits. It fills P bits with the
                 * bit pattern repeated. (this is /((1<<n)-1) in fixed point)
                 */
                static inline ev_uint32 fixedToFixed(ev_uint32 value, ev_uint32 n, ev_uint32 p)
                {
                    if(n > p)
                    {
                        /// Less bits required than available; this is easy
                        value >>= n - p;
                    }
                    else if(n < p)
                    {
                        /// More bits required than are there, do the fill
                        /// Use old fashioned division, probably better than a loop
                        if(value == 0)
                            value = 0;
                        else if(value == (static_cast<ev_uint32>(1) << n) - 1)
                            value = (1 << p) - 1;
                        else    value = value * (1 << p) / ((1 << n) - 1);
                    }
                    return value;
                }
                /**
                 * Convert floating point colour channel value between 0.0 and 1.0 (otherwise clamped)
                 * to integer of a certain number of bits. Works for any value of bits between 0 and 31.
                 */
                static inline ev_uint32 floatToFixed(const ev_real32 value, const ev_uint32 bits)
                {
                    if(value <= 0.0f) return 0;
                    else if (value >= 1.0f) return (1 << bits) - 1;
                    else return (ev_uint32)(value * (1 << bits));
                }
                /**
                 * Fixed point to ev_real32
                 */
                static inline ev_real32 fixedToFloat(ev_uint32 value, ev_uint32 bits)
                {
                    return (ev_real32)value / (ev_real32)((1 << bits) - 1);
                }
                /**
                 * Write a n*8 bits integer value to memory in native endian.
                 */
                static inline void intWrite(void *dest, const ev_int32 n, const ev_uint32 value)
                {
                    switch(n)
                    {
                    case 1:
                        ((ev_uint8 *)dest)[0] = (ev_uint8)value;
                        break;
                    case 2:
                        ((ev_uint16 *)dest)[0] = (ev_uint16)value;
                        break;
                    case 3:
#if EV_ENDIAN == EV_ENDIAN_BIG
                        ((ev_uint8 *)dest)[0] = (ev_uint8)((value >> 16) & 0xFF);
                        ((ev_uint8 *)dest)[1] = (ev_uint8)((value >> 8) & 0xFF);
                        ((ev_uint8 *)dest)[2] = (ev_uint8)(value & 0xFF);
#else
                        ((ev_uint8 *)dest)[2] = (ev_uint8)((value >> 16) & 0xFF);
                        ((ev_uint8 *)dest)[1] = (ev_uint8)((value >> 8) & 0xFF);
                        ((ev_uint8 *)dest)[0] = (ev_uint8)(value & 0xFF);
#endif
                        break;
                    case 4:
                        ((ev_uint32 *)dest)[0] = (ev_uint32)value;
                        break;
                    }
                }
                /**
                 * Read a n*8 bits integer value to memory in native endian.
                 */
                static inline ev_uint32 intRead(const void *src, ev_int32 n)
                {
                    switch(n)
                    {
                    case 1:
                        return ((ev_uint8 *)src)[0];
                    case 2:
                        return ((ev_uint16 *)src)[0];
                    case 3:
#if EV_ENDIAN == EV_ENDIAN_BIG
                        return ((ev_uint32)((ev_uint8 *)src)[0] << 16) |
                               ((ev_uint32)((ev_uint8 *)src)[1] << 8) |
                               ((ev_uint32)((ev_uint8 *)src)[2]);
#else
                        return ((ev_uint32)((ev_uint8 *)src)[0]) |
                               ((ev_uint32)((ev_uint8 *)src)[1] << 8) |
                               ((ev_uint32)((ev_uint8 *)src)[2] << 16);
#endif
                    case 4:
                        return ((ev_uint32 *)src)[0];
                    }
                    return 0; 			/// ?
                }
                /** Convert a float32 to a float16 (NV_half_float)
                 	Courtesy of OpenEXR
                */
                static inline ev_uint16 floatToHalf(ev_real32 i)
                {
                    union
                    {
                        ev_real32 f;
                        ev_uint32 i;
                    } v;
                    v.f = i;
                    return floatToHalfI(v.i);
                }
                /** Converts ev_real32 in ev_uint32 format to a a half in ev_uint16 format
                */
                static inline ev_uint16 floatToHalfI(ev_uint32 i)
                {
                    register ev_int32 s =  (i >> 16) & 0x00008000;
                    register ev_int32 e = ((i >> 23) & 0x000000ff) - (127 - 15);
                    register ev_int32 m =   i        & 0x007fffff;

                    if (e <= 0)
                    {
                        if (e < -10)
                        {
                            return 0;
                        }
                        m = (m | 0x00800000) >> (1 - e);

                        return static_cast<ev_uint16>(s | (m >> 13));
                    }
                    else if (e == 0xff - (127 - 15))
                    {
                        if (m == 0) 			/// Inf
                        {
                            return static_cast<ev_uint16>(s | 0x7c00);
                        }
                        else    			/// NAN
                        {
                            m >>= 13;
                            return static_cast<ev_uint16>(s | 0x7c00 | m | (m == 0));
                        }
                    }
                    else
                    {
                        if (e > 30) 			/// Overflow
                        {
                            return static_cast<ev_uint16>(s | 0x7c00);
                        }

                        return static_cast<ev_uint16>(s | (e << 10) | (m >> 13));
                    }
                }

                /**
                 * Convert a float16 (NV_half_float) to a float32
                 * Courtesy of OpenEXR
                 */
                static inline ev_real32 halfToFloat(ev_uint16 y)
                {
                    union
                    {
                        ev_real32 f;
                        ev_uint32 i;
                    } v;
                    v.i = halfToFloatI(y);
                    return v.f;
                }
                /** Converts a half in ev_uint16 format to a ev_real32
                 	in ev_uint32 format
                 */
                static inline ev_uint32 halfToFloatI(ev_uint16 y)
                {
                    register ev_int32 s = (y >> 15) & 0x00000001;
                    register ev_int32 e = (y >> 10) & 0x0000001f;
                    register ev_int32 m =  y        & 0x000003ff;

                    if (e == 0)
                    {
                        if (m == 0) 			/// Plus or minus zero
                        {
                            return s << 31;
                        }
                        else 			/// Denormalized number -- renormalize it
                        {
                            while (!(m & 0x00000400))
                            {
                                m <<= 1;
                                e -=  1;
                            }

                            e += 1;
                            m &= ~0x00000400;
                        }
                    }
                    else if (e == 31)
                    {
                        if (m == 0) 			/// Inf
                        {
                            return (s << 31) | 0x7f800000;
                        }
                        else 			/// NaN
                        {
                            return (s << 31) | 0x7f800000 | (m << 13);
                        }
                    }

                    e = e + (127 - 15);
                    m = m << 13;

                    return (s << 31) | (e << 23) | m;
                }


            };
            /** @} */
            /** @} */
        }
    }
}

#endif
