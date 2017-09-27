/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarevertexbuffer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback)(_inout void* srcBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback)();
			class CHardwareVertexBufferProxy : public EarthView::World::Graphic::CHardwareVertexBuffer
			{
			private:
				EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback;
				EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback* m_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback;
			public:
				CHardwareVertexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareVertexBuffer(pList)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback = NULL;
					m_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void(EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void(EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer(EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void(EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback = pCallback;
				}
				virtual void* lockImpl(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwareVertexBuffer::lockImpl(offset, length, options);
				}
				virtual void unlockImpl()
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback();
					}
					else
						return this->CHardwareVertexBuffer::unlockImpl();
				}
				virtual void readData(_in ev_size_t offset, _in ev_size_t length, _inout void* pDest)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pDest);
					}
					else
						return this->CHardwareVertexBuffer::readData(offset, length, pDest);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback(offset, length, pSource, discardWholeBuffer);
					}
					else
						return this->CHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pSource);
					}
					else
						return this->CHardwareVertexBuffer::writeData(offset, length, pSource);
				}
				virtual void* lock(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwareVertexBuffer::lock(offset, length, options);
				}
				virtual void unlock()
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback();
					}
					else
						return this->CHardwareVertexBuffer::unlock();
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback(&srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					}
					else
						return this->CHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback(&srcBuffer, srcOffset, dstOffset, length);
					}
					else
						return this->CHardwareVertexBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback(&srcBuffer);
					}
					else
						return this->CHardwareVertexBuffer::copyData(srcBuffer);
				}
				virtual void _updateFromShadow()
				{
					if(m_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback();
					}
					else
						return this->CHardwareVertexBuffer::_updateFromShadow();
				}
			};
			REGISTER_FACTORY_CLASS(CHardwareVertexBufferProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::unlockImpl();
				else
					ptrNativeObject->unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_unlockImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::unlockImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::readData(offset, length, pDest);
				else
					ptrNativeObject->readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				else
					ptrNativeObject->writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource);
				else
					ptrNativeObject->writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwareVertexBuffer::writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwareBufferManagerBase*  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_getManager_CHardwareBufferManagerBase(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareBufferManagerBase* objXXXX = ptrNativeObject->getManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_getVertexSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getVertexSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_getNumVertices_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumVertices();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_getIsInstanceData_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getIsInstanceData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_setIsInstanceData_void_bool(void *pObjectXXXX, _in const bool val )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->setIsInstanceData(val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_getInstanceDataStepRate_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				size_t objXXXX = ptrNativeObject->getInstanceDataStepRate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwareVertexBuffer_setInstanceDataStepRate_void_size_t(void *pObjectXXXX, _in const ev_uint64  val )
			{
				EarthView::World::Graphic::CHardwareVertexBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX;
				ptrNativeObject->setInstanceDataStepRate(val);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_unlock_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer_copyData_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void_Callback* pCallback )
			{
				CHardwareVertexBufferProxy* ptr = dynamic_cast<CHardwareVertexBufferProxy*>((EarthView::World::Graphic::CHardwareVertexBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwareVertexBuffer__updateFromShadow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwareVertexBuffer*  _stdcall EarthView_World_Graphic_CHardwareVertexBufferSharedPtr_get_CHardwareVertexBuffer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr* ptrNativeObject = (EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBuffer* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexElement_getSource_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexElement* ptrNativeObject = (EarthView::World::Graphic::CVertexElement*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getSource();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexElement_getOffset_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexElement* ptrNativeObject = (EarthView::World::Graphic::CVertexElement*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getOffset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CVertexElement_getType_VertexElementType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexElement* ptrNativeObject = (EarthView::World::Graphic::CVertexElement*) pObjectXXXX;
				EarthView::World::Graphic::VertexElementType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CVertexElement_getSemantic_VertexElementSemantic(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexElement* ptrNativeObject = (EarthView::World::Graphic::CVertexElement*) pObjectXXXX;
				EarthView::World::Graphic::VertexElementSemantic objXXXX = ptrNativeObject->getSemantic();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexElement_getIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexElement* ptrNativeObject = (EarthView::World::Graphic::CVertexElement*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexElement_getSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexElement* ptrNativeObject = (EarthView::World::Graphic::CVertexElement*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexElement_getTypeSize_ev_size_t_VertexElementType(_in int etype )
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CVertexElement::getTypeSize((EarthView::World::Graphic::VertexElementType)etype);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexElement_getTypeCount_ev_uint16_VertexElementType(_in int etype )
			{
				ev_uint16 objXXXX = EarthView::World::Graphic::CVertexElement::getTypeCount((EarthView::World::Graphic::VertexElementType)etype);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CVertexElement_multiplyTypeCount_VertexElementType_VertexElementType_ev_uint16(_in int baseType, _in ev_uint16 count )
			{
				EarthView::World::Graphic::VertexElementType objXXXX = EarthView::World::Graphic::CVertexElement::multiplyTypeCount((EarthView::World::Graphic::VertexElementType)baseType, count);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CVertexElement_getBaseType_VertexElementType_VertexElementType(_in int multiType )
			{
				EarthView::World::Graphic::VertexElementType objXXXX = EarthView::World::Graphic::CVertexElement::getBaseType((EarthView::World::Graphic::VertexElementType)multiType);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexElement_convertColourValue_void_VertexElementType_VertexElementType_ev_uint32(_in int srcType, _in int dstType, _in ev_uint32* ptr )
			{
				EarthView::World::Graphic::CVertexElement::convertColourValue((EarthView::World::Graphic::VertexElementType)srcType, (EarthView::World::Graphic::VertexElementType)dstType, ptr);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CVertexElement_convertColourValue_ev_uint32_CColourValue_VertexElementType(_in const void* src, _in int dst )
			{
				ev_uint32 objXXXX = EarthView::World::Graphic::CVertexElement::convertColourValue(*(EarthView::World::Graphic::CColourValue*)src, (EarthView::World::Graphic::VertexElementType)dst);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexElement_toColourValue_CColourValue_ev_uint32_VertexElementType(_in ev_uint32 color, _in int dst )
			{
				EarthView::World::Graphic::CColourValue objXXXX = EarthView::World::Graphic::CVertexElement::toColourValue(color, (EarthView::World::Graphic::VertexElementType)dst);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CVertexElement_getBestColourVertexElementType_VertexElementType( )
			{
				EarthView::World::Graphic::VertexElementType objXXXX = EarthView::World::Graphic::CVertexElement::getBestColourVertexElementType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexElement_OperatorEquals_ev_bool_CVertexElement(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CVertexElement& objXXXX = *(EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement& objXXXX1 = *(EarthView::World::Graphic::CVertexElement*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexElement_OperatorNotEquals_ev_bool_CVertexElement(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CVertexElement& objXXXX = *(EarthView::World::Graphic::CVertexElement*) pObjXXXX;
				const EarthView::World::Graphic::CVertexElement& objXXXX1 = *(EarthView::World::Graphic::CVertexElement*)rhs;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexElement_baseVertexPointerToElement_void_void_void(void *pObjectXXXX, _inout void* pBase, _inout void** pElem )
			{
				const EarthView::World::Graphic::CVertexElement* ptrNativeObject = (EarthView::World::Graphic::CVertexElement*) pObjectXXXX;
				ptrNativeObject->baseVertexPointerToElement(pBase, pElem);
			}
			typedef const void*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback)(_in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback)(_in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback)(_in ev_uint16 atPosition, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback)(_in ev_uint16 atPosition, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback)(_in ev_uint16 elem_index);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback)(_in int semantic, _in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback)(_in int semantic);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback)(_in ev_uint16 elem_index, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback)(_in ev_uint16 elem_index, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic);
			typedef const EarthView::World::Graphic::CVertexElement*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback)(_in int sem, _in ev_uint16 index);
			typedef const EarthView::World::Graphic::CVertexElement*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback)(_in int sem);
			typedef void*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback)(_in ev_uint16 source);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback)(_in ev_uint16 source);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback)(_in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr);
			typedef EarthView::World::Graphic::CVertexDeclaration*  ( _stdcall EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback)();
			class CVertexDeclarationProxy : public EarthView::World::Graphic::CVertexDeclaration
			{
			private:
				EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback;
				EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback;
				EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback* m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback;
				EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback* m_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback;
				EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback;
				EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback* m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback;
				EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback* m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback;
				EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback;
			public:
				CVertexDeclarationProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexDeclaration(pList)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback = NULL;
					m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic(EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void(EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic(EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16(EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase(EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration(EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback = pCallback;
				}
				virtual const EarthView::World::Graphic::CVertexElement& addElement(_in ev_uint16 source, _in ev_size_t offset, _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic, _in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CVertexElement& returnValue = *(EarthView::World::Graphic::CVertexElement*)m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback(source, offset, (int)theType, (int)semantic, index);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::addElement(source, offset, theType, semantic, index);
				}
				virtual const EarthView::World::Graphic::CVertexElement& addElement(_in ev_uint16 source, _in ev_size_t offset, _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CVertexElement& returnValue = *(EarthView::World::Graphic::CVertexElement*)m_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback(source, offset, (int)theType, (int)semantic);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::addElement(source, offset, theType, semantic);
				}
				virtual const EarthView::World::Graphic::CVertexElement& insertElement(_in ev_uint16 atPosition, _in ev_uint16 source, _in ev_size_t offset, _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic, _in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CVertexElement& returnValue = *(EarthView::World::Graphic::CVertexElement*)m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback(atPosition, source, offset, (int)theType, (int)semantic, index);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic, index);
				}
				virtual const EarthView::World::Graphic::CVertexElement& insertElement(_in ev_uint16 atPosition, _in ev_uint16 source, _in ev_size_t offset, _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CVertexElement& returnValue = *(EarthView::World::Graphic::CVertexElement*)m_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback(atPosition, source, offset, (int)theType, (int)semantic);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::insertElement(atPosition, source, offset, theType, semantic);
				}
				virtual void removeElement(_in ev_uint16 elem_index)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback(elem_index);
					}
					else
						return this->CVertexDeclaration::removeElement(elem_index);
				}
				virtual void removeElement(_in EarthView::World::Graphic::VertexElementSemantic semantic, _in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback((int)semantic, index);
					}
					else
						return this->CVertexDeclaration::removeElement(semantic, index);
				}
				virtual void removeElement(_in EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback((int)semantic);
					}
					else
						return this->CVertexDeclaration::removeElement(semantic);
				}
				virtual void removeAllElements()
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback();
					}
					else
						return this->CVertexDeclaration::removeAllElements();
				}
				virtual void modifyElement(_in ev_uint16 elem_index, _in ev_uint16 source, _in ev_size_t offset, _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic, _in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback(elem_index, source, offset, (int)theType, (int)semantic, index);
					}
					else
						return this->CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic, index);
				}
				virtual void modifyElement(_in ev_uint16 elem_index, _in ev_uint16 source, _in ev_size_t offset, _in EarthView::World::Graphic::VertexElementType theType, _in EarthView::World::Graphic::VertexElementSemantic semantic)
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback(elem_index, source, offset, (int)theType, (int)semantic);
					}
					else
						return this->CVertexDeclaration::modifyElement(elem_index, source, offset, theType, semantic);
				}
				virtual const EarthView::World::Graphic::CVertexElement* findElementBySemantic(_in EarthView::World::Graphic::VertexElementSemantic sem, _in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CVertexElement* returnValue = m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback((int)sem, index);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::findElementBySemantic(sem, index);
				}
				virtual const EarthView::World::Graphic::CVertexElement* findElementBySemantic(_in EarthView::World::Graphic::VertexElementSemantic sem) const
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CVertexElement* returnValue = m_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback((int)sem);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::findElementBySemantic(sem);
				}
				virtual EarthView::World::Graphic::CVertexDeclaration::VertexElementList findElementsBySource(_in ev_uint16 source) const
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration::VertexElementList returnValue = *(EarthView::World::Graphic::CVertexDeclaration::VertexElementList*)m_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback(source);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::findElementsBySource(source);
				}
				virtual ev_size_t getVertexSize(_in ev_uint16 source) const
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback(source);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::getVertexSize(source);
				}
				virtual ev_uint16 getNextFreeTextureCoordinate() const
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CVertexDeclaration::getNextFreeTextureCoordinate();
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* clone(_in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr) const
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback(mgr);
						return returnValue;
					}
					else
						return this->CVertexDeclaration::clone(mgr);
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* clone() const
				{
					if(m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexDeclaration* returnValue = m_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback();
						return returnValue;
					}
					else
						return this->CVertexDeclaration::clone();
				}
			};
			REGISTER_FACTORY_CLASS(CVertexDeclarationProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_push_back_void_CVertexElement(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CVertexElement*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_push_front_void_CVertexElement(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::CVertexElement*)t);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_front_CVertexElement(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_back_CVertexElement(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_insert_void_ev_uint32_CVertexElement(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CVertexElement*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_VertexElementList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration::VertexElementList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexDeclaration_vertexElementLess_ev_bool_CVertexElement_CVertexElement(_in const void* e1, _in const void* e2 )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CVertexDeclaration::vertexElementLess(*(EarthView::World::Graphic::CVertexElement*)e1, *(EarthView::World::Graphic::CVertexElement*)e2);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexDeclaration_getElementCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getElementCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_getElements_VertexElementList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexDeclaration::VertexElementList& objXXXX = ptrNativeObject->getElements();
				const EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexElement*  _stdcall EarthView_World_Graphic_CVertexDeclaration_getElement_CVertexElement_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->getElement(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_sort_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->sort();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_closeGapsInSource_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->closeGapsInSource();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CVertexDeclaration_getAutoOrganisedDeclaration_CVertexDeclaration_ev_bool_ev_bool_bool(void *pObjectXXXX, _in ev_bool skeletalAnimation, _in ev_bool vertexAnimation, _in bool vertexAnimationNormals )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->getAutoOrganisedDeclaration(skeletalAnimation, vertexAnimation, vertexAnimationNormals);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexDeclaration_getMaxSource_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getMaxSource();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(void *pObjectXXXX, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->addElement(source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
				const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(void *pObjectXXXX, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->addElement(source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_addElement_CVertexElement_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(void *pObjectXXXX, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::addElement(source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
				const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(void *pObjectXXXX, _in ev_uint16 atPosition, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->insertElement(atPosition, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 atPosition, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
				const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(void *pObjectXXXX, _in ev_uint16 atPosition, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->insertElement(atPosition, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
					const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_insertElement_CVertexElement_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(void *pObjectXXXX, _in ev_uint16 atPosition, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::insertElement(atPosition, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
				const EarthView::World::Graphic::CVertexElement *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 elem_index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeElement(elem_index);
				else
					ptrNativeObject->removeElement(elem_index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 elem_index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeElement(elem_index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16(void *pObjectXXXX, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeElement((EarthView::World::Graphic::VertexElementSemantic)semantic, index);
				else
					ptrNativeObject->removeElement((EarthView::World::Graphic::VertexElementSemantic)semantic, index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_ev_uint16_NoVirtual(void *pObjectXXXX, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeElement((EarthView::World::Graphic::VertexElementSemantic)semantic, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic(void *pObjectXXXX, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeElement((EarthView::World::Graphic::VertexElementSemantic)semantic);
				else
					ptrNativeObject->removeElement((EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeElement_void_VertexElementSemantic_NoVirtual(void *pObjectXXXX, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeElement((EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeAllElements();
				else
					ptrNativeObject->removeAllElements();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_removeAllElements_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::removeAllElements();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(void *pObjectXXXX, _in ev_uint16 elem_index, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
				else
					ptrNativeObject->modifyElement(elem_index, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 elem_index, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(void *pObjectXXXX, _in ev_uint16 elem_index, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
				else
					ptrNativeObject->modifyElement(elem_index, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexDeclaration_modifyElement_void_ev_uint16_ev_uint16_ev_size_t_VertexElementType_VertexElementSemantic_NoVirtual(void *pObjectXXXX, _in ev_uint16 elem_index, _in ev_uint16 source, _in ev_uint64  offset, _in int theType, _in int semantic )
			{
				EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::modifyElement(elem_index, source, offset, (EarthView::World::Graphic::VertexElementType)theType, (EarthView::World::Graphic::VertexElementSemantic)semantic);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexElement*  _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16(void *pObjectXXXX, _in int sem, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic((EarthView::World::Graphic::VertexElementSemantic)sem, index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->findElementBySemantic((EarthView::World::Graphic::VertexElementSemantic)sem, index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexElement*  _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_ev_uint16_NoVirtual(void *pObjectXXXX, _in int sem, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic((EarthView::World::Graphic::VertexElementSemantic)sem, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexElement*  _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic(void *pObjectXXXX, _in int sem )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic((EarthView::World::Graphic::VertexElementSemantic)sem);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->findElementBySemantic((EarthView::World::Graphic::VertexElementSemantic)sem);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CVertexElement*  _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementBySemantic_CVertexElement_VertexElementSemantic_NoVirtual(void *pObjectXXXX, _in int sem )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexElement* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::findElementBySemantic((EarthView::World::Graphic::VertexElementSemantic)sem);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16(void *pObjectXXXX, _in ev_uint16 source )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::findElementsBySource(source);
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pXXXX = new EarthView::World::Graphic::CVertexDeclaration::VertexElementList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList objXXXX = ptrNativeObject->findElementsBySource(source);
					EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pXXXX = new EarthView::World::Graphic::CVertexDeclaration::VertexElementList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexDeclaration_findElementsBySource_VertexElementList_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 source )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::findElementsBySource(source);
				EarthView::World::Graphic::CVertexDeclaration::VertexElementList *pXXXX = new EarthView::World::Graphic::CVertexDeclaration::VertexElementList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16(void *pObjectXXXX, _in ev_uint16 source )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::getVertexSize(source);
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getVertexSize(source);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexDeclaration_getVertexSize_ev_size_t_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 source )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::getVertexSize(source);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::getNextFreeTextureCoordinate();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNextFreeTextureCoordinate();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexDeclaration_getNextFreeTextureCoordinate_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::getNextFreeTextureCoordinate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::clone(mgr);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->clone(mgr);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_CHardwareBufferManagerBase_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CHardwareBufferManagerBase* mgr )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::clone(mgr);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				if (dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::clone();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->clone();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_Callback* pCallback )
			{
				CVertexDeclarationProxy* ptr = dynamic_cast<CVertexDeclarationProxy*>((EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CVertexDeclaration_clone_CVertexDeclaration_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexDeclaration* ptrNativeObject = (EarthView::World::Graphic::CVertexDeclaration*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexDeclaration::clone();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexDeclaration_OperatorEquals_ev_bool_CVertexDeclaration(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CVertexDeclaration& objXXXX = *(EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexDeclaration& objXXXX1 = *(EarthView::World::Graphic::CVertexDeclaration*)rhs;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexDeclaration_OperatorNotEquals_ev_bool_CVertexDeclaration(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CVertexDeclaration& objXXXX = *(EarthView::World::Graphic::CVertexDeclaration*) pObjXXXX;
				const EarthView::World::Graphic::CVertexDeclaration& objXXXX1 = *(EarthView::World::Graphic::CVertexDeclaration*)rhs;
				return objXXXX != objXXXX1;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback)(_in ev_uint16 index, _in const void* buffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback)(_in ev_uint16 index);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback)(_in ev_uint16 index);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback)(_inout void* bindingIndexMap);
			typedef bool  ( _stdcall EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback)();
			class CVertexBufferBindingProxy : public EarthView::World::Graphic::CVertexBufferBinding
			{
			private:
				EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback;
				EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback* m_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback;
			public:
				CVertexBufferBindingProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexBufferBinding(pList)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback = NULL;
					m_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr(EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16(EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void(EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap(EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16(EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16(EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t(EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16(EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16(EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool(EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap(EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool(EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback = pCallback;
				}
				virtual void setBinding(_in ev_uint16 index, _in const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& buffer)
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback(index, &buffer);
					}
					else
						return this->CVertexBufferBinding::setBinding(index, buffer);
				}
				virtual void unsetBinding(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback(index);
					}
					else
						return this->CVertexBufferBinding::unsetBinding(index);
				}
				virtual void unsetAllBindings()
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback();
					}
					else
						return this->CVertexBufferBinding::unsetAllBindings();
				}
				virtual const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& getBindings() const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& returnValue = *(EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*)m_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback();
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::getBindings();
				}
				virtual const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& getBuffer(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& returnValue = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)m_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::getBuffer(index);
				}
				virtual ev_bool isBufferBound(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::isBufferBound(index);
				}
				virtual ev_size_t getBufferCount() const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::getBufferCount();
				}
				virtual ev_uint16 getNextIndex() const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::getNextIndex();
				}
				virtual ev_uint16 getLastBoundIndex() const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::getLastBoundIndex();
				}
				virtual ev_bool hasGaps() const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::hasGaps();
				}
				virtual void closeGaps(_inout EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap& bindingIndexMap)
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback(&bindingIndexMap);
					}
					else
						return this->CVertexBufferBinding::closeGaps(bindingIndexMap);
				}
				virtual bool getHasInstanceData() const
				{
					if(m_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback();
						return returnValue;
					}
					else
						return this->CVertexBufferBinding::getHasInstanceData();
				}
			};
			REGISTER_FACTORY_CLASS(CVertexBufferBindingProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_OperatorIndex_CHardwareVertexBufferSharedPtr_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& objYYYY = *(EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& objXXXX = objYYYY[key];
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_get_CHardwareVertexBufferSharedPtr_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& objXXXX = ptrNativeObject->get(key);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_swap_void_VertexBufferBindingMap(void *pObjectXXXX, _inout void* rhs )
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*)rhs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_VertexBufferBindingMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in ev_uint16 index, _in const void* buffer )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::setBinding(index, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)buffer);
				else
					ptrNativeObject->setBinding(index, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)buffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_setBinding_void_ev_uint16_CHardwareVertexBufferSharedPtr_NoVirtual(void *pObjectXXXX, _in ev_uint16 index, _in const void* buffer )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::setBinding(index, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)buffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::unsetBinding(index);
				else
					ptrNativeObject->unsetBinding(index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_unsetBinding_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::unsetBinding(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::unsetAllBindings();
				else
					ptrNativeObject->unsetAllBindings();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_unsetAllBindings_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::unsetAllBindings();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getBindings();
					const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& objXXXX = ptrNativeObject->getBindings();
					const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBindings_VertexBufferBindingMap_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getBindings();
				const EarthView::World::Graphic::CVertexBufferBinding::VertexBufferBindingMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getBuffer(index);
					const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& objXXXX = ptrNativeObject->getBuffer(index);
					const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBuffer_CHardwareVertexBufferSharedPtr_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getBuffer(index);
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::isBufferBound(index);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isBufferBound(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_isBufferBound_ev_bool_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::isBufferBound(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getBufferCount();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getBufferCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexBufferBinding_getBufferCount_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getBufferCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getNextIndex();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNextIndex();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getNextIndex_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getNextIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getLastBoundIndex();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getLastBoundIndex();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getLastBoundIndex_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getLastBoundIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_OperatorIndex_ev_uint16_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap& objYYYY = *(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjXXXX;
				ev_uint16& objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_get_ev_uint16_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_swap_void_BindingIndexMap(void *pObjectXXXX, _inout void* rhs )
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjectXXXX;
				ptrNativeObject->swap(*(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*)rhs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_BindingIndexMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::hasGaps();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasGaps();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_hasGaps_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::hasGaps();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap(void *pObjectXXXX, _inout void* bindingIndexMap )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::closeGaps(*(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*)bindingIndexMap);
				else
					ptrNativeObject->closeGaps(*(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*)bindingIndexMap);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexBufferBinding_closeGaps_void_BindingIndexMap_NoVirtual(void *pObjectXXXX, _inout void* bindingIndexMap )
			{
				EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::closeGaps(*(EarthView::World::Graphic::CVertexBufferBinding::BindingIndexMap*)bindingIndexMap);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				if (dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getHasInstanceData();
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->getHasInstanceData();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool( void *pObjectXXXX, EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_Callback* pCallback )
			{
				CVertexBufferBindingProxy* ptr = dynamic_cast<CVertexBufferBindingProxy*>((EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CVertexBufferBinding_getHasInstanceData_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexBufferBinding* ptrNativeObject = (EarthView::World::Graphic::CVertexBufferBinding*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexBufferBinding::getHasInstanceData();
				return objXXXX;
			}
		}
	}
}
