#ifndef MAPCACHETEMPLATE_H
#define MAPCACHETEMPLATE_H
#include "vectorcache/evvectorcache_api.h"
#include "vectorcache/mapcacheparam.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
namespace EarthView{namespace World{namespace Spatial{namespace Geometry{
	class IEnvelope;
	class ISpatialReference;
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace MapCache{
	class CTileIndex : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CTileIndex() : m_level(-1),m_row(-1), m_col(-1) {}
		CTileIndex(ev_int32 level,ev_int32 row,ev_int32 col) : m_level(level),m_row(row), m_col(col) {}
		inline bool operator==(const CTileIndex& index)
		{
			return m_level == index.m_level
				&& m_row == index.m_row
				&& m_col == index.m_col;
		}
		inline bool operator!=(const CTileIndex& index)
		{
			return !(*this == index);
		}
		ev_bool isValid() const;
		ev_int32 m_level;
		ev_int32 m_row;
		ev_int32 m_col;
	};
	class CTileRange : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CTileRange() : m_level(-1),m_minRow(-1),m_maxRow(-1),m_minCol(-1),m_maxCol(-1){}
		CTileRange(ev_int32 level,ev_int32 minRow,ev_int32 maxRow,ev_int32 minCol,ev_int32 maxCol):
		 m_level(level),m_minRow(minRow),m_maxRow(maxRow),m_minCol(minCol),m_maxCol(maxCol){}
		ev_bool isIntersect(const CTileRange& tileRange);
		ev_bool isValid() const;
		ev_int32 m_level;
		ev_int32 m_minRow;
		ev_int32 m_maxRow;
		ev_int32 m_minCol;
		ev_int32 m_maxCol;
		bool operator==(const CTileRange& otherRangge) const
		{
			return m_level==otherRangge.m_level
			&& m_minRow==otherRangge.m_minRow
				&& m_minCol==otherRangge.m_minCol
				&& m_maxRow==otherRangge.m_maxRow
				&& m_maxCol==otherRangge.m_maxCol;
		} 
	};
	class CTileLevelInfo : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CTileLevelInfo() : mStartLevel(0), mEndLevel(0),mBaseLevel(0){}
		ev_int32 mStartLevel;
		ev_int32 mEndLevel;
		ev_int32 mBaseLevel;
	};
	class CTileInfo : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CTileInfo() {}
		CTileIndex m_TileIndex;
		EarthView::World::Core::MemoryDataStreamPtr m_TileDataStream;
		bool operator==(const CTileInfo& otherIndex) const
		{
			return m_TileIndex.m_level==otherIndex.m_TileIndex.m_level
				&& m_TileIndex.m_row==otherIndex.m_TileIndex.m_row
				&& m_TileIndex.m_col==otherIndex.m_TileIndex.m_col;
		}
		 bool operator>(const CTileInfo& otherIndex) const
		{
			return m_TileIndex.m_level>otherIndex.m_TileIndex.m_level||
				(m_TileIndex.m_level==otherIndex.m_TileIndex.m_level&&m_TileIndex.m_row<otherIndex.m_TileIndex.m_row)||
				(m_TileIndex.m_level==otherIndex.m_TileIndex.m_level&&m_TileIndex.m_row==otherIndex.m_TileIndex.m_row
				&&m_TileIndex.m_col<otherIndex.m_TileIndex.m_col);
		}
	};
	class  CMapCacheTemplate : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CMapCacheTemplate();
		CMapCacheTemplate(EVMapCacheMode mode);
		~CMapCacheTemplate();
		ev_void setMode(EVMapCacheMode mode);
		EVMapCacheMode getMode() const;

		ev_uint32 getTileRankCount() const;
		const CTileLevelInfo* getTileRankInfo(ev_uint32 index) const;

		ev_int32 getLowestLevel() const;
		ev_int32 getHighestLevel() const;
		ev_uint32 getLevelCount() const;
		EVMapCacheUnit getMapCacheUnit() const;
		ev_int32 getLevelRank(ev_int32 level) const;
		EVMapCacheOrientPosition getOrientPosition() const;
		ev_uint32 getTilePixelSize() const;
		ev_real64 getLevelTileSize(ev_int32 level) const;
		const EarthView::World::Spatial::Geometry::ISpatialReference* getModeReference() const;
		const EarthView::World::Spatial::Geometry::IEnvelope* getGlobalEnv() const;
		ev_bool getTileRange(const EarthView::World::Spatial::Geometry::IEnvelope* pEnv,
							ev_int32 level,
							CTileRange& tileRange);
		ev_void clearLevelInfo();
		ev_void insertLevelInfo(CTileLevelInfo info);
		ev_bool getTileEnvelope(const CTileIndex& tileIndex,
								EarthView::World::Spatial::Geometry::IEnvelope*& pEnv) const;
		ev_bool getLevelRowAndColCount(ev_int32 level, ev_int32& row, ev_int32& col) const;
	private:
		C_DISABLE_COPY(CMapCacheTemplate);
		ev_bool validLevel(ev_int32 level) const;
		EVMapCacheMode mTemplateMode;
		EVMapCacheUnit mTemplateUnit;
		EVMapCacheOrientPosition mOrientPosition;

		ev_real64 mFirstTileSize;
		ev_uint32 mTilePixelSize;
		ev_uint32 mMaxLevelCount;
		ev_int32 mLowestRowSize;
		ev_int32 mLowestColSize;
		ev_int32 mLowestLevel;
		ev_int32 mHighestLevel;
		EarthView::World::Spatial::Geometry::IEnvelope* mGlobalEnv;
		EarthView::World::Spatial::Geometry::ISpatialReference* mSpatialReference;
		vector<CTileLevelInfo> mListLevelInfo;
	};
}}}}
#endif