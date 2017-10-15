#include "CustomRenderable.h"
#include "graphic/movableobject.h"
#include "graphic/node.h"

EarthView::Xld::RenderableObject::CCustomRenderable::CCustomRenderable(const EVString & name, CCustomMovable * parent)
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

EarthView::Xld::RenderableObject::CCustomRenderable::~CCustomRenderable()
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

void EarthView::Xld::RenderableObject::CCustomRenderable::getWorldTransforms(CMatrix4 * xform) const
{
	*xform = this->mpParent->mParentNode->getMatrix();
}

const CMaterialPtr & EarthView::Xld::RenderableObject::CCustomRenderable::getMaterial() const
{
	if (mMaterial.isNull())
	{
		mMaterial = CMaterialManager::getSingleton().getByName(mMaterialName);
	}
	return mMaterial;
}

Real EarthView::Xld::RenderableObject::CCustomRenderable::getSquaredViewDepth(const CCamera * cam) const
{
	return this->mpParent->getParentNode()->getSquaredViewDepth(cam);
}

void EarthView::Xld::RenderableObject::CCustomRenderable::getRenderOperation(_inout CRenderOperation & op)
{
	op = this->mRenderOp;
}

const LightList & EarthView::Xld::RenderableObject::CCustomRenderable::getLights(void) const
{
	return this->mpParent->queryLights();
}

ev_bool EarthView::Xld::RenderableObject::CCustomRenderable::preRender(CSceneManager *sm, CRenderSystem *rsys)
{
	return true;
}

void EarthView::Xld::RenderableObject::CCustomRenderable::postRender(CSceneManager * sm, CRenderSystem * rsys)
{
}

void EarthView::Xld::RenderableObject::CCustomRenderable::setMaterial(const EVString & matName)
{
	if (mMaterialName != matName)
	{
		mMaterialName = matName;
		mMaterial.setNull();
	}
}

CRenderOperation * EarthView::Xld::RenderableObject::CCustomRenderable::getRenderOperation()
{
	return &this->mRenderOp;
}
