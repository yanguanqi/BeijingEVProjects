/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/pass.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback)(_in ev_bool val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback)();
			class CPassProxy : public EarthView::World::Graphic::CPass
			{
			private:
				EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback* m_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback;
				EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback* m_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback;
			public:
				CPassProxy(EarthView::World::Core::CNameValuePairList *pList) : CPass(pList)
				{
					m_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool(EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool(EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback = pCallback;
				}
				virtual void setPolygonModeOverrideable(_in ev_bool val)
				{
					if(m_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback(val);
					}
					else
						return this->CPass::setPolygonModeOverrideable(val);
				}
				virtual ev_bool getPolygonModeOverrideable() const
				{
					if(m_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPass::getPolygonModeOverrideable();
				}
			};
			REGISTER_FACTORY_CLASS(CPassProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_push_back_void_CTextureUnitState(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState*& ref_t )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_OperatorIndex_CTextureUnitState_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates& objYYYY = *(EarthView::World::Graphic::CPass::TextureUnitStates*) pObjXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_at_CTextureUnitState_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_TextureUnitStates_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::TextureUnitStates* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStates*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_PassSet_insert_void_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CPass*& ref_val )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ptrNativeObject->insert(ref_val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPass_PassSet_size_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPass_PassSet_erase_ev_size_t_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CPass*& key )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->erase(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_PassSet_empty_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_PassSet_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPass_PassSet_count_ev_size_t_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CPass*& key )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->count(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPass_PassSet_max_size_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->max_size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_PassSet_swap_void_PassSet(void *pObjectXXXX, _inout void* other )
			{
				EarthView::World::Graphic::CPass::PassSet* ptrNativeObject = (EarthView::World::Graphic::CPass::PassSet*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CPass::PassSet*)other);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_OperatorAssign_CPass_CPass(void *pObjXXXX, _in const void* oth )
			{
				EarthView::World::Graphic::CPass& objXXXX = *((EarthView::World::Graphic::CPass*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CPass*)oth;
				EarthView::World::Graphic::CPass *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_isProgrammable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isProgrammable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasVertexProgram_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasVertexProgram();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasFragmentProgram_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasFragmentProgram();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasGeometryProgram_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasGeometryProgram();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasShadowCasterVertexProgram_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasShadowCasterVertexProgram();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CPass_hasShadowCasterFragmentProgram_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->hasShadowCasterFragmentProgram();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasShadowReceiverVertexProgram_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasShadowReceiverVertexProgram();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasShadowReceiverFragmentProgram_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasShadowReceiverFragmentProgram();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPass_getIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CPass_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setAmbient_void_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setAmbient(red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setAmbient_void_CColourValue(void *pObjectXXXX, _in const void* ambient )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setDiffuse_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue, _in Real alpha )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setDiffuse(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setDiffuse_void_CColourValue(void *pObjectXXXX, _in const void* diffuse )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setDiffuse(*(EarthView::World::Graphic::CColourValue*)diffuse);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSpecular_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue, _in Real alpha )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSpecular(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSpecular_void_CColourValue(void *pObjectXXXX, _in const void* specular )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSpecular(*(EarthView::World::Graphic::CColourValue*)specular);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShininess_void_Real(void *pObjectXXXX, _in Real val )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShininess(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSelfIllumination_void_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSelfIllumination(red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSelfIllumination_void_CColourValue(void *pObjectXXXX, _in const void* selfIllum )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSelfIllumination(*(EarthView::World::Graphic::CColourValue*)selfIllum);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setEmissive_void_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setEmissive(red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setEmissive_void_CColourValue(void *pObjectXXXX, _in const void* emissive )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setEmissive(*(EarthView::World::Graphic::CColourValue*)emissive);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setVertexColourTracking_void_ev_int32(void *pObjectXXXX, _in ev_int32 tracking )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setVertexColourTracking(tracking);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getPointSize_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getPointSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointSize_void_Real(void *pObjectXXXX, _in Real ps )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointSize(ps);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointSpritesEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointSpritesEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getPointSpritesEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getPointSpritesEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointAttenuation_void_ev_bool_Real_Real_Real(void *pObjectXXXX, _in ev_bool enabled, _in Real constant, _in Real linear, _in Real quadratic )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointAttenuation(enabled, constant, linear, quadratic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointAttenuation_void_ev_bool_Real_Real(void *pObjectXXXX, _in ev_bool enabled, _in Real constant, _in Real linear )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointAttenuation(enabled, constant, linear);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointAttenuation_void_ev_bool_Real(void *pObjectXXXX, _in ev_bool enabled, _in Real constant )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointAttenuation(enabled, constant);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointAttenuation_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointAttenuation(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_isPointAttenuationEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isPointAttenuationEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getPointAttenuationConstant_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getPointAttenuationConstant();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getPointAttenuationLinear_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getPointAttenuationLinear();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getPointAttenuationQuadratic_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getPointAttenuationQuadratic();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointMinSize_void_Real(void *pObjectXXXX, _in Real min )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointMinSize(min);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getPointMinSize_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getPointMinSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPointMaxSize_void_Real(void *pObjectXXXX, _in Real max )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPointMaxSize(max);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getPointMaxSize_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getPointMaxSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getAmbient_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getAmbient();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getDiffuse_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getDiffuse();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getSpecular_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getSpecular();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getSelfIllumination_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getSelfIllumination();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getEmissive_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getEmissive();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getShininess_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getShininess();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CPass_getVertexColourTracking_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getVertexColourTracking();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_createTextureUnitState_CTextureUnitState_RecompileMethod(void *pObjectXXXX, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->createTextureUnitState((EarthView::World::Graphic::RecompileMethod)recompile);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_createTextureUnitState_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->createTextureUnitState();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_createTextureUnitState_CTextureUnitState_ev_uint32_RecompileMethod(void *pObjectXXXX, _in ev_uint32 toWhere, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->createTextureUnitState(toWhere, (EarthView::World::Graphic::RecompileMethod)recompile);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_createTextureUnitState_CTextureUnitState_ev_uint32(void *pObjectXXXX, _in ev_uint32 toWhere )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->createTextureUnitState(toWhere);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_createTextureUnitState_CTextureUnitState_EVString_ev_uint16_RecompileMethod(void *pObjectXXXX, _in const char* textureName, _in ev_uint16 texCoordSet, _in int recompile )
			{
				EarthView::World::Core::ev_string textureName1 = textureName;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->createTextureUnitState(textureName1, texCoordSet, (EarthView::World::Graphic::RecompileMethod)recompile);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_createTextureUnitState_CTextureUnitState_EVString_ev_uint16(void *pObjectXXXX, _in const char* textureName, _in ev_uint16 texCoordSet )
			{
				EarthView::World::Core::ev_string textureName1 = textureName;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->createTextureUnitState(textureName1, texCoordSet);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_createTextureUnitState_CTextureUnitState_EVString(void *pObjectXXXX, _in const char* textureName )
			{
				EarthView::World::Core::ev_string textureName1 = textureName;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->createTextureUnitState(textureName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_addTextureUnitState_void_CTextureUnitState_RecompileMethod(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* state, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->addTextureUnitState(state, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_addTextureUnitState_void_CTextureUnitState(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* state )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->addTextureUnitState(state);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_insertTextureUnitState_void_CTextureUnitState_ev_uint32_RecompileMethod(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* state, _in ev_uint32 toWhere, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->insertTextureUnitState(state, toWhere, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_insertTextureUnitState_void_CTextureUnitState_ev_uint32(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureUnitState* state, _in ev_uint32 toWhere )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->insertTextureUnitState(state, toWhere);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_getTextureUnitState_CTextureUnitState_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getTextureUnitState(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_getTextureUnitState_CTextureUnitState_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getTextureUnitState(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPass_getTextureUnitStateIndex_ev_uint16_CTextureUnitState(void *pObjectXXXX, _in const EarthView::World::Graphic::CTextureUnitState* state )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getTextureUnitStateIndex(state);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_TextureUnitStateIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass::TextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_TextureUnitStateIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_TextureUnitStateIterator_getCurrent_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_TextureUnitStateIterator_next_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_TextureUnitStateIterator_getBegin_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_TextureUnitStateIterator_getEnd_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::TextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::TextureUnitStateIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_ConstTextureUnitStateIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_ConstTextureUnitStateIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_ConstTextureUnitStateIterator_getCurrent_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_ConstTextureUnitStateIterator_next_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_ConstTextureUnitStateIterator_getBegin_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CTextureUnitState*  _stdcall EarthView_World_Graphic_CPass_ConstTextureUnitStateIterator_getEnd_CTextureUnitState(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator* ptrNativeObject = (EarthView::World::Graphic::CPass::ConstTextureUnitStateIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CTextureUnitState* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getTextureUnitStateIterator_TextureUnitStateIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CPass::TextureUnitStateIterator objXXXX = ptrNativeObject->getTextureUnitStateIterator();
				EarthView::World::Graphic::CPass::TextureUnitStateIterator *pXXXX = new EarthView::World::Graphic::CPass::TextureUnitStateIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_removeTextureUnitState_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->removeTextureUnitState(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_removeTextureUnitState_void_ev_uint16_RecompileMethod(void *pObjectXXXX, _in ev_uint16 index, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->removeTextureUnitState(index, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_removeAllTextureUnitStates_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->removeAllTextureUnitStates();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPass_getNumTextureUnitStates_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumTextureUnitStates();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSceneBlending_void_SceneBlendType(void *pObjectXXXX, _in const int sbt )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSceneBlending((EarthView::World::Graphic::SceneBlendType)sbt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSeparateSceneBlending_void_SceneBlendType_SceneBlendType(void *pObjectXXXX, _in const int sbt, _in const int sbta )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendType)sbt, (EarthView::World::Graphic::SceneBlendType)sbta);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSceneBlending_void_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in const int sourceFactor, _in const int destFactor )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in const int sourceFactor, _in const int destFactor, _in const int sourceFactorAlpha, _in const int destFactorAlpha )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasSeparateSceneBlending_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSeparateSceneBlending();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getSourceBlendFactor_SceneBlendFactor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->getSourceBlendFactor();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getDestBlendFactor_SceneBlendFactor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->getDestBlendFactor();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getSourceBlendFactorAlpha_SceneBlendFactor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->getSourceBlendFactorAlpha();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getDestBlendFactorAlpha_SceneBlendFactor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->getDestBlendFactorAlpha();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSceneBlendingOperation_void_SceneBlendOperation(void *pObjectXXXX, _in int op )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSceneBlendingOperation((EarthView::World::Graphic::SceneBlendOperation)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setSeparateSceneBlendingOperation_void_SceneBlendOperation_SceneBlendOperation(void *pObjectXXXX, _in int op, _in int alphaOp )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setSeparateSceneBlendingOperation((EarthView::World::Graphic::SceneBlendOperation)op, (EarthView::World::Graphic::SceneBlendOperation)alphaOp);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_hasSeparateSceneBlendingOperations_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSeparateSceneBlendingOperations();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getSceneBlendingOperation_SceneBlendOperation(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendOperation objXXXX = ptrNativeObject->getSceneBlendingOperation();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getSceneBlendingOperationAlpha_SceneBlendOperation(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendOperation objXXXX = ptrNativeObject->getSceneBlendingOperationAlpha();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_isTransparent_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isTransparent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setDepthCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setDepthCheckEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getDepthCheckEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDepthCheckEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setDepthWriteEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setDepthWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getDepthWriteEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getDepthWriteEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setDepthFunction_void_CompareFunction(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setDepthFunction((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getDepthFunction_CompareFunction(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CompareFunction objXXXX = ptrNativeObject->getDepthFunction();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setColourWriteEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setColourWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getColourWriteEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getColourWriteEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setCullingMode_void_CullingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setCullingMode((EarthView::World::Graphic::CullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getCullingMode_CullingMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CullingMode objXXXX = ptrNativeObject->getCullingMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setManualCullingMode_void_ManualCullingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setManualCullingMode((EarthView::World::Graphic::ManualCullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getManualCullingMode_ManualCullingMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::ManualCullingMode objXXXX = ptrNativeObject->getManualCullingMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setLightingEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setLightingEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getLightingEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLightingEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setMaxSimultaneousLights_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 maxLights )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setMaxSimultaneousLights(maxLights);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPass_getMaxSimultaneousLights_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getMaxSimultaneousLights();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setStartLight_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 startLight )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setStartLight(startLight);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPass_getStartLight_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getStartLight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setLightMask_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setLightMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CPass_getLightMask_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLightMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadingMode_void_ShadeOptions(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadingMode((EarthView::World::Graphic::ShadeOptions)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getShadingMode_ShadeOptions(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::ShadeOptions objXXXX = ptrNativeObject->getShadingMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPolygonMode_void_PolygonMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPolygonMode((EarthView::World::Graphic::PolygonMode)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getPolygonMode_PolygonMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::PolygonMode objXXXX = ptrNativeObject->getPolygonMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				if (dynamic_cast<CPassProxy*>((EarthView::World::Graphic::CPass*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPass::setPolygonModeOverrideable(val);
				else
					ptrNativeObject->setPolygonModeOverrideable(val);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_Callback* pCallback )
			{
				CPassProxy* ptr = dynamic_cast<CPassProxy*>((EarthView::World::Graphic::CPass*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPolygonModeOverrideable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPass::setPolygonModeOverrideable(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				if (dynamic_cast<CPassProxy*>((EarthView::World::Graphic::CPass*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CPass::getPolygonModeOverrideable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getPolygonModeOverrideable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_Callback* pCallback )
			{
				CPassProxy* ptr = dynamic_cast<CPassProxy*>((EarthView::World::Graphic::CPass*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getPolygonModeOverrideable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CPass::getPolygonModeOverrideable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFog_void_ev_bool_FogMode_CColourValue_Real_Real_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart, _in Real linearEnd )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart, linearEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFog_void_ev_bool_FogMode_CColourValue_Real_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFog_void_ev_bool_FogMode_CColourValue_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFog_void_ev_bool_FogMode_CColourValue(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFog_void_ev_bool_FogMode(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFog_void_ev_bool(void *pObjectXXXX, _in ev_bool overrideScene )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getFogOverride_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getFogOverride();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getFogMode_FogMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::FogMode objXXXX = ptrNativeObject->getFogMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getFogColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getFogColour();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getFogStart_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getFogStart();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getFogEnd_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getFogEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPass_getFogDensity_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getFogDensity();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setDepthBias_void_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 constantBias, _in ev_real32 slopeScaleBias )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setDepthBias_void_ev_real32(void *pObjectXXXX, _in ev_real32 constantBias )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setDepthBias(constantBias);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CPass_getDepthBiasConstant_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getDepthBiasConstant();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CPass_getDepthBiasSlopeScale_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getDepthBiasSlopeScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setIterationDepthBias_void_ev_real32(void *pObjectXXXX, _in ev_real32 biasPerIteration )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setIterationDepthBias(biasPerIteration);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CPass_getIterationDepthBias_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getIterationDepthBias();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool(void *pObjectXXXX, _in int func, _in ev_uchar value, _in ev_bool alphaToCoverageEnabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setAlphaRejectSettings((EarthView::World::Graphic::CompareFunction)func, value, alphaToCoverageEnabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setAlphaRejectSettings_void_CompareFunction_ev_uchar(void *pObjectXXXX, _in int func, _in ev_uchar value )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setAlphaRejectSettings((EarthView::World::Graphic::CompareFunction)func, value);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setAlphaRejectFunction_void_CompareFunction(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setAlphaRejectFunction((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setAlphaRejectValue_void_ev_uchar(void *pObjectXXXX, _in ev_uchar val )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setAlphaRejectValue(val);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getAlphaRejectFunction_CompareFunction(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CompareFunction objXXXX = ptrNativeObject->getAlphaRejectFunction();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uchar  _stdcall EarthView_World_Graphic_CPass_getAlphaRejectValue_ev_uchar(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uchar objXXXX = ptrNativeObject->getAlphaRejectValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setAlphaToCoverageEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setAlphaToCoverageEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_isAlphaToCoverageEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isAlphaToCoverageEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setTransparentSortingEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setTransparentSortingEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getTransparentSortingEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTransparentSortingEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setTransparentSortingForced_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setTransparentSortingForced(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getTransparentSortingForced_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTransparentSortingForced();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setIteratePerLight_void_ev_bool_ev_bool_LightTypes(void *pObjectXXXX, _in ev_bool enabled, _in ev_bool onlyForOneLightType, _in int lightType )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setIteratePerLight(enabled, onlyForOneLightType, (EarthView::World::Graphic::CLight::LightTypes)lightType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setIteratePerLight_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool enabled, _in ev_bool onlyForOneLightType )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setIteratePerLight(enabled, onlyForOneLightType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setIteratePerLight_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setIteratePerLight(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getIteratePerLight_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIteratePerLight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getRunOnlyForOneLightType_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRunOnlyForOneLightType();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getOnlyLightType_LightTypes(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CLight::LightTypes objXXXX = ptrNativeObject->getOnlyLightType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setLightCountPerIteration_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setLightCountPerIteration(c);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPass_getLightCountPerIteration_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getLightCountPerIteration();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CPass_getParent_CTechnique(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getResourceGroup_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getResourceGroup();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setVertexProgram_void_EVString_ev_bool_RecompileMethod(void *pObjectXXXX, _in const char* name, _in ev_bool resetParams, _in int recompile )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setVertexProgram(name1, resetParams, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setVertexProgram_void_CGpuProgramPtr_RecompileMethod(void *pObjectXXXX, _inout void* gpuPtr, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setVertexProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setVertexProgram_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool resetParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setVertexProgram(name1, resetParams);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setVertexProgram_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setVertexProgram(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setVertexProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* gpuPtr )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setVertexProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setVertexProgramParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* params )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setVertexProgramParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getVertexProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getVertexProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getVertexProgramParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getVertexProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getVertexProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getVertexProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterVertexProgram_void_EVString_RecompileMethod(void *pObjectXXXX, _in const char* name, _in int recompile )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterVertexProgram(name1, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterVertexProgram_void_CGpuProgramPtr_RecompileMethod(void *pObjectXXXX, _inout void* gpuPtr, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterVertexProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterVertexProgram_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterVertexProgram(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterVertexProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* gpuPtr )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterVertexProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterVertexProgramParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* params )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterVertexProgramParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getShadowCasterVertexProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getShadowCasterVertexProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getShadowCasterVertexProgramParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getShadowCasterVertexProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getShadowCasterVertexProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getShadowCasterVertexProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterFragmentProgram_void_EVString_RecompileMethod(void *pObjectXXXX, _in const char* name, _in int recompile )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterFragmentProgram(name1, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterFragmentProgram_void_CGpuProgramPtr_RecompileMethod(void *pObjectXXXX, _inout void* gpuPtr, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterFragmentProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterFragmentProgram_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterFragmentProgram(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterFragmentProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* gpuPtr )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterFragmentProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowCasterFragmentProgramParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* params )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowCasterFragmentProgramParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getShadowCasterFragmentProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getShadowCasterFragmentProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getShadowCasterFragmentProgramParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getShadowCasterFragmentProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getShadowCasterFragmentProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getShadowCasterFragmentProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverVertexProgram_void_EVString_RecompileMethod(void *pObjectXXXX, _in const char* name, _in int recompile )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverVertexProgram(name1, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverVertexProgram_void_CGpuProgramPtr_RecompileMethod(void *pObjectXXXX, _inout void* gpuPtr, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverVertexProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverVertexProgram_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverVertexProgram(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverVertexProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* gpuPtr )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverVertexProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverVertexProgramParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* params )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverVertexProgramParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverFragmentProgram_void_EVString_RecompileMethod(void *pObjectXXXX, _in const char* name, _in int recompile )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverFragmentProgram(name1, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverFragmentProgram_void_CGpuProgramPtr_RecompileMethod(void *pObjectXXXX, _inout void* gpuPtr, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverFragmentProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverFragmentProgram_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverFragmentProgram(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverFragmentProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* gpuPtr )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverFragmentProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setShadowReceiverFragmentProgramParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* params )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setShadowReceiverFragmentProgramParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getShadowReceiverVertexProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getShadowReceiverVertexProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getShadowReceiverVertexProgramParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getShadowReceiverVertexProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getShadowReceiverVertexProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getShadowReceiverVertexProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getShadowReceiverFragmentProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getShadowReceiverFragmentProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getShadowReceiverFragmentProgramParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getShadowReceiverFragmentProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getShadowReceiverFragmentProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getShadowReceiverFragmentProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFragmentProgram_void_EVString_ev_bool_RecompileMethod(void *pObjectXXXX, _in const char* name, _in ev_bool resetParams, _in int recompile )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFragmentProgram(name1, resetParams, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFragmentProgram_void_CGpuProgramPtr_RecompileMethod(void *pObjectXXXX, _inout void* gpuPtr, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFragmentProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFragmentProgram_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool resetParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFragmentProgram(name1, resetParams);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFragmentProgram_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFragmentProgram(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFragmentProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* gpuPtr )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFragmentProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setFragmentProgramParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* params )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setFragmentProgramParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getFragmentProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getFragmentProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getFragmentProgramParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getFragmentProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getFragmentProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getFragmentProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setGeometryProgram_void_EVString_ev_bool_RecompileMethod(void *pObjectXXXX, _in const char* name, _in ev_bool resetParams, _in int recompile )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setGeometryProgram(name1, resetParams, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setGeometryProgram_void_CGpuProgramPtr_RecompileMethod(void *pObjectXXXX, _inout void* gpuPtr, _in int recompile )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setGeometryProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr, (EarthView::World::Graphic::RecompileMethod)recompile);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setGeometryProgram_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool resetParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setGeometryProgram(name1, resetParams);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setGeometryProgram_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setGeometryProgram(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setGeometryProgram_void_CGpuProgramPtr(void *pObjectXXXX, _inout void* gpuPtr )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setGeometryProgram(*(EarthView::World::Graphic::CGpuProgramPtr*)gpuPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setGeometryProgramParameters_void_GpuProgramParametersSharedPtr(void *pObjectXXXX, _in void* params )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setGeometryProgramParameters(*(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CPass_getGeometryProgramName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getGeometryProgramName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getGeometryProgramParameters_GpuProgramParametersSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::GpuProgramParametersSharedPtr objXXXX = ptrNativeObject->getGeometryProgramParameters();
				EarthView::World::Graphic::GpuProgramParametersSharedPtr *pXXXX = new EarthView::World::Graphic::GpuProgramParametersSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getGeometryProgram_CGpuProgramPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				const EarthView::World::Graphic::CGpuProgramPtr& objXXXX = ptrNativeObject->getGeometryProgram();
				const EarthView::World::Graphic::CGpuProgramPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CPass__split_CPass_ev_uint16(void *pObjectXXXX, _in ev_uint16 numUnits )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->_split(numUnits);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__notifyIndex_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_notifyIndex(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__prepare_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_prepare();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__unprepare_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_unprepare();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__load_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__unload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_unload();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_isLoaded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CPass_getHash_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getHash();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__dirtyHash_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_dirtyHash();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__recalculateHash_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_recalculateHash();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__notifyNeedsRecompile_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_notifyNeedsRecompile();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass__updateAutoParams_void_CAutoParamDataSource_ev_uint16(void *pObjectXXXX, _in const EarthView::World::Graphic::CAutoParamDataSource* source, _in ev_uint16 variabilityMask )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->_updateAutoParams(source, variabilityMask);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CPass__getTextureUnitWithContentTypeIndex_ev_uint16_ContentType_ev_uint16(void *pObjectXXXX, _in int contentType, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->_getTextureUnitWithContentTypeIndex((EarthView::World::Graphic::CTextureUnitState::ContentType)contentType, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setTextureFiltering_void_TextureFilterOptions(void *pObjectXXXX, _in int filterType )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setTextureFiltering((EarthView::World::Graphic::TextureFilterOptions)filterType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setTextureAnisotropy_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 maxAniso )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setTextureAnisotropy(maxAniso);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setNormaliseNormals_void_ev_bool(void *pObjectXXXX, _in ev_bool normalise )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setNormaliseNormals(normalise);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getNormaliseNormals_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNormaliseNormals();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getDirtyHashList_PassSet( )
			{
				const EarthView::World::Graphic::CPass::PassSet& objXXXX = EarthView::World::Graphic::CPass::getDirtyHashList();
				const EarthView::World::Graphic::CPass::PassSet *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CPass_getPassGraveyard_PassSet( )
			{
				const EarthView::World::Graphic::CPass::PassSet& objXXXX = EarthView::World::Graphic::CPass::getPassGraveyard();
				const EarthView::World::Graphic::CPass::PassSet *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_clearDirtyHashList_void( )
			{
				EarthView::World::Graphic::CPass::clearDirtyHashList();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_processPendingPassUpdates_void( )
			{
				EarthView::World::Graphic::CPass::processPendingPassUpdates();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_queueForDeletion_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->queueForDeletion();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_isAmbientOnly_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isAmbientOnly();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setPassIterationCount_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64  count )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setPassIterationCount(count);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CPass_getPassIterationCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getPassIterationCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_applyTextureAliases_ev_bool_CommonStringPairList_ev_bool(void *pObjectXXXX, _in const void* aliasList, _in const ev_bool apply )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList, apply);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_applyTextureAliases_ev_bool_CommonStringPairList(void *pObjectXXXX, _in const void* aliasList )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setLightScissoringEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setLightScissoringEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getLightScissoringEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLightScissoringEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setLightClipPlanesEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setLightClipPlanesEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CPass_getLightClipPlanesEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getLightClipPlanesEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setIlluminationStage_void_IlluminationStage(void *pObjectXXXX, _in int is )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				ptrNativeObject->setIlluminationStage((EarthView::World::Graphic::IlluminationStage)is);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CPass_getIlluminationStage_IlluminationStage(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationStage objXXXX = ptrNativeObject->getIlluminationStage();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setHashFunction_void_BuiltinHashFunction(_in int builtin )
			{
				EarthView::World::Graphic::CPass::setHashFunction((EarthView::World::Graphic::CPass::BuiltinHashFunction)builtin);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPass_setHashFunction_void_HashFunc(_in EarthView::World::Graphic::CPass::HashFunc* hashFunc )
			{
				EarthView::World::Graphic::CPass::setHashFunction(hashFunc);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass::HashFunc*  _stdcall EarthView_World_Graphic_CPass_getHashFunction_HashFunc( )
			{
				EarthView::World::Graphic::CPass::HashFunc* objXXXX = EarthView::World::Graphic::CPass::getHashFunction();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass::HashFunc*  _stdcall EarthView_World_Graphic_CPass_getBuiltinHashFunction_HashFunc_BuiltinHashFunction(_in int builtin )
			{
				EarthView::World::Graphic::CPass::HashFunc* objXXXX = EarthView::World::Graphic::CPass::getBuiltinHashFunction((EarthView::World::Graphic::CPass::BuiltinHashFunction)builtin);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPass_getUserObjectBindings_CUserObjectBindings(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPass* ptrNativeObject = (EarthView::World::Graphic::CPass*) pObjectXXXX;
				EarthView::World::Graphic::CUserObjectBindings& objXXXX = ptrNativeObject->getUserObjectBindings();
				EarthView::World::Graphic::CUserObjectBindings *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_IlluminationPass_stage( void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPass* ptrNativeObject = (EarthView::World::Graphic::IlluminationPass*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationStage objXXXX = ptrNativeObject->stage;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_IlluminationPass_stage( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::IlluminationPass*)pObjectXXXX)->stage = (EarthView::World::Graphic::IlluminationStage)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall Get_EarthView_World_Graphic_IlluminationPass_pass( void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPass* ptrNativeObject = (EarthView::World::Graphic::IlluminationPass*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->pass;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_IlluminationPass_pass( void *pObjectXXXX, EarthView::World::Graphic::CPass*  value )
			{
				((EarthView::World::Graphic::IlluminationPass*)pObjectXXXX)->pass = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_IlluminationPass_destroyOnShutdown( void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPass* ptrNativeObject = (EarthView::World::Graphic::IlluminationPass*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->destroyOnShutdown;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_IlluminationPass_destroyOnShutdown( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::IlluminationPass*)pObjectXXXX)->destroyOnShutdown = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall Get_EarthView_World_Graphic_IlluminationPass_originalPass( void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPass* ptrNativeObject = (EarthView::World::Graphic::IlluminationPass*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->originalPass;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_IlluminationPass_originalPass( void *pObjectXXXX, EarthView::World::Graphic::CPass*  value )
			{
				((EarthView::World::Graphic::IlluminationPass*)pObjectXXXX)->originalPass = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IlluminationPassList_push_back_void_IlluminationPass(void *pObjectXXXX, _in EarthView::World::Graphic::IlluminationPass*& t )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IlluminationPassList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_IlluminationPassList_front_IlluminationPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_IlluminationPassList_back_IlluminationPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IlluminationPassList_insert_void_ev_uint32_IlluminationPass(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::IlluminationPass*& t )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IlluminationPassList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_IlluminationPassList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_IlluminationPassList_OperatorIndex_IlluminationPass_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::IlluminationPassList& objYYYY = *(EarthView::World::Graphic::IlluminationPassList*) pObjXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::IlluminationPass*  _stdcall EarthView_World_Graphic_IlluminationPassList_at_IlluminationPass_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				EarthView::World::Graphic::IlluminationPass* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_IlluminationPassList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IlluminationPassList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IlluminationPassList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IlluminationPassList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IlluminationPassList* ptrNativeObject = (EarthView::World::Graphic::IlluminationPassList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
		}
	}
}
