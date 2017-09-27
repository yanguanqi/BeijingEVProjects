#ifndef EV_DB_OCTREE_MANAGER_H_
#define EV_DB_OCTREE_MANAGER_H_
#include "spatialindex/octree/baseoctreemanager.h"
#include "databaseutility/sqldatabase.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Octree{


				class EV_SPATIALINDEX_DLL CDBOctreeManager : public EarthView::World::Spatial::Octree::CBaseOctreeManager
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CDBOctreeManager(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <param name="maxDepth">最大深度</param>
					/// <returns></returns>
					CDBOctreeManager(const EarthView::World::Core::Database::CSqlDatabase& db, const EVString& octreeTable, const EarthView::World::Spatial::Math::CAxisAlignedBox& box	,ev_uint32 maxDepth);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CDBOctreeManager();

ev_private:

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool initOctree();
					ev_bool initOctree(ev_bool recoverNodes);
					CBaseOctree* initOctree(const EVString& code);
					CBaseOctree* initOctree(const EVString& code, ev_bool recoverNodes);


					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool restoreOctree();

					/// <summary>
					/// 删除八叉树数据，该函数会将八叉树数据从数据库中删除。
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool deleteOctree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Octree::COctreeManager* clone() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getDataVersionFromDataSource() const ;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Core::Database::CSqlDatabase* getDB();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getOctreeTablename() const;

				protected:
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool clearOctreeTable();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void storeTree( CBaseOctree* parentTree );

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool insertOctreeToDataBase( CBaseOctree* tree );
				protected:
					EVString mOctreeTable;
					EarthView::World::Core::Database::CSqlDatabase mDB;
				};

			}
		}
	}
}
#endif
