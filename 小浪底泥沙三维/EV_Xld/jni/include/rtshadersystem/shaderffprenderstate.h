#ifndef _ShaderFFPState_
#define _ShaderFFPState_
#include "shaderprerequisites.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            namespace RTShaderSystem
            {


                /// Fixed Function vertex shader stages.
                enum FFPVertexShaderStage
                {
                    FFP_VS_PRE_PROCESS					= 0,
                    FFP_VS_TRANSFORM					= 100,
                    FFP_VS_COLOUR						= 200,
                    FFP_VS_LIGHTING						= 300,
                    FFP_VS_TEXTURING					= 400,
                    FFP_VS_FOG							= 500,
                    FFP_VS_POST_PROCESS					= 2000,
                };
                /// Fixed Function fragment shader stages.
                enum FFPFragmentShaderStage
                {
                    FFP_PS_PRE_PROCESS					= 0,
                    FFP_PS_COLOUR_BEGIN					= 100,
                    FFP_PS_SAMPLING						= 150,
                    FFP_PS_TEXTURING					= 200,
                    FFP_PS_COLOUR_END					= 300,
                    FFP_PS_FOG							= 400,
                    FFP_PS_POST_PROCESS					= 500,
                };
                /// Fixed Function generic stages.
                enum FFPShaderStage
                {
                    FFP_PRE_PROCESS						= 0,
                    FFP_TRANSFORM						= 100,
                    FFP_COLOUR							= 200,
                    FFP_LIGHTING						= 300,
                    FFP_TEXTURING						= 400,
                    FFP_FOG								= 500,
                    FFP_POST_PROCESS					= 600,
                };
                /// Fixed Function Library: Common functions
#define FFP_LIB_COMMON								"FFPLib_Common"
#define FFP_FUNC_ASSIGN								"FFP_Assign"
#define FFP_FUNC_CONSTRUCT							"FFP_Construct"
#define FFP_FUNC_MODULATE							"FFP_Modulate"
#define FFP_FUNC_ADD								"FFP_Add"
#define FFP_FUNC_SUBTRACT							"FFP_Subtract"
#define FFP_FUNC_LERP								"FFP_Lerp"
#define FFP_FUNC_DOTPRODUCT							"FFP_DotProduct"
#define FFP_FUNC_NORMALIZE							"FFP_Normalize"
                /// Fixed Function Library: Transform functions
#define FFP_LIB_TRANSFORM							"FFPLib_Transform"
#define FFP_FUNC_TRANSFORM							"FFP_Transform"
                /// Fixed Function Library: Lighting functions
#define FFP_LIB_LIGHTING							"FFPLib_Lighting"
#define FFP_FUNC_LIGHT_DIRECTIONAL_DIFFUSE			"FFP_Light_Directional_Diffuse"
#define FFP_FUNC_LIGHT_DIRECTIONAL_DIFFUSESPECULAR	"FFP_Light_Directional_DiffuseSpecular"
#define FFP_FUNC_LIGHT_POINT_DIFFUSE				"FFP_Light_Point_Diffuse"
#define FFP_FUNC_LIGHT_POINT_DIFFUSESPECULAR		"FFP_Light_Point_DiffuseSpecular"
#define FFP_FUNC_LIGHT_SPOT_DIFFUSE					"FFP_Light_Spot_Diffuse"
#define FFP_FUNC_LIGHT_SPOT_DIFFUSESPECULAR			"FFP_Light_Spot_DiffuseSpecular"
                /// Fixed Function Library: Texturing functions
#define FFP_LIB_TEXTURING							"FFPLib_Texturing"
#define FFP_FUNC_TRANSFORM_TEXCOORD					"FFP_TransformTexCoord"
#define FFP_FUNC_GENERATE_TEXCOORD_ENV_NORMAL		"FFP_GenerateTexCoord_EnvMap_Normal"
#define FFP_FUNC_GENERATE_TEXCOORD_ENV_SPHERE		"FFP_GenerateTexCoord_EnvMap_Sphere"
#define FFP_FUNC_GENERATE_TEXCOORD_ENV_REFLECT		"FFP_GenerateTexCoord_EnvMap_Reflect"
#define FFP_FUNC_GENERATE_TEXCOORD_PROJECTION		"FFP_GenerateTexCoord_Projection"
#define FFP_FUNC_SAMPLE_TEXTURE						"FFP_SampleTexture"
#define FFP_FUNC_SAMPLE_TEXTURE_PROJ				"FFP_SampleTextureProj"
#define FFP_FUNC_MODULATEX2							"FFP_ModulateX2"
#define FFP_FUNC_MODULATEX4							"FFP_ModulateX4"
#define FFP_FUNC_ADDSIGNED							"FFP_AddSigned"
#define FFP_FUNC_ADDSMOOTH							"FFP_AddSmooth"
                /// Fixed Function Library: Fog functions
#define FFP_LIB_FOG									"FFPLib_Fog"
#define FFP_FUNC_VERTEXFOG_LINEAR					"FFP_VertexFog_Linear"
#define FFP_FUNC_VERTEXFOG_EXP						"FFP_VertexFog_Exp"
#define FFP_FUNC_VERTEXFOG_EXP2						"FFP_VertexFog_Exp2"
#define FFP_FUNC_PIXELFOG_DEPTH						"FFP_PixelFog_Depth"
#define FFP_FUNC_PIXELFOG_LINEAR					"FFP_PixelFog_Linear"
#define FFP_FUNC_PIXELFOG_EXP						"FFP_PixelFog_Exp"
#define FFP_FUNC_PIXELFOG_EXP2						"FFP_PixelFog_Exp2"

            }
        }
    }
}

#endif

