#ifndef EVSYMBOLDRAWREGISTER_H
#define EVSYMBOLDRAWREGISTER_H
#include "symbol/symbolexports.h"
#include "spatialinterface/isymbol.h"
namespace EarthView{namespace World{namespace Core{
	class CDynLib;
}}}

namespace EarthView{namespace World{namespace Spatial{namespace Display{
	class CDrawSymbol;
	class EV_SYMBOL_DLL CRenderEngine :public EarthView::World::Core::CAllocatedObject
	{
	public:
		virtual ~CRenderEngine();
		virtual const EVString getName() const;
		virtual _extfree EarthView::World::Spatial::Display::CDrawSymbol* createDrawSymbol(
			ev_int32 symbolType) const;
ev_private:
		CRenderEngine(EarthView::World::Core::CNameValuePairList* pList);
	protected:
		C_DISABLE_COPY(CRenderEngine);
		CRenderEngine();
	};
	class EV_SYMBOL_DLL EVRenderEngineManager : public EarthView::World::Core::CAllocatedObject
	{
	public:
		static EVRenderEngineManager* getSingletonPtr();
		~EVRenderEngineManager();

		/// <summary>
		/// 设置当前绘制引擎，设置NULL使用默认引擎
		/// </summary>
		ev_void setCurrentRenderEngine(const CRenderEngine* renderEngine);
		/// <summary>
		/// 获取当前绘制引擎
		/// </summary>
		CRenderEngine* getCurrentRenderEngine();

		ev_void registerRenderEngine(const CRenderEngine* pEngine);
		const CRenderEngine* getRenderEngine(const EVString& engineName);
		const CRenderEngine* getRenderEngine(ev_uint32 index);
		ev_uint32 getRenderEngineCount() const;
		ev_void loadEngines();
ev_private:
		EVRenderEngineManager(EarthView::World::Core::CNameValuePairList* pList);
	protected:
		EVRenderEngineManager();
		
	private:
		static EVRenderEngineManager* mRenderEngineRegister;
		static CRenderEngine* mCurrentRenderEngine;
		vector<const CRenderEngine*> mRegisterEngines;
		vector<EarthView::World::Core::CDynLib*> mEngineLibs;
		mutable EarthView::World::Core::CReadWriteLock mReadWriteLock;
	};
}}}}
#endif