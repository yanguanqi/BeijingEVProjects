/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarebuffermanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback)(_in EarthView::World::Graphic::CHardwareBuffer* buffer);
			class CHardwareBufferLicenseeProxy : public EarthView::World::Graphic::CHardwareBufferLicensee
			{
			private:
				EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback;
			public:
				CHardwareBufferLicenseeProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBufferLicensee(pList)
				{
					m_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer(EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback = pCallback;
				}
				virtual void licenseExpired(_in EarthView::World::Graphic::CHardwareBuffer* buffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback(buffer);
					}
					else
						return this->CHardwareBufferLicensee::licenseExpired(buffer);
				}
			};
			REGISTER_FACTORY_CLASS(CHardwareBufferLicenseeProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareBuffer* buffer )
			{
				EarthView::World::Graphic::CHardwareBufferLicensee* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferLicensee*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferLicenseeProxy*>((EarthView::World::Graphic::CHardwareBufferLicensee*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferLicensee::licenseExpired(buffer);
				else
					ptrNativeObject->licenseExpired(buffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_Callback* pCallback )
			{
				CHardwareBufferLicenseeProxy* ptr = dynamic_cast<CHardwareBufferLicenseeProxy*>((EarthView::World::Graphic::CHardwareBufferLicensee*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferLicensee_licenseExpired_void_CHardwareBuffer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareBuffer* buffer )
			{
				EarthView::World::Graphic::CHardwareBufferLicensee* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferLicensee*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferLicensee::licenseExpired(buffer);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback)(_in EarthView::World::Graphic::CHardwareBuffer* buffer);
			class CTempBlendedBufferInfoProxy : public EarthView::World::Graphic::CTempBlendedBufferInfo
			{
			private:
				EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback;
			public:
				CTempBlendedBufferInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CTempBlendedBufferInfo(pList)
				{
					m_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer(EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback = pCallback;
				}
				virtual void licenseExpired(_in EarthView::World::Graphic::CHardwareBuffer* buffer)
				{
					if(m_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback(buffer);
					}
					else
						return this->CTempBlendedBufferInfo::licenseExpired(buffer);
				}
			};
			REGISTER_FACTORY_CLASS(CTempBlendedBufferInfoProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_extractFrom_void_CVertexData(void *pObjectXXXX, _in const EarthView::World::Graphic::CVertexData* sourceData )
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ptrNativeObject->extractFrom(sourceData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool positions, _in ev_bool normals )
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ptrNativeObject->checkoutTempCopies(positions, normals);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void_ev_bool(void *pObjectXXXX, _in ev_bool positions )
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ptrNativeObject->checkoutTempCopies(positions);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_checkoutTempCopies_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ptrNativeObject->checkoutTempCopies();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_bindTempCopies_void_CVertexData_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* targetData, _in ev_bool suppressHardwareUpload )
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ptrNativeObject->bindTempCopies(targetData, suppressHardwareUpload);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareBuffer* buffer )
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				if (dynamic_cast<CTempBlendedBufferInfoProxy*>((EarthView::World::Graphic::CTempBlendedBufferInfo*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTempBlendedBufferInfo::licenseExpired(buffer);
				else
					ptrNativeObject->licenseExpired(buffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_Callback* pCallback )
			{
				CTempBlendedBufferInfoProxy* ptr = dynamic_cast<CTempBlendedBufferInfoProxy*>((EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_licenseExpired_void_CHardwareBuffer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareBuffer* buffer )
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTempBlendedBufferInfo::licenseExpired(buffer);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool positions, _in ev_bool normals )
			{
				const EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->buffersCheckedOut(positions, normals);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool positions )
			{
				const EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->buffersCheckedOut(positions);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTempBlendedBufferInfo_buffersCheckedOut_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTempBlendedBufferInfo* ptrNativeObject = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->buffersCheckedOut();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback)(_in const void* source, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer, _in const void* copy);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback)(_in ev_bool forceFreeUnused);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback)(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer);
			class CHardwareBufferManagerBaseProxy : public EarthView::World::Graphic::CHardwareBufferManagerBase
			{
			private:
				EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback;
			public:
				CHardwareBufferManagerBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBufferManagerBase(pList)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void(EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void(EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void(EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void(EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = pCallback;
				}
				virtual void destroyAllDeclarations()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback();
					}
					else
						return this->CHardwareBufferManagerBase::destroyAllDeclarations();
				}
				virtual void destroyAllBindings()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback();
					}
					else
						return this->CHardwareBufferManagerBase::destroyAllBindings();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createVertexDeclarationImpl();
				}
				virtual void destroyVertexDeclarationImpl(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createVertexBufferBindingImpl();
				}
				virtual void destroyVertexBufferBindingImpl(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback(&source, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::makeBufferCopy(source, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback(vertexSize, numVerts, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback(vertexSize, numVerts, (int)usage);
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback((int)itype, numIndexes, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback((int)itype, numIndexes, (int)usage);
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback();
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createRenderToVertexBuffer();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback();
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createVertexDeclaration();
				}
				virtual void destroyVertexDeclaration(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CHardwareBufferManagerBase::destroyVertexDeclaration(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback();
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::createVertexBufferBinding();
				}
				virtual void destroyVertexBufferBinding(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
				}
				virtual void registerVertexBufferSourceAndCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer, &copy);
					}
					else
						return this->CHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback(&sourceBuffer, (int)licenseType, licensee, copyData);
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback(&sourceBuffer, (int)licenseType, licensee);
						return returnValue;
					}
					else
						return this->CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
				}
				virtual void releaseVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CHardwareBufferManagerBase::releaseVertexBufferCopy(bufferCopy);
				}
				virtual void touchVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CHardwareBufferManagerBase::touchVertexBufferCopy(bufferCopy);
				}
				virtual void _freeUnusedBufferCopies()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback();
					}
					else
						return this->CHardwareBufferManagerBase::_freeUnusedBufferCopies();
				}
				virtual void _releaseBufferCopies(_in ev_bool forceFreeUnused)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback(forceFreeUnused);
					}
					else
						return this->CHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
				}
				virtual void _releaseBufferCopies()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback();
					}
					else
						return this->CHardwareBufferManagerBase::_releaseBufferCopies();
				}
				virtual void _forceReleaseBufferCopies(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer);
					}
					else
						return this->CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
				}
				virtual void _forceReleaseBufferCopies(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback(sourceBuffer);
					}
					else
						return this->CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
				}
			};
			REGISTER_FACTORY_CLASS(CHardwareBufferManagerBaseProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllDeclarations();
				else
					ptrNativeObject->destroyAllDeclarations();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllDeclarations_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllDeclarations();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllBindings();
				else
					ptrNativeObject->destroyAllBindings();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyAllBindings_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllBindings();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclarationImpl();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->createVertexDeclarationImpl();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclarationImpl();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
				else
					ptrNativeObject->destroyVertexDeclarationImpl(decl);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexBufferBinding*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBindingImpl();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->createVertexBufferBindingImpl();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexBufferBinding*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBindingImpl();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
				else
					ptrNativeObject->destroyVertexBufferBindingImpl(binding);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(void *pObjectXXXX, _in const void* source, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::makeBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)source, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->makeBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)source, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* source, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::makeBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)source, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createRenderToVertexBuffer();
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclaration();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->createVertexDeclaration();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclaration();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclaration(decl);
				else
					ptrNativeObject->destroyVertexDeclaration(decl);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclaration(decl);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexBufferBinding*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBinding();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->createVertexBufferBinding();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexBufferBinding*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBinding();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
				else
					ptrNativeObject->destroyVertexBufferBinding(binding);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* sourceBuffer, _in const void* copy )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)copy);
				else
					ptrNativeObject->registerVertexBufferSourceAndCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)copy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer, _in const void* copy )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)copy);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee, copyData);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::releaseVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
				else
					ptrNativeObject->releaseVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::releaseVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::touchVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
				else
					ptrNativeObject->touchVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::touchVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_freeUnusedBufferCopies();
				else
					ptrNativeObject->_freeUnusedBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__freeUnusedBufferCopies_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_freeUnusedBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(void *pObjectXXXX, _in ev_bool forceFreeUnused )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
				else
					ptrNativeObject->_releaseBufferCopies(forceFreeUnused);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool forceFreeUnused )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies();
				else
					ptrNativeObject->_releaseBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__releaseBufferCopies_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer);
				else
					ptrNativeObject->_forceReleaseBufferCopies(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
				else
					ptrNativeObject->_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback )
			{
				CHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__notifyVertexBufferDestroyed_void_CHardwareVertexBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareVertexBuffer* buf )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->_notifyVertexBufferDestroyed(buf);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManagerBase__notifyIndexBufferDestroyed_void_CHardwareIndexBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareIndexBuffer* buf )
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjectXXXX;
				ptrNativeObject->_notifyIndexBufferDestroyed(buf);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback)(_in const void* source, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer, _in const void* copy);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback)(_in ev_bool forceFreeUnused);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback)(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer);
			class CHardwareBufferManagerProxy : public EarthView::World::Graphic::CHardwareBufferManager
			{
			private:
				EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback* m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback;
				EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback;
			public:
				CHardwareBufferManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBufferManager(pList)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void(EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void(EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void(EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool(EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void(EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback(vertexSize, numVerts, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback(vertexSize, numVerts, (int)usage);
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback((int)itype, numIndexes, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback((int)itype, numIndexes, (int)usage);
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage);
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback();
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createRenderToVertexBuffer();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback();
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createVertexDeclaration();
				}
				virtual void destroyVertexDeclaration(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CHardwareBufferManager::destroyVertexDeclaration(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback();
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createVertexBufferBinding();
				}
				virtual void destroyVertexBufferBinding(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CHardwareBufferManager::destroyVertexBufferBinding(binding);
				}
				virtual void registerVertexBufferSourceAndCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer, &copy);
					}
					else
						return this->CHardwareBufferManager::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback(&sourceBuffer, (int)licenseType, licensee, copyData);
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback(&sourceBuffer, (int)licenseType, licensee);
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
				}
				virtual void releaseVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CHardwareBufferManager::releaseVertexBufferCopy(bufferCopy);
				}
				virtual void touchVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CHardwareBufferManager::touchVertexBufferCopy(bufferCopy);
				}
				virtual void _freeUnusedBufferCopies()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback();
					}
					else
						return this->CHardwareBufferManager::_freeUnusedBufferCopies();
				}
				virtual void _releaseBufferCopies(_in ev_bool forceFreeUnused)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback(forceFreeUnused);
					}
					else
						return this->CHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
				}
				virtual void _releaseBufferCopies()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback();
					}
					else
						return this->CHardwareBufferManager::_releaseBufferCopies();
				}
				virtual void _forceReleaseBufferCopies(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer);
					}
					else
						return this->CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
				}
				virtual void _forceReleaseBufferCopies(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback(sourceBuffer);
					}
					else
						return this->CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
				}
				virtual void destroyAllDeclarations()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback();
					}
					else
						return this->CHardwareBufferManager::destroyAllDeclarations();
				}
				virtual void destroyAllBindings()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback();
					}
					else
						return this->CHardwareBufferManager::destroyAllBindings();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createVertexDeclarationImpl();
				}
				virtual void destroyVertexDeclarationImpl(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CHardwareBufferManager::destroyVertexDeclarationImpl(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::createVertexBufferBindingImpl();
				}
				virtual void destroyVertexBufferBindingImpl(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CHardwareBufferManager::destroyVertexBufferBindingImpl(binding);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback(&source, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CHardwareBufferManager::makeBufferCopy(source, usage, useShadowBuffer);
				}
			};
			REGISTER_FACTORY_CLASS(CHardwareBufferManagerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createRenderToVertexBuffer();
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexDeclaration();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->createVertexDeclaration();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexDeclaration();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexDeclaration(decl);
				else
					ptrNativeObject->destroyVertexDeclaration(decl);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexDeclaration(decl);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexBufferBinding*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexBufferBinding();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->createVertexBufferBinding();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexBufferBinding*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CVertexBufferBinding* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::createVertexBufferBinding();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexBufferBinding(binding);
				else
					ptrNativeObject->destroyVertexBufferBinding(binding);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexBufferBinding(binding);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* sourceBuffer, _in const void* copy )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::registerVertexBufferSourceAndCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)copy);
				else
					ptrNativeObject->registerVertexBufferSourceAndCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)copy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer, _in const void* copy )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::registerVertexBufferSourceAndCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)copy);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee, copyData);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer, (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType)licenseType, licensee);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::releaseVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
				else
					ptrNativeObject->releaseVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::releaseVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::touchVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
				else
					ptrNativeObject->touchVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* bufferCopy )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::touchVertexBufferCopy(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)bufferCopy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_freeUnusedBufferCopies();
				else
					ptrNativeObject->_freeUnusedBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__freeUnusedBufferCopies_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_freeUnusedBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool(void *pObjectXXXX, _in ev_bool forceFreeUnused )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
				else
					ptrNativeObject->_releaseBufferCopies(forceFreeUnused);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool forceFreeUnused )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies();
				else
					ptrNativeObject->_releaseBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__releaseBufferCopies_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer);
				else
					ptrNativeObject->_forceReleaseBufferCopies(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in const void* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
				else
					ptrNativeObject->_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__notifyVertexBufferDestroyed_void_CHardwareVertexBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareVertexBuffer* buf )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->_notifyVertexBufferDestroyed(buf);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBufferManager__notifyIndexBufferDestroyed_void_CHardwareIndexBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareIndexBuffer* buf )
			{
				EarthView::World::Graphic::CHardwareBufferManager* ptrNativeObject = (EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX;
				ptrNativeObject->_notifyIndexBufferDestroyed(buf);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_getSingleton_CHardwareBufferManager( )
			{
				EarthView::World::Graphic::CHardwareBufferManager& objXXXX = EarthView::World::Graphic::CHardwareBufferManager::getSingleton();
				EarthView::World::Graphic::CHardwareBufferManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwareBufferManager*  _stdcall EarthView_World_Graphic_CHardwareBufferManager_getSingletonPtr_CHardwareBufferManager( )
			{
				EarthView::World::Graphic::CHardwareBufferManager* objXXXX = EarthView::World::Graphic::CHardwareBufferManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllDeclarations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyAllBindings_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback )
			{
				CHardwareBufferManagerProxy* ptr = dynamic_cast<CHardwareBufferManagerProxy*>((EarthView::World::Graphic::CHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(pCallback);
				}
			}
		}
	}
}
