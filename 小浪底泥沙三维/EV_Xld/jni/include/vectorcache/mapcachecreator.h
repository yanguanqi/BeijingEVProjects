#ifndef MAPCACHECREATOR_H
#define MAPCACHECREATOR_H
#include "vectorcache/evvectorcache_api.h"
#include "vectorcache/mapcachetemplate.h"
#include "core/memoryallocatedobject.h"
#include "core/readwritelock.h"
namespace EarthView{namespace World{namespace Spatial{namespace Geometry{
	class IEnvelope;
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace MapCache{
	class CMapCacheParam;
	class CMapCacheListener;
	class CMapCacheTemplate;
	class CTileIndex;
	class CMapCacheThread;
	struct Task;
	class EVVECTORCACHE_API CMapCacheCreator : public EarthView::World::Core::CAllocatedObject
	{
		friend class CMapCacheThread;
	public:
		CMapCacheCreator();
		~CMapCacheCreator();
		ev_void setClipParam(const CMapCacheParam* param);
		const CMapCacheParam* getClipParam() const;
		ev_void setTempClipParam(const CMapCacheParam* param);
		const CMapCacheParam* getTempClipParam() const;
		ev_void setClipListener(const CMapCacheListener* listener);
		CMapCacheListener* getClipListener() const;
		ev_bool createETM() ;
		ev_bool createClipParmtoXMLs()const;
		ev_bool clip();
ev_private:
		CMapCacheCreator(EarthView::World::Core::CNameValuePairList* pList);
	private:
		C_DISABLE_COPY(CMapCacheCreator);
		ev_bool checkParamAndInitListener();
		ev_bool createPicPath() const;
		ev_bool getDBPath(const CTileIndex& tileIndex,EVString& dbPath) const;
		ev_bool getPicPath(const CTileIndex& tileIndex, EVString& dbPath) const;
		ev_bool writeETM() const;
		CMapCacheParam* mClipParam;
		CMapCacheParam* mTempClipParam;
		CMapCacheListener* mClipListenter;
		EarthView::World::Spatial::Geometry::IEnvelope* mValidDataEnv;
		CMapCacheTemplate* mMapCacheMode;
		ev_int32 m_MinRow, m_MaxRow, m_MinCol, m_MaxCol;
		mutable EarthView::World::Core::CReadWriteLock m_readWriteLock;
		EarthView::World::Core::CRecursiveMutex m_CurrentJobLock;
		ev_bool m_assignTaskFinish;

		//断点续切
	private:
		void startBreakPoint();
		void updateBreakPoint(const CTileRange& tileRange);
		void writeBreakFile();
		void endBreakPoint();
		void startTask(Task task);
		ev_map<int,CTileRange>mMapRange;
		ev_list<CTileRange> mvCurrentJobs;
		set<int> msReDrawLevel;/// 需要重新判断空白瓦片的级别；
		CTileRange mMaxRangeAssigned;
		CTileRange mLastMaxRangeAssigned;
		ev_uint32 getTileNum(const CTileRange& tileRange);
	public:
		ev_bool hasLastTaskUnfinishd();
		ev_void loadLastTast();
	};
}}}}
#endif