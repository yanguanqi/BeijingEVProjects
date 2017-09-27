#ifndef EARTHVIEW_WORLD_SPATIAL_CNUMBERREADER_H
#define EARTHVIEW_WORLD_SPATIAL_CNUMBERREADER_H

#include "core/global.h"
#include "core/platform.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class CNumberReader
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 获取大小尾正确的uint16型数值
                /// </summary>
				/// <param name="value">从文本中读取的ev_uint16型数值</param>
				/// <param name="byteOrder">文本存储时所用的大小尾</param>
                /// <returns></returns>
				static ev_void getCorrectUInt16(_inout ev_uint16& value, _in ev_int32 byteOrder)
				{
					ev_int32 localOrder;
					if(EV_ENDIAN == EV_ENDIAN_LITTLE)
						localOrder = 1;
					else
						localOrder = 0;

					if(byteOrder != localOrder)
					{
						ev_char* pNum = (ev_char*)(&value);
						ev_char temp;
						temp = pNum[0];
						pNum[0] = pNum[1];
						pNum[1] = temp;
					}
					else
						return;
				}
				/// <summary>
                /// 获取大小尾正确的ev_int32型数值
                /// </summary>
				/// <param name="value">从文本中读取的ev_int32型数值</param>
				/// <param name="byteOrder">文本存储时所用的大小尾</param>
                /// <returns></returns>
				static ev_void getCorrectInt32(_inout ev_int32& value, _in ev_int32 byteOrder)
				{
					ev_int32 localOrder;
					if(EV_ENDIAN == EV_ENDIAN_LITTLE)
						localOrder = 1;
					else
						localOrder = 0;

					if(byteOrder != localOrder)
					{
						ev_char* pNum = (ev_char*)(&value);

						ev_char temp[4];
						temp[0] = pNum[3];
						temp[1] = pNum[2];
						temp[2] = pNum[1];
						temp[3] = pNum[0];

						memcpy((ev_char*)pNum,temp,4);
					}
					else
					{
						return;
					}
				}
				/// <summary>
                /// 获取大小尾正确的ev_real64型数值
                /// </summary>
				/// <param name="value">从文本中读取的ev_real64型数值</param>
				/// <param name="byteOrder">文本存储时所用的大小尾</param>
                /// <returns></returns>
				static ev_void getCorrectReal64(_inout ev_real64& value, _in ev_int32 byteOrder)
				{
					ev_int32 localOrder;
					if(EV_ENDIAN == EV_ENDIAN_LITTLE)
						localOrder = 1;
					else
						localOrder = 0;

					if(byteOrder != localOrder)
					{
						ev_char* pNum = (ev_char*)(&value);

						ev_char temp[8];
						temp[0] = pNum[7];
						temp[1] = pNum[6];
						temp[2] = pNum[5];
						temp[3] = pNum[4];
						temp[4] = pNum[3];
						temp[5] = pNum[2];
						temp[6] = pNum[1];
						temp[7] = pNum[0];
						memcpy((ev_char*)pNum,temp,8);
					}
					else
					{
						return;
					}
				
				}
			};

		}
	}
}
#endif
