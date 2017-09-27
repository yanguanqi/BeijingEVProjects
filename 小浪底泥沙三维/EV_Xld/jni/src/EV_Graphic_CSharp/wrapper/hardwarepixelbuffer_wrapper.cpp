/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarepixelbuffer.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback)(_in const void* lockBox, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback)(_in ev_uint64  zoffset);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback)(_in const void* lockBox, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback)(_in const void* src, _in const void* srcBox, _in const void* dstBox);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback)(_in const void* src, _in const void* dstBox);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback)(_in const void* srcBox, _in const void* dst);
			typedef EarthView::World::Graphic::CRenderTexture*  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback)(_in ev_uint64  slice);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in int options);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback)(_in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length, _in ev_bool discardWholeBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback)(_inout void* srcBuffer, _in ev_uint64  srcOffset, _in ev_uint64  dstOffset, _in ev_uint64  length);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback)(_inout void* srcBuffer);
			typedef void  ( _stdcall EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback)();
			class CHardwarePixelBufferProxy : public EarthView::World::Graphic::CHardwarePixelBuffer
			{
			private:
				EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback;
				EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback* m_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback;
			public:
				CHardwarePixelBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwarePixelBuffer(pList)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback = NULL;
					m_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions(EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t(EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions(EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box(EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box(EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox(EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t(EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void(EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void(EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void(EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer(EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void(EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CPixelBox lockImpl(_in const EarthView::World::Graphic::Box lockBox, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CPixelBox returnValue = *(EarthView::World::Graphic::CPixelBox*)m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback(&lockBox, (int)options);
						return returnValue;
					}
					else
						return this->CHardwarePixelBuffer::lockImpl(lockBox, options);
				}
				virtual void* lockImpl(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwarePixelBuffer::lockImpl(offset, length, options);
				}
				virtual void _clearSliceRTT(_in ev_size_t zoffset)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback(zoffset);
					}
					else
						return this->CHardwarePixelBuffer::_clearSliceRTT(zoffset);
				}
				virtual const EarthView::World::Graphic::CPixelBox& lock(_in const EarthView::World::Graphic::Box& lockBox, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CPixelBox& returnValue = *(EarthView::World::Graphic::CPixelBox*)m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback(&lockBox, (int)options);
						return returnValue;
					}
					else
						return this->CHardwarePixelBuffer::lock(lockBox, options);
				}
				virtual void* lock(_in ev_size_t offset, _in ev_size_t length, _in EarthView::World::Graphic::CHardwareBuffer::LockOptions options)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback(offset, length, (int)options);
						return returnValue;
					}
					else
						return this->CHardwarePixelBuffer::lock(offset, length, options);
				}
				virtual void readData(_in ev_size_t offset, _in ev_size_t length, _inout void* pDest)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pDest);
					}
					else
						return this->CHardwarePixelBuffer::readData(offset, length, pDest);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback(offset, length, pSource, discardWholeBuffer);
					}
					else
						return this->CHardwarePixelBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				}
				virtual void writeData(_in ev_size_t offset, _in ev_size_t length, _in const void* pSource)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback(offset, length, pSource);
					}
					else
						return this->CHardwarePixelBuffer::writeData(offset, length, pSource);
				}
				virtual void blit(_in const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr& src, _in const EarthView::World::Graphic::Box& srcBox, _in const EarthView::World::Graphic::Box& dstBox)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback(&src, &srcBox, &dstBox);
					}
					else
						return this->CHardwarePixelBuffer::blit(src, srcBox, dstBox);
				}
				virtual void blitFromMemory(_in const EarthView::World::Graphic::CPixelBox& src, _in const EarthView::World::Graphic::Box& dstBox)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback(&src, &dstBox);
					}
					else
						return this->CHardwarePixelBuffer::blitFromMemory(src, dstBox);
				}
				virtual void blitToMemory(_in const EarthView::World::Graphic::Box& srcBox, _in const EarthView::World::Graphic::CPixelBox& dst)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback(&srcBox, &dst);
					}
					else
						return this->CHardwarePixelBuffer::blitToMemory(srcBox, dst);
				}
				virtual EarthView::World::Graphic::CRenderTexture* getRenderTarget(_in ev_size_t slice)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderTexture* returnValue = m_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback(slice);
						return returnValue;
					}
					else
						return this->CHardwarePixelBuffer::getRenderTarget(slice);
				}
				virtual void unlockImpl()
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback();
					}
					else
						return this->CHardwarePixelBuffer::unlockImpl();
				}
				virtual void unlock()
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback();
					}
					else
						return this->CHardwarePixelBuffer::unlock();
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length, _in ev_bool discardWholeBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback(&srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
					}
					else
						return this->CHardwarePixelBuffer::copyData(srcBuffer, srcOffset, dstOffset, length, discardWholeBuffer);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer, _in ev_size_t srcOffset, _in ev_size_t dstOffset, _in ev_size_t length)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback(&srcBuffer, srcOffset, dstOffset, length);
					}
					else
						return this->CHardwarePixelBuffer::copyData(srcBuffer, srcOffset, dstOffset, length);
				}
				virtual void copyData(_inout EarthView::World::Graphic::CHardwareBuffer& srcBuffer)
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback(&srcBuffer);
					}
					else
						return this->CHardwarePixelBuffer::copyData(srcBuffer);
				}
				virtual void _updateFromShadow()
				{
					if(m_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback();
					}
					else
						return this->CHardwarePixelBuffer::_updateFromShadow();
				}
			};
			REGISTER_FACTORY_CLASS(CHardwarePixelBufferProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions(void *pObjectXXXX, _in const void* lockBox, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CPixelBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(*(EarthView::World::Graphic::Box*)lockBox, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					EarthView::World::Graphic::CPixelBox *pXXXX = new EarthView::World::Graphic::CPixelBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CPixelBox objXXXX = ptrNativeObject->lockImpl(*(EarthView::World::Graphic::Box*)lockBox, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					EarthView::World::Graphic::CPixelBox *pXXXX = new EarthView::World::Graphic::CPixelBox(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_CPixelBox_Box_LockOptions_NoVirtual(void *pObjectXXXX, _in const void* lockBox, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CPixelBox objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(*(EarthView::World::Graphic::Box*)lockBox, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				EarthView::World::Graphic::CPixelBox *pXXXX = new EarthView::World::Graphic::CPixelBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lockImpl_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lockImpl(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  zoffset )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::_clearSliceRTT(zoffset);
				else
					ptrNativeObject->_clearSliceRTT(zoffset);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer__clearSliceRTT_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  zoffset )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::_clearSliceRTT(zoffset);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions(void *pObjectXXXX, _in const void* lockBox, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CPixelBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lock(*(EarthView::World::Graphic::Box*)lockBox, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					const EarthView::World::Graphic::CPixelBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CPixelBox& objXXXX = ptrNativeObject->lock(*(EarthView::World::Graphic::Box*)lockBox, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					const EarthView::World::Graphic::CPixelBox *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lock_CPixelBox_Box_LockOptions_NoVirtual(void *pObjectXXXX, _in const void* lockBox, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				const EarthView::World::Graphic::CPixelBox& objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lock(*(EarthView::World::Graphic::Box*)lockBox, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				const EarthView::World::Graphic::CPixelBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_lock_void_ev_size_t_ev_size_t_LockOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in int options )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::lock(offset, length, (EarthView::World::Graphic::CHardwareBuffer::LockOptions)options);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getCurrentLock_CPixelBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				const EarthView::World::Graphic::CPixelBox& objXXXX = ptrNativeObject->getCurrentLock();
				const EarthView::World::Graphic::CPixelBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::readData(offset, length, pDest);
				else
					ptrNativeObject->readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_readData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _inout void* pDest )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::readData(offset, length, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource, discardWholeBuffer);
				else
					ptrNativeObject->writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource, _in ev_bool discardWholeBuffer )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource, discardWholeBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource);
				else
					ptrNativeObject->writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_writeData_void_ev_size_t_ev_size_t_void_NoVirtual(void *pObjectXXXX, _in ev_uint64  offset, _in ev_uint64  length, _in const void* pSource )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::writeData(offset, length, pSource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box(void *pObjectXXXX, _in const void* src, _in const void* srcBox, _in const void* dstBox )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::blit(*(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*)src, *(EarthView::World::Graphic::Box*)srcBox, *(EarthView::World::Graphic::Box*)dstBox);
				else
					ptrNativeObject->blit(*(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*)src, *(EarthView::World::Graphic::Box*)srcBox, *(EarthView::World::Graphic::Box*)dstBox);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr_Box_Box_NoVirtual(void *pObjectXXXX, _in const void* src, _in const void* srcBox, _in const void* dstBox )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::blit(*(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*)src, *(EarthView::World::Graphic::Box*)srcBox, *(EarthView::World::Graphic::Box*)dstBox);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blit_void_CHardwarePixelBufferSharedPtr(void *pObjectXXXX, _in const void* src )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->blit(*(EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*)src);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box(void *pObjectXXXX, _in const void* src, _in const void* dstBox )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::blitFromMemory(*(EarthView::World::Graphic::CPixelBox*)src, *(EarthView::World::Graphic::Box*)dstBox);
				else
					ptrNativeObject->blitFromMemory(*(EarthView::World::Graphic::CPixelBox*)src, *(EarthView::World::Graphic::Box*)dstBox);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox_Box_NoVirtual(void *pObjectXXXX, _in const void* src, _in const void* dstBox )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::blitFromMemory(*(EarthView::World::Graphic::CPixelBox*)src, *(EarthView::World::Graphic::Box*)dstBox);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitFromMemory_void_CPixelBox(void *pObjectXXXX, _in const void* src )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->blitFromMemory(*(EarthView::World::Graphic::CPixelBox*)src);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox(void *pObjectXXXX, _in const void* srcBox, _in const void* dst )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::blitToMemory(*(EarthView::World::Graphic::Box*)srcBox, *(EarthView::World::Graphic::CPixelBox*)dst);
				else
					ptrNativeObject->blitToMemory(*(EarthView::World::Graphic::Box*)srcBox, *(EarthView::World::Graphic::CPixelBox*)dst);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_Box_CPixelBox_NoVirtual(void *pObjectXXXX, _in const void* srcBox, _in const void* dst )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::blitToMemory(*(EarthView::World::Graphic::Box*)srcBox, *(EarthView::World::Graphic::CPixelBox*)dst);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_blitToMemory_void_CPixelBox(void *pObjectXXXX, _in const void* dst )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ptrNativeObject->blitToMemory(*(EarthView::World::Graphic::CPixelBox*)dst);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTexture*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t(void *pObjectXXXX, _in ev_uint64  slice )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				if (dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderTexture* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::getRenderTarget(slice);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderTexture* objXXXX = ptrNativeObject->getRenderTarget(slice);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTexture*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  slice )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTexture* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHardwarePixelBuffer::getRenderTarget(slice);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTexture*  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getRenderTarget_CRenderTexture(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTexture* objXXXX = ptrNativeObject->getRenderTarget();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getWidth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getHeight_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getDepth_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getDepth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CHardwarePixelBuffer_getFormat_PixelFormat(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwarePixelBuffer* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX;
				EarthView::World::Graphic::PixelFormat objXXXX = ptrNativeObject->getFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlockImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_unlock_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer_copyData_void_CHardwareBuffer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void( void *pObjectXXXX, EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void_Callback* pCallback )
			{
				CHardwarePixelBufferProxy* ptr = dynamic_cast<CHardwarePixelBufferProxy*>((EarthView::World::Graphic::CHardwarePixelBuffer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHardwarePixelBuffer__updateFromShadow_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwarePixelBuffer*  _stdcall EarthView_World_Graphic_CHardwarePixelBufferSharedPtr_get_CHardwarePixelBuffer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHardwarePixelBufferSharedPtr* ptrNativeObject = (EarthView::World::Graphic::CHardwarePixelBufferSharedPtr*) pObjectXXXX;
				EarthView::World::Graphic::CHardwarePixelBuffer* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
		}
	}
}
