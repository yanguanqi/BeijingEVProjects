#include "TerrainRenderable.h"
#include "graphic/movableobject.h"
#include "graphic/node.h"

EarthView::Xld::RenderableObject::CTerrainRenderable::CTerrainRenderable(const EVString & name, CTerrainMovable * parent)
{
	this->mGroupName = CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME;
	this->mRenderOp.vertexData = EV_NEW CVertexData();
	this->mRenderOp.indexData = EV_NEW CIndexData();
	this->mRenderOp.useIndexes = true;
	this->mRenderOp.vertexData->vertexStart = 0;
	this->mRenderOp.indexData->indexStart = 0;
	this->mRenderOp.operationType = CRenderOperation::OT_TRIANGLE_LIST;
	this->mRenderOp.useGlobalInstancingVertexBufferIsAvailable = false;
	this->mpParent = parent;
}

EarthView::Xld::RenderableObject::CTerrainRenderable::~CTerrainRenderable()
{
	if (this->mRenderOp.vertexData)
	{
		EV_DELETE this->mRenderOp.vertexData;
		this->mRenderOp.vertexData = NULL;
	}
	if (this->mRenderOp.indexData)
	{
		EV_DELETE this->mRenderOp.indexData;
		this->mRenderOp.indexData = NULL;
	}
}

void EarthView::Xld::RenderableObject::CTerrainRenderable::getWorldTransforms(CMatrix4 * xform) const
{
	*xform = this->mpParent->mParentNode->getMatrix();
}

const CMaterialPtr & EarthView::Xld::RenderableObject::CTerrainRenderable::getMaterial() const
{
	if (mMaterial.isNull())
	{
		mMaterial = CMaterialManager::getSingleton().getByName(mMaterialName);
	}
	return mMaterial;
}

Real EarthView::Xld::RenderableObject::CTerrainRenderable::getSquaredViewDepth(const CCamera * cam) const
{
	return this->mpParent->getParentNode()->getSquaredViewDepth(cam);
}

void EarthView::Xld::RenderableObject::CTerrainRenderable::getRenderOperation(_inout CRenderOperation & op)
{
	op = this->mRenderOp;
}

const LightList & EarthView::Xld::RenderableObject::CTerrainRenderable::getLights(void) const
{
	return this->mpParent->queryLights();
}

ev_bool EarthView::Xld::RenderableObject::CTerrainRenderable::preRender(CSceneManager *sm, CRenderSystem *rsys)
{
	return true;
}

void EarthView::Xld::RenderableObject::CTerrainRenderable::postRender(CSceneManager * sm, CRenderSystem * rsys)
{
}

void EarthView::Xld::RenderableObject::CTerrainRenderable::setMaterial(const EVString & matName)
{
	if (mMaterialName != matName)
	{
		mMaterialName = matName;
		mMaterial.setNull();
	}
}

CRenderOperation * EarthView::Xld::RenderableObject::CTerrainRenderable::getRenderOperation()
{
	return &this->mRenderOp;
}
