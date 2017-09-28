#ifndef EVOUTPUTSYMBOLDRAWREGISTER_H
#define EVOUTPUTSYMBOLDRAWREGISTER_H
#include "symbol/symbolexports.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/ipaintdevice.h"
namespace EarthView{namespace World{namespace Core{
	class CDynLib;
}}}

namespace EarthView{namespace World{namespace Spatial{namespace Display{
	class CDrawSymbol;
	class EV_SYMBOL_DLL COutputEngine :public EarthView::World::Core::CAllocatedObject
	{
	public:
		virtual ~COutputEngine();
		virtual const EVString getName() const;
		virtual _extfree EarthView::World::Spatial::Display::CDrawSymbol* createDrawSymbol(
			ev_int32 symbolType) const;
		virtual ev_bool isSupportDevice(EarthView::World::Display::IPaintDevice* device) const ;
		virtual void getSupportedFormat(EarthView::World::Core::CStringArray& array) const ;
		virtual EarthView::World::Display::IPaintDevice* createOutputDevice(const EVString &format,char* fileName,double w_in_p,double h_in_p) const ;
ev_private:
		COutputEngine(EarthView::World::Core::CNameValuePairList* pList);
	protected:
		C_DISABLE_COPY(COutputEngine);
		COutputEngine();
	};
	class EV_SYMBOL_DLL EVOutputEngineManager : public EarthView::World::Core::CAllocatedObject
	{
	public:
		static EVOutputEngineManager* getSingletonPtr();
		~EVOutputEngineManager();
		/// <summary>
		/// 获取当前输出引擎
		/// </summary>
		const COutputEngine* getOutputEngine(EarthView::World::Display::IPaintDevice* device);
		
		EarthView::World::Core::CStringArray getSupportedFormat();
		EarthView::World::Display::IPaintDevice* createOutputDevice(const EVString &format,char* fileName,double w_in_p,double h_in_p);

		ev_void registerOutputEngine(const COutputEngine* pEngine);
		const COutputEngine* getOutputEngine(const EVString& engineName);
		const COutputEngine* getOutputEngine(ev_uint32 index);
		ev_uint32 getOutputEngineCount() const;
		ev_void loadEngines();
ev_private:
		EVOutputEngineManager(EarthView::World::Core::CNameValuePairList* pList);
	protected:
		EVOutputEngineManager();
		
	private:
		static EVOutputEngineManager* mOutputEngineRegister;
		vector<const COutputEngine*> mRegisterEngines;
		vector<EarthView::World::Core::CDynLib*> mEngineLibs;
		mutable EarthView::World::Core::CReadWriteLock mReadWriteLock;
	};
}}}}
#endif