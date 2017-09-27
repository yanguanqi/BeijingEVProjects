package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// This enum defines the integer ids for keywords this compiler handles
public enum KeywordID implements INativeEnum<KeywordID> {
	ID_MATERIAL(KeywordIDHelper.ENUM_VALUES[0]),
	ID_VERTEX_PROGRAM(KeywordIDHelper.ENUM_VALUES[1]),
	ID_GEOMETRY_PROGRAM(KeywordIDHelper.ENUM_VALUES[2]),
	ID_FRAGMENT_PROGRAM(KeywordIDHelper.ENUM_VALUES[3]),
	ID_TECHNIQUE(KeywordIDHelper.ENUM_VALUES[4]),
	ID_PASS(KeywordIDHelper.ENUM_VALUES[5]),
	ID_TEXTURE_UNIT(KeywordIDHelper.ENUM_VALUES[6]),
	ID_VERTEX_PROGRAM_REF(KeywordIDHelper.ENUM_VALUES[7]),
	ID_GEOMETRY_PROGRAM_REF(KeywordIDHelper.ENUM_VALUES[8]),
	ID_FRAGMENT_PROGRAM_REF(KeywordIDHelper.ENUM_VALUES[9]),
	ID_SHADOW_CASTER_VERTEX_PROGRAM_REF(KeywordIDHelper.ENUM_VALUES[10]),
	ID_SHADOW_CASTER_FRAGMENT_PROGRAM_REF(KeywordIDHelper.ENUM_VALUES[11]),
	ID_SHADOW_RECEIVER_VERTEX_PROGRAM_REF(KeywordIDHelper.ENUM_VALUES[12]),
	ID_SHADOW_RECEIVER_FRAGMENT_PROGRAM_REF(KeywordIDHelper.ENUM_VALUES[13]),
	ID_SHADOW_CASTER_MATERIAL(KeywordIDHelper.ENUM_VALUES[14]),
	ID_SHADOW_RECEIVER_MATERIAL(KeywordIDHelper.ENUM_VALUES[15]),
	ID_LOD_VALUES(KeywordIDHelper.ENUM_VALUES[16]),
	ID_LOD_STRATEGY(KeywordIDHelper.ENUM_VALUES[17]),
	ID_LOD_DISTANCES(KeywordIDHelper.ENUM_VALUES[18]),
	ID_RECEIVE_SHADOWS(KeywordIDHelper.ENUM_VALUES[19]),
	ID_TRANSPARENCY_CASTS_SHADOWS(KeywordIDHelper.ENUM_VALUES[20]),
	ID_SET_TEXTURE_ALIAS(KeywordIDHelper.ENUM_VALUES[21]),
	ID_SOURCE(KeywordIDHelper.ENUM_VALUES[22]),
	ID_SYNTAX(KeywordIDHelper.ENUM_VALUES[23]),
	ID_DEFAULT_PARAMS(KeywordIDHelper.ENUM_VALUES[24]),
	ID_PARAM_INDEXED(KeywordIDHelper.ENUM_VALUES[25]),
	ID_PARAM_NAMED(KeywordIDHelper.ENUM_VALUES[26]),
	ID_PARAM_INDEXED_AUTO(KeywordIDHelper.ENUM_VALUES[27]),
	ID_PARAM_NAMED_AUTO(KeywordIDHelper.ENUM_VALUES[28]),
	ID_SCHEME(KeywordIDHelper.ENUM_VALUES[29]),
	ID_LOD_INDEX(KeywordIDHelper.ENUM_VALUES[30]),
	ID_GPU_VENDOR_RULE(KeywordIDHelper.ENUM_VALUES[31]),
	ID_GPU_DEVICE_RULE(KeywordIDHelper.ENUM_VALUES[32]),
	ID_INCLUDE(KeywordIDHelper.ENUM_VALUES[33]),
	ID_EXCLUDE(KeywordIDHelper.ENUM_VALUES[34]),
	ID_AMBIENT(KeywordIDHelper.ENUM_VALUES[35]),
	ID_DIFFUSE(KeywordIDHelper.ENUM_VALUES[36]),
	ID_SPECULAR(KeywordIDHelper.ENUM_VALUES[37]),
	ID_EMISSIVE(KeywordIDHelper.ENUM_VALUES[38]),
	ID_VERTEXCOLOUR(KeywordIDHelper.ENUM_VALUES[39]),
	ID_SCENE_BLEND(KeywordIDHelper.ENUM_VALUES[40]),
	ID_COLOUR_BLEND(KeywordIDHelper.ENUM_VALUES[41]),
	ID_ONE(KeywordIDHelper.ENUM_VALUES[42]),
	ID_ZERO(KeywordIDHelper.ENUM_VALUES[43]),
	ID_DEST_COLOUR(KeywordIDHelper.ENUM_VALUES[44]),
	ID_SRC_COLOUR(KeywordIDHelper.ENUM_VALUES[45]),
	ID_ONE_MINUS_DEST_COLOUR(KeywordIDHelper.ENUM_VALUES[46]),
	ID_ONE_MINUS_SRC_COLOUR(KeywordIDHelper.ENUM_VALUES[47]),
	ID_DEST_ALPHA(KeywordIDHelper.ENUM_VALUES[48]),
	ID_SRC_ALPHA(KeywordIDHelper.ENUM_VALUES[49]),
	ID_ONE_MINUS_DEST_ALPHA(KeywordIDHelper.ENUM_VALUES[50]),
	ID_ONE_MINUS_SRC_ALPHA(KeywordIDHelper.ENUM_VALUES[51]),
	ID_SEPARATE_SCENE_BLEND(KeywordIDHelper.ENUM_VALUES[52]),
	ID_SCENE_BLEND_OP(KeywordIDHelper.ENUM_VALUES[53]),
	ID_REVERSE_SUBTRACT(KeywordIDHelper.ENUM_VALUES[54]),
	ID_MIN(KeywordIDHelper.ENUM_VALUES[55]),
	ID_MAX(KeywordIDHelper.ENUM_VALUES[56]),
	ID_SEPARATE_SCENE_BLEND_OP(KeywordIDHelper.ENUM_VALUES[57]),
	ID_DEPTH_CHECK(KeywordIDHelper.ENUM_VALUES[58]),
	ID_DEPTH_WRITE(KeywordIDHelper.ENUM_VALUES[59]),
	ID_DEPTH_FUNC(KeywordIDHelper.ENUM_VALUES[60]),
	ID_DEPTH_BIAS(KeywordIDHelper.ENUM_VALUES[61]),
	ID_ITERATION_DEPTH_BIAS(KeywordIDHelper.ENUM_VALUES[62]),
	ID_ALWAYS_FAIL(KeywordIDHelper.ENUM_VALUES[63]),
	ID_ALWAYS_PASS(KeywordIDHelper.ENUM_VALUES[64]),
	ID_LESS_EQUAL(KeywordIDHelper.ENUM_VALUES[65]),
	ID_LESS(KeywordIDHelper.ENUM_VALUES[66]),
	ID_EQUAL(KeywordIDHelper.ENUM_VALUES[67]),
	ID_NOT_EQUAL(KeywordIDHelper.ENUM_VALUES[68]),
	ID_GREATER_EQUAL(KeywordIDHelper.ENUM_VALUES[69]),
	ID_GREATER(KeywordIDHelper.ENUM_VALUES[70]),
	ID_ALPHA_REJECTION(KeywordIDHelper.ENUM_VALUES[71]),
	ID_ALPHA_TO_COVERAGE(KeywordIDHelper.ENUM_VALUES[72]),
	ID_LIGHT_SCISSOR(KeywordIDHelper.ENUM_VALUES[73]),
	ID_LIGHT_CLIP_PLANES(KeywordIDHelper.ENUM_VALUES[74]),
	ID_TRANSPARENT_SORTING(KeywordIDHelper.ENUM_VALUES[75]),
	ID_ILLUMINATION_STAGE(KeywordIDHelper.ENUM_VALUES[76]),
	ID_DECAL(KeywordIDHelper.ENUM_VALUES[77]),
	ID_CULL_HARDWARE(KeywordIDHelper.ENUM_VALUES[78]),
	ID_CLOCKWISE(KeywordIDHelper.ENUM_VALUES[79]),
	ID_ANTICLOCKWISE(KeywordIDHelper.ENUM_VALUES[80]),
	ID_CULL_SOFTWARE(KeywordIDHelper.ENUM_VALUES[81]),
	ID_BACK(KeywordIDHelper.ENUM_VALUES[82]),
	ID_FRONT(KeywordIDHelper.ENUM_VALUES[83]),
	ID_NORMALISE_NORMALS(KeywordIDHelper.ENUM_VALUES[84]),
	ID_LIGHTING(KeywordIDHelper.ENUM_VALUES[85]),
	ID_SHADING(KeywordIDHelper.ENUM_VALUES[86]),
	ID_FLAT(KeywordIDHelper.ENUM_VALUES[87]),
	ID_GOURAUD(KeywordIDHelper.ENUM_VALUES[88]),
	ID_PHONG(KeywordIDHelper.ENUM_VALUES[89]),
	ID_POLYGON_MODE(KeywordIDHelper.ENUM_VALUES[90]),
	ID_SOLID(KeywordIDHelper.ENUM_VALUES[91]),
	ID_WIREFRAME(KeywordIDHelper.ENUM_VALUES[92]),
	ID_POINTS(KeywordIDHelper.ENUM_VALUES[93]),
	ID_POLYGON_MODE_OVERRIDEABLE(KeywordIDHelper.ENUM_VALUES[94]),
	ID_FOG_OVERRIDE(KeywordIDHelper.ENUM_VALUES[95]),
	ID_NONE(KeywordIDHelper.ENUM_VALUES[96]),
	ID_LINEAR(KeywordIDHelper.ENUM_VALUES[97]),
	ID_EXP(KeywordIDHelper.ENUM_VALUES[98]),
	ID_EXP2(KeywordIDHelper.ENUM_VALUES[99]),
	ID_COLOUR_WRITE(KeywordIDHelper.ENUM_VALUES[100]),
	ID_MAX_LIGHTS(KeywordIDHelper.ENUM_VALUES[101]),
	ID_START_LIGHT(KeywordIDHelper.ENUM_VALUES[102]),
	ID_ITERATION(KeywordIDHelper.ENUM_VALUES[103]),
	ID_ONCE(KeywordIDHelper.ENUM_VALUES[104]),
	ID_ONCE_PER_LIGHT(KeywordIDHelper.ENUM_VALUES[105]),
	ID_PER_LIGHT(KeywordIDHelper.ENUM_VALUES[106]),
	ID_PER_N_LIGHTS(KeywordIDHelper.ENUM_VALUES[107]),
	ID_POINT(KeywordIDHelper.ENUM_VALUES[108]),
	ID_SPOT(KeywordIDHelper.ENUM_VALUES[109]),
	ID_DIRECTIONAL(KeywordIDHelper.ENUM_VALUES[110]),
	ID_LIGHT_MASK(KeywordIDHelper.ENUM_VALUES[111]),
	ID_POINT_SIZE(KeywordIDHelper.ENUM_VALUES[112]),
	ID_POINT_SPRITES(KeywordIDHelper.ENUM_VALUES[113]),
	ID_POINT_SIZE_ATTENUATION(KeywordIDHelper.ENUM_VALUES[114]),
	ID_POINT_SIZE_MIN(KeywordIDHelper.ENUM_VALUES[115]),
	ID_POINT_SIZE_MAX(KeywordIDHelper.ENUM_VALUES[116]),
	ID_TEXTURE_ALIAS(KeywordIDHelper.ENUM_VALUES[117]),
	ID_TEXTURE(KeywordIDHelper.ENUM_VALUES[118]),
	ID_1D(KeywordIDHelper.ENUM_VALUES[119]),
	ID_2D(KeywordIDHelper.ENUM_VALUES[120]),
	ID_3D(KeywordIDHelper.ENUM_VALUES[121]),
	ID_CUBIC(KeywordIDHelper.ENUM_VALUES[122]),
	ID_UNLIMITED(KeywordIDHelper.ENUM_VALUES[123]),
	ID_ALPHA(KeywordIDHelper.ENUM_VALUES[124]),
	ID_GAMMA(KeywordIDHelper.ENUM_VALUES[125]),
	ID_ANIM_TEXTURE(KeywordIDHelper.ENUM_VALUES[126]),
	ID_CUBIC_TEXTURE(KeywordIDHelper.ENUM_VALUES[127]),
	ID_SEPARATE_UV(KeywordIDHelper.ENUM_VALUES[128]),
	ID_COMBINED_UVW(KeywordIDHelper.ENUM_VALUES[129]),
	ID_TEX_COORD_SET(KeywordIDHelper.ENUM_VALUES[130]),
	ID_TEX_ADDRESS_MODE(KeywordIDHelper.ENUM_VALUES[131]),
	ID_WRAP(KeywordIDHelper.ENUM_VALUES[132]),
	ID_CLAMP(KeywordIDHelper.ENUM_VALUES[133]),
	ID_BORDER(KeywordIDHelper.ENUM_VALUES[134]),
	ID_MIRROR(KeywordIDHelper.ENUM_VALUES[135]),
	ID_TEX_BORDER_COLOUR(KeywordIDHelper.ENUM_VALUES[136]),
	ID_FILTERING(KeywordIDHelper.ENUM_VALUES[137]),
	ID_BILINEAR(KeywordIDHelper.ENUM_VALUES[138]),
	ID_TRILINEAR(KeywordIDHelper.ENUM_VALUES[139]),
	ID_ANISOTROPIC(KeywordIDHelper.ENUM_VALUES[140]),
	ID_MAX_ANISOTROPY(KeywordIDHelper.ENUM_VALUES[141]),
	ID_MIPMAP_BIAS(KeywordIDHelper.ENUM_VALUES[142]),
	ID_COLOUR_OP(KeywordIDHelper.ENUM_VALUES[143]),
	ID_REPLACE(KeywordIDHelper.ENUM_VALUES[144]),
	ID_ADD(KeywordIDHelper.ENUM_VALUES[145]),
	ID_MODULATE(KeywordIDHelper.ENUM_VALUES[146]),
	ID_ALPHA_BLEND(KeywordIDHelper.ENUM_VALUES[147]),
	ID_COLOUR_OP_EX(KeywordIDHelper.ENUM_VALUES[148]),
	ID_SOURCE1(KeywordIDHelper.ENUM_VALUES[149]),
	ID_SOURCE2(KeywordIDHelper.ENUM_VALUES[150]),
	ID_MODULATE_X2(KeywordIDHelper.ENUM_VALUES[151]),
	ID_MODULATE_X4(KeywordIDHelper.ENUM_VALUES[152]),
	ID_ADD_SIGNED(KeywordIDHelper.ENUM_VALUES[153]),
	ID_ADD_SMOOTH(KeywordIDHelper.ENUM_VALUES[154]),
	ID_SUBTRACT(KeywordIDHelper.ENUM_VALUES[155]),
	ID_BLEND_DIFFUSE_COLOUR(KeywordIDHelper.ENUM_VALUES[156]),
	ID_BLEND_DIFFUSE_ALPHA(KeywordIDHelper.ENUM_VALUES[157]),
	ID_BLEND_TEXTURE_ALPHA(KeywordIDHelper.ENUM_VALUES[158]),
	ID_BLEND_CURRENT_ALPHA(KeywordIDHelper.ENUM_VALUES[159]),
	ID_BLEND_MANUAL(KeywordIDHelper.ENUM_VALUES[160]),
	ID_DOT_PRODUCT(KeywordIDHelper.ENUM_VALUES[161]),
	ID_SRC_CURRENT(KeywordIDHelper.ENUM_VALUES[162]),
	ID_SRC_TEXTURE(KeywordIDHelper.ENUM_VALUES[163]),
	ID_SRC_DIFFUSE(KeywordIDHelper.ENUM_VALUES[164]),
	ID_SRC_SPECULAR(KeywordIDHelper.ENUM_VALUES[165]),
	ID_SRC_MANUAL(KeywordIDHelper.ENUM_VALUES[166]),
	ID_COLOUR_OP_MULTIPASS_FALLBACK(KeywordIDHelper.ENUM_VALUES[167]),
	ID_ALPHA_OP_EX(KeywordIDHelper.ENUM_VALUES[168]),
	ID_ENV_MAP(KeywordIDHelper.ENUM_VALUES[169]),
	ID_SPHERICAL(KeywordIDHelper.ENUM_VALUES[170]),
	ID_PLANAR(KeywordIDHelper.ENUM_VALUES[171]),
	ID_CUBIC_REFLECTION(KeywordIDHelper.ENUM_VALUES[172]),
	ID_CUBIC_NORMAL(KeywordIDHelper.ENUM_VALUES[173]),
	ID_SCROLL(KeywordIDHelper.ENUM_VALUES[174]),
	ID_SCROLL_ANIM(KeywordIDHelper.ENUM_VALUES[175]),
	ID_ROTATE(KeywordIDHelper.ENUM_VALUES[176]),
	ID_ROTATE_ANIM(KeywordIDHelper.ENUM_VALUES[177]),
	ID_SCALE(KeywordIDHelper.ENUM_VALUES[178]),
	ID_WAVE_XFORM(KeywordIDHelper.ENUM_VALUES[179]),
	ID_SCROLL_X(KeywordIDHelper.ENUM_VALUES[180]),
	ID_SCROLL_Y(KeywordIDHelper.ENUM_VALUES[181]),
	ID_SCALE_X(KeywordIDHelper.ENUM_VALUES[182]),
	ID_SCALE_Y(KeywordIDHelper.ENUM_VALUES[183]),
	ID_SINE(KeywordIDHelper.ENUM_VALUES[184]),
	ID_TRIANGLE(KeywordIDHelper.ENUM_VALUES[185]),
	ID_SQUARE(KeywordIDHelper.ENUM_VALUES[186]),
	ID_SAWTOOTH(KeywordIDHelper.ENUM_VALUES[187]),
	ID_INVERSE_SAWTOOTH(KeywordIDHelper.ENUM_VALUES[188]),
	ID_TRANSFORM(KeywordIDHelper.ENUM_VALUES[189]),
	ID_BINDING_TYPE(KeywordIDHelper.ENUM_VALUES[190]),
	ID_VERTEX(KeywordIDHelper.ENUM_VALUES[191]),
	ID_FRAGMENT(KeywordIDHelper.ENUM_VALUES[192]),
	ID_CONTENT_TYPE(KeywordIDHelper.ENUM_VALUES[193]),
	ID_NAMED(KeywordIDHelper.ENUM_VALUES[194]),
	ID_SHADOW(KeywordIDHelper.ENUM_VALUES[195]),
	ID_TEXTURE_SOURCE(KeywordIDHelper.ENUM_VALUES[196]),
	ID_SHARED_PARAMS(KeywordIDHelper.ENUM_VALUES[197]),
	ID_SHARED_PARAM_NAMED(KeywordIDHelper.ENUM_VALUES[198]),
	ID_SHARED_PARAMS_REF(KeywordIDHelper.ENUM_VALUES[199]),
	ID_PARTICLE_SYSTEM(KeywordIDHelper.ENUM_VALUES[200]),
	ID_EMITTER(KeywordIDHelper.ENUM_VALUES[201]),
	ID_AFFECTOR(KeywordIDHelper.ENUM_VALUES[202]),
	ID_COMPOSITOR(KeywordIDHelper.ENUM_VALUES[203]),
	ID_TARGET(KeywordIDHelper.ENUM_VALUES[204]),
	ID_TARGET_OUTPUT(KeywordIDHelper.ENUM_VALUES[205]),
	ID_INPUT(KeywordIDHelper.ENUM_VALUES[206]),
	ID_PREVIOUS(KeywordIDHelper.ENUM_VALUES[207]),
	ID_TARGET_WIDTH(KeywordIDHelper.ENUM_VALUES[208]),
	ID_TARGET_HEIGHT(KeywordIDHelper.ENUM_VALUES[209]),
	ID_TARGET_WIDTH_SCALED(KeywordIDHelper.ENUM_VALUES[210]),
	ID_TARGET_HEIGHT_SCALED(KeywordIDHelper.ENUM_VALUES[211]),
	ID_COMPOSITOR_LOGIC(KeywordIDHelper.ENUM_VALUES[212]),
	ID_TEXTURE_REF(KeywordIDHelper.ENUM_VALUES[213]),
	ID_SCOPE_LOCAL(KeywordIDHelper.ENUM_VALUES[214]),
	ID_SCOPE_CHAIN(KeywordIDHelper.ENUM_VALUES[215]),
	ID_SCOPE_GLOBAL(KeywordIDHelper.ENUM_VALUES[216]),
	ID_POOLED(KeywordIDHelper.ENUM_VALUES[217]),
	ID_NO_FSAA(KeywordIDHelper.ENUM_VALUES[218]),
	ID_DEPTH_POOL(KeywordIDHelper.ENUM_VALUES[219]),
	ID_ONLY_INITIAL(KeywordIDHelper.ENUM_VALUES[220]),
	ID_VISIBILITY_MASK(KeywordIDHelper.ENUM_VALUES[221]),
	ID_LOD_BIAS(KeywordIDHelper.ENUM_VALUES[222]),
	ID_MATERIAL_SCHEME(KeywordIDHelper.ENUM_VALUES[223]),
	ID_SHADOWS_ENABLED(KeywordIDHelper.ENUM_VALUES[224]),
	ID_CLEAR(KeywordIDHelper.ENUM_VALUES[225]),
	ID_STENCIL(KeywordIDHelper.ENUM_VALUES[226]),
	ID_RENDER_SCENE(KeywordIDHelper.ENUM_VALUES[227]),
	ID_RENDER_QUAD(KeywordIDHelper.ENUM_VALUES[228]),
	ID_IDENTIFIER(KeywordIDHelper.ENUM_VALUES[229]),
	ID_FIRST_RENDER_QUEUE(KeywordIDHelper.ENUM_VALUES[230]),
	ID_LAST_RENDER_QUEUE(KeywordIDHelper.ENUM_VALUES[231]),
	ID_QUAD_NORMALS(KeywordIDHelper.ENUM_VALUES[232]),
	ID_CAMERA_FAR_CORNERS_VIEW_SPACE(KeywordIDHelper.ENUM_VALUES[233]),
	ID_CAMERA_FAR_CORNERS_WORLD_SPACE(KeywordIDHelper.ENUM_VALUES[234]),
	ID_BUFFERS(KeywordIDHelper.ENUM_VALUES[235]),
	ID_COLOUR(KeywordIDHelper.ENUM_VALUES[236]),
	ID_DEPTH(KeywordIDHelper.ENUM_VALUES[237]),
	ID_COLOUR_VALUE(KeywordIDHelper.ENUM_VALUES[238]),
	ID_DEPTH_VALUE(KeywordIDHelper.ENUM_VALUES[239]),
	ID_STENCIL_VALUE(KeywordIDHelper.ENUM_VALUES[240]),
	ID_CHECK(KeywordIDHelper.ENUM_VALUES[241]),
	ID_COMP_FUNC(KeywordIDHelper.ENUM_VALUES[242]),
	ID_REF_VALUE(KeywordIDHelper.ENUM_VALUES[243]),
	ID_MASK(KeywordIDHelper.ENUM_VALUES[244]),
	ID_FAIL_OP(KeywordIDHelper.ENUM_VALUES[245]),
	ID_KEEP(KeywordIDHelper.ENUM_VALUES[246]),
	ID_INCREMENT(KeywordIDHelper.ENUM_VALUES[247]),
	ID_DECREMENT(KeywordIDHelper.ENUM_VALUES[248]),
	ID_INCREMENT_WRAP(KeywordIDHelper.ENUM_VALUES[249]),
	ID_DECREMENT_WRAP(KeywordIDHelper.ENUM_VALUES[250]),
	ID_INVERT(KeywordIDHelper.ENUM_VALUES[251]),
	ID_DEPTH_FAIL_OP(KeywordIDHelper.ENUM_VALUES[252]),
	ID_PASS_OP(KeywordIDHelper.ENUM_VALUES[253]),
	ID_TWO_SIDED(KeywordIDHelper.ENUM_VALUES[254]),
	ID_END_BUILTIN_IDS(KeywordIDHelper.ENUM_VALUES[255]);
	private int value;
	KeywordID(int i) {
		this.value = i;
	}
	public KeywordID getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final KeywordID toEnum(int retval) {
		if(retval == ID_MATERIAL.value){
			return ID_MATERIAL;
		}
		else if(retval == ID_VERTEX_PROGRAM.value){
			return ID_VERTEX_PROGRAM;
		}
		else if(retval == ID_GEOMETRY_PROGRAM.value){
			return ID_GEOMETRY_PROGRAM;
		}
		else if(retval == ID_FRAGMENT_PROGRAM.value){
			return ID_FRAGMENT_PROGRAM;
		}
		else if(retval == ID_TECHNIQUE.value){
			return ID_TECHNIQUE;
		}
		else if(retval == ID_PASS.value){
			return ID_PASS;
		}
		else if(retval == ID_TEXTURE_UNIT.value){
			return ID_TEXTURE_UNIT;
		}
		else if(retval == ID_VERTEX_PROGRAM_REF.value){
			return ID_VERTEX_PROGRAM_REF;
		}
		else if(retval == ID_GEOMETRY_PROGRAM_REF.value){
			return ID_GEOMETRY_PROGRAM_REF;
		}
		else if(retval == ID_FRAGMENT_PROGRAM_REF.value){
			return ID_FRAGMENT_PROGRAM_REF;
		}
		else if(retval == ID_SHADOW_CASTER_VERTEX_PROGRAM_REF.value){
			return ID_SHADOW_CASTER_VERTEX_PROGRAM_REF;
		}
		else if(retval == ID_SHADOW_CASTER_FRAGMENT_PROGRAM_REF.value){
			return ID_SHADOW_CASTER_FRAGMENT_PROGRAM_REF;
		}
		else if(retval == ID_SHADOW_RECEIVER_VERTEX_PROGRAM_REF.value){
			return ID_SHADOW_RECEIVER_VERTEX_PROGRAM_REF;
		}
		else if(retval == ID_SHADOW_RECEIVER_FRAGMENT_PROGRAM_REF.value){
			return ID_SHADOW_RECEIVER_FRAGMENT_PROGRAM_REF;
		}
		else if(retval == ID_SHADOW_CASTER_MATERIAL.value){
			return ID_SHADOW_CASTER_MATERIAL;
		}
		else if(retval == ID_SHADOW_RECEIVER_MATERIAL.value){
			return ID_SHADOW_RECEIVER_MATERIAL;
		}
		else if(retval == ID_LOD_VALUES.value){
			return ID_LOD_VALUES;
		}
		else if(retval == ID_LOD_STRATEGY.value){
			return ID_LOD_STRATEGY;
		}
		else if(retval == ID_LOD_DISTANCES.value){
			return ID_LOD_DISTANCES;
		}
		else if(retval == ID_RECEIVE_SHADOWS.value){
			return ID_RECEIVE_SHADOWS;
		}
		else if(retval == ID_TRANSPARENCY_CASTS_SHADOWS.value){
			return ID_TRANSPARENCY_CASTS_SHADOWS;
		}
		else if(retval == ID_SET_TEXTURE_ALIAS.value){
			return ID_SET_TEXTURE_ALIAS;
		}
		else if(retval == ID_SOURCE.value){
			return ID_SOURCE;
		}
		else if(retval == ID_SYNTAX.value){
			return ID_SYNTAX;
		}
		else if(retval == ID_DEFAULT_PARAMS.value){
			return ID_DEFAULT_PARAMS;
		}
		else if(retval == ID_PARAM_INDEXED.value){
			return ID_PARAM_INDEXED;
		}
		else if(retval == ID_PARAM_NAMED.value){
			return ID_PARAM_NAMED;
		}
		else if(retval == ID_PARAM_INDEXED_AUTO.value){
			return ID_PARAM_INDEXED_AUTO;
		}
		else if(retval == ID_PARAM_NAMED_AUTO.value){
			return ID_PARAM_NAMED_AUTO;
		}
		else if(retval == ID_SCHEME.value){
			return ID_SCHEME;
		}
		else if(retval == ID_LOD_INDEX.value){
			return ID_LOD_INDEX;
		}
		else if(retval == ID_GPU_VENDOR_RULE.value){
			return ID_GPU_VENDOR_RULE;
		}
		else if(retval == ID_GPU_DEVICE_RULE.value){
			return ID_GPU_DEVICE_RULE;
		}
		else if(retval == ID_INCLUDE.value){
			return ID_INCLUDE;
		}
		else if(retval == ID_EXCLUDE.value){
			return ID_EXCLUDE;
		}
		else if(retval == ID_AMBIENT.value){
			return ID_AMBIENT;
		}
		else if(retval == ID_DIFFUSE.value){
			return ID_DIFFUSE;
		}
		else if(retval == ID_SPECULAR.value){
			return ID_SPECULAR;
		}
		else if(retval == ID_EMISSIVE.value){
			return ID_EMISSIVE;
		}
		else if(retval == ID_VERTEXCOLOUR.value){
			return ID_VERTEXCOLOUR;
		}
		else if(retval == ID_SCENE_BLEND.value){
			return ID_SCENE_BLEND;
		}
		else if(retval == ID_COLOUR_BLEND.value){
			return ID_COLOUR_BLEND;
		}
		else if(retval == ID_ONE.value){
			return ID_ONE;
		}
		else if(retval == ID_ZERO.value){
			return ID_ZERO;
		}
		else if(retval == ID_DEST_COLOUR.value){
			return ID_DEST_COLOUR;
		}
		else if(retval == ID_SRC_COLOUR.value){
			return ID_SRC_COLOUR;
		}
		else if(retval == ID_ONE_MINUS_DEST_COLOUR.value){
			return ID_ONE_MINUS_DEST_COLOUR;
		}
		else if(retval == ID_ONE_MINUS_SRC_COLOUR.value){
			return ID_ONE_MINUS_SRC_COLOUR;
		}
		else if(retval == ID_DEST_ALPHA.value){
			return ID_DEST_ALPHA;
		}
		else if(retval == ID_SRC_ALPHA.value){
			return ID_SRC_ALPHA;
		}
		else if(retval == ID_ONE_MINUS_DEST_ALPHA.value){
			return ID_ONE_MINUS_DEST_ALPHA;
		}
		else if(retval == ID_ONE_MINUS_SRC_ALPHA.value){
			return ID_ONE_MINUS_SRC_ALPHA;
		}
		else if(retval == ID_SEPARATE_SCENE_BLEND.value){
			return ID_SEPARATE_SCENE_BLEND;
		}
		else if(retval == ID_SCENE_BLEND_OP.value){
			return ID_SCENE_BLEND_OP;
		}
		else if(retval == ID_REVERSE_SUBTRACT.value){
			return ID_REVERSE_SUBTRACT;
		}
		else if(retval == ID_MIN.value){
			return ID_MIN;
		}
		else if(retval == ID_MAX.value){
			return ID_MAX;
		}
		else if(retval == ID_SEPARATE_SCENE_BLEND_OP.value){
			return ID_SEPARATE_SCENE_BLEND_OP;
		}
		else if(retval == ID_DEPTH_CHECK.value){
			return ID_DEPTH_CHECK;
		}
		else if(retval == ID_DEPTH_WRITE.value){
			return ID_DEPTH_WRITE;
		}
		else if(retval == ID_DEPTH_FUNC.value){
			return ID_DEPTH_FUNC;
		}
		else if(retval == ID_DEPTH_BIAS.value){
			return ID_DEPTH_BIAS;
		}
		else if(retval == ID_ITERATION_DEPTH_BIAS.value){
			return ID_ITERATION_DEPTH_BIAS;
		}
		else if(retval == ID_ALWAYS_FAIL.value){
			return ID_ALWAYS_FAIL;
		}
		else if(retval == ID_ALWAYS_PASS.value){
			return ID_ALWAYS_PASS;
		}
		else if(retval == ID_LESS_EQUAL.value){
			return ID_LESS_EQUAL;
		}
		else if(retval == ID_LESS.value){
			return ID_LESS;
		}
		else if(retval == ID_EQUAL.value){
			return ID_EQUAL;
		}
		else if(retval == ID_NOT_EQUAL.value){
			return ID_NOT_EQUAL;
		}
		else if(retval == ID_GREATER_EQUAL.value){
			return ID_GREATER_EQUAL;
		}
		else if(retval == ID_GREATER.value){
			return ID_GREATER;
		}
		else if(retval == ID_ALPHA_REJECTION.value){
			return ID_ALPHA_REJECTION;
		}
		else if(retval == ID_ALPHA_TO_COVERAGE.value){
			return ID_ALPHA_TO_COVERAGE;
		}
		else if(retval == ID_LIGHT_SCISSOR.value){
			return ID_LIGHT_SCISSOR;
		}
		else if(retval == ID_LIGHT_CLIP_PLANES.value){
			return ID_LIGHT_CLIP_PLANES;
		}
		else if(retval == ID_TRANSPARENT_SORTING.value){
			return ID_TRANSPARENT_SORTING;
		}
		else if(retval == ID_ILLUMINATION_STAGE.value){
			return ID_ILLUMINATION_STAGE;
		}
		else if(retval == ID_DECAL.value){
			return ID_DECAL;
		}
		else if(retval == ID_CULL_HARDWARE.value){
			return ID_CULL_HARDWARE;
		}
		else if(retval == ID_CLOCKWISE.value){
			return ID_CLOCKWISE;
		}
		else if(retval == ID_ANTICLOCKWISE.value){
			return ID_ANTICLOCKWISE;
		}
		else if(retval == ID_CULL_SOFTWARE.value){
			return ID_CULL_SOFTWARE;
		}
		else if(retval == ID_BACK.value){
			return ID_BACK;
		}
		else if(retval == ID_FRONT.value){
			return ID_FRONT;
		}
		else if(retval == ID_NORMALISE_NORMALS.value){
			return ID_NORMALISE_NORMALS;
		}
		else if(retval == ID_LIGHTING.value){
			return ID_LIGHTING;
		}
		else if(retval == ID_SHADING.value){
			return ID_SHADING;
		}
		else if(retval == ID_FLAT.value){
			return ID_FLAT;
		}
		else if(retval == ID_GOURAUD.value){
			return ID_GOURAUD;
		}
		else if(retval == ID_PHONG.value){
			return ID_PHONG;
		}
		else if(retval == ID_POLYGON_MODE.value){
			return ID_POLYGON_MODE;
		}
		else if(retval == ID_SOLID.value){
			return ID_SOLID;
		}
		else if(retval == ID_WIREFRAME.value){
			return ID_WIREFRAME;
		}
		else if(retval == ID_POINTS.value){
			return ID_POINTS;
		}
		else if(retval == ID_POLYGON_MODE_OVERRIDEABLE.value){
			return ID_POLYGON_MODE_OVERRIDEABLE;
		}
		else if(retval == ID_FOG_OVERRIDE.value){
			return ID_FOG_OVERRIDE;
		}
		else if(retval == ID_NONE.value){
			return ID_NONE;
		}
		else if(retval == ID_LINEAR.value){
			return ID_LINEAR;
		}
		else if(retval == ID_EXP.value){
			return ID_EXP;
		}
		else if(retval == ID_EXP2.value){
			return ID_EXP2;
		}
		else if(retval == ID_COLOUR_WRITE.value){
			return ID_COLOUR_WRITE;
		}
		else if(retval == ID_MAX_LIGHTS.value){
			return ID_MAX_LIGHTS;
		}
		else if(retval == ID_START_LIGHT.value){
			return ID_START_LIGHT;
		}
		else if(retval == ID_ITERATION.value){
			return ID_ITERATION;
		}
		else if(retval == ID_ONCE.value){
			return ID_ONCE;
		}
		else if(retval == ID_ONCE_PER_LIGHT.value){
			return ID_ONCE_PER_LIGHT;
		}
		else if(retval == ID_PER_LIGHT.value){
			return ID_PER_LIGHT;
		}
		else if(retval == ID_PER_N_LIGHTS.value){
			return ID_PER_N_LIGHTS;
		}
		else if(retval == ID_POINT.value){
			return ID_POINT;
		}
		else if(retval == ID_SPOT.value){
			return ID_SPOT;
		}
		else if(retval == ID_DIRECTIONAL.value){
			return ID_DIRECTIONAL;
		}
		else if(retval == ID_LIGHT_MASK.value){
			return ID_LIGHT_MASK;
		}
		else if(retval == ID_POINT_SIZE.value){
			return ID_POINT_SIZE;
		}
		else if(retval == ID_POINT_SPRITES.value){
			return ID_POINT_SPRITES;
		}
		else if(retval == ID_POINT_SIZE_ATTENUATION.value){
			return ID_POINT_SIZE_ATTENUATION;
		}
		else if(retval == ID_POINT_SIZE_MIN.value){
			return ID_POINT_SIZE_MIN;
		}
		else if(retval == ID_POINT_SIZE_MAX.value){
			return ID_POINT_SIZE_MAX;
		}
		else if(retval == ID_TEXTURE_ALIAS.value){
			return ID_TEXTURE_ALIAS;
		}
		else if(retval == ID_TEXTURE.value){
			return ID_TEXTURE;
		}
		else if(retval == ID_1D.value){
			return ID_1D;
		}
		else if(retval == ID_2D.value){
			return ID_2D;
		}
		else if(retval == ID_3D.value){
			return ID_3D;
		}
		else if(retval == ID_CUBIC.value){
			return ID_CUBIC;
		}
		else if(retval == ID_UNLIMITED.value){
			return ID_UNLIMITED;
		}
		else if(retval == ID_ALPHA.value){
			return ID_ALPHA;
		}
		else if(retval == ID_GAMMA.value){
			return ID_GAMMA;
		}
		else if(retval == ID_ANIM_TEXTURE.value){
			return ID_ANIM_TEXTURE;
		}
		else if(retval == ID_CUBIC_TEXTURE.value){
			return ID_CUBIC_TEXTURE;
		}
		else if(retval == ID_SEPARATE_UV.value){
			return ID_SEPARATE_UV;
		}
		else if(retval == ID_COMBINED_UVW.value){
			return ID_COMBINED_UVW;
		}
		else if(retval == ID_TEX_COORD_SET.value){
			return ID_TEX_COORD_SET;
		}
		else if(retval == ID_TEX_ADDRESS_MODE.value){
			return ID_TEX_ADDRESS_MODE;
		}
		else if(retval == ID_WRAP.value){
			return ID_WRAP;
		}
		else if(retval == ID_CLAMP.value){
			return ID_CLAMP;
		}
		else if(retval == ID_BORDER.value){
			return ID_BORDER;
		}
		else if(retval == ID_MIRROR.value){
			return ID_MIRROR;
		}
		else if(retval == ID_TEX_BORDER_COLOUR.value){
			return ID_TEX_BORDER_COLOUR;
		}
		else if(retval == ID_FILTERING.value){
			return ID_FILTERING;
		}
		else if(retval == ID_BILINEAR.value){
			return ID_BILINEAR;
		}
		else if(retval == ID_TRILINEAR.value){
			return ID_TRILINEAR;
		}
		else if(retval == ID_ANISOTROPIC.value){
			return ID_ANISOTROPIC;
		}
		else if(retval == ID_MAX_ANISOTROPY.value){
			return ID_MAX_ANISOTROPY;
		}
		else if(retval == ID_MIPMAP_BIAS.value){
			return ID_MIPMAP_BIAS;
		}
		else if(retval == ID_COLOUR_OP.value){
			return ID_COLOUR_OP;
		}
		else if(retval == ID_REPLACE.value){
			return ID_REPLACE;
		}
		else if(retval == ID_ADD.value){
			return ID_ADD;
		}
		else if(retval == ID_MODULATE.value){
			return ID_MODULATE;
		}
		else if(retval == ID_ALPHA_BLEND.value){
			return ID_ALPHA_BLEND;
		}
		else if(retval == ID_COLOUR_OP_EX.value){
			return ID_COLOUR_OP_EX;
		}
		else if(retval == ID_SOURCE1.value){
			return ID_SOURCE1;
		}
		else if(retval == ID_SOURCE2.value){
			return ID_SOURCE2;
		}
		else if(retval == ID_MODULATE_X2.value){
			return ID_MODULATE_X2;
		}
		else if(retval == ID_MODULATE_X4.value){
			return ID_MODULATE_X4;
		}
		else if(retval == ID_ADD_SIGNED.value){
			return ID_ADD_SIGNED;
		}
		else if(retval == ID_ADD_SMOOTH.value){
			return ID_ADD_SMOOTH;
		}
		else if(retval == ID_SUBTRACT.value){
			return ID_SUBTRACT;
		}
		else if(retval == ID_BLEND_DIFFUSE_COLOUR.value){
			return ID_BLEND_DIFFUSE_COLOUR;
		}
		else if(retval == ID_BLEND_DIFFUSE_ALPHA.value){
			return ID_BLEND_DIFFUSE_ALPHA;
		}
		else if(retval == ID_BLEND_TEXTURE_ALPHA.value){
			return ID_BLEND_TEXTURE_ALPHA;
		}
		else if(retval == ID_BLEND_CURRENT_ALPHA.value){
			return ID_BLEND_CURRENT_ALPHA;
		}
		else if(retval == ID_BLEND_MANUAL.value){
			return ID_BLEND_MANUAL;
		}
		else if(retval == ID_DOT_PRODUCT.value){
			return ID_DOT_PRODUCT;
		}
		else if(retval == ID_SRC_CURRENT.value){
			return ID_SRC_CURRENT;
		}
		else if(retval == ID_SRC_TEXTURE.value){
			return ID_SRC_TEXTURE;
		}
		else if(retval == ID_SRC_DIFFUSE.value){
			return ID_SRC_DIFFUSE;
		}
		else if(retval == ID_SRC_SPECULAR.value){
			return ID_SRC_SPECULAR;
		}
		else if(retval == ID_SRC_MANUAL.value){
			return ID_SRC_MANUAL;
		}
		else if(retval == ID_COLOUR_OP_MULTIPASS_FALLBACK.value){
			return ID_COLOUR_OP_MULTIPASS_FALLBACK;
		}
		else if(retval == ID_ALPHA_OP_EX.value){
			return ID_ALPHA_OP_EX;
		}
		else if(retval == ID_ENV_MAP.value){
			return ID_ENV_MAP;
		}
		else if(retval == ID_SPHERICAL.value){
			return ID_SPHERICAL;
		}
		else if(retval == ID_PLANAR.value){
			return ID_PLANAR;
		}
		else if(retval == ID_CUBIC_REFLECTION.value){
			return ID_CUBIC_REFLECTION;
		}
		else if(retval == ID_CUBIC_NORMAL.value){
			return ID_CUBIC_NORMAL;
		}
		else if(retval == ID_SCROLL.value){
			return ID_SCROLL;
		}
		else if(retval == ID_SCROLL_ANIM.value){
			return ID_SCROLL_ANIM;
		}
		else if(retval == ID_ROTATE.value){
			return ID_ROTATE;
		}
		else if(retval == ID_ROTATE_ANIM.value){
			return ID_ROTATE_ANIM;
		}
		else if(retval == ID_SCALE.value){
			return ID_SCALE;
		}
		else if(retval == ID_WAVE_XFORM.value){
			return ID_WAVE_XFORM;
		}
		else if(retval == ID_SCROLL_X.value){
			return ID_SCROLL_X;
		}
		else if(retval == ID_SCROLL_Y.value){
			return ID_SCROLL_Y;
		}
		else if(retval == ID_SCALE_X.value){
			return ID_SCALE_X;
		}
		else if(retval == ID_SCALE_Y.value){
			return ID_SCALE_Y;
		}
		else if(retval == ID_SINE.value){
			return ID_SINE;
		}
		else if(retval == ID_TRIANGLE.value){
			return ID_TRIANGLE;
		}
		else if(retval == ID_SQUARE.value){
			return ID_SQUARE;
		}
		else if(retval == ID_SAWTOOTH.value){
			return ID_SAWTOOTH;
		}
		else if(retval == ID_INVERSE_SAWTOOTH.value){
			return ID_INVERSE_SAWTOOTH;
		}
		else if(retval == ID_TRANSFORM.value){
			return ID_TRANSFORM;
		}
		else if(retval == ID_BINDING_TYPE.value){
			return ID_BINDING_TYPE;
		}
		else if(retval == ID_VERTEX.value){
			return ID_VERTEX;
		}
		else if(retval == ID_FRAGMENT.value){
			return ID_FRAGMENT;
		}
		else if(retval == ID_CONTENT_TYPE.value){
			return ID_CONTENT_TYPE;
		}
		else if(retval == ID_NAMED.value){
			return ID_NAMED;
		}
		else if(retval == ID_SHADOW.value){
			return ID_SHADOW;
		}
		else if(retval == ID_TEXTURE_SOURCE.value){
			return ID_TEXTURE_SOURCE;
		}
		else if(retval == ID_SHARED_PARAMS.value){
			return ID_SHARED_PARAMS;
		}
		else if(retval == ID_SHARED_PARAM_NAMED.value){
			return ID_SHARED_PARAM_NAMED;
		}
		else if(retval == ID_SHARED_PARAMS_REF.value){
			return ID_SHARED_PARAMS_REF;
		}
		else if(retval == ID_PARTICLE_SYSTEM.value){
			return ID_PARTICLE_SYSTEM;
		}
		else if(retval == ID_EMITTER.value){
			return ID_EMITTER;
		}
		else if(retval == ID_AFFECTOR.value){
			return ID_AFFECTOR;
		}
		else if(retval == ID_COMPOSITOR.value){
			return ID_COMPOSITOR;
		}
		else if(retval == ID_TARGET.value){
			return ID_TARGET;
		}
		else if(retval == ID_TARGET_OUTPUT.value){
			return ID_TARGET_OUTPUT;
		}
		else if(retval == ID_INPUT.value){
			return ID_INPUT;
		}
		else if(retval == ID_PREVIOUS.value){
			return ID_PREVIOUS;
		}
		else if(retval == ID_TARGET_WIDTH.value){
			return ID_TARGET_WIDTH;
		}
		else if(retval == ID_TARGET_HEIGHT.value){
			return ID_TARGET_HEIGHT;
		}
		else if(retval == ID_TARGET_WIDTH_SCALED.value){
			return ID_TARGET_WIDTH_SCALED;
		}
		else if(retval == ID_TARGET_HEIGHT_SCALED.value){
			return ID_TARGET_HEIGHT_SCALED;
		}
		else if(retval == ID_COMPOSITOR_LOGIC.value){
			return ID_COMPOSITOR_LOGIC;
		}
		else if(retval == ID_TEXTURE_REF.value){
			return ID_TEXTURE_REF;
		}
		else if(retval == ID_SCOPE_LOCAL.value){
			return ID_SCOPE_LOCAL;
		}
		else if(retval == ID_SCOPE_CHAIN.value){
			return ID_SCOPE_CHAIN;
		}
		else if(retval == ID_SCOPE_GLOBAL.value){
			return ID_SCOPE_GLOBAL;
		}
		else if(retval == ID_POOLED.value){
			return ID_POOLED;
		}
		else if(retval == ID_NO_FSAA.value){
			return ID_NO_FSAA;
		}
		else if(retval == ID_DEPTH_POOL.value){
			return ID_DEPTH_POOL;
		}
		else if(retval == ID_ONLY_INITIAL.value){
			return ID_ONLY_INITIAL;
		}
		else if(retval == ID_VISIBILITY_MASK.value){
			return ID_VISIBILITY_MASK;
		}
		else if(retval == ID_LOD_BIAS.value){
			return ID_LOD_BIAS;
		}
		else if(retval == ID_MATERIAL_SCHEME.value){
			return ID_MATERIAL_SCHEME;
		}
		else if(retval == ID_SHADOWS_ENABLED.value){
			return ID_SHADOWS_ENABLED;
		}
		else if(retval == ID_CLEAR.value){
			return ID_CLEAR;
		}
		else if(retval == ID_STENCIL.value){
			return ID_STENCIL;
		}
		else if(retval == ID_RENDER_SCENE.value){
			return ID_RENDER_SCENE;
		}
		else if(retval == ID_RENDER_QUAD.value){
			return ID_RENDER_QUAD;
		}
		else if(retval == ID_IDENTIFIER.value){
			return ID_IDENTIFIER;
		}
		else if(retval == ID_FIRST_RENDER_QUEUE.value){
			return ID_FIRST_RENDER_QUEUE;
		}
		else if(retval == ID_LAST_RENDER_QUEUE.value){
			return ID_LAST_RENDER_QUEUE;
		}
		else if(retval == ID_QUAD_NORMALS.value){
			return ID_QUAD_NORMALS;
		}
		else if(retval == ID_CAMERA_FAR_CORNERS_VIEW_SPACE.value){
			return ID_CAMERA_FAR_CORNERS_VIEW_SPACE;
		}
		else if(retval == ID_CAMERA_FAR_CORNERS_WORLD_SPACE.value){
			return ID_CAMERA_FAR_CORNERS_WORLD_SPACE;
		}
		else if(retval == ID_BUFFERS.value){
			return ID_BUFFERS;
		}
		else if(retval == ID_COLOUR.value){
			return ID_COLOUR;
		}
		else if(retval == ID_DEPTH.value){
			return ID_DEPTH;
		}
		else if(retval == ID_COLOUR_VALUE.value){
			return ID_COLOUR_VALUE;
		}
		else if(retval == ID_DEPTH_VALUE.value){
			return ID_DEPTH_VALUE;
		}
		else if(retval == ID_STENCIL_VALUE.value){
			return ID_STENCIL_VALUE;
		}
		else if(retval == ID_CHECK.value){
			return ID_CHECK;
		}
		else if(retval == ID_COMP_FUNC.value){
			return ID_COMP_FUNC;
		}
		else if(retval == ID_REF_VALUE.value){
			return ID_REF_VALUE;
		}
		else if(retval == ID_MASK.value){
			return ID_MASK;
		}
		else if(retval == ID_FAIL_OP.value){
			return ID_FAIL_OP;
		}
		else if(retval == ID_KEEP.value){
			return ID_KEEP;
		}
		else if(retval == ID_INCREMENT.value){
			return ID_INCREMENT;
		}
		else if(retval == ID_DECREMENT.value){
			return ID_DECREMENT;
		}
		else if(retval == ID_INCREMENT_WRAP.value){
			return ID_INCREMENT_WRAP;
		}
		else if(retval == ID_DECREMENT_WRAP.value){
			return ID_DECREMENT_WRAP;
		}
		else if(retval == ID_INVERT.value){
			return ID_INVERT;
		}
		else if(retval == ID_DEPTH_FAIL_OP.value){
			return ID_DEPTH_FAIL_OP;
		}
		else if(retval == ID_PASS_OP.value){
			return ID_PASS_OP;
		}
		else if(retval == ID_TWO_SIDED.value){
			return ID_TWO_SIDED;
		}
		else if(retval == ID_END_BUILTIN_IDS.value){
			return ID_END_BUILTIN_IDS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class KeywordIDHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
