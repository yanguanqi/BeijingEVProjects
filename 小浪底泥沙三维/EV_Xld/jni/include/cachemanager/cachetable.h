#ifndef EV_CACHEDB_TABLE___H
#define EV_CACHEDB_TABLE___H
#include "cachemanager/cachemanagerglobal.h"
#include "cachemanager/cachestrategy.h"
namespace EarthView {
	namespace World{
		namespace Core{
			namespace Database {
				class CSqlDatabase;
			}}}}

#define  LAST_USED_TAG_FIELD_NAME "last_used_time"
#define  LAST_USED_TAG_FIELD_NAME_STRING  EVString(LAST_USED_TAG_FIELD_NAME)

namespace EarthView{
	namespace World{
		namespace Spatial{
			class EV_CACHEMANAGER_DLL CacheTable : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CacheTable();

				virtual ~CacheTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& tableName_1);
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& tableName_1, const EVString& tableName_2);
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& tableName_1, const EVString& tableName_2, const EVString& tableName_3);
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& tableName_1, const EVString& tableName_2, const EVString& tableName_3, const EVString& tableName_4);
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& tableName_1, const EVString& tableName_2, const EVString& tableName_3, const EVString& tableName_4, const EVString& tableName_5);


				/// <summary>
				///  清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
				
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				//EVString addLastUsedTimeField(const EVString& createtablescript);
				//EVString addLastUsedTimeToInsertScript(const EVString& insertscript);
				//EVString updateLastUsedTimeScript(const EVString& readscript);
				//EVString updateLastUsedTimeScript(const EVString& tablename, const EVString& qualification);
				//ev_bool updateLastUsedTime(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& script);

				/// <summary>
				/// 获取对应的数据库表版本
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				const EVString& getVersion() const;
			protected:
				friend class CacheAccessor;
				EarthView::World::Core::ev_string mVersion;
				ev_uint32 mReadDataCount;
				ev_uint32 mReadDataSuccessCount;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void collectCacheDataReadInfo(ev_bool success);
			private:
			};
		}}}

#endif
