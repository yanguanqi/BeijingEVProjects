#include "..\..\include\geometry3d\vertex.h"
#ifndef CUSTOMRENDERMANAGER_H_
#define CUSTOMRENDERMANAGER_H_
namespace EarthView
{
	namespace Xld
	{
		namespace RenderLib
		{
			class CCustomRenderManager
			{
			public:
				static EarthView::Xld::RenderLib::CCustomRenderManager* GetSingletonPtr();
				~CCustomRenderManager();

				ev_bool RenderObject(_in EarthView::World::Geometry3D::CVertexVector * vertexVector, _in EarthView::World::Geometry3D::CIndexVector * indexVector);
			private:
				EarthView::Xld::RenderLib::CCustomRenderManager();
				static EarthView::Xld::RenderLib::CCustomRenderManager* mpSinglton;
			};

		}
	}
}
#endif

