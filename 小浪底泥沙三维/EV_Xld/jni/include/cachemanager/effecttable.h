#ifndef EV_EFFECT_TABLE___H
#define  EV_EFFECT_TABLE___H
#include "core/datastream.h"
#include "mathengine/ev_math.h"
#include "cachemanager/cachetable.h"
#include "cachemanager/cachedata.h"

namespace EarthView{
	namespace World{
		namespace Spatial{

			// <summary>
			// 创建、读写、维护EV_MATERIAL_RESOURCE、EV_EFFECT_REF、EV_EFFECT、EV_EFFECTTYPE、EV_EFFECT_INSTANCE_XXX表格
			// </summary>
			class EV_CACHEMANAGER_DLL EffectTable : public CacheTable
			{
			public:
				EffectTable();

				~EffectTable();

				/// <summary>
				/// 在给定的数据库连接对象中初始化表格
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				virtual ev_bool initTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
				ev_bool initInstanceTable(EarthView::World::Core::Database::CSqlDatabase* pdbcon,const EVString& instanceTableName);

			ev_private:
				/// <summary>
				/// 获取数据库中所有instance记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& instanceTableName, vector<CacheEffectInstance>& instances);

				/// <summary>
				///  根据effectid获取一条instance记录
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				 ev_bool readEffectInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const ev_int32 effectID,  const EVString& instanceTableName, vector<CacheEffectInstance>& instances);

				 ev_bool writeEffectInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& instanceTableName, const vector<CacheEffectInstance>& instances);

			public:
				 /// <summary>
				 ///  获取一条instance记录
				 /// </summary>
				 /// <param name=""></param>
				 /// <returns></returns>
				 /// <memo></memo>
				 ev_bool readEffectInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& instanceTableName, _inout CacheEffectInstance& instance);

				 /// <summary>
				 /// 写入effectinstance记录
				 /// </summary>
				 /// <param name=""></param>
				 /// <returns></returns>
				 /// <memo></memo>
				 ev_bool writeEffectInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon, const EVString& instanceTableName, const CacheEffectInstance& instance);
				 ev_bool writeEffectInstance(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					 const EVString& instanceTableName,
					 const ev_int32 instanceID,
					 const ev_int32 effectID,
					 const ev_int32 positionX,
					 const ev_int32 positionY,
					 const ev_int32 positionZ,
					 const ev_int32 rotationX,
					 const ev_int32 rotationY,
					 const ev_int32 rotationZ,
					 const ev_int32 rotationW,
					 const Real scaleX,
					 const Real scaleY,
					 const Real scaleZ,
					 const EVString& scriptVersion
					 );

				/// <summary>
				/// 读取特效所有相关数据(特效数据、特效类型和所有特效需要的资源)
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectData(EarthView::World::Core::Database::CSqlDatabase* pdbcon, CacheEffectData& effectData);

				  /// <summary>
				  /// 写入特效数据
				  /// </summary>
				  /// <param name=""></param>
				  /// <returns></returns>
				  /// <memo></memo>
				ev_bool writeEffect(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const ev_int32 effectID,
					const EVString& effectName,
					const ev_int32 effectType,
					const EVString& userType,
					const EarthView::World::Core::MemoryDataStreamPtr context,
					const EVString& effectDesc);

				/// <summary>
				/// 读取特效数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffect(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const ev_int32 effectID,
					_out EVString& effectName,
					_out ev_int32 effectType,
					_out EVString& userType,
					_out EarthView::World::Core::MemoryDataStreamPtr context,
					_out EVString& effectDesc);

			ev_private:
				/// <summary>
				/// 读取缓存中所有的特效信息，这里不取出特效数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>特效信息个数</returns>
		
				ev_int32  readAllEffectInfo(EarthView::World::Core::Database::CSqlDatabase* pdbcon, vector<CacheEffect>& effectInfos);

			public:
				/// <summary>
				/// 写入特效类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEffectType(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					const EVString& userType,
					const EVString& typeName,			
					const EVString& typeDesc);

				/// <summary>
				/// 读取特效类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectType(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const EVString& userType,
					_out EVString& typeName,			
					_out EVString& typeDesc);

			ev_private:
				ev_int32	readEffectLikeType(EarthView::World::Core::Database::CSqlDatabase* pdbcon,_in const EVString& userType, _inout vector<CacheEffectType>& effectTypes);

				/// <summary>
				/// 写入特效资源引用关系
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectResRef(EarthView::World::Core::Database::CSqlDatabase* pdbcon,
					_in const ev_int32 effectID,
					_out vector<ev_int32>& resIDs);

				/// <summary>
				/// 写入特效资源, 会自动写入资源引用关系
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool writeEffectRes(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					const ev_int32 effectID,
					const vector<CacheEffectMaterial*>& ress);

				/// <summary>
				/// 读取特效资源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool readEffectRes(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					_in const ev_int32 effectID,
					_out vector<CacheEffectMaterial>& ress);

			public:
				ev_bool writeEffectRes(EarthView::World::Core::Database::CSqlDatabase* pdbcon, 
					const ev_int32 effectID,
					const ev_int32 resID,
					const ev_int32 resType,
					const EVString& resFileName,
					const EarthView::World::Core::MemoryDataStreamPtr resData,
					const ev_int32 resRefCount);

				ev_bool readEffectRes(EarthView::World::Core::Database::CSqlDatabase* pdbcon, _inout CacheEffectMaterial& res);

				/// <summary>
				///  清除缓存数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool clearCache(EarthView::World::Core::Database::CSqlDatabase* pdbcon);
			protected:
			private:

				/// 记录已经创建了instance表格的数据及名称，即EV_EFFECT_INSTANCE_XXX表格
				list<EVString> mInstanceTableNames;

			};
		}}}
#endif
