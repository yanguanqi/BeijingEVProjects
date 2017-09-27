#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEMATRIXSET_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEMATRIXSET_H

#include "core/memoryallocatedobject.h"
#include "spatialserverclient/tilematrix.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC 空间服务数据集数据范围描述
            /// </summary>
			class COGCWebServiceBoundingBox;
			
			/// <summary>
            /// OGC WMTS 瓦片数据集类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CTileMatrixSet
				:public EarthView::World::Core::CAllocatedObject
			{
			public:

				/// <summary>
                /// 获取TileMatrixSet的标识
                /// </summary>
                /// <returns>TileMatrixSet的标识</returns>
				const EVString& getIdentifier() const;

				/// <summary>
                /// 获取支持的坐标参考系统
                /// </summary>
                /// <returns>获取支持的坐标参考系统</returns>
				const EVString& getSupportedCRS() const;


				/// <summary>
                /// 获取比例尺几何名称
                /// </summary>
                /// <returns>比例尺几何名称</returns>
				const EVString& getWellKnownScaleSet() const;

				/// <summary>
                /// 获取TileMatrix数目
                /// </summary>
                /// <returns>TileMatrix数目</returns>
				ev_uint32 getTileMatrixCount() const;

				/// <summary>
                /// 获取制定索引的TileMatrix引用
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定TileMatrix引用</returns>
				const EarthView::World::Spatial::CTileMatrix* getTileMatrixRef(_in ev_uint32 index) const;

				/// <summary>
                /// 获取制定名称的TileMatrix引用
                /// </summary>
				/// <param name="tileMatrix">名称</param>
                /// <returns>指定TileMatrix引用</returns>
				const EarthView::World::Spatial::CTileMatrix* getTileMatrixRef(_in const EVString& tileMatrix) const;
				
				/// <summary>
                /// 获取数据理论范围
                /// </summary>
                /// <returns>数据理论范围</returns>
				const EarthView::World::Spatial::COGCWebServiceBoundingBox* getBoundingBoxRef() const;

				/// <summary>
                /// 获取标题数
                /// </summary>
                /// <returns>标题数</returns>
				ev_uint32 getTitleCount();

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
				ev_uint32 getAbstractCount();

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
				ev_uint32 getKeywordCount();

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
				~CTileMatrixSet();
			protected:
				CTileMatrixSet();
				CTileMatrixSet(_in const CTileMatrixSet& tilematrixset);
			ev_private:
				CTileMatrixSet(_in EarthView::World::Core::CNameValuePairList* pList);	
			private:
				///TileMatrixSet标识
				EVString mstrIdentifier;
				///描述列表
				vector<EVString> mlistAbstract;
				///标题列表
				vector<EVString> mlistTitle;
				///关键词列表
				vector<EVString> mlistKeyword;
				///支持的坐标系
				EVString mstrSupportedCRS;

				EVString mstrWellKnownScaleSet;
				///TileMatrix数
				ev_uint32 mnCount;
				///TileMatrix列表
				vector<EarthView::World::Spatial::CTileMatrix*> mlistTileMatrix;
				///数据理论范围
				EarthView::World::Spatial::COGCWebServiceBoundingBox* mpBoundingBox;

				friend class CWMTSLayerInfo;
				friend class CWMTSServerInfo;
			};
		}
	}
}
#endif


