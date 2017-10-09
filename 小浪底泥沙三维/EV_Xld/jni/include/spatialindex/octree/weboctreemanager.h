#ifndef EV_WEB_OCTREE_MANAGER_H_
#define EV_WEB_OCTREE_MANAGER_H_
#include "spatialindex/octree/baseoctreemanager.h"
#include "spatialserverclient/evspatialserver.h"
#include "spatialserverclient/evdatasets.h"
#include "spatialserverclient/evmetaobjectinfo.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			class  CEVSpatialServer;
			class CEVModelDataset;
			class CEVModelLayerInfo;
		}}}

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Octree{
				class EV_SPATIALINDEX_DLL CWebOctreeManager : public EarthView::World::Spatial::Octree::CBaseOctreeManager
				{
				private :
					CEVSpatialServer* mpNetServer;
					CEVBaseModelDataset* mpNetDataset;
					CEVBaseModelLayerInfo* mpNetDatasetInfo;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CWebOctreeManager(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="box">包围盒</param>
					/// <param name="maxDepth">最大深度</param>
					/// <returns></returns>
					CWebOctreeManager(const EVString& web, EarthView::World::Spatial::CEVSpatialServer* pNetServer, EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset, const EarthView::World::Spatial::Math::CAxisAlignedBox& box	,ev_uint32 maxDepth);
					CWebOctreeManager(const EVString& web, EarthView::World::Spatial::CEVSpatialServer* pNetServer, EarthView::World::Spatial::CEVBaseModelDataset* pNetDataset, EarthView::World::Spatial::CEVBaseModelLayerInfo* pNetDatasetInfo, const EarthView::World::Spatial::Math::CAxisAlignedBox& box	,ev_uint32 maxDepth);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CWebOctreeManager();
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
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool deleteOctree();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					COctreeManager* clone() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getDataVersionFromDataSource() const ;
				};
			}
		}
	}
}
#endif