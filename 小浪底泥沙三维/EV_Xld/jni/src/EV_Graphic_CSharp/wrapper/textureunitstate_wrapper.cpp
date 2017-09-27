/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/textureunitstate.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_type( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::TextureEffectType objXXXX = ptrNativeObject->type;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_type( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->type = (EarthView::World::Graphic::CTextureUnitState::TextureEffectType)value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_subtype( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->subtype;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_subtype( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->subtype = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_arg2( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->arg2;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_arg2( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->arg2 = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_arg1( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->arg1;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_arg1( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->arg1 = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_waveType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				EarthView::World::Graphic::WaveformType objXXXX = ptrNativeObject->waveType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_waveType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->waveType = (EarthView::World::Graphic::WaveformType)value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_base( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->base;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_base( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->base = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_frequency( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->frequency;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_frequency( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->frequency = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_phase( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->phase;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_phase( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->phase = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_amplitude( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->amplitude;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_amplitude( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->amplitude = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_controller( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->controller;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_controller( void *pObjectXXXX, EarthView::World::Graphic::CController*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->controller = value;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CFrustum*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_TextureEffect_frustum( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::TextureEffect* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::TextureEffect*) pObjectXXXX;
				const EarthView::World::Graphic::CFrustum* objXXXX = ptrNativeObject->frustum;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_TextureEffect_frustum( void *pObjectXXXX, const EarthView::World::Graphic::CFrustum*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState::TextureEffect*)pObjectXXXX)->frustum = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_push_void_TextureEffectType_TextureEffect(void *pObjectXXXX, _in const int& key, _in void* val )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ptrNativeObject->push((EarthView::World::Graphic::CTextureUnitState::TextureEffectType&)key, *(EarthView::World::Graphic::CTextureUnitState::TextureEffect*)val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_exist_ev_bool_TextureEffectType(void *pObjectXXXX, _in const int& key )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist((EarthView::World::Graphic::CTextureUnitState::TextureEffectType&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_erase_void_TextureEffectType(void *pObjectXXXX, _in const int& key )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ptrNativeObject->erase((EarthView::World::Graphic::CTextureUnitState::TextureEffectType&)key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_count_ev_size_t_TextureEffectType(void *pObjectXXXX, _in const int& key )
			{
				const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->count((EarthView::World::Graphic::CTextureUnitState::TextureEffectType&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_get_TextureEffect_TextureEffectType_ev_size_t(void *pObjectXXXX, _in const int& key, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::TextureEffect& objXXXX = ptrNativeObject->get((EarthView::World::Graphic::CTextureUnitState::TextureEffectType&)key, index);
				EarthView::World::Graphic::CTextureUnitState::TextureEffect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_erase_void_TextureEffectType_ev_size_t(void *pObjectXXXX, _in const int& key, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ptrNativeObject->erase((EarthView::World::Graphic::CTextureUnitState::TextureEffectType&)key, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateEffectMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureUnitState_OperatorAssign_CTextureUnitState_CTextureUnitState(void *pObjXXXX, _in const void* oth )
			{
				EarthView::World::Graphic::CTextureUnitState& objXXXX = *((EarthView::World::Graphic::CTextureUnitState*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CTextureUnitState*)oth;
				EarthView::World::Graphic::CTextureUnitState *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTextureName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureName_void_EVString_TextureType(void *pObjectXXXX, _in const char* name, _in int ttype )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureName(name1, (EarthView::World::Graphic::TextureType)ttype);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTexture_void_CTexturePtr(void *pObjectXXXX, _in const void* texPtr )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTexture(*(EarthView::World::Graphic::CTexturePtr*)texPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCubicTexture_void_CTexturePtr(void *pObjectXXXX, _in const EarthView::World::Graphic::CTexturePtr* texPtrs )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCubicTexture(texPtrs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCubicTexture_void_CTexturePtr_bool(void *pObjectXXXX, _in const EarthView::World::Graphic::CTexturePtr* texPtrs, _in bool forUVW )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCubicTexture(texPtrs, forUVW);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCubicTextureName_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool forUVW )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCubicTextureName(name1, forUVW);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCubicTextureName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCubicTextureName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCubicTextureNames_void_EVString_ev_bool(void *pObjectXXXX, _in const EarthView::World::Core::ev_string* names, _in ev_bool forUVW )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCubicTextureNames(names, forUVW);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCubicTextureNames_void_EVString(void *pObjectXXXX, _in const EarthView::World::Core::ev_string* names )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCubicTextureNames(names);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAnimatedTextureName_void_EVString_ev_uint32_Real(void *pObjectXXXX, _in const char* name, _in ev_uint32 numFrames, _in Real duration )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAnimatedTextureName(name1, numFrames, duration);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAnimatedTextureName_void_EVString_ev_uint32(void *pObjectXXXX, _in const char* name, _in ev_uint32 numFrames )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAnimatedTextureName(name1, numFrames);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAnimatedTextureNames_void_EVString_ev_uint32_Real(void *pObjectXXXX, _in const EarthView::World::Core::ev_string* names, _in ev_uint32 numFrames, _in Real duration )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAnimatedTextureNames(names, numFrames, duration);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAnimatedTextureNames_void_EVString_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Core::ev_string* names, _in ev_uint32 numFrames )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAnimatedTextureNames(names, numFrames);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateTextureDimensionsPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateTextureDimensionsPair_first( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateTextureDimensionsPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateTextureDimensionsPair_second( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureUnitState_CTextureUnitStateTextureDimensionsPair_OperatorAssign_CTextureUnitStateTextureDimensionsPair_CTextureUnitStateTextureDimensionsPair(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair& objXXXX = *((EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair*)other;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureDimensions_CTextureUnitStateTextureDimensionsPair_ev_uint32(void *pObjectXXXX, _in ev_uint32 frame )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair objXXXX = ptrNativeObject->getTextureDimensions(frame);
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *pXXXX = new EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureDimensions_CTextureUnitStateTextureDimensionsPair(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair objXXXX = ptrNativeObject->getTextureDimensions();
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair *pXXXX = new EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateTextureDimensionsPair(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCurrentFrame_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 frameNumber )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCurrentFrame(frameNumber);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureUnitState_getCurrentFrame_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getCurrentFrame();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTextureUnitState_getFrameTextureName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 frameNumber )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFrameTextureName(frameNumber);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setFrameTextureName_void_EVString_ev_uint32(void *pObjectXXXX, _in const char* name, _in ev_uint32 frameNumber )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setFrameTextureName(name1, frameNumber);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_addFrameTextureName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->addFrameTextureName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_deleteFrameTextureName_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64  frameNumber )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->deleteFrameTextureName(frameNumber);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureUnitState_getNumFrames_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumFrames();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setBindingType_void_BindingType(void *pObjectXXXX, _in int bt )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setBindingType((EarthView::World::Graphic::CTextureUnitState::BindingType)bt);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureUnitState_getBindingType_BindingType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::BindingType objXXXX = ptrNativeObject->getBindingType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setContentType_void_ContentType(void *pObjectXXXX, _in int ct )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setContentType((EarthView::World::Graphic::CTextureUnitState::ContentType)ct);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureUnitState_getContentType_ContentType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::ContentType objXXXX = ptrNativeObject->getContentType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_isCubic_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isCubic();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_is3D_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->is3D();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureType_TextureType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::TextureType objXXXX = ptrNativeObject->getTextureType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setDesiredFormat_void_PixelFormat(void *pObjectXXXX, _in int desiredFormat )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setDesiredFormat((EarthView::World::Graphic::PixelFormat)desiredFormat);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureUnitState_getDesiredFormat_PixelFormat(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->getDesiredFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setNumMipmaps_void_ev_int32(void *pObjectXXXX, _in ev_int32 numMipmaps )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setNumMipmaps(numMipmaps);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CTextureUnitState_getNumMipmaps_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getNumMipmaps();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setIsAlpha_void_ev_bool(void *pObjectXXXX, _in ev_bool isAlpha )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setIsAlpha(isAlpha);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_getIsAlpha_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsAlpha();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setHardwareGammaEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setHardwareGammaEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_isHardwareGammaEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isHardwareGammaEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureCoordSet_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTextureCoordSet();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureCoordSet_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 set )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureCoordSet(set);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureTransform_void_CMatrix4(void *pObjectXXXX, _in const void* xform )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureTransform(*(EarthView::World::Spatial::Math::CMatrix4*)xform);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureTransform_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->getTextureTransform();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureScroll_void_Real_Real(void *pObjectXXXX, _in Real u, _in Real v )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureScroll(u, v);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureUScroll_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureUScroll(value);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureUScroll_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTextureUScroll();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureVScroll_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureVScroll(value);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureVScroll_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTextureVScroll();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureUScale_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureUScale(value);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureUScale_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTextureUScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureVScale_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureVScale(value);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureVScale_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTextureVScale();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureScale_void_Real_Real(void *pObjectXXXX, _in Real uScale, _in Real vScale )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureScale(uScale, vScale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureRotate_void_CRadian(void *pObjectXXXX, _in const void* angle )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureRotate(*(EarthView::World::Spatial::Math::CRadian*)angle);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureRotate_CRadian(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CRadian& objXXXX = ptrNativeObject->getTextureRotate();
				const EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode&  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureAddressingMode_UVWAddressingMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& objXXXX = ptrNativeObject->getTextureAddressingMode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureAddressingMode_void_TextureAddressingMode(void *pObjectXXXX, _in int tam )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureAddressingMode((EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode)tam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureAddressingMode_void_TextureAddressingMode_TextureAddressingMode_TextureAddressingMode(void *pObjectXXXX, _in int u, _in int v, _in int w )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureAddressingMode((EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode)u, (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode)v, (EarthView::World::Graphic::CTextureUnitState::TextureAddressingMode)w);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureAddressingMode_void_UVWAddressingMode(void *pObjectXXXX, _in const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& uvw )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureAddressingMode(uvw);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureBorderColour_void_CColourValue(void *pObjectXXXX, _in const void* colour )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureBorderColour(*(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureBorderColour_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Graphic::CColourValue& objXXXX = ptrNativeObject->getTextureBorderColour();
				const EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOperationEx_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue_CColourValue_Real(void *pObjectXXXX, _in int op, _in int source1, _in int source2, _in const void* arg1, _in const void* arg2, _in Real manualBlend )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOperationEx((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2, *(EarthView::World::Graphic::CColourValue*)arg1, *(EarthView::World::Graphic::CColourValue*)arg2, manualBlend);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOperationEx_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue_CColourValue(void *pObjectXXXX, _in int op, _in int source1, _in int source2, _in const void* arg1, _in const void* arg2 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOperationEx((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2, *(EarthView::World::Graphic::CColourValue*)arg1, *(EarthView::World::Graphic::CColourValue*)arg2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOperationEx_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_CColourValue(void *pObjectXXXX, _in int op, _in int source1, _in int source2, _in const void* arg1 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOperationEx((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2, *(EarthView::World::Graphic::CColourValue*)arg1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOperationEx_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource(void *pObjectXXXX, _in int op, _in int source1, _in int source2 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOperationEx((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOperationEx_void_LayerBlendOperationEx_LayerBlendSource(void *pObjectXXXX, _in int op, _in int source1 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOperationEx((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOperationEx_void_LayerBlendOperationEx(void *pObjectXXXX, _in int op )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOperationEx((EarthView::World::Graphic::LayerBlendOperationEx)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOperation_void_LayerBlendOperation(void *pObjectXXXX, _in const int op )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOperation((EarthView::World::Graphic::LayerBlendOperation)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setColourOpMultipassFallback_void_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in const int sourceFactor, _in const int destFactor )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setColourOpMultipassFallback((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getColourBlendMode_CLayerBlendModeEx(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx& objXXXX = ptrNativeObject->getColourBlendMode();
				const EarthView::World::Graphic::CLayerBlendModeEx *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getAlphaBlendMode_CLayerBlendModeEx(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Graphic::CLayerBlendModeEx& objXXXX = ptrNativeObject->getAlphaBlendMode();
				const EarthView::World::Graphic::CLayerBlendModeEx *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureUnitState_getColourBlendFallbackSrc_SceneBlendFactor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->getColourBlendFallbackSrc();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureUnitState_getColourBlendFallbackDest_SceneBlendFactor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->getColourBlendFallbackDest();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAlphaOperation_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real_Real_Real(void *pObjectXXXX, _in int op, _in int source1, _in int source2, _in Real arg1, _in Real arg2, _in Real manualBlend )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAlphaOperation((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2, arg1, arg2, manualBlend);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAlphaOperation_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real_Real(void *pObjectXXXX, _in int op, _in int source1, _in int source2, _in Real arg1, _in Real arg2 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAlphaOperation((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2, arg1, arg2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAlphaOperation_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource_Real(void *pObjectXXXX, _in int op, _in int source1, _in int source2, _in Real arg1 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAlphaOperation((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2, arg1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAlphaOperation_void_LayerBlendOperationEx_LayerBlendSource_LayerBlendSource(void *pObjectXXXX, _in int op, _in int source1, _in int source2 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAlphaOperation((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1, (EarthView::World::Graphic::LayerBlendSource)source2);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAlphaOperation_void_LayerBlendOperationEx_LayerBlendSource(void *pObjectXXXX, _in int op, _in int source1 )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAlphaOperation((EarthView::World::Graphic::LayerBlendOperationEx)op, (EarthView::World::Graphic::LayerBlendSource)source1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setAlphaOperation_void_LayerBlendOperationEx(void *pObjectXXXX, _in int op )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setAlphaOperation((EarthView::World::Graphic::LayerBlendOperationEx)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_addEffect_void_TextureEffect(void *pObjectXXXX, _inout void* effect )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->addEffect(*(EarthView::World::Graphic::CTextureUnitState::TextureEffect*)effect);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setEnvironmentMap_void_ev_bool_EnvMapType(void *pObjectXXXX, _in ev_bool enable, _in int envMapType )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setEnvironmentMap(enable, (EarthView::World::Graphic::CTextureUnitState::EnvMapType)envMapType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setEnvironmentMap_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setEnvironmentMap(enable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setScrollAnimation_void_Real_Real(void *pObjectXXXX, _in Real uSpeed, _in Real vSpeed )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setScrollAnimation(uSpeed, vSpeed);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setRotateAnimation_void_Real(void *pObjectXXXX, _in Real speed )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setRotateAnimation(speed);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTransformAnimation_void_TextureTransformType_WaveformType_Real_Real_Real_Real(void *pObjectXXXX, _in const int ttype, _in const int waveType, _in Real base, _in Real frequency, _in Real phase, _in Real amplitude )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTransformAnimation((EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base, frequency, phase, amplitude);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTransformAnimation_void_TextureTransformType_WaveformType_Real_Real_Real(void *pObjectXXXX, _in const int ttype, _in const int waveType, _in Real base, _in Real frequency, _in Real phase )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTransformAnimation((EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base, frequency, phase);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTransformAnimation_void_TextureTransformType_WaveformType_Real_Real(void *pObjectXXXX, _in const int ttype, _in const int waveType, _in Real base, _in Real frequency )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTransformAnimation((EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base, frequency);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTransformAnimation_void_TextureTransformType_WaveformType_Real(void *pObjectXXXX, _in const int ttype, _in const int waveType, _in Real base )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTransformAnimation((EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType, base);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTransformAnimation_void_TextureTransformType_WaveformType(void *pObjectXXXX, _in const int ttype, _in const int waveType )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTransformAnimation((EarthView::World::Graphic::CTextureUnitState::TextureTransformType)ttype, (EarthView::World::Graphic::WaveformType)waveType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setProjectiveTexturing_void_ev_bool_CFrustum(void *pObjectXXXX, _in ev_bool enabled, _in const EarthView::World::Graphic::CFrustum* ref_projectionSettings )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setProjectiveTexturing(enabled, ref_projectionSettings);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setProjectiveTexturing_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setProjectiveTexturing(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_removeAllEffects_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->removeAllEffects();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_removeEffect_void_TextureEffectType(void *pObjectXXXX, _in const int type )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->removeEffect((EarthView::World::Graphic::CTextureUnitState::TextureEffectType)type);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_isBlank_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBlank();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setBlank_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setBlank();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_isTextureLoadFailing_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isTextureLoadFailing();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_retryTextureLoad_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->retryTextureLoad();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState_getEffects_CTextureUnitStateEffectMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap& objXXXX = ptrNativeObject->getEffects();
				const EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureUnitState_getAnimationDuration_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getAnimationDuration();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureFiltering_void_TextureFilterOptions(void *pObjectXXXX, _in int filterType )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureFiltering((EarthView::World::Graphic::TextureFilterOptions)filterType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureFiltering_void_FilterType_FilterOptions(void *pObjectXXXX, _in int ftype, _in int opts )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureFiltering((EarthView::World::Graphic::FilterType)ftype, (EarthView::World::Graphic::FilterOptions)opts);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureFiltering_void_FilterOptions_FilterOptions_FilterOptions(void *pObjectXXXX, _in int minFilter, _in int magFilter, _in int mipFilter )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureFiltering((EarthView::World::Graphic::FilterOptions)minFilter, (EarthView::World::Graphic::FilterOptions)magFilter, (EarthView::World::Graphic::FilterOptions)mipFilter);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureFiltering_FilterOptions_FilterType(void *pObjectXXXX, _in int ftpye )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::FilterOptions objXXXX = ptrNativeObject->getTextureFiltering((EarthView::World::Graphic::FilterType)ftpye);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureAnisotropy_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 maxAniso )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureAnisotropy(maxAniso);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureAnisotropy_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTextureAnisotropy();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureMipmapBias_void_ev_real32(void *pObjectXXXX, _in ev_real32 bias )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureMipmapBias(bias);
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureMipmapBias_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getTextureMipmapBias();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCompositorReference_void_EVString_EVString_ev_size_t(void *pObjectXXXX, _in const char* compositorName, _in const char* textureName, _in ev_uint64  mrtIndex )
			{
				EarthView::World::Core::ev_string compositorName1 = compositorName;
				EarthView::World::Core::ev_string textureName1 = textureName;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCompositorReference(compositorName1, textureName1, mrtIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setCompositorReference_void_EVString_EVString(void *pObjectXXXX, _in const char* compositorName, _in const char* textureName )
			{
				EarthView::World::Core::ev_string compositorName1 = compositorName;
				EarthView::World::Core::ev_string textureName1 = textureName;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setCompositorReference(compositorName1, textureName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTextureUnitState_getReferencedCompositorName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getReferencedCompositorName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTextureUnitState_getReferencedTextureName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getReferencedTextureName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CTextureUnitState_getReferencedMRTIndex_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getReferencedMRTIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall EarthView_World_Graphic_CTextureUnitState_getParent_CPass(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__prepare_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_prepare();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__unprepare_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_unprepare();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__load_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__unload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_unload();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_hasViewRelativeTextureCoordinateGeneration_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasViewRelativeTextureCoordinateGeneration();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_isLoaded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__notifyNeedsRecompile_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_notifyNeedsRecompile();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTextureUnitState_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_setTextureNameAlias_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->setTextureNameAlias(name1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTextureUnitState_getTextureNameAlias_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTextureNameAlias();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_applyTextureAliases_ev_bool_CommonStringPairList_ev_bool(void *pObjectXXXX, _in const void* aliasList, _in const ev_bool apply )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList, apply);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureUnitState_applyTextureAliases_ev_bool_CommonStringPairList(void *pObjectXXXX, _in const void* aliasList )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__notifyParent_void_CPass(void *pObjectXXXX, _in EarthView::World::Graphic::CPass* parent )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_notifyParent(parent);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState__getTexturePtr_CTexturePtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->_getTexturePtr();
				const EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureUnitState__getTexturePtr_CTexturePtr_ev_size_t(void *pObjectXXXX, _in ev_uint64  frame )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				const EarthView::World::Graphic::CTexturePtr& objXXXX = ptrNativeObject->_getTexturePtr(frame);
				const EarthView::World::Graphic::CTexturePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__setTexturePtr_void_CTexturePtr(void *pObjectXXXX, _in const void* texptr )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_setTexturePtr(*(EarthView::World::Graphic::CTexturePtr*)texptr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState__setTexturePtr_void_CTexturePtr_ev_size_t(void *pObjectXXXX, _in const void* texptr, _in ev_uint64  frame )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->_setTexturePtr(*(EarthView::World::Graphic::CTexturePtr*)texptr, frame);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall EarthView_World_Graphic_CTextureUnitState__getAnimController_CController(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->_getAnimController();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mCurrentFrame( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mCurrentFrame;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mCurrentFrame( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mCurrentFrame = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mAnimDuration( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mAnimDuration;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mAnimDuration( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mAnimDuration = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mCubic( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mCubic;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mCubic( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mCubic = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mTextureType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::TextureType objXXXX = ptrNativeObject->mTextureType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mTextureType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mTextureType = (EarthView::World::Graphic::TextureType)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mDesiredFormat( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->mDesiredFormat;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mDesiredFormat( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mDesiredFormat = (EarthView::World::Graphic::PixelFormat)value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mTextureSrcMipmaps( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->mTextureSrcMipmaps;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mTextureSrcMipmaps( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mTextureSrcMipmaps = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mTextureCoordSetIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mTextureCoordSetIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mTextureCoordSetIndex( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mTextureCoordSetIndex = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mAddressMode( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode objXXXX = ptrNativeObject->mAddressMode;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mAddressMode( void *pObjectXXXX, EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mAddressMode = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mBorderColour( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue &objXXXX = ptrNativeObject->mBorderColour;
				EarthView::World::Graphic::CColourValue *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mBorderColour( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mBorderColour = *(EarthView::World::Graphic::CColourValue*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mColourBlendMode( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CLayerBlendModeEx &objXXXX = ptrNativeObject->mColourBlendMode;
				EarthView::World::Graphic::CLayerBlendModeEx *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mColourBlendMode( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mColourBlendMode = *(EarthView::World::Graphic::CLayerBlendModeEx*)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mColourBlendFallbackSrc( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->mColourBlendFallbackSrc;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mColourBlendFallbackSrc( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mColourBlendFallbackSrc = (EarthView::World::Graphic::SceneBlendFactor)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mColourBlendFallbackDest( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::SceneBlendFactor objXXXX = ptrNativeObject->mColourBlendFallbackDest;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mColourBlendFallbackDest( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mColourBlendFallbackDest = (EarthView::World::Graphic::SceneBlendFactor)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mAlphaBlendMode( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CLayerBlendModeEx &objXXXX = ptrNativeObject->mAlphaBlendMode;
				EarthView::World::Graphic::CLayerBlendModeEx *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mAlphaBlendMode( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mAlphaBlendMode = *(EarthView::World::Graphic::CLayerBlendModeEx*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mTextureLoadFailed( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mTextureLoadFailed;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mTextureLoadFailed( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mTextureLoadFailed = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mIsAlpha( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mIsAlpha;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mIsAlpha( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mIsAlpha = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mHwGamma( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mHwGamma;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mHwGamma( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mHwGamma = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mRecalcTexMatrix( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mRecalcTexMatrix;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mRecalcTexMatrix( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mRecalcTexMatrix = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mVMod( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mVMod;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mVMod( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mVMod = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mUMod( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mUMod;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mUMod( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mUMod = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mVScale( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mVScale;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mVScale( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mVScale = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mUScale( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->mUScale;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mUScale( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mUScale = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mRotate( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Spatial::Math::CRadian &objXXXX = ptrNativeObject->mRotate;
				EarthView::World::Spatial::Math::CRadian *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mRotate( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mRotate = *(EarthView::World::Spatial::Math::CRadian*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mTexModMatrix( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->mTexModMatrix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mTexModMatrix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mTexModMatrix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mMinFilter( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::FilterOptions objXXXX = ptrNativeObject->mMinFilter;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mMinFilter( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mMinFilter = (EarthView::World::Graphic::FilterOptions)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mMagFilter( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::FilterOptions objXXXX = ptrNativeObject->mMagFilter;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mMagFilter( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mMagFilter = (EarthView::World::Graphic::FilterOptions)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mMipFilter( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::FilterOptions objXXXX = ptrNativeObject->mMipFilter;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mMipFilter( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mMipFilter = (EarthView::World::Graphic::FilterOptions)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mMaxAniso( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mMaxAniso;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mMaxAniso( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mMaxAniso = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mMipmapBias( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->mMipmapBias;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mMipmapBias( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mMipmapBias = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mIsDefaultAniso( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mIsDefaultAniso;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mIsDefaultAniso( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mIsDefaultAniso = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mIsDefaultFiltering( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->mIsDefaultFiltering;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mIsDefaultFiltering( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mIsDefaultFiltering = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mBindingType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::BindingType objXXXX = ptrNativeObject->mBindingType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mBindingType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mBindingType = (EarthView::World::Graphic::CTextureUnitState::BindingType)value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mContentType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::ContentType objXXXX = ptrNativeObject->mContentType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mContentType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mContentType = (EarthView::World::Graphic::CTextureUnitState::ContentType)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mCompositorRefMrtIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->mCompositorRefMrtIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mCompositorRefMrtIndex( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mCompositorRefMrtIndex = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mFrames( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Core::StringVector &objXXXX = ptrNativeObject->mFrames;
				EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mFrames( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mFrames = *(EarthView::World::Core::StringVector*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mFramePtrs( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::ShadowTextureList &objXXXX = ptrNativeObject->mFramePtrs;
				EarthView::World::Graphic::ShadowTextureList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mFramePtrs( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mFramePtrs = *(EarthView::World::Graphic::ShadowTextureList*)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mTextureNameAlias( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mTextureNameAlias;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mTextureNameAlias( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mTextureNameAlias = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mEffects( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap &objXXXX = ptrNativeObject->mEffects;
				EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mEffects( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mEffects = *(EarthView::World::Graphic::CTextureUnitState::CTextureUnitStateEffectMap*)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mCompositorRefName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mCompositorRefName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mCompositorRefName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mCompositorRefName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mCompositorRefTexName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mCompositorRefTexName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mCompositorRefTexName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mCompositorRefTexName = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPass*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mParent( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CPass* objXXXX = ptrNativeObject->mParent;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mParent( void *pObjectXXXX, EarthView::World::Graphic::CPass*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mParent = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CController*  _stdcall Get_EarthView_World_Graphic_CTextureUnitState_mAnimController( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				EarthView::World::Graphic::CController* objXXXX = ptrNativeObject->mAnimController;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CTextureUnitState_mAnimController( void *pObjectXXXX, EarthView::World::Graphic::CController*  value )
			{
				((EarthView::World::Graphic::CTextureUnitState*)pObjectXXXX)->mAnimController = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_recalcTextureMatrix_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->recalcTextureMatrix();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_createAnimController_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->createAnimController();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_createEffectController_void_TextureEffect(void *pObjectXXXX, _inout void* effect )
			{
				EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->createEffectController(*(EarthView::World::Graphic::CTextureUnitState::TextureEffect*)effect);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_ensurePrepared_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  frame )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->ensurePrepared(frame);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureUnitState_ensureLoaded_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  frame )
			{
				const EarthView::World::Graphic::CTextureUnitState* ptrNativeObject = (EarthView::World::Graphic::CTextureUnitState*) pObjectXXXX;
				ptrNativeObject->ensureLoaded(frame);
			}
		}
	}
}
