
#ifndef TERRAINMANAGER_H_
#define TERRAINMANAGER_H_

#include "core\stringdefines.h"
#include "GISDataType.h"
#include "TerrainMovable.h"
#include "globecontrol\globecontrol.h"


namespace EarthView
{
	namespace Xld 
	{
		namespace RenderLib
		{
			class CTerrainManager
			{
				friend class CWaterConservancyManager;
			public:

				~CTerrainManager();

				/// <summary>
				///单件模式获取CTerrainManager对象
				/// </summary>
				static EarthView::Xld::RenderLib::CTerrainManager& getSingleton();

				/// <summary>
				///单件模式获取CTerrainManager指针
				/// </summary>
				static EarthView::Xld::RenderLib::CTerrainManager* getSingletonPtr();

				static ev_real64 CenterX;

				static ev_real64 CenterY;

				static ev_real64 CenterZ;
				/// <summary>
				/// 创建地形
				/// </summary>
				/// <param name="grdFileName">grd文件名</param>
			    void CreateGrdTerrain(const EVString& grdFileName);

				/// <summary>
				/// 创建地形
				/// </summary>
				/// <param name="name">地形的名称</param>
				/// <param name="pData">grd数据</param>
				void CreateTerrain(const EVString& name,EarthView::GISDataType::CGrdData* pData);

				/// <summary>
				/// 创建地形
				/// </summary>
				/// <param name="name">地形的名称</param>
				void DeleteTerrain(const EVString& name);

				EVString GetTerrainName(const ev_int32 index);

				ev_uint64 GetTerrainCount();

				void SetTerrainVisible(EVString name, ev_bool isVisible);

				ev_bool GetTerrainVisible(EVString name);

				void RaiseTerrain(EVString name,ev_real64 zOffset);

			protected:
				
				static EarthView::Xld::RenderLib::CTerrainManager* mpSingleton;
				static ev_uint64 TerrainCount;

				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
				CTerrainManager();
				ev_map<EVString, EarthView::Xld::RenderableObject::CTerrainMovable*> mTerrainList;
				ev_map<EVString, CSceneNode*> mNodeList;
				vector<EVString> mTerrainNameList;
				vector<EarthView::GISDataType::CGrdData*> grdDatas;

			};
		}

	}
}

#endif


