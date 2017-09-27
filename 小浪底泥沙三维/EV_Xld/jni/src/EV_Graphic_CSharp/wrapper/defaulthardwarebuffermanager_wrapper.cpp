/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/defaulthardwarebuffermanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback)(_inout void* srcBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback)();
			class CDefaultHardwareVertexBufferProxy : public EarthView::World::Graphic::CDefaultHardwareVertexBuffer
			{
			private:
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback;
				EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback;
			public:
				CDefaultHardwareVertexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareVertexBuffer(pList)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer(EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void(EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback = pCallback;
				}
				virtual void* lockImpl(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CDefaultHardwareVertexBuffer::lockImpl(offset, length, options);
				}
				virtual void unlockImpl()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback();
					}
					else
						return this->CDefaultHardwareVertexBuffer::unlockImpl();
				}
				virtual void readData(_in ev_size_t offset, _in ev_size_t length, _inout void* pDest)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pDest);
					}
					else
						return this->CDefaultHardwareVertexBuffer::readData(offset, length, pDest);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback(offset, length, pSource, discardWholeBuffer);
					}
					else
						return this->CDefaultHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pSource);
					}
					else
						return this->CDefaultHardwareVertexBuffer::writeData(offset, length, pSource);
				}
				virtual void* lock(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CDefaultHardwareVertexBuffer::lock(offset, length, options);
				}
				virtual void unlock()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback();
					}
					else
						return this->CDefaultHardwareVertexBuffer::unlock();
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback(&srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					}
					else
						return this->CDefaultHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback(&srcBuffer, srcOffset, dstOffset, length);
					}
					else
						return this->CDefaultHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback(&srcBuffer);
					}
					else
						return this->CDefaultHardwareVertexBuffer::copyData(srcBuffer);
				}
				virtual void _updateFromShadow()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback();
					}
					else
						return this->CDefaultHardwareVertexBuffer::_updateFromShadow();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultHardwareVertexBufferProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlockImpl();
				else
					ptrNativeObject->unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlockImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::readData(offset, length, pDest);
				else
					ptrNativeObject->readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				else
					ptrNativeObject->writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource);
				else
					ptrNativeObject->writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlock();
				else
					ptrNativeObject->unlock();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareVertexBuffer_unlock_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareVertexBuffer::unlock();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer_copyData_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void_Callback* pCallback )
			{
				CDefaultHardwareVertexBufferProxy* ptr = dynamic_cast<CDefaultHardwareVertexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareVertexBuffer__updateFromShadow_void(pCallback);
				}
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback)(_inout void* srcBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback)();
			class CDefaultHardwareIndexBufferProxy : public EarthView::World::Graphic::CDefaultHardwareIndexBuffer
			{
			private:
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback;
				EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback;
			public:
				CDefaultHardwareIndexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareIndexBuffer(pList)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer(EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void(EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback = pCallback;
				}
				virtual void* lockImpl(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CDefaultHardwareIndexBuffer::lockImpl(offset, length, options);
				}
				virtual void unlockImpl()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback();
					}
					else
						return this->CDefaultHardwareIndexBuffer::unlockImpl();
				}
				virtual void readData(_in ev_size_t offset, _in ev_size_t length, _inout void* pDest)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pDest);
					}
					else
						return this->CDefaultHardwareIndexBuffer::readData(offset, length, pDest);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback(offset, length, pSource, discardWholeBuffer);
					}
					else
						return this->CDefaultHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pSource);
					}
					else
						return this->CDefaultHardwareIndexBuffer::writeData(offset, length, pSource);
				}
				virtual void* lock(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CDefaultHardwareIndexBuffer::lock(offset, length, options);
				}
				virtual void unlock()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback();
					}
					else
						return this->CDefaultHardwareIndexBuffer::unlock();
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback(&srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					}
					else
						return this->CDefaultHardwareIndexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback(&srcBuffer, srcOffset, dstOffset, length);
					}
					else
						return this->CDefaultHardwareIndexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback(&srcBuffer);
					}
					else
						return this->CDefaultHardwareIndexBuffer::copyData(srcBuffer);
				}
				virtual void _updateFromShadow()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback();
					}
					else
						return this->CDefaultHardwareIndexBuffer::_updateFromShadow();
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultHardwareIndexBufferProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlockImpl();
				else
					ptrNativeObject->unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlockImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::readData(offset, length, pDest);
				else
					ptrNativeObject->readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				else
					ptrNativeObject->writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource);
				else
					ptrNativeObject->writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlock();
				else
					ptrNativeObject->unlock();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CDefaultHardwareIndexBuffer_unlock_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareIndexBuffer::unlock();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer_copyData_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void_Callback* pCallback )
			{
				CDefaultHardwareIndexBufferProxy* ptr = dynamic_cast<CDefaultHardwareIndexBufferProxy*>((EarthView::World::Graphic::CDefaultHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareIndexBuffer__updateFromShadow_void(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback)(_in const void* source, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer, _in const void* copy);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback)(_in ev_bool forceFreeUnused);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback)(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer);
			class CDefaultHardwareBufferManagerBaseProxy : public EarthView::World::Graphic::CDefaultHardwareBufferManagerBase
			{
			private:
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback;
			public:
				CDefaultHardwareBufferManagerBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareBufferManagerBase(pList)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback(vertexSize, numVerts, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback(vertexSize, numVerts, (int)usage);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback((int)itype, numIndexes, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback((int)itype, numIndexes, (int)usage);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback();
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createRenderToVertexBuffer();
				}
				virtual void destroyAllDeclarations()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManagerBase::destroyAllDeclarations();
				}
				virtual void destroyAllBindings()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManagerBase::destroyAllBindings();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createVertexDeclarationImpl();
				}
				virtual void destroyVertexDeclarationImpl(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createVertexBufferBindingImpl();
				}
				virtual void destroyVertexBufferBindingImpl(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback(&source, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::makeBufferCopy(source, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback();
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createVertexDeclaration();
				}
				virtual void destroyVertexDeclaration(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::destroyVertexDeclaration(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback();
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::createVertexBufferBinding();
				}
				virtual void destroyVertexBufferBinding(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
				}
				virtual void registerVertexBufferSourceAndCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer, &copy);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback(&sourceBuffer, (int)licenseType, licensee, copyData);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback(&sourceBuffer, (int)licenseType, licensee);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
				}
				virtual void releaseVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::releaseVertexBufferCopy(bufferCopy);
				}
				virtual void touchVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::touchVertexBufferCopy(bufferCopy);
				}
				virtual void _freeUnusedBufferCopies()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManagerBase::_freeUnusedBufferCopies();
				}
				virtual void _releaseBufferCopies(_in ev_bool forceFreeUnused)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback(forceFreeUnused);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
				}
				virtual void _releaseBufferCopies()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManagerBase::_releaseBufferCopies();
				}
				virtual void _forceReleaseBufferCopies(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
				}
				virtual void _forceReleaseBufferCopies(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback(sourceBuffer);
					}
					else
						return this->CDefaultHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultHardwareBufferManagerBaseProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_NoVirtual(void *pObjectXXXX, _in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_NoVirtual(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_NoVirtual(void *pObjectXXXX, _in int itype, _in ev_uint64  numIndexes, _in int usage )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createIndexBuffer((EarthView::World::Graphic::CHardwareIndexBuffer::IndexType)itype, numIndexes, (EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				if (dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createRenderToVertexBuffer();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManagerBase* ptrNativeObject = (EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX;
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CDefaultHardwareBufferManagerBase::createRenderToVertexBuffer();
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllDeclarations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyAllBindings_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclarationImpl_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclarationImpl_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBindingImpl_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexDeclaration_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexDeclaration_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_createVertexBufferBinding_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_destroyVertexBufferBinding_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__freeUnusedBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__releaseBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerBaseProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerBaseProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManagerBase*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManagerBase__forceReleaseBufferCopies_void_CHardwareVertexBuffer(pCallback);
				}
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback)(_in const void* source, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback)(_in ev_uint64  vertexSize, _in ev_uint64  numVerts, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage, _in ev_bool useShadowBuffer);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback)(_in int itype, _in ev_uint64  numIndexes, _in int usage);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback)(_in EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef EarthView::World::Graphic::CVertexBufferBinding*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback)(_in EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer, _in const void* copy);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData);
			typedef void*  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback)(_in const void* sourceBuffer, _in int licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* bufferCopy);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback)(_in ev_bool forceFreeUnused);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback)(_in const void* sourceBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback)(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer);
			class CDefaultHardwareBufferManagerProxy : public EarthView::World::Graphic::CDefaultHardwareBufferManager
			{
			private:
				EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback;
			public:
				CDefaultHardwareBufferManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDefaultHardwareBufferManager(pList)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void(EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void(EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void(EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool(EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void(EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback(vertexSize, numVerts, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(_in ev_size_t vertexSize, _in ev_size_t numVerts, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback(vertexSize, numVerts, (int)usage);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback((int)itype, numIndexes, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(_in EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, _in ev_size_t numIndexes, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback((int)itype, numIndexes, (int)usage);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage);
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback();
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createRenderToVertexBuffer();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback();
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createVertexDeclaration();
				}
				virtual void destroyVertexDeclaration(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CDefaultHardwareBufferManager::destroyVertexDeclaration(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback();
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createVertexBufferBinding();
				}
				virtual void destroyVertexBufferBinding(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CDefaultHardwareBufferManager::destroyVertexBufferBinding(binding);
				}
				virtual void registerVertexBufferSourceAndCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer, &copy);
					}
					else
						return this->CDefaultHardwareBufferManager::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee, _in ev_bool copyData)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback(&sourceBuffer, (int)licenseType, licensee, copyData);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, _in EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, _in EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback(&sourceBuffer, (int)licenseType, licensee);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
				}
				virtual void releaseVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CDefaultHardwareBufferManager::releaseVertexBufferCopy(bufferCopy);
				}
				virtual void touchVertexBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback(&bufferCopy);
					}
					else
						return this->CDefaultHardwareBufferManager::touchVertexBufferCopy(bufferCopy);
				}
				virtual void _freeUnusedBufferCopies()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManager::_freeUnusedBufferCopies();
				}
				virtual void _releaseBufferCopies(_in ev_bool forceFreeUnused)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback(forceFreeUnused);
					}
					else
						return this->CDefaultHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
				}
				virtual void _releaseBufferCopies()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManager::_releaseBufferCopies();
				}
				virtual void _forceReleaseBufferCopies(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback(&sourceBuffer);
					}
					else
						return this->CDefaultHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
				}
				virtual void _forceReleaseBufferCopies(_in EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback(sourceBuffer);
					}
					else
						return this->CDefaultHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
				}
				virtual void destroyAllDeclarations()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManager::destroyAllDeclarations();
				}
				virtual void destroyAllBindings()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback();
					}
					else
						return this->CDefaultHardwareBufferManager::destroyAllBindings();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createVertexDeclarationImpl();
				}
				virtual void destroyVertexDeclarationImpl(_in EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CDefaultHardwareBufferManager::destroyVertexDeclarationImpl(decl);
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexBufferBinding* returnValue = m_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::createVertexBufferBindingImpl();
				}
				virtual void destroyVertexBufferBindingImpl(_in EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CDefaultHardwareBufferManager::destroyVertexBufferBindingImpl(binding);
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(_in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, _in EarthView::World::Graphic::CHardwareBuffer::Usage usage, _in ev_bool useShadowBuffer)
				{
					if(m_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback(&source, (int)usage, useShadowBuffer);
						return returnValue;
					}
					else
						return this->CDefaultHardwareBufferManager::makeBufferCopy(source, usage, useShadowBuffer);
				}
			};
			REGISTER_FACTORY_CLASS(CDefaultHardwareBufferManagerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_getSingleton_CDefaultHardwareBufferManager( )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManager& objXXXX = EarthView::World::Graphic::CDefaultHardwareBufferManager::getSingleton();
				EarthView::World::Graphic::CDefaultHardwareBufferManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CDefaultHardwareBufferManager*  _stdcall EarthView_World_Graphic_CDefaultHardwareBufferManager_getSingletonPtr_CDefaultHardwareBufferManager( )
			{
				EarthView::World::Graphic::CDefaultHardwareBufferManager* objXXXX = EarthView::World::Graphic::CDefaultHardwareBufferManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllDeclarations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyAllBindings_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclarationImpl_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclarationImpl_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBindingImpl_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBindingImpl_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_makeBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBuffer_CHardwareVertexBufferSharedPtr_ev_size_t_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createIndexBuffer_CHardwareIndexBufferSharedPtr_IndexType_ev_size_t_Usage(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createRenderToVertexBuffer_RenderToVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexDeclaration_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexDeclaration_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_createVertexBufferBinding_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_destroyVertexBufferBinding_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_registerVertexBufferSourceAndCopy_void_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_releaseVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager_touchVertexBufferCopy_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__freeUnusedBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__releaseBufferCopies_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer( void *pObjectXXXX, EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer_Callback* pCallback )
			{
				CDefaultHardwareBufferManagerProxy* ptr = dynamic_cast<CDefaultHardwareBufferManagerProxy*>((EarthView::World::Graphic::CDefaultHardwareBufferManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CDefaultHardwareBufferManager__forceReleaseBufferCopies_void_CHardwareVertexBuffer(pCallback);
				}
			}
		}
	}
}
