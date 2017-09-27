#pragma once

#include "tileutility/tileutilityexports.h"
#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
			/// 解压7z压缩数据类
			/// </summary>
			class EV_TILEUTILITY_DLL CDecode : public EarthView::World::Core::CBaseObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				CDecode();
ev_private:
				CDecode(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 解压7z压缩文件
				/// </summary>
				/// <param name="instream_7z">7z压缩文件的内存流智能指针</param>                
				/// <returns>解压出文件对应的内存流的智能指针,文件名通过getName获得</returns>
				static EarthView::World::Core::MemoryDataStreamPtr decode_7z(_in EarthView::World::Core::MemoryDataStreamPtr instream_7z);
				/// <summary>
				/// 解压7z压缩文件
				/// </summary>
				/// <param name="instream_7z">7z压缩文件的内存流指针</param>                
				/// <returns>解压出文件对应的内存流的智能指针,文件名通过getName获得</returns>
				static EarthView::World::Core::MemoryDataStreamPtr decode_7z(_in EarthView::World::Core::CMemoryDataStream* instream_7z);

				/// <summary>
				/// 解压7z压缩流
				/// </summary>
				/// <param name="instream_7z">7z压缩流的内存流智能指针</param>                
				/// <returns>解压结果对应的内存流的智能指针</returns>
				static EarthView::World::Core::MemoryDataStreamPtr decode_7z_stream(_in EarthView::World::Core::MemoryDataStreamPtr instream_7z);
				/// <summary>
				/// 解压7z压缩流
				/// </summary>
				/// <param name="instream_7z">7z压缩流的内存流指针</param>                
				/// <returns>解压结果对应的内存流的智能指针</returns>
				static EarthView::World::Core::MemoryDataStreamPtr decode_7z_stream(_in EarthView::World::Core::CMemoryDataStream* instream_7z);


				
			public:
				/// <summary>
				/// 压缩成7z流
				/// </summary>
				/// <param name="instream">原始数据</param>                
				/// <returns>压缩后的数据</returns>
				static EarthView::World::Core::MemoryDataStreamPtr encode_7z_archive(_in EarthView::World::Core::MemoryDataStreamPtr instream);			
				
				/// <summary>
				/// 解压7z压缩流
				/// </summary>
				/// <param name="instream_7z">7z压缩流的内存流智能指针</param>                
				/// <returns>解压结果对应的内存流的智能指针</returns>
				static EarthView::World::Core::MemoryDataStreamPtr decode_7z_archive(_in EarthView::World::Core::MemoryDataStreamPtr instream_7z);
				
				/// <summary>
				/// 判断所给流是否为7z内存流
				/// </summary>
				/// <param name="instream_7z">原始数据</param>                
				/// <returns></returns>
				static ev_bool is7zMemoryArchive(EarthView::World::Core::MemoryDataStreamPtr instream_7z);		

				/// <summary>
				/// 压缩成7z流，只初始化一次7z的内存，下次再压缩不再申请内存，但也不释放，需要显示调用clearMemForBatch释放
				/// </summary>
				/// <param name="instream">原始数据</param>                
				/// <returns>压缩后的数据</returns>
				static EarthView::World::Core::MemoryDataStreamPtr encode_7z_archive_ForBatch(_in EarthView::World::Core::MemoryDataStreamPtr instream);	

				/// <summary>
				/// 释放初始内存
				/// </summary>          
				/// <returns></returns>
				static void clearMemForBatch();

			private:
				static EarthView::World::Core::MemoryDataStreamPtr encode_7z_archive(_in EarthView::World::Core::CMemoryDataStream* instream);
				static EarthView::World::Core::MemoryDataStreamPtr decode_7z_archive(_in EarthView::World::Core::CMemoryDataStream* instream_7z);

				static ev_bool is7zMemoryArchive(EarthView::World::Core::CMemoryDataStream* instream_7z);
			};

		}
	}
}

