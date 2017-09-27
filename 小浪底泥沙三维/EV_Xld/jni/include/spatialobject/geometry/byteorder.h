#ifndef EARTHIVEW_WORLD_SPATIAL_GEOMETRY_UTILITY_BYTEORDER_H
#define EARTHIVEW_WORLD_SPATIAL_GEOMETRY_UTILITY_BYTEORDER_H

#include "core/global.h"
#include "core/datastream.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Geometry{
				namespace Utility{
					enum EVBitOrderType
					{
						BOT_BIGENDIAN_XDR  = 0,
						BOT_LITTLEENDIAN_NDR = 1
					};

#if (1<<24)&0xff // big
#define BIT_ORDER 0
#else // little
#define BIT_ORDER 1
#endif

					inline EVBitOrderType BitOrder()
					{
						return (1<<24)&0xff ? BOT_BIGENDIAN_XDR : BOT_LITTLEENDIAN_NDR;
					}

					inline ev_void convertDouble(ev_real64 & value,EVBitOrderType order)
					{
						if(order != BIT_ORDER)
						{
						//	ev_char* buf = reinterpret_cast<ev_char*>(&value);

						//	ev_uint64 nValue;

						//	if(order == BOT_BIGENDIAN_XDR)
						//	{
						//		nValue =(ev_uint64) (buf[0]) << 56
						//			| (ev_uint64) (buf[1] & 0xff) << 48
						//			| (ev_uint64) (buf[2] & 0xff) << 40
						//			| (ev_uint64) (buf[3] & 0xff) << 32
						//			| (ev_uint64) (buf[4] & 0xff) << 24
						//			| (ev_uint64) (buf[5] & 0xff) << 16
						//			| (ev_uint64) (buf[6] & 0xff) <<  8
						//			| (ev_uint64) (buf[7] & 0xff);
						//	}
						//	else
						//	{
						//		nValue =(ev_uint64) (buf[7]) << 56
						//			| (ev_uint64) (buf[6] & 0xff) << 48
						//			| (ev_uint64) (buf[5] & 0xff) << 40
						//			| (ev_uint64) (buf[4] & 0xff) << 32
						//			| (ev_uint64) (buf[3] & 0xff) << 24
						//			| (ev_uint64) (buf[2] & 0xff) << 16
						//			| (ev_uint64) (buf[1] & 0xff) <<  8
						//			| (ev_uint64) (buf[0] & 0xff);
						//	}

						//	memcpy(reinterpret_cast<ev_char*>(&value),&nValue,sizeof(ev_real64));

							ev_uint64* nValue = (ev_uint64*)(&value);

							*nValue = ((ev_uint64)((*nValue) & 0x00000000000000ff) << 56) |
									  ((ev_uint64)((*nValue) & 0x000000000000ff00) << 40) |
									  ((ev_uint64)((*nValue) & 0x0000000000ff0000) << 24) |
									  ((ev_uint64)((*nValue) & 0x00000000ff000000) << 8)  |
									  ((ev_uint64)((*nValue) & 0x000000ff00000000) >> 8)  |
									  ((ev_uint64)((*nValue) & 0x0000ff0000000000) >> 24) |
									  ((ev_uint64)((*nValue) & 0x00ff000000000000) >> 40) |
									  ((ev_uint64)((*nValue) & 0xff00000000000000) >> 56);
						}						
					}

					inline ev_void convertUint32(ev_uint32 & value,EVBitOrderType order)
					{
						if(order != BIT_ORDER)
						{
							//ev_char* buf = reinterpret_cast<ev_char*>(&value);

							//if(order == BOT_BIGENDIAN_XDR)
							//{
							//	value = ((ev_uint32) (buf[0]&0xff) <<24) |
							//			((ev_uint32) (buf[1]&0xff) <<16) |
							//			((ev_uint32) (buf[2]&0xff) <<8) |
							//			((ev_uint32) (buf[3]&0xff) );
							//}
							//else
							//{
							//	value = ((ev_uint32) (buf[3]&0xff) <<24) |
							//			((ev_uint32) (buf[2]&0xff) <<16) |
							//			((ev_uint32) (buf[1]&0xff) <<8) |
							//			((ev_uint32) (buf[0]&0xff) );
							//}
							value = (value & 0x000000ff) << 24 |
								    (value & 0x0000ff00) <<  8 |
									(value & 0x00ff0000) >>  8 |
									(value & 0xff000000) >> 24;
						}
					}

					inline ev_void convertUint16(ev_uint16 & value,EVBitOrderType order)
					{
						if(order != BIT_ORDER)
						{
							//ev_char* buf = reinterpret_cast<ev_char*>(&value);

							//if(order == BOT_BIGENDIAN_XDR)
							//{
							//	value = ((ev_uint32) (buf[0]&0xff) <<8) |
							//			((ev_uint32) (buf[1]&0xff) );
							//}
							//else
							//{
							//	value = ((ev_uint32) (buf[1]&0xff) <<8) |
							//			((ev_uint32) (buf[0]&0xff) );
							//}

							value = ((ev_uint16)(value & 0x00ff) << 8) |
								    ((ev_uint16)(value & 0xff00) >> 8);
						}
					}
				}
			}
		}
	}
}

#endif
