/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarebuffer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback)(_inout void* srcBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback)();
			class CHardwareBufferProxy : public EarthView::World::Graphic::CHardwareBuffer
			{
			private:
				EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback* m_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback;
				EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback* m_EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback;
				EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback;
				EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback* m_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback;
			public:
				CHardwareBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBuffer(pList)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void(EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_unlock_void(EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer(EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void(EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback = pCallback;
				}
				virtual void* lockImpl(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwareBuffer::lockImpl(offset, length, options);
				}
				virtual void unlockImpl()
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback();
					}
					else
						return this->CHardwareBuffer::unlockImpl();
				}
				virtual void* lock(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwareBuffer::lock(offset, length, options);
				}
				virtual void unlock()
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback();
					}
					else
						return this->CHardwareBuffer::unlock();
				}
				virtual void readData(_in ev_size_t offset, _in ev_size_t length, _inout void* pDest)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pDest);
					}
					else
						return this->CHardwareBuffer::readData(offset, length, pDest);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback(offset, length, pSource, discardWholeBuffer);
					}
					else
						return this->CHardwareBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pSource);
					}
					else
						return this->CHardwareBuffer::writeData(offset, length, pSource);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback(&srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					}
					else
						return this->CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback(&srcBuffer, srcOffset, dstOffset, length);
					}
					else
						return this->CHardwareBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback(&srcBuffer);
					}
					else
						return this->CHardwareBuffer::copyData(srcBuffer);
				}
				virtual void _updateFromShadow()
				{
					if(m_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback();
					}
					else
						return this->CHardwareBuffer::_updateFromShadow();
				}
			};
			REGISTER_FACTORY_CLASS(CHardwareBufferProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::unlockImpl();
				else
					ptrNativeObject->unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_unlockImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareBuffer_lock_void_LockOptions(void *pObjectXXXX, _in int options )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->lock((EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_unlock_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::unlock();
				else
					ptrNativeObject->unlock();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_unlock_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_unlock_void_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_unlock_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_unlock_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::unlock();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::readData(offset, length, pDest);
				else
					ptrNativeObject->readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				else
					ptrNativeObject->writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource);
				else
					ptrNativeObject->writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(void *pObjectXXXX, _inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				else
					ptrNativeObject->copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_NoVirtual(void *pObjectXXXX, _inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer, srcOffset, dstOffset, length);
				else
					ptrNativeObject->copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer, srcOffset, dstOffset, length);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer, srcOffset, dstOffset, length);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer(void *pObjectXXXX, _inout void* srcBuffer )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer);
				else
					ptrNativeObject->copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_copyData_void_CHardwareBuffer_NoVirtual(void *pObjectXXXX, _inout void* srcBuffer )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::copyData(*(EarthView::World::Graphic::CHardwareBuffer*)srcBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::_updateFromShadow();
				else
					ptrNativeObject->_updateFromShadow();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_Callback* pCallback )
			{
				CHardwareBufferProxy* ptr = dynamic_cast<CHardwareBufferProxy*>((EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer__updateFromShadow_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareBuffer::_updateFromShadow();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwareBuffer_getSizeInBytes_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getSizeInBytes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CHardwareBuffer_getUsage_Usage(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage objXXXX = ptrNativeObject->getUsage();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHardwareBuffer_isSystemMemory_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isSystemMemory();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHardwareBuffer_hasShadowBuffer_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasShadowBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHardwareBuffer_isLocked_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLocked();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareBuffer_suppressHardwareUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool suppress )
			{
				EarthView::World::Graphic::CHardwareBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareBuffer*) pObjectXXXX;
				ptrNativeObject->suppressHardwareUpdate(suppress);
			}
		}
	}
}
