#ifndef __Prerequisites_H__
#define __Prerequisites_H__
///////// Platform-specific stuff
#pragma warning (push)
#pragma warning( disable: 4819)
#pragma warning (pop)


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


#define EV_VERSION_MAJOR 1
#define EV_VERSION_MINOR 8
#define EV_VERSION_PATCH 0
#define EV_VERSION_SUFFIX ""
#define EV_VERSION_NAME "Byatis"
#define EV_GRAPHIC_VERSION    ((EV_VERSION_MAJOR << 16) | (EV_VERSION_MINOR << 8) | EV_VERSION_PATCH)
#define EV_DEFINE_STATIC_LOCAL(type, name, arguments) \
    static type& name = *new type arguments
            /// Useful threading defines
            /// Pre-declare classes
            /// Allows use of pointers in header files without including individual .h
            /// so decreases dependencies between files
            
            class CAnimation;
            class CAnimationState;
            class CAnimationStateSet;
            class CAnimationTrack;
            class CAutoParamDataSource;            
            class CAxisAlignedBoxSceneQuery;
            class CBillboard;
            class CBillboardChain;
            class CBillboardSet;
            class CBone;
            class CCamera;
            class CCodec;
            class CColourValue;
            class CConfigDialog;
            class CController;
            class CControllerFunction;
            class CControllerManager;
            class CControllerValue;          
            class CDepthBuffer;
            class CEdgeData;
            class CEdgeListBuilder;
            class CEntity;
            class CErrorDialog;
            class CExternalTextureSourceManager;
            class CFont;
            class CFontPtr;
            class CFontManager;
            struct FrameEvent;
            class CFrameListener;
            class CFrustum;
            class CGpuProgram;
            class CGpuProgramPtr;
            class CGpuProgramManager;
            class CGpuProgramUsage;
            class CHardwareIndexBuffer;
            class CHardwareOcclusionQuery;
            class CHardwareVertexBuffer;
            class CHardwarePixelBuffer;
            class CHardwarePixelBufferSharedPtr;
            class CHardwareBufferManager;
            class CHighLevelGpuProgram;
            class CHighLevelGpuProgramPtr;
            class CHighLevelGpuProgramManager;
            class CHighLevelGpuProgramFactory;
            class CIndexData;
            class CInstanceBatch;
            class CInstanceBatchHW;
            class CInstanceBatchHW_VTF;
            class CInstanceBatchShader;
            class CInstanceBatchVTF;
            class CInstanceManager;
            class CInstancedEntity;
            class CIntersectionSceneQuery;
            class CIntersectionSceneQueryListener;
            class CImage;
            class CKeyFrame;
            class CLight;
            class CLog;
            class CLodStrategy;
            class CManualResourceLoader;
            class CManualObject;
            class CMaterial;
            class CMaterialPtr;
            class CMaterialManager;            
            class MemoryManager;
            class CMesh;
            class CMeshPtr;
            class CMeshSerializer;
            class CMeshSerializerImpl;
            class CMeshManager;
            class CMovableObject;
            class CMovablePlane;
            class CNode;
            class CNodeAnimationTrack;
            class NodeKeyFrame;
            class CNumericAnimationTrack;
            class CNumericKeyFrame;
            class COverlay;
            class COverlayContainer;
            class COverlayElement;
            class COverlayElementFactory;
            class COverlayManager;
            class CParticle;
            class CParticleAffector;
            class CParticleAffectorFactory;
            class CParticleEmitter;
            class CParticleEmitterFactory;
            class CParticleSystem;
            class CParticleSystemManager;
            class CParticleSystemRenderer;
            class CParticleSystemRendererFactory;
            class CParticleVisualData;
            class CPass;
            class CPatchMesh;
            class CPixelBox;           

            class CPose;
            class CProgressiveMesh;
            class CProfile;
            class CProfiler;           
            class CRaySceneQuery;
            class CRaySceneQueryListener;
            class CRenderable;
            class CRenderPriorityGroup;
            class CRenderQueue;
            class CRenderQueueGroup;
            class CRenderQueueInvocation;
            class CRenderQueueInvocationSequence;
            class CRenderQueueListener;
            class CRenderObjectListener;
            class CRenderSystem;
            class CRenderSystemCapabilities;
            class CRenderSystemCapabilitiesManager;
            class CRenderSystemCapabilitiesSerializer;
            class CRenderTarget;
            class CRenderTargetListener;
            class CRenderTexture;
            class CMultiRenderTarget;
            class CRenderWindow;
            class CRenderOperation;
            class CResource;
            class CResourceBackgroundQueue;
            class CResourceGroupManager;
            class CResourceManager;
            class CRibbonTrail;
            class CRoot;
            class CSceneManager;
            class CSceneManagerEnumerator;
            class CSceneNode;
            class CSceneQuery;
            class CSceneQueryListener;
            class CScriptCompiler;
            class CScriptCompilerManager;
            class CScriptLoader;
            class CSerializer;
            class CShadowCaster;
            class CShadowRenderable;
            class CShadowTextureManager;
            class CSimpleRenderable;
            class CSimpleSpline;
            class CSkeleton;
            class CSkeletonPtr;
            class CSkeletonInstance;
            class CSkeletonManager;         
            class CSphereSceneQuery;
            class CStaticGeometry;
            class CStreamSerialiser;
            class CStringConverter;           
            class CSubEntity;
            class CSubMesh;
            class CTagPoint;
            class CTechnique;
            class CTempBlendedBufferInfo;
            class CExternalTextureSource;
            class CTextureUnitState;
            class CTexture;
            class CTexturePtr;
            class CTextureManager;
            class CTransformKeyFrame;
            class CTimer;
            class CUserObjectBindings;            
            class CViewport;
            class CVertexAnimationTrack;
            class CVertexBufferBinding;
            class CVertexData;
            class CVertexDeclaration;
            class CVertexMorphKeyFrame;
            class CWireBoundingBox;
			class CEditBoundingBox;
            class CCompositor;
            class CCompositorManager;
            class CCompositorChain;
            class CCompositorInstance;
            class CCompositorLogic;
            class CCompositionTechnique;
            class CCompositionPass;
            class CCompositionTargetPass;
            class CCustomCompositionPass;

        }
    }
}

#endif


