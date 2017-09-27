#ifndef __DepthBuffer_H__
#define __DepthBuffer_H__
#include "graphic/graphic_config.h"
#include "prerequisites.h"
#include "rendertarget.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /***** An abstract class that contains a depth/stencil buffer.
            	Depth Buffers can be attached to render targets. Note we handle Depth & Stencil together.
            	DepthBuffer sharing is handled automatically for you. However, there are times where you want
            	to specifically control depth buffers to achieve certain effects or increase performance.
            	You can control this by hinting EV_World with POOL IDs. Created depth buffers can live in different
            	pools, or alltoghether in the same one.
            	Usually, a depth buffer can only be attached to a RenderTarget only if it's dimensions are bigger
            	and have the same bit depth and same multisample settings. Depth Buffers are created automatically
            	for new RTs when needed, and stored in the pool where the RenderTarget should have drawn from.
            	By default, all RTs have the Id POOL_DEFAULT, which means all depth buffers are stored by default
            	in that pool. By chosing a different Pool Id for a specific RenderTarget, that RT will only
            	retrieve depth buffers from _that_ pool, therefore not conflicting with sharing depth buffers
            	with other RTs (such as shadows maps).
            	Setting an RT to POOL_MANUAL_USAGE means EV_World won't manage the DepthBuffer for you (not recommended)
            	RTs with POOL_NO_DEPTH are very useful when you don't want to create a DepthBuffer for it. You can
            	still manually attach a depth buffer though as internally POOL_NO_DEPTH & POOL_MANUAL_USAGE are
            	handled in the same way.

            	Behavior is consistent across all render systems, if, and only if, the same RSC flags are set
            	RSC flags that affect this class are:
            		* RSC_RTT_SEPARATE_DEPTHBUFFER:
            			The RTT can create a custom depth buffer different from the main depth buffer. This means,
            			an RTT is able to not share it's depth buffer with the main window if it wants to.
            		* RSC_RTT_MAIN_DEPTHBUFFER_ATTACHABLE:
            			the main depth buffer for offscreen RTTs. When this flag is set, the depth buffer can be
            			shared between the main window and an RTT.
            		* RSC_RTT_DEPTHBUFFER_RESOLUTION_LESSEQUAL:
            			When this flag isn't set, the depth buffer can only be shared across RTTs who have the EXACT
            			same resolution. When it's set, it can be shared with RTTs as long as they have a
            			resolution less or equal than the depth buffer's.

             ****/
            class EV_GRAPHIC_DLL CDepthBuffer : public EarthView::World::Core::CAllocatedObject
            {
            ev_private:
                CDepthBuffer(EarthView::World::Core::CNameValuePairList *pList);
            public:
                enum PoolId
                {
                    POOL_NO_DEPTH		= 0,
                    POOL_MANUAL_USAGE	= 0,
                    POOL_DEFAULT		= 1
                };
                CDepthBuffer( ev_uint16 poolId, ev_uint16 bitDepth, ev_size_t width, ev_size_t height,
                              ev_size_t fsaa, const EVString &fsaaHint, ev_bool manual );
                virtual ~CDepthBuffer();
                ////Sets the pool id in which this DepthBuffer lives
                ////Note this will detach any render target from this depth buffer
                ev_void _setPoolId( ev_uint16 poolId );
                ////Gets the pool id in which this DepthBuffer lives
                virtual ev_uint16 getPoolId() const;
                virtual ev_uint16 getBitDepth() const;
                virtual ev_size_t getWidth() const;
                virtual ev_size_t getHeight() const;
                virtual ev_size_t getFsaa() const;
                virtual EVString getFsaaHint() const;
                ////Manual DepthBuffers are cleared in RenderSystem's destructor. Non-manual ones are released
                ////with it's render target (aka, a backbuffer or similar)
                ev_bool isManual() const;
                /***** Returns whether the specified RenderTarget is compatible with this DepthBuffer
                	That is, this DepthBuffer can be attached to that RenderTarget
                    @remarks
                        Most APIs impose the following restrictions:
                		Width & height must be equal or higher than the render target's
                		They must be of the same bit depth.
                		They need to have the same FSAA setting
                	@param renderTarget The render target to test against
                ****/
                virtual ev_bool isCompatible( EarthView::World::Graphic::CRenderTarget *renderTarget ) const;
                /***** Called when a RenderTarget is attaches this DepthBuffer
                    @remarks
                        This function doesn't actually attach. It merely informs the DepthBuffer
                		which RenderTarget did attach. The real attachment happens in
                		RenderTarget::attachDepthBuffer()
                	@param renderTarget The RenderTarget that has just been attached
                ****/
                virtual ev_void _notifyRenderTargetAttached( EarthView::World::Graphic::CRenderTarget *ref_renderTarget );
                /***** Called when a RenderTarget is detaches from this DepthBuffer
                    @remarks
                        Same as DepthBuffer::_notifyRenderTargetAttached()
                	@param renderTarget The RenderTarget that has just been attached
                ****/
                virtual ev_void _notifyRenderTargetDetached( EarthView::World::Graphic::CRenderTarget *renderTarget );
            protected:
                typedef set<EarthView::World::Graphic::CRenderTarget *> RenderTargetSet;
                ev_uint16						mPoolId;
                ev_uint16						mBitDepth;
                ev_size_t						mWidth;
                ev_size_t						mHeight;
                ev_size_t						mFsaa;
                EVString						    mFsaaHint;
                ev_bool						    mManual; 			////We don't Release manual surfaces on destruction
                RenderTargetSet				    mAttachedRenderTargets;
                ev_void detachFromAllRenderTargets();
            };
        }
    }
}

#endif

