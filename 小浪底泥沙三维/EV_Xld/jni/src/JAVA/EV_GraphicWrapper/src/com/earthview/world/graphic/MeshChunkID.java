package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum MeshChunkID implements INativeEnum<MeshChunkID> {
	M_HEADER(MeshChunkIDHelper.ENUM_VALUES[0]),
	M_MESH(MeshChunkIDHelper.ENUM_VALUES[1]),
	M_SUBMESH(MeshChunkIDHelper.ENUM_VALUES[2]),
	M_SUBMESH_OPERATION(MeshChunkIDHelper.ENUM_VALUES[3]),
	M_SUBMESH_BONE_ASSIGNMENT(MeshChunkIDHelper.ENUM_VALUES[4]),
	M_SUBMESH_TEXTURE_ALIAS(MeshChunkIDHelper.ENUM_VALUES[5]),
	M_GEOMETRY(MeshChunkIDHelper.ENUM_VALUES[6]),
	M_GEOMETRY_VERTEX_DECLARATION(MeshChunkIDHelper.ENUM_VALUES[7]),
	M_GEOMETRY_VERTEX_ELEMENT(MeshChunkIDHelper.ENUM_VALUES[8]),
	M_GEOMETRY_VERTEX_BUFFER(MeshChunkIDHelper.ENUM_VALUES[9]),
	M_GEOMETRY_VERTEX_BUFFER_DATA(MeshChunkIDHelper.ENUM_VALUES[10]),
	M_MESH_SKELETON_LINK(MeshChunkIDHelper.ENUM_VALUES[11]),
	M_MESH_BONE_ASSIGNMENT(MeshChunkIDHelper.ENUM_VALUES[12]),
	M_MESH_LOD(MeshChunkIDHelper.ENUM_VALUES[13]),
	M_MESH_LOD_USAGE(MeshChunkIDHelper.ENUM_VALUES[14]),
	M_MESH_LOD_MANUAL(MeshChunkIDHelper.ENUM_VALUES[15]),
	M_MESH_LOD_GENERATED(MeshChunkIDHelper.ENUM_VALUES[16]),
	M_MESH_BOUNDS(MeshChunkIDHelper.ENUM_VALUES[17]),
	M_SUBMESH_NAME_TABLE(MeshChunkIDHelper.ENUM_VALUES[18]),
	M_SUBMESH_NAME_TABLE_ELEMENT(MeshChunkIDHelper.ENUM_VALUES[19]),
	M_EDGE_LISTS(MeshChunkIDHelper.ENUM_VALUES[20]),
	M_EDGE_LIST_LOD(MeshChunkIDHelper.ENUM_VALUES[21]),
	M_EDGE_GROUP(MeshChunkIDHelper.ENUM_VALUES[22]),
	M_POSES(MeshChunkIDHelper.ENUM_VALUES[23]),
	M_POSE(MeshChunkIDHelper.ENUM_VALUES[24]),
	M_POSE_VERTEX(MeshChunkIDHelper.ENUM_VALUES[25]),
	M_ANIMATIONS(MeshChunkIDHelper.ENUM_VALUES[26]),
	M_ANIMATION(MeshChunkIDHelper.ENUM_VALUES[27]),
	M_ANIMATION_TRACK(MeshChunkIDHelper.ENUM_VALUES[28]),
	M_ANIMATION_BASEINFO(MeshChunkIDHelper.ENUM_VALUES[29]),
	M_ANIMATION_MORPH_KEYFRAME(MeshChunkIDHelper.ENUM_VALUES[30]),
	M_ANIMATION_POSE_KEYFRAME(MeshChunkIDHelper.ENUM_VALUES[31]),
	M_ANIMATION_POSE_REF(MeshChunkIDHelper.ENUM_VALUES[32]),
	M_TABLE_EXTREMES(MeshChunkIDHelper.ENUM_VALUES[33]),
	M_GEOMETRY_NORMALS(MeshChunkIDHelper.ENUM_VALUES[34]),
	M_GEOMETRY_COLOURS(MeshChunkIDHelper.ENUM_VALUES[35]),
	M_GEOMETRY_TEXCOORDS(MeshChunkIDHelper.ENUM_VALUES[36]);
	private int value;
	MeshChunkID(int i) {
		this.value = i;
	}
	public MeshChunkID getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final MeshChunkID toEnum(int retval) {
		if(retval == M_HEADER.value){
			return M_HEADER;
		}
		else if(retval == M_MESH.value){
			return M_MESH;
		}
		else if(retval == M_SUBMESH.value){
			return M_SUBMESH;
		}
		else if(retval == M_SUBMESH_OPERATION.value){
			return M_SUBMESH_OPERATION;
		}
		else if(retval == M_SUBMESH_BONE_ASSIGNMENT.value){
			return M_SUBMESH_BONE_ASSIGNMENT;
		}
		else if(retval == M_SUBMESH_TEXTURE_ALIAS.value){
			return M_SUBMESH_TEXTURE_ALIAS;
		}
		else if(retval == M_GEOMETRY.value){
			return M_GEOMETRY;
		}
		else if(retval == M_GEOMETRY_VERTEX_DECLARATION.value){
			return M_GEOMETRY_VERTEX_DECLARATION;
		}
		else if(retval == M_GEOMETRY_VERTEX_ELEMENT.value){
			return M_GEOMETRY_VERTEX_ELEMENT;
		}
		else if(retval == M_GEOMETRY_VERTEX_BUFFER.value){
			return M_GEOMETRY_VERTEX_BUFFER;
		}
		else if(retval == M_GEOMETRY_VERTEX_BUFFER_DATA.value){
			return M_GEOMETRY_VERTEX_BUFFER_DATA;
		}
		else if(retval == M_MESH_SKELETON_LINK.value){
			return M_MESH_SKELETON_LINK;
		}
		else if(retval == M_MESH_BONE_ASSIGNMENT.value){
			return M_MESH_BONE_ASSIGNMENT;
		}
		else if(retval == M_MESH_LOD.value){
			return M_MESH_LOD;
		}
		else if(retval == M_MESH_LOD_USAGE.value){
			return M_MESH_LOD_USAGE;
		}
		else if(retval == M_MESH_LOD_MANUAL.value){
			return M_MESH_LOD_MANUAL;
		}
		else if(retval == M_MESH_LOD_GENERATED.value){
			return M_MESH_LOD_GENERATED;
		}
		else if(retval == M_MESH_BOUNDS.value){
			return M_MESH_BOUNDS;
		}
		else if(retval == M_SUBMESH_NAME_TABLE.value){
			return M_SUBMESH_NAME_TABLE;
		}
		else if(retval == M_SUBMESH_NAME_TABLE_ELEMENT.value){
			return M_SUBMESH_NAME_TABLE_ELEMENT;
		}
		else if(retval == M_EDGE_LISTS.value){
			return M_EDGE_LISTS;
		}
		else if(retval == M_EDGE_LIST_LOD.value){
			return M_EDGE_LIST_LOD;
		}
		else if(retval == M_EDGE_GROUP.value){
			return M_EDGE_GROUP;
		}
		else if(retval == M_POSES.value){
			return M_POSES;
		}
		else if(retval == M_POSE.value){
			return M_POSE;
		}
		else if(retval == M_POSE_VERTEX.value){
			return M_POSE_VERTEX;
		}
		else if(retval == M_ANIMATIONS.value){
			return M_ANIMATIONS;
		}
		else if(retval == M_ANIMATION.value){
			return M_ANIMATION;
		}
		else if(retval == M_ANIMATION_TRACK.value){
			return M_ANIMATION_TRACK;
		}
		else if(retval == M_ANIMATION_BASEINFO.value){
			return M_ANIMATION_BASEINFO;
		}
		else if(retval == M_ANIMATION_MORPH_KEYFRAME.value){
			return M_ANIMATION_MORPH_KEYFRAME;
		}
		else if(retval == M_ANIMATION_POSE_KEYFRAME.value){
			return M_ANIMATION_POSE_KEYFRAME;
		}
		else if(retval == M_ANIMATION_POSE_REF.value){
			return M_ANIMATION_POSE_REF;
		}
		else if(retval == M_TABLE_EXTREMES.value){
			return M_TABLE_EXTREMES;
		}
		else if(retval == M_GEOMETRY_NORMALS.value){
			return M_GEOMETRY_NORMALS;
		}
		else if(retval == M_GEOMETRY_COLOURS.value){
			return M_GEOMETRY_COLOURS;
		}
		else if(retval == M_GEOMETRY_TEXCOORDS.value){
			return M_GEOMETRY_TEXCOORDS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class MeshChunkIDHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
