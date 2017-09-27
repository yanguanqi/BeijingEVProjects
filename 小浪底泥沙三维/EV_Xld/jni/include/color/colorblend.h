#ifndef COLORBLEND_H
#define COLORBLEND_H
#include "color/colorexports.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/icolor.h"
namespace EarthView{namespace World{namespace Spatial{namespace Display{
	class IColorBlendOperationFactory;
	class EV_COLOR_DLL CColorBlend : public EarthView::World::Core::CAllocatedObject
	{
	public:
		CColorBlend();
		~CColorBlend();

		void setBlendOperationMode(EVColorBlendOperation mode);
		EVColorBlendOperation getBlendOperationMode() const;
		IColor* getBlendResult(const IColor* arg1, const IColor* arg2) const;
ev_private:
		CColorBlend(EarthView::World::Core::CNameValuePairList* pList);
	private:
		C_DISABLE_COPY(CColorBlend)
		IColorBlendOperationFactory* m_Operation;
	};
}}}}
#endif//COLORBLEND_H