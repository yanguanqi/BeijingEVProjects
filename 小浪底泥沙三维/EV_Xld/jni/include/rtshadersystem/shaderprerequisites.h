#ifndef __ShaderPrerequisites_H__
#define __ShaderPrerequisites_H__
#include "graphic/prerequisites.h"
#include "graphic/common.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            //// Forward declarations from Ogre namespace.
            class CTechnique;
            class CPass;
            class CRenderable;
            class CViewport;
            class CRenderObjectListener;
            class CTextureUnitState;
            class CFrustum;
            class CScriptTranslator;
            class CScriptCompiler;
            class CPropertyAbstractNode;
            class CMaterialSerializer;
        }
    }
}


namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {

                //// Forward declarations from RTShader namespace.
                class CRenderState;
                class CTargetRenderState;
                class CSubRenderState;
                class CSubRenderStateAccessor;
                class CSubRenderStateFactory;
                class CProgramManager;
                class CProgram;
                class CProgramProcessor;
                class CProgramSet;
                class CRenderState;
                class CParameter;
                class CFunction;
                class CFFPRenderStateBuilder;
                class CShaderGenerator;
                class CSGMaterialSerializerListener;
                class CProgramWriterFactory;
                class CProgramWriterManager;
                //// Utility function with same style as boost::hash_combine
                template <class T>
                inline void sh_hash_combine(ev_uint32 &seed, T const &v)
                {
                    seed ^= FastHash((const char *)&v, sizeof(T)) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
                }
                /// Vertex shader output parameters compact policy.
                enum VSOutputCompactPolicy
                {
                    VSOCP_LOW		= 0,						/// VS Outputs will be compacted just in case the maximum slot count exceeded.
                    VSOCP_MEDIUM	= 1,						/// VS Outputs will be compacted always without parameter splits.
                    VSOCP_HIGH		= 2,						/// VS Outputs will be compacted always including parameter splits.
                };
                enum SkinningType
                {
                    ST_LINEAR,
                    ST_DUAL_QUATERNION
                };

            }
        }
    }
}

#if EV_PLATFORM == EV_PLATFORM_WIN32
#if defined( EV_STATIC_LIB )
#define EV_RTSS_DLL
#else
#if defined( EV_RTShaderSystem_EXPORTS )
#define EV_RTSS_DLL __declspec( dllexport )
#else
#if defined( __MINGW32__ )
#define EV_RTSS_DLL
#else
#define EV_RTSS_DLL __declspec( dllimport )
#endif
#endif
#endif
#elif defined ( EV_GCC_VISIBILITY )
#define EV_RTSS_DLL __attribute__ ((visibility("default")))
#else
#define EV_RTSS_DLL
#endif


#endif

