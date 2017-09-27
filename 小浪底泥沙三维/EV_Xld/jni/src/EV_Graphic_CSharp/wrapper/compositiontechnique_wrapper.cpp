/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositiontechnique.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback)(_in ev_bool allowTextureDegradation);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback)(_in char*& schemeName);
			class CCompositionTechniqueProxy : public EarthView::World::Graphic::CCompositionTechnique
			{
			private:
				EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback* m_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback;
			public:
				CCompositionTechniqueProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositionTechnique(pList)
				{
					m_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool(EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString(EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback = pCallback;
				}
				virtual ev_bool isSupported(_in ev_bool allowTextureDegradation)
				{
					if(m_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback(allowTextureDegradation);
						return returnValue;
					}
					else
						return this->CCompositionTechnique::isSupported(allowTextureDegradation);
				}
				virtual void setSchemeName(_in const EVString& schemeName)
				{
					if(m_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* schemeName_Char = schemeName.makeBuffer();
						m_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback(schemeName_Char);
					}
					else
						return this->CCompositionTechnique::setSchemeName(schemeName);
				}
			};
			REGISTER_FACTORY_CLASS(CCompositionTechniqueProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_refCompName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->refCompName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_refCompName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->refCompName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_refTexName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->refTexName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_refTexName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->refTexName = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_width( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->width;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_width( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->width = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_height( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->height;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_height( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->height = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_widthFactor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->widthFactor;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_widthFactor( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->widthFactor = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_heightFactor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->heightFactor;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_heightFactor( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->heightFactor = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_formatList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormatList &objXXXX = ptrNativeObject->formatList;
				EarthView::World::Graphic::PixelFormatList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_formatList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->formatList = *(EarthView::World::Graphic::PixelFormatList*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_fsaa( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->fsaa;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_fsaa( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->fsaa = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_hwGammaWrite( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hwGammaWrite;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_hwGammaWrite( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->hwGammaWrite = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_depthBufferId( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->depthBufferId;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_depthBufferId( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->depthBufferId = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_pooled( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->pooled;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_pooled( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->pooled = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_scope( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::TextureScope objXXXX = ptrNativeObject->scope;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CCompositionTechnique_CTextureDefinition_scope( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*)pObjectXXXX)->scope = (EarthView::World::Graphic::CCompositionTechnique::TextureScope)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_push_back_void_CCompositionTargetPass(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositionTargetPass*& ref_t )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_OperatorIndex_CCompositionTargetPass_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses& objYYYY = *(EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_at_CCompositionTargetPass_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPasses_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPasses* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPasses*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPassIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPassIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPassIterator_getCurrent_CCompositionTargetPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPassIterator_next_CCompositionTargetPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPassIterator_getBegin_CCompositionTargetPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TargetPassIterator_getEnd_CCompositionTargetPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_push_back_void_CTextureDefinition(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*& ref_t )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_OperatorIndex_CTextureDefinition_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions& objYYYY = *(EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_at_CTextureDefinition_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitions_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitions*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitionIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitionIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitionIterator_getCurrent_CTextureDefinition(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitionIterator_next_CTextureDefinition(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitionIterator_getBegin_CTextureDefinition(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_TextureDefinitionIterator_getEnd_CTextureDefinition(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_createTextureDefinition_CTextureDefinition_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->createTextureDefinition(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_removeTextureDefinition_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ptrNativeObject->removeTextureDefinition(idx);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getTextureDefinition_CTextureDefinition_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->getTextureDefinition(idx);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getTextureDefinition_CTextureDefinition_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::CTextureDefinition* objXXXX = ptrNativeObject->getTextureDefinition(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositionTechnique_getNumTextureDefinitions_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumTextureDefinitions();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_removeAllTextureDefinitions_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ptrNativeObject->removeAllTextureDefinitions();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getTextureDefinitionIterator_TextureDefinitionIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator objXXXX = ptrNativeObject->getTextureDefinitionIterator();
				EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator *pXXXX = new EarthView::World::Graphic::CCompositionTechnique::TextureDefinitionIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_createTargetPass_CCompositionTargetPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->createTargetPass();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_removeTargetPass_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ptrNativeObject->removeTargetPass(idx);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getTargetPass_CCompositionTargetPass_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->getTargetPass(idx);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositionTechnique_getNumTargetPasses_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumTargetPasses();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_removeAllTargetPasses_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ptrNativeObject->removeAllTargetPasses();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getTargetPassIterator_TargetPassIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator objXXXX = ptrNativeObject->getTargetPassIterator();
				EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator *pXXXX = new EarthView::World::Graphic::CCompositionTechnique::TargetPassIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTargetPass*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getOutputTargetPass_CCompositionTargetPass(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTargetPass* objXXXX = ptrNativeObject->getOutputTargetPass();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool allowTextureDegradation )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				if (dynamic_cast<CCompositionTechniqueProxy*>((EarthView::World::Graphic::CCompositionTechnique*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionTechnique::isSupported(allowTextureDegradation);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isSupported(allowTextureDegradation);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_Callback* pCallback )
			{
				CCompositionTechniqueProxy* ptr = dynamic_cast<CCompositionTechniqueProxy*>((EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositionTechnique_isSupported_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool allowTextureDegradation )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositionTechnique::isSupported(allowTextureDegradation);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				if (dynamic_cast<CCompositionTechniqueProxy*>((EarthView::World::Graphic::CCompositionTechnique*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositionTechnique::setSchemeName(schemeName1);
				else
					ptrNativeObject->setSchemeName(schemeName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_Callback* pCallback )
			{
				CCompositionTechniqueProxy* ptr = dynamic_cast<CCompositionTechniqueProxy*>((EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_setSchemeName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositionTechnique::setSchemeName(schemeName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getSchemeName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getSchemeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositionTechnique_setCompositorLogicName_void_EVString(void *pObjectXXXX, _in const char* compositorLogicName )
			{
				EarthView::World::Core::ev_string compositorLogicName1 = compositorLogicName;
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				ptrNativeObject->setCompositorLogicName(compositorLogicName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getCompositorLogicName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getCompositorLogicName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositor*  _stdcall EarthView_World_Graphic_CCompositionTechnique_getParent_CCompositor(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositionTechnique* ptrNativeObject = (EarthView::World::Graphic::CCompositionTechnique*) pObjectXXXX;
				EarthView::World::Graphic::CCompositor* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
		}
	}
}
