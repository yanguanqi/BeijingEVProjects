/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/meshfileformat.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_MeshChunkIDHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					M_HEADER,
					M_MESH,
					M_SUBMESH,
					M_SUBMESH_OPERATION,
					M_SUBMESH_BONE_ASSIGNMENT,
					M_SUBMESH_TEXTURE_ALIAS,
					M_GEOMETRY,
					M_GEOMETRY_VERTEX_DECLARATION,
					M_GEOMETRY_VERTEX_ELEMENT,
					M_GEOMETRY_VERTEX_BUFFER,
					M_GEOMETRY_VERTEX_BUFFER_DATA,
					M_MESH_SKELETON_LINK,
					M_MESH_BONE_ASSIGNMENT,
					M_MESH_LOD,
					M_MESH_LOD_USAGE,
					M_MESH_LOD_MANUAL,
					M_MESH_LOD_GENERATED,
					M_MESH_BOUNDS,
					M_SUBMESH_NAME_TABLE,
					M_SUBMESH_NAME_TABLE_ELEMENT,
					M_EDGE_LISTS,
					M_EDGE_LIST_LOD,
					M_EDGE_GROUP,
					M_POSES,
					M_POSE,
					M_POSE_VERTEX,
					M_ANIMATIONS,
					M_ANIMATION,
					M_ANIMATION_TRACK,
					M_ANIMATION_BASEINFO,
					M_ANIMATION_MORPH_KEYFRAME,
					M_ANIMATION_POSE_KEYFRAME,
					M_ANIMATION_POSE_REF,
					M_TABLE_EXTREMES,
					M_GEOMETRY_NORMALS,
					M_GEOMETRY_COLOURS,
					M_GEOMETRY_TEXCOORDS
				};
				jintArray array = __env->NewIntArray(37);
				__env->SetIntArrayRegion(array, 0, 37, enum_values);
				return array;
			}
		}
	}
}
