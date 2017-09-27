/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwareindexbuffer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback)(_inout void* srcBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback)();
			class CHardwareIndexBufferProxy : public EarthView::World::Graphic::CHardwareIndexBuffer
			{
			private:
				EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback;
				EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback* m_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback;
			public:
				CHardwareIndexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareIndexBuffer(pList)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void(EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void(EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer(EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void(EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback = pCallback;
				}
				virtual void* lockImpl(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwareIndexBuffer::lockImpl(offset, length, options);
				}
				virtual void unlockImpl()
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback();
					}
					else
						return this->CHardwareIndexBuffer::unlockImpl();
				}
				virtual void readData(_in ev_size_t offset, _in ev_size_t length, _inout void* pDest)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pDest);
					}
					else
						return this->CHardwareIndexBuffer::readData(offset, length, pDest);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback(offset, length, pSource, discardWholeBuffer);
					}
					else
						return this->CHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pSource);
					}
					else
						return this->CHardwareIndexBuffer::writeData(offset, length, pSource);
				}
				virtual void* lock(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwareIndexBuffer::lock(offset, length, options);
				}
				virtual void unlock()
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback();
					}
					else
						return this->CHardwareIndexBuffer::unlock();
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback(&srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					}
					else
						return this->CHardwareIndexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback(&srcBuffer, srcOffset, dstOffset, length);
					}
					else
						return this->CHardwareIndexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback(&srcBuffer);
					}
					else
						return this->CHardwareIndexBuffer::copyData(srcBuffer);
				}
				virtual void _updateFromShadow()
				{
					if(m_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback();
					}
					else
						return this->CHardwareIndexBuffer::_updateFromShadow();
				}
			};
			REGISTER_FACTORY_CLASS(CHardwareIndexBufferProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::unlockImpl();
				else
					ptrNativeObject->unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_unlockImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::readData(offset, length, pDest);
				else
					ptrNativeObject->readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				else
					ptrNativeObject->writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::writeData(offset, length, pSource);
				else
					ptrNativeObject->writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareIndexBuffer::writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwareBufferManagerBase*  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_getManager_CHardwareBufferManagerBase(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareBufferManagerBase* objXXXX = ptrNativeObject->getManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_getType_IndexType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_getNumIndexes_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumIndexes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwareIndexBuffer_getIndexSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareIndexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getIndexSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_unlock_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer_copyData_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void_Callback* pCallback )
			{
				CHardwareIndexBufferProxy* ptr = dynamic_cast<CHardwareIndexBufferProxy*>((EarthView::World::Graphic::CHardwareIndexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareIndexBuffer__updateFromShadow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwareIndexBuffer*  _stdcall EarthView_World_Graphic_CHardwareIndexBufferSharedPtr_get_CHardwareIndexBuffer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* ptrNativeObject = (EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareIndexBuffer* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
		}
	}
}
