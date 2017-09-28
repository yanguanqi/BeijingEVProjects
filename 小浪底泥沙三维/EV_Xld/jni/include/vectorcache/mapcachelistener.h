#ifndef MAPCACHELISTENER_H
#define MAPCACHELISTENER_H
#include "vectorcache/evvectorcache_api.h"
#include "core/memoryallocatedobject.h"
#include "core/readwritelock.h"
namespace EarthView{namespace World{namespace Spatial{namespace MapCache{
	class EVVECTORCACHE_API CMapCacheListener : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CMapCacheListener();
		~CMapCacheListener();
		ev_void setStop(ev_bool stop);
		ev_bool getStop() const;
		ev_void incrementFinishNum();
		ev_void setFinishNum(ev_uint32 num);
		ev_uint32 getFinishNum() const;
		ev_void setTotalNum(ev_uint32 num);
		ev_uint32 getTotalNum() const;
		ev_void setErrorMessage(const EVString& str);
		EVString getErrorMessage() const;
		ev_bool getClipFlag() const;
		ev_void setClipFlag(ev_bool flag);
		CMapCacheListener* clone() const;
		ev_void reset();
ev_private:
		CMapCacheListener(EarthView::World::Core::CNameValuePairList* pList);
	private:
		C_DISABLE_COPY(CMapCacheListener);
		ev_bool isStop;
		volatile ev_uint32 mFinishNum;
		ev_uint32 mTotalNum;
		EVString mErrorString;
		ev_bool mClipFlag;
		mutable EarthView::World::Core::CReadWriteLock m_ReadWriteLock;
	};
}}}}
#endif//MAPCACHELISTENER_H