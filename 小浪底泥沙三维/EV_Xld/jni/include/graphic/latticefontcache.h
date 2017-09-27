#ifndef __EV_FONTCACHE_H__
#define __EV_FONTCACHE_H__
#pragma once
#include "core/global.h"
#include "graphic/graphic_config.h"



namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{	
			struct FontLattice;
			class EV_GRAPHIC_DLL CLatticeFontCache:public EarthView::World::Core::CBaseObject
			{
ev_private:
				CLatticeFontCache(_in EarthView::World::Core::CNameValuePairList *pList);
				/// <summary>
				/// 添加字体点阵数据
				/// </summary>
				/// <param name="fontLattice">点阵数据指针</param>
				void addFontLattice(FontLattice* ref_fontLattice,const ev_int64& key);
				/// <summary>
				/// 查找字体点阵数据
				/// </summary>
				/// <returns>点阵数据指针</returns>
				FontLattice* findFontLattice(const ev_int64& key);

				typedef map<ev_int64,FontLattice*> LatticeMap;
				typedef LatticeMap::const_iterator LatticeItor;				
			private:
				friend class CLatticeFontManager;
				ev_char*        mFCachePath;
				ev_uint32		mMaxLatticeCounts;
				ev_size_t       mAppendedCounts;
				LatticeMap		mData;
				EV_MUTEX(mFontCacheMutex);
				static EarthView::World::Graphic::CLatticeFontCache* mDefualtCache;
			public:
				/// <summary>
				/// 获取默认缓存对象指针
				/// </summary>
				/// <param name="filePath"></param>
				/// <returns>FontLattice*</returns>
				static EarthView::World::Graphic::CLatticeFontCache* getDefaultCache();
				/// <summary>
				/// 从文件加载字体点阵缓存文件
				/// </summary>
				/// <param name="filePath"></param>
				/// <returns>ev_bool</returns>
				ev_bool loadCache(ev_char* filePath);
				/// <summary>
				/// 将缓存文件另存为
				/// </summary>
				/// <param name="filePath"></param>
				/// <returns>ev_bool</returns>
				ev_bool saveCacheAs(ev_char* filePath);
				/// <summary>
				/// 更新缓存文件
				/// </summary>
				/// <param name=></param>
				/// <returns>ev_bool</returns>				
				ev_bool updateCacheFile();
				/// <summary>
				/// 设置缓存所能容纳的点阵最大个数
				/// </summary>
				/// <param name="maxLatticeCounts"></param>
				/// <returns>ev_bool</returns>
				ev_bool setMaxLatticeCounts(ev_uint32 maxLatticeCounts);
				/// <summary>
				/// 获取缓存数据大小(缓存所包含的点阵数码)
				/// </summary>
				/// <param name=></param>
				/// <returns>ev_size_t</returns>
				ev_size_t getCacheSize() const;
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=></param>
				/// <returns></returns>
				CLatticeFontCache(ev_char * filePath);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="maxLatticeCounts"></param>
				/// <returns></returns>
				CLatticeFontCache(ev_char * filePath,ev_size_t maxLatticeCounts);
				/// <summary>
				/// 清空缓存
				/// </summary>
				ev_void clear();


				~CLatticeFontCache();

			};
		}
	}
}


#endif

