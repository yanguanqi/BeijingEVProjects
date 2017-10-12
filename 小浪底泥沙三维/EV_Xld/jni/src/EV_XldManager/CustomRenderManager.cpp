#include "CustomRenderManager.h"

EarthView::Xld::RenderLib::CCustomRenderManager* EarthView::Xld::RenderLib::CCustomRenderManager::mpSinglton = NULL;


EarthView::Xld::RenderLib::CCustomRenderManager* EarthView::Xld::RenderLib::CCustomRenderManager::GetSingletonPtr()
{
	if (!mpSinglton)
	{
		mpSinglton = new CCustomRenderManager();
	}
	return mpSinglton;
}

EarthView::Xld::RenderLib::CCustomRenderManager::~CCustomRenderManager()
{
}

ev_bool EarthView::Xld::RenderLib::CCustomRenderManager::RenderObject(_in EarthView::World::Geometry3D::CVertexVector * vertexVector, _in EarthView::World::Geometry3D::CIndexVector * indexVector)
{
	return ev_bool();
}

EarthView::Xld::RenderLib::CCustomRenderManager::CCustomRenderManager()
{

}
