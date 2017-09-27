#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEMATRIX_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEMATRIX_H

#include "core/memoryallocatedobject.h"
#include "spatialserverclient/spatialserverclientexports.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMTS 瓦片层描述类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CTileMatrix :
				public EarthView::World::Core::CAllocatedObject
			{
			ev_private:
				CTileMatrix(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				
				/// <summary>
                /// 获取TileMatrix的标识
                /// </summary>
                /// <returns>TileMatrix的标识</returns>
				const EVString& getIdentifier() const;
		
				/// <summary>
                /// 获取比例尺分母值
                /// </summary>
                /// <returns>比例尺分母值</returns>
				ev_real64 getScaleDenominator() const;

				/// <summary>
                /// 获取左上角坐标值
                /// </summary>
				/// <param name="x">左上角x值</param>
				/// <param name="y">左上角y值</param>
                /// <returns></returns>
				ev_void getTopLeftCorner(_out ev_real64& left,_out ev_real64& top) const;
				
				/// <summary>
                /// 获取数据矩阵宽度
                /// </summary>
                /// <returns>数据矩阵宽度</returns>
				ev_uint32 getMatrixWidth() const;
				
				/// <summary>
                /// 获取数据矩阵高度
                /// </summary>
                /// <returns>数据矩阵高度</returns>
				ev_uint32 getMatrixHeight() const;

				/// <summary>
                /// 获取瓦片宽度
                /// </summary>
                /// <returns>瓦片宽度</returns>
				ev_uint32 getTileWidth() const;

				
				/// <summary>
                /// 获取瓦片高度
                /// </summary>
                /// <returns>瓦片高度</returns>
				ev_uint32 getTileHeight() const;

				/// <summary>
                /// 获取标题数
                /// </summary>
                /// <returns>标题数</returns>
				ev_uint32 getTitleCount() const;

				/// <summary>
                /// 获取制定索引的标题
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定标题</returns>
				const EVString getTitle(_in ev_uint32 index) const;

				/// <summary>
                /// 获取描述数
                /// </summary>
                /// <returns>描述数目</returns>
				ev_uint32 getAbstractCount() const;

				/// <summary>
                /// 获取制定索引的描述
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定描述</returns>
				const EVString getAbstract(_in ev_uint32 index) const;

				/// <summary>
                /// 获取关键字数
                /// </summary>
                /// <returns>关键字</returns>
				ev_uint32 getKeywordCount() const;

				/// <summary>
                /// 获取制定索引的关键字
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定关键字</returns>
				const EVString getKeyword(_in ev_uint32 index) const;
			
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTileMatrix();
			private:
				CTileMatrix();
				CTileMatrix(_in const CTileMatrix& tilematrix);
			private:
				///TileMatrix标识
				EVString mstrIdentifier;
				///标题列表
				vector<EVString> mlistTitle;
				///描述列表
				vector<EVString> mlistAbstract;
				///关键词列表
				vector<EVString> mlistKeyword;
				///比例尺分母
				ev_real64 mdfScaleDenominator;
				///实际范围左上角值
				ev_real64 mdfTopLeftCorner_Top;
				///实际范围左上角值
				ev_real64 mdfTopLeftCorner_Left;
				///瓦片最大列数
				ev_uint32 mnMatrixWidth;
				///瓦片最大行数
				ev_uint32 mnMatrixHeight;
				///矩阵宽度
				ev_uint32 mnTileWidth;
				///矩阵高度
				ev_uint32 mnTileHeight;

				friend class CTileMatrixSet;
				friend class CWMTSServerInfo;
			};
		}
	}
}
#endif


