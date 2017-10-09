#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_CLASRENDER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_CLASRENDER_H

#include "obliquemodelmanager.h"
#include "qslimrender.h"
#include "obqrenderfactory.h"
#include "spatial3dengine/evlaslayer.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				class CLasModelManager : public CObliqueModelManager
				{
				public:
					CLasModelManager(const EVString& groupname);
					CLasModelManager(EarthView::World::Spatial::GeoDataset::IDataset* pDataset, const EVString& groupname);

				public:
					ev_void updateLasImage(EarthView::World::Spatial3D::Atlas::LASCOLORTYPE type,EarthView::World::Core::MemoryDataStreamPtr& texPtr,ev_uint32 pointSize,EarthView::World::Spatial::Display::IColor* generalColor,ev_real64 elevationMinZ,ev_real64 elevationMaxZ);
					EarthView::World::Spatial3D::Atlas::CLasQueryResult queryResult(ev_real64 minLon,ev_real64 maxLon,ev_real64 minLat,ev_real64 maxLat);
					/// <summary>
					/// 获取多线程下的材质
					/// </summary>
					/// <returns></returns>
					//virtual OBQMaterialMap& getCommonMaterialPtr(ev_uint16 threadID);					

				protected:
					EVString createVP_CG_LAS(EarthView::World::Spatial3D::Atlas::LASCOLORTYPE type);
					EVString createFP_CG_LAS(EarthView::World::Spatial3D::Atlas::LASCOLORTYPE type,EarthView::World::Spatial::Display::IColor* generalColor);
					ev_bool createGpuProgram(const EVString &name,
						const EVString& groupname,
						const EarthView::World::Graphic::GpuProgramType& GpuPType, 
						const EVString& EntryPoint, 
						const EVString& Data);

				private:
					EVString mStrExt;
				};

				class CLasRender : public CQSlimRender
				{
				public:
					CLasRender(CLasModelManager* pManager, COBQGeode* pParent, const EVString& filename, const EVString& tileName, ev_uint32 lodID);
					virtual ~CLasRender();
				public:
					ev_void updateLasImage();
					/// <summary>
					///  加载资源，需要重写
					/// </summary>
					/// <returns>true成功，false失败</returns>
					virtual ev_bool load(const EarthView::World::Spatial::MeshStream& meshStream);
				};

				class CLasRenderFactory : public CQSlimRenderFactory
				{
				public:
					CLasRenderFactory();
					virtual ~CLasRenderFactory();
				public:
					virtual COBQRender* createInstance(CObliqueModelManager* pManager, COBQGeode* pParent, const EVString& filename, const EVString& tileName, ev_uint32 lodID);
				};

			}
		}
	}
}
#endif
