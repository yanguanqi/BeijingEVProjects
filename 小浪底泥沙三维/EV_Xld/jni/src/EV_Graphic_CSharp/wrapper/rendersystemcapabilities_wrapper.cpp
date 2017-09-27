/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystemcapabilities.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
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
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_DriverVersion_major( void *pObjectXXXX )
			{
				EarthView::World::Graphic::DriverVersion* ptrNativeObject = (EarthView::World::Graphic::DriverVersion*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->major;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_DriverVersion_major( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::DriverVersion*)pObjectXXXX)->major = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_DriverVersion_minor( void *pObjectXXXX )
			{
				EarthView::World::Graphic::DriverVersion* ptrNativeObject = (EarthView::World::Graphic::DriverVersion*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->minor;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_DriverVersion_minor( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::DriverVersion*)pObjectXXXX)->minor = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_DriverVersion_release( void *pObjectXXXX )
			{
				EarthView::World::Graphic::DriverVersion* ptrNativeObject = (EarthView::World::Graphic::DriverVersion*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->release;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_DriverVersion_release( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::DriverVersion*)pObjectXXXX)->release = value;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Graphic_DriverVersion_build( void *pObjectXXXX )
			{
				EarthView::World::Graphic::DriverVersion* ptrNativeObject = (EarthView::World::Graphic::DriverVersion*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->build;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_DriverVersion_build( void *pObjectXXXX, ev_int32  value )
			{
				((EarthView::World::Graphic::DriverVersion*)pObjectXXXX)->build = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_DriverVersion_toString_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::DriverVersion* ptrNativeObject = (EarthView::World::Graphic::DriverVersion*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->toString();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DriverVersion_fromString_void_EVString(void *pObjectXXXX, _in const char* versionString )
			{
				EarthView::World::Core::ev_string versionString1 = versionString;
				EarthView::World::Graphic::DriverVersion* ptrNativeObject = (EarthView::World::Graphic::DriverVersion*) pObjectXXXX;
				ptrNativeObject->fromString(versionString1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ShaderProfiles_push_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::ShaderProfiles* ptrNativeObject = (EarthView::World::Graphic::ShaderProfiles*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ShaderProfiles_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::ShaderProfiles* ptrNativeObject = (EarthView::World::Graphic::ShaderProfiles*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShaderProfiles_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::ShaderProfiles* ptrNativeObject = (EarthView::World::Graphic::ShaderProfiles*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_ShaderProfiles_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ShaderProfiles* ptrNativeObject = (EarthView::World::Graphic::ShaderProfiles*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ShaderProfiles_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::ShaderProfiles* ptrNativeObject = (EarthView::World::Graphic::ShaderProfiles*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_ShaderProfiles_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ShaderProfiles* ptrNativeObject = (EarthView::World::Graphic::ShaderProfiles*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback)();
			class CRenderSystemCapabilitiesProxy : public EarthView::World::Graphic::CRenderSystemCapabilities
			{
			private:
				EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback;
			public:
				CRenderSystemCapabilitiesProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystemCapabilities(pList)
				{
					m_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t(EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback = pCallback;
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystemCapabilities::calculateSize();
				}
			};
			REGISTER_FACTORY_CLASS(CRenderSystemCapabilitiesProxy);
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemCapabilitiesProxy*>((EarthView::World::Graphic::CRenderSystemCapabilities*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystemCapabilities::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_Callback* pCallback )
			{
				CRenderSystemCapabilitiesProxy* ptr = dynamic_cast<CRenderSystemCapabilitiesProxy*>((EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystemCapabilities::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setDriverVersion_void_DriverVersion(void *pObjectXXXX, _in const void* version )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setDriverVersion(*(EarthView::World::Graphic::DriverVersion*)version);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_parseDriverVersionFromString_void_EVString(void *pObjectXXXX, _in const char* versionString )
			{
				EarthView::World::Core::ev_string versionString1 = versionString;
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->parseDriverVersionFromString(versionString1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getDriverVersion_DriverVersion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				EarthView::World::Graphic::DriverVersion objXXXX = ptrNativeObject->getDriverVersion();
				EarthView::World::Graphic::DriverVersion *pXXXX = new EarthView::World::Graphic::DriverVersion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getVendor_GPUVendor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				EarthView::World::Graphic::GPUVendor objXXXX = ptrNativeObject->getVendor();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setVendor_void_GPUVendor(void *pObjectXXXX, _in int v )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setVendor((EarthView::World::Graphic::GPUVendor)v);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_parseVendorFromString_void_EVString(void *pObjectXXXX, _in const char* vendorString )
			{
				EarthView::World::Core::ev_string vendorString1 = vendorString;
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->parseVendorFromString(vendorString1);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_vendorFromString_GPUVendor_EVString(_in const char* vendorString )
			{
				EarthView::World::Core::ev_string vendorString1 = vendorString;
				EarthView::World::Graphic::GPUVendor objXXXX = EarthView::World::Graphic::CRenderSystemCapabilities::vendorFromString(vendorString1);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_vendorToString_EVString_GPUVendor(_in int v )
			{
				EVString objXXXX = EarthView::World::Graphic::CRenderSystemCapabilities::vendorToString((EarthView::World::Graphic::GPUVendor)v);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_isDriverOlderThanVersion_ev_bool_DriverVersion(void *pObjectXXXX, _in void* v )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isDriverOlderThanVersion(*(EarthView::World::Graphic::DriverVersion*)v);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setNumWorldMatrices_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 num )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setNumWorldMatrices(num);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setNumTextureUnits_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 num )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setNumTextureUnits(num);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setStencilBufferBitDepth_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 num )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setStencilBufferBitDepth(num);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setNumVertexBlendMatrices_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 num )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setNumVertexBlendMatrices(num);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setNumMultiRenderTargets_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 num )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setNumMultiRenderTargets(num);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getNumWorldMatrices_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumWorldMatrices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getNumTextureUnits_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumTextureUnits();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getStencilBufferBitDepth_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getStencilBufferBitDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getNumVertexBlendMatrices_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumVertexBlendMatrices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getNumMultiRenderTargets_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumMultiRenderTargets();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_isCapabilityRenderSystemSpecific_ev_bool_Capabilities(void *pObjectXXXX, _in const int c )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isCapabilityRenderSystemSpecific((EarthView::World::Graphic::Capabilities)c);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setCapability_void_Capabilities(void *pObjectXXXX, _in const int c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setCapability((EarthView::World::Graphic::Capabilities)c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_unsetCapability_void_Capabilities(void *pObjectXXXX, _in const int c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->unsetCapability((EarthView::World::Graphic::Capabilities)c);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_hasCapability_ev_bool_Capabilities(void *pObjectXXXX, _in const int c )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasCapability((EarthView::World::Graphic::Capabilities)c);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_addShaderProfile_void_EVString(void *pObjectXXXX, _in const char* profile )
			{
				EarthView::World::Core::ev_string profile1 = profile;
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->addShaderProfile(profile1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_removeShaderProfile_void_EVString(void *pObjectXXXX, _in const char* profile )
			{
				EarthView::World::Core::ev_string profile1 = profile;
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->removeShaderProfile(profile1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_isShaderProfileSupported_ev_bool_EVString(void *pObjectXXXX, _in const char* profile )
			{
				EarthView::World::Core::ev_string profile1 = profile;
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isShaderProfileSupported(profile1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getSupportedShaderProfiles_ShaderProfiles(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				const EarthView::World::Graphic::ShaderProfiles& objXXXX = ptrNativeObject->getSupportedShaderProfiles();
				const EarthView::World::Graphic::ShaderProfiles *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getVertexProgramConstantFloatCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getVertexProgramConstantFloatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getVertexProgramConstantIntCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getVertexProgramConstantIntCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getVertexProgramConstantBoolCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getVertexProgramConstantBoolCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getGeometryProgramConstantFloatCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getGeometryProgramConstantFloatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getGeometryProgramConstantIntCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getGeometryProgramConstantIntCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getGeometryProgramConstantBoolCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getGeometryProgramConstantBoolCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getFragmentProgramConstantFloatCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getFragmentProgramConstantFloatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getFragmentProgramConstantIntCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getFragmentProgramConstantIntCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getFragmentProgramConstantBoolCount_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getFragmentProgramConstantBoolCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setDeviceName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setDeviceName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getDeviceName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getDeviceName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setVertexProgramConstantFloatCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setVertexProgramConstantFloatCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setVertexProgramConstantIntCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setVertexProgramConstantIntCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setVertexProgramConstantBoolCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setVertexProgramConstantBoolCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setGeometryProgramConstantFloatCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setGeometryProgramConstantFloatCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setGeometryProgramConstantIntCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setGeometryProgramConstantIntCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setGeometryProgramConstantBoolCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setGeometryProgramConstantBoolCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setFragmentProgramConstantFloatCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setFragmentProgramConstantFloatCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setFragmentProgramConstantIntCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setFragmentProgramConstantIntCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setFragmentProgramConstantBoolCount_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 c )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setFragmentProgramConstantBoolCount(c);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setMaxPointSize_void_Real(void *pObjectXXXX, _in Real s )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setMaxPointSize(s);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getMaxPointSize_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getMaxPointSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setNonPOW2TexturesLimited_void_ev_bool(void *pObjectXXXX, _in ev_bool l )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setNonPOW2TexturesLimited(l);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getNonPOW2TexturesLimited_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNonPOW2TexturesLimited();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setNumVertexTextureUnits_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 n )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setNumVertexTextureUnits(n);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getNumVertexTextureUnits_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumVertexTextureUnits();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setVertexTextureUnitsShared_void_ev_bool(void *pObjectXXXX, _in ev_bool shared )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setVertexTextureUnitsShared(shared);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getVertexTextureUnitsShared_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVertexTextureUnitsShared();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setGeometryProgramNumOutputVertices_void_ev_int32(void *pObjectXXXX, _in ev_int32 numOutputVertices )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setGeometryProgramNumOutputVertices(numOutputVertices);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getGeometryProgramNumOutputVertices_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getGeometryProgramNumOutputVertices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_getRenderSystemName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getRenderSystemName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setRenderSystemName_void_EVString(void *pObjectXXXX, _in const char* rs )
			{
				EarthView::World::Core::ev_string rs1 = rs;
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setRenderSystemName(rs1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_setCategoryRelevant_void_CapabilitiesCategory_ev_bool(void *pObjectXXXX, _in int cat, _in ev_bool relevant )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->setCategoryRelevant((EarthView::World::Graphic::CapabilitiesCategory)cat, relevant);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_isCategoryRelevant_ev_bool_CapabilitiesCategory(void *pObjectXXXX, _in int cat )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isCategoryRelevant((EarthView::World::Graphic::CapabilitiesCategory)cat);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemCapabilities_log_void_CLogger(void *pObjectXXXX, _in EarthView::World::Core::CLogger* ptLog )
			{
				EarthView::World::Graphic::CRenderSystemCapabilities* ptrNativeObject = (EarthView::World::Graphic::CRenderSystemCapabilities*) pObjectXXXX;
				ptrNativeObject->log(ptLog);
			}
		}
	}
}
