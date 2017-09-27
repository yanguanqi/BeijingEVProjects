#ifndef LATICE_TEXT_BOX_H
#define LATICE_TEXT_BOX_H

#include "graphic/graphic_config.h"
#include "graphic/latticetexteffect.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CColourValue;
			class EV_GRAPHIC_DLL CLatticeTextBox: public EarthView::World::Graphic::ILatticeTextEffect
			{
			public:
				CLatticeTextBox(ev_uint32 argb):ILatticeTextEffect(argb){}
				CLatticeTextBox(const EarthView::World::Graphic::CColourValue& color):ILatticeTextEffect(color){}
				CLatticeTextBox(){}
				~CLatticeTextBox(){}
ev_private:
				CLatticeTextBox(EarthView::World::Core::CNameValuePairList* pList):ILatticeTextEffect(pList){}
			protected:
				ev_real32* applyEffect(_inout ev_real32* pVertexBuf, const EarthView::World::Spatial::Math::CAxisAlignedBox& localAABB, const EarthView::World::Spatial::Math::CVector3& offset);
			};

			class EV_GRAPHIC_DLL CTextOrigintrackLine: public EarthView::World::Graphic::ILatticeTextEffect
			{
			public:
				CTextOrigintrackLine(ev_uint32 argb):ILatticeTextEffect(argb){}
				CTextOrigintrackLine(const EarthView::World::Graphic::CColourValue& color):ILatticeTextEffect(color){}
				CTextOrigintrackLine(){}
				~CTextOrigintrackLine(){}
ev_private:
				CTextOrigintrackLine(EarthView::World::Core::CNameValuePairList* pList):ILatticeTextEffect(pList){}
			protected:
				ev_real32* applyEffect(_inout ev_real32* pVertexBuf, const EarthView::World::Spatial::Math::CAxisAlignedBox& localAABB, const EarthView::World::Spatial::Math::CVector3& offset);
			};
		}
	}
}

#endif

