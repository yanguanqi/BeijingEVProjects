#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBQBILDEF_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_OBQBILDEF_H

#include "spatial3dengine/spatial3denginecomdef.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

				class BILStruct;

				class EV_Spatial3DEngine_DLL CMeshxUserData : public CFeatureUserData
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMeshxUserData();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CMeshxUserData();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshxUserData(EarthView::World::Core::CNameValuePairList* pList);

					/// <summary>
					/// 复制用户数据
					/// </summary>
					virtual _extfree EarthView::World::Graphic::CMovableObject::CUserData* clone();
				public:
					ev_uint64 mObjectHandle;
				};

				class EV_Spatial3DEngine_DLL CBILCache : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBILCache(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CBILCache(ev_int32 pointPerSide);

					virtual ~CBILCache();

					ev_bool getBILStruct(const EVString& bilName,BILStruct* bil);

					ev_void addCache(const EVString& bilName,BILStruct* bil);

				protected:
					ev_int32 mCacheCount;
					ev_int32 mPointPerSide;
					ev_vector<BILStruct*> mCache;
					ev_vector<ev_int32> mNotUsedId;
					struct CacheName{
						EVString mName;
						ev_int32 mIndex;
					};
					ev_list<CacheName> mCacheName;

					EV_MUTEX(mMutex)
				};

				class EV_Spatial3DEngine_DLL BILStruct : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					BILStruct(_in EarthView::World::Core::CNameValuePairList *pList);
				
				public:
					BILStruct(ev_int32 pointNumberPerSide);

					BILStruct& operator= (const BILStruct& rhs);

					virtual ~BILStruct();
				public:
					ev_bool findLegalityData(ev_real32* data,ev_real32& height,ev_bool& allNoData);

					ev_real32 getHeight(ev_real32 x, ev_real32 z);

					ev_bool readBIL(const EVString& desFolder,ev_int32 level,ev_real32 x ,ev_real32 z,ev_real32 zeroStartX,ev_real32 zeroStartZ,ev_int32 startQuadLevel,ev_real32 zeroTileWidth,ev_int32 zeroLevelRowCount,ev_int32 zeroLevelColCount,CBILCache* cache,BILStruct& bilStruct);

				public:
					ev_real32* mData;
					ev_int32 mLevel;
					ev_int32 mRow;
					ev_int32 mCol;
					ev_real32 mStartX;
					ev_real32 mStartZ;
					ev_real32 mTileWidth;
					ev_int32 mPointNumberPerSide;
				};
			}
		}
	}
}

#endif
