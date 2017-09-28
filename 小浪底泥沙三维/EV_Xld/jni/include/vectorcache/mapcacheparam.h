#ifndef MAPCACHEPARAM_H
#define MAPCACHEPARAM_H
#include "vectorcache/evvectorcache_api.h"
#include "core/memoryallocatedobject.h"
#include "core/xml.h"
namespace EarthView{namespace World{namespace Spatial{namespace Geometry{
	class IEnvelope;
}}}}

namespace EarthView{namespace World{namespace Spatial{namespace MapCache{
	enum EVMapCacheMode
	{
		MapCacheMode_Unknown	    =0,
		MapCacheMode_WGS84		    =1,
		MapCacheMode_Mercator	    =2,
	};
	enum EVMapCacheUnit
	{
		MapCacheUnit_Unknown	=	0,
		MapCacheUnit_Degree		=	1,
		MapCacheUnit_Radian		=	2
	};
	enum EVMapCacheOrientPosition
	{
		EVOP_Unknown	=	0,
		EVOP_LeftUp		=	1,
		EVOP_LeftDown	=	2,
		EVOP_RightUp	=	3,
		EVOP_RightDown	=	4
	};
	enum EVMapCacheDataFormat
	{
		MapCacheDataFormat_File				=	0,
		MapCacheDataFormat_Db				=	1,
	};
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace MapCache{
	
	class EVVECTORCACHE_API CMapCacheParam : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CMapCacheParam();
		~CMapCacheParam();
		ev_void setClipMap(const EVString& name);
		EVString getClipMap() const;
		ev_void setClipRect(const EarthView::World::Spatial::Geometry::IEnvelope* rect);
		EarthView::World::Spatial::Geometry::IEnvelope* getClipRect() const;
		ev_void setMinRange(ev_int16 minRange);
		ev_int16 getMinRange() const;
		ev_void setMaxRange(ev_int16 maxRange);
		ev_int16 getMaxRange() const;
		ev_void setMode(EVMapCacheMode mode) ;
		EVMapCacheMode getMode() const;
		ev_void setNodeCount(ev_int16 nodeCount);
		ev_int32 getNodeCount()const;         ///获取分布式节点的个数
		ev_void setXMLFolderPath(EVString path);
		EVString getXMLFolderPath()const;
		ev_void setCacheType(EVMapCacheDataFormat type);/// 设置切割结果的存储格式
		EVMapCacheDataFormat getMapCacheType()const;    /// 获取切割结果的存储格式
		ev_void setTilePrecision(ev_real64 precision);
		ev_real64 getTilePrecision() const;
		ev_void setClipTime(const EVString& time);
		EVString getClipTime() const;
		ev_void setFirstFolderName(const EVString& name);
		EVString getFirstFolderName() const;
		ev_void setSecondFolderName(const EVString& name);
		EVString getSecondFolderName() const;
		ev_void setTargetCatalogue(const EVString& name);
		EVString getTargetCatalogue() const;
		ev_void setRemarkText(const EVString& text);
		EVString getRemarkText() const;
		ev_bool isUpdate() const;
		ev_void setIsUpdate(ev_bool flag);
		ev_void setIsCreateETM(ev_bool flag);
		ev_bool isCreateETM() const;
		CMapCacheParam* clone() const;
		ev_bool readEtm( const EVString& etmpath );
		ev_bool fromXmlElement(EarthView
			::World::Core::CXmlElement & element);
		EarthView::World::Core::CXmlElement toXmlElement();
ev_private:
		CMapCacheParam(EarthView::World::Core::CNameValuePairList* pList);
	private:
		C_DISABLE_COPY(CMapCacheParam);
		EarthView::World::Spatial::Geometry::IEnvelope* mClipRect;  ///切割范围参照此包围盒
		ev_int16 mMinRange;
		ev_int16 mMaxRange;
		ev_int16 mNodeCount;
		EVMapCacheMode mMode;
		EVMapCacheDataFormat mType;
		ev_real64 mTilePrecision;
		ev_bool mIsCreateETM;
		ev_bool mbUpdata;
		EVString mClipTime;
		EVString mMapName;
		EVString mFirstFolderName;
		EVString mSecondFolderName;
		EVString mTargetCatalogue;
		EVString mRemarkText;
		EVString mXMLFolderPath;
	};
}}}}
#endif//MAPCACHEPARAM_H