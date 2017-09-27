#ifndef OPG_MODEL_H
#define OPG_MODEL_H

#include "core/memoryallocatedobject.h"
#include "graphic/scenemanager.h"
#include "graphic/material.h"
#include "graphic/texture.h"
#include "graphic/mesh.h"
#include "graphic/movableobject.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"
#include "mathengine/axisalignedbox.h"
#include "mathengine/matrix4.h"
#include "modelxml2kml/global.h"

class EV_BUILD_MODEL_XML2KML_DLL COPGModel : public EarthView::World::Core::CAllocatedObject
{

public:
	COPGModel(EVString &modelFullPath);

	~COPGModel();

private:

	//ev_void parseDAEModelFile(EVString &modelFullPath);
	ev_bool parseDAEModelFile( EVString &modelFullPath ,_out EarthView::World::Graphic::CMeshPtr& meshPtr,_out std::vector<EarthView::World::Graphic::CMaterialPtr>& materialPtrs,_out std::vector<EarthView::World::Graphic::CTexturePtr>& texturePtrs);

	EVString mName;
	EVString mGroupName;

	EarthView::World::Graphic::CMeshPtr mMeshPtr;
	std::vector<EarthView::World::Graphic::CMaterialPtr> mMaterialPtrs;
	std::vector<EarthView::World::Graphic::CTexturePtr> mTexturePtrs;

	ev_bool mInitialised;
};

#endif