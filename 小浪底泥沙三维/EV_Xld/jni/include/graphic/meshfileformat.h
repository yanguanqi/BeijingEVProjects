#ifndef __MeshFileFormat_H__
#define __MeshFileFormat_H__
#include <core/global.h>
#include "graphic/graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {


            /**** Definition of the EV_World .mesh file format

                .mesh files are binary files (for read efficiency at runtime) and are arranged into chunks
                of data, very like 3D Studio's format.
                A chunk always consists of:
                    ev_uint16 CHUNK_ID        : one of the following chunk ids identifying the chunk
                    ev_uint32  LENGTH          : length of the chunk in bytes, including this header
                    void*          DATA            : the data, which may contain other sub-chunks (various data types)

                A .mesh file can contain both the definition of the CMesh itself, and optionally the definitions
                of the materials is uses (although these can be omitted, if so the CMesh assumes that at runtime the
                Materials referred to by name in the CMesh are loaded/created from another source)

                A .mesh file only contains a single mesh, which can itself have multiple submeshes.

            ****/
            enum MeshChunkID
            {
                M_HEADER                        = 4096,			///0x1000,

                M_MESH                          = 12288,			///0x3000,

                M_SUBMESH                       = 16384,			///0x4000,

                M_SUBMESH_OPERATION             = 16400,			///0x4010,

                M_SUBMESH_BONE_ASSIGNMENT       = 16640,			///0x4100,

                M_SUBMESH_TEXTURE_ALIAS         = 16896,			///0x4200,
                M_GEOMETRY                      = 20480,			///0x5000,
                M_GEOMETRY_VERTEX_DECLARATION   = 20736,			///0x5100,

                M_GEOMETRY_VERTEX_ELEMENT       = 20752,			///0x5110,
                M_GEOMETRY_VERTEX_BUFFER        = 20992,			///0x5200,

                M_GEOMETRY_VERTEX_BUFFER_DATA   = 21008,			///0x5210,

                M_MESH_SKELETON_LINK            = 24576,			///0x6000,

                M_MESH_BONE_ASSIGNMENT          = 28672,			///0x7000,

                M_MESH_LOD                      = 32768,			///0x8000,

                M_MESH_LOD_USAGE                = 33024,			///0x8100,

                M_MESH_LOD_MANUAL               = 33040,			///0x8110,

                M_MESH_LOD_GENERATED            = 33056,			///0x8120,

                M_MESH_BOUNDS                   = 36864,			///0x9000,

                M_SUBMESH_NAME_TABLE            = 40960,			///0xA000,

                M_SUBMESH_NAME_TABLE_ELEMENT    = 41216,			///0xA100,

                M_EDGE_LISTS                    = 45056,			///0xB000,

                M_EDGE_LIST_LOD                 = 45312,			///0xB100,

                M_EDGE_GROUP                    = 45328,			///0xB110,

                M_POSES                         = 49152,			///0xC000,

                M_POSE                          = 49408,			///0xC100,

                M_POSE_VERTEX                   = 49425,			///0xC111,

                M_ANIMATIONS                    = 53248,			///0xD000,

                M_ANIMATION                     = 53504,			///0xD100,

                M_ANIMATION_TRACK               = 53520,			///0xD110,
                M_ANIMATION_BASEINFO		   = 53525, 			///0xD105,;

                M_ANIMATION_MORPH_KEYFRAME      = 53521,			///0xD111,

                M_ANIMATION_POSE_KEYFRAME       = 53522,			///0xD112,

                M_ANIMATION_POSE_REF            = 53523,			///0xD113,
                M_TABLE_EXTREMES                = 57344,			///0xE000,

                M_GEOMETRY_NORMALS              = 20736,			///0x5100,
                M_GEOMETRY_COLOURS              = 20992,			///0x5200,
                M_GEOMETRY_TEXCOORDS            = 21248 			///0x5300

            };

        }
    }
}


#endif

