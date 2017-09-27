#ifndef __SHADOWVOLUMEEXTRUDEPROGRAM_H__
#define __SHADOWVOLUMEEXTRUDEPROGRAM_H__
#include "graphic/graphic_config.h"
#include "light.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /** Static class containing source for vertex programs for extruding shadow volumes
            @remarks
                This exists so we don't have to be dependent on an external media files.
                Assembler is used so we don't have to rely on particular plugins.
                The assembler contents of this file were generated from the following Cg:
            @code
                // Point light shadow volume extrude
                void shadowVolumeExtrudePointLight_vp (
                    float4 position			: POSITION,
                    ev_real32  wcoord			: TEXCOORD0,

                    out float4 oPosition	: POSITION,

                    uniform float4x4 worldViewProjMatrix,
                    uniform float4   lightPos // homogeneous, object space
                    )
                {
                    // extrusion in object space
                    // vertex unmodified if w==1, extruded if w==0
                    float4 newpos =
                        (wcoord.xxxx * lightPos) +
                        float4(position.xyz - lightPos.xyz, 0);

                    oPosition = mul(worldViewProjMatrix, newpos);

                }

                // Directional light extrude
                void shadowVolumeExtrudeDirLight_vp (
                    float4 position			: POSITION,
                    ev_real32  wcoord			: TEXCOORD0,

                    out float4 oPosition	: POSITION,

                    uniform float4x4 worldViewProjMatrix,
                    uniform float4   lightPos // homogenous, object space
                    )
                {
                    // extrusion in object space
                    // vertex unmodified if w==1, extruded if w==0
                    float4 newpos =
                        (wcoord.xxxx * (position + lightPos)) - lightPos;

                    oPosition = mul(worldViewProjMatrix, newpos);

                }
                // Point light shadow volume extrude - FINITE
                void shadowVolumeExtrudePointLightFinite_vp (
                    float4 position			: POSITION,
                    ev_real32  wcoord			: TEXCOORD0,

                    out float4 oPosition	: POSITION,

                    uniform float4x4 worldViewProjMatrix,
                    uniform float4   lightPos, // homogeneous, object space
            		uniform ev_real32    extrusionDistance // how far to extrude
                    )
                {
                    // extrusion in object space
                    // vertex unmodified if w==1, extruded if w==0
            		float3 extrusionDir = position.xyz - lightPos.xyz;
            		extrusionDir = normalize(extrusionDir);

                    float4 newpos = float4(position.xyz +
                        ((1 - wcoord.x) * extrusionDistance * extrusionDir), 1);

                    oPosition = mul(worldViewProjMatrix, newpos);

                }

                // Directional light extrude - FINITE
                void shadowVolumeExtrudeDirLightFinite_vp (
                    float4 position			: POSITION,
                    ev_real32  wcoord			: TEXCOORD0,

                    out float4 oPosition	: POSITION,

                    uniform float4x4 worldViewProjMatrix,
                    uniform float4   lightPos, // homogeneous, object space
            		uniform ev_real32    extrusionDistance // how far to extrude
                    )
                {
                    // extrusion in object space
                    // vertex unmodified if w==1, extruded if w==0
            		// -ve lightPos is direction
                    float4 newpos = float4(position.xyz -
                        (wcoord.x * extrusionDistance * lightPos.xyz), 1);

                    oPosition = mul(worldViewProjMatrix, newpos);

                }
            @endcode
            */
            class EV_GRAPHIC_DLL CShadowVolumeExtrudeProgram : public EarthView::World::Core::CAllocatedObject
            {
            private:
                static EVString mPointArbvp1;
                static EVString mPointVs_1_1;
                static EVString mPointVs_glsles;
                static EVString mPointVs_4_0;
                static EVString mDirArbvp1;
                static EVString mDirVs_1_1;
                static EVString mDirVs_4_0;
                static EVString mDirVs_glsles;
                /// same as above, except the color is set to 1 to enable debug volumes to be seen
                static EVString mPointArbvp1Debug;
                static EVString mPointVs_1_1Debug;
                static EVString mPointVs_4_0Debug;
                static EVString mPointVs_glslesDebug;
                static EVString mDirArbvp1Debug;
                static EVString mDirVs_1_1Debug;
                static EVString mDirVs_4_0Debug;
                static EVString mDirVs_glslesDebug;

                static EVString mPointArbvp1Finite;
                static EVString mPointVs_1_1Finite;
                static EVString mPointVs_4_0Finite;
                static EVString mPointVs_glslesFinite;
                static EVString mDirArbvp1Finite;
                static EVString mDirVs_1_1Finite;
                static EVString mDirVs_4_0Finite;
                static EVString mDirVs_glslesFinite;
                /// same as above, except the color is set to 1 to enable debug volumes to be seen
                static EVString mPointArbvp1FiniteDebug;
                static EVString mPointVs_1_1FiniteDebug;
                static EVString mPointVs_4_0FiniteDebug;
                static EVString mPointVs_glslesFiniteDebug;
                static EVString mDirArbvp1FiniteDebug;
                static EVString mDirVs_1_1FiniteDebug;
                static EVString mDirVs_4_0FiniteDebug;
                static EVString mDirVs_glslesFiniteDebug;
                static EVString mGeneralFs_4_0;
                static EVString mGeneralFs_glsles;
                static ev_bool mInitialised;
            public:

#define EV_NUM_SHADOW_EXTRUDER_PROGRAMS 8
                enum Programs
                {
                    /// Point light extruder, infinite distance
                    POINT_LIGHT = 0,
                    /// Point light extruder, infinite distance, debug mode
                    POINT_LIGHT_DEBUG = 1,
                    /// Directional light extruder, infinite distance
                    DIRECTIONAL_LIGHT = 2,
                    /// Directional light extruder, infinite distance, debug mode
                    DIRECTIONAL_LIGHT_DEBUG = 3,
                    /// Point light extruder, finite distance
                    POINT_LIGHT_FINITE = 4,
                    /// Point light extruder, finite distance, debug mode
                    POINT_LIGHT_FINITE_DEBUG = 5,
                    /// Directional light extruder, finite distance
                    DIRECTIONAL_LIGHT_FINITE = 6,
                    /// Directional light extruder, finite distance, debug mode
                    DIRECTIONAL_LIGHT_FINITE_DEBUG = 7
                };
            ev_private:
                static const EVString programNames[EV_NUM_SHADOW_EXTRUDER_PROGRAMS];
            public:
                static EVString frgProgramName;
                //// Initialise the creation of these vertex programs
                static void initialise();
                //// Shutdown & destroy the vertex programs
                static void shutdown();
                //// Get extruder program source for point lights, compatible with arbvp1
                static const EVString &getPointLightExtruderArbvp1();
                //// Get extruder program source for point lights, compatible with vs_1_1
                static const EVString &getPointLightExtruderVs_1_1();
                //// Get extruder program source for point lights, compatible with vs_4_0
                static const EVString &getPointLightExtruderVs_4_0();
                //// Get extruder program source for point lights, compatible with glsles
                static const EVString &getPointLightExtruderVs_glsles()
                {
                    return mPointVs_glsles;
                }
                //// Get extruder program source for directional lights, compatible with arbvp1
                static const EVString &getDirectionalLightExtruderArbvp1();
                //// Get extruder program source for directional lights, compatible with vs_1_1
                static const EVString &getDirectionalLightExtruderVs_1_1();
                //// Get extruder program source for directional lights, compatible with vs_4_0
                static const EVString &getDirectionalLightExtruderVs_4_0();
                //// Get extruder program source for directional lights, compatible with glsles
                static const EVString &getDirectionalLightExtruderVs_glsles()
                {
                    return mDirVs_glsles;
                }
                //// Get extruder program source for debug point lights, compatible with arbvp1
                static const EVString &getPointLightExtruderArbvp1Debug();
                //// Get extruder program source for debug point lights, compatible with vs_1_1
                static const EVString &getPointLightExtruderVs_1_1Debug();
                //// Get extruder program source for debug point lights, compatible with vs_4_0
                static const EVString &getPointLightExtruderVs_4_0Debug();
                //// Get extruder program source for debug point lights, compatible with glsles
                static const EVString &getPointLightExtruderVs_glslesDebug()
                {
                    return mPointVs_glslesDebug;
                }
                //// Get extruder program source for debug directional lights, compatible with arbvp1
                static const EVString &getDirectionalLightExtruderArbvp1Debug();
                //// Get extruder program source for debug directional lights, compatible with vs_1_1
                static const EVString &getDirectionalLightExtruderVs_1_1Debug();
                //// Get extruder program source for debug directional lights, compatible with vs_4_0
                static const EVString &getDirectionalLightExtruderVs_4_0Debug();
                //// Get extruder program source for debug directional lights, compatible with glsles
                static const EVString &getDirectionalLightExtruderVs_glslesDebug()
                {
                    return mDirVs_glslesDebug;
                }
                //// General purpose method to get any of the program sources
                static const EVString &getProgramSource(EarthView::World::Graphic::CLight::LightTypes lightType, const EVString syntax,
                                                      ev_bool finite, ev_bool debug);
                static const EVString &getProgramName(EarthView::World::Graphic::CLight::LightTypes lightType, ev_bool finite, ev_bool debug);

                //// Get FINITE extruder program source for point lights, compatible with arbvp1
                static const EVString &getPointLightExtruderArbvp1Finite();
                //// Get FINITE extruder program source for point lights, compatible with vs_1_1
                static const EVString &getPointLightExtruderVs_1_1Finite();
                //// Get FINITE extruder program source for point lights, compatible with vs_4_0
                static const EVString &getPointLightExtruderVs_4_0Finite();
                //// Get FINITE extruder program source for point lights, compatible with glsles
                static const EVString &getPointLightExtruderVs_glslesFinite()
                {
                    return mPointVs_glslesFinite;
                }
                //// Get FINITE extruder program source for directional lights, compatible with arbvp1
                static const EVString &getDirectionalLightExtruderArbvp1Finite();
                //// Get FINITE extruder program source for directional lights, compatible with vs_1_1
                static const EVString &getDirectionalLightExtruderVs_1_1Finite();
                //// Get FINITE extruder program source for directional lights, compatible with vs_4_0
                static const EVString &getDirectionalLightExtruderVs_4_0Finite();
                //// Get FINITE extruder program source for directional lights, compatible with glsles
                static const EVString &getDirectionalLightExtruderVs_glslesFinite()
                {
                    return mDirVs_glslesFinite;
                }
                //// Get FINITE extruder program source for debug point lights, compatible with arbvp1
                static const EVString &getPointLightExtruderArbvp1FiniteDebug();
                //// Get extruder program source for debug point lights, compatible with vs_1_1
                static const EVString &getPointLightExtruderVs_1_1FiniteDebug();
                //// Get extruder program source for debug point lights, compatible with vs_4_0
                static const EVString &getPointLightExtruderVs_4_0FiniteDebug();
                //// Get extruder program source for debug point lights, compatible with glsles
                static const EVString &getPointLightExtruderVs_glslesFiniteDebug()
                {
                    return mPointVs_glslesFiniteDebug;
                }
                //// Get FINITE extruder program source for debug directional lights, compatible with arbvp1
                static const EVString &getDirectionalLightExtruderArbvp1FiniteDebug();
                //// Get FINITE extruder program source for debug directional lights, compatible with vs_1_1
                static const EVString &getDirectionalLightExtruderVs_1_1FiniteDebug();
                //// Get FINITE extruder program source for debug directional lights, compatible with vs_4_0
                static const EVString &getDirectionalLightExtruderVs_4_0FiniteDebug();
                //// Get FINITE extruder program source for debug directional lights, compatible with glsles
                static const EVString &getDirectionalLightExtruderVs_glslesFiniteDebug()
                {
                    return mDirVs_glslesFiniteDebug;
                }


            };
        }
    }
}

#endif

