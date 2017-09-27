#ifndef __RenderSystem_def_H_
#define __RenderSystem_def_H_
///枚举出产生纹理坐标的方式
enum TexCoordCalcMethod
{
    //// No calculated texture coordinates
    TEXCALC_NONE,
    //// Environment map based on vertex normals
    TEXCALC_ENVIRONMENT_MAP,
    //// Environment map based on vertex positions
    TEXCALC_ENVIRONMENT_MAP_PLANAR,
    TEXCALC_ENVIRONMENT_MAP_REFLECTION,
    TEXCALC_ENVIRONMENT_MAP_NORMAL,
    //// Projective texture
    TEXCALC_PROJECTIVE_TEXTURE
};
///枚举出各种在模板缓冲上得行为
enum StencilOperation
{
    //// Leave the stencil buffer unchanged
    SOP_KEEP,
    //// Set the stencil value to zero
    SOP_ZERO,
    //// Set the stencil value to the reference value
    SOP_REPLACE,
    //// Increase the stencil value by 1, clamping at the maximum value
    SOP_INCREMENT,
    //// Decrease the stencil value by 1, clamping at 0
    SOP_DECREMENT,
    //// Increase the stencil value by 1, wrapping back to 0 when incrementing the maximum value
    SOP_INCREMENT_WRAP,
    //// Decrease the stencil value by 1, wrapping when decrementing 0
    SOP_DECREMENT_WRAP,
    //// Invert the bits of the stencil buffer
    SOP_INVERT
};
#endif

