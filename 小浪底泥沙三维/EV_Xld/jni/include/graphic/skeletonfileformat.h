#ifndef __SkeletonFileFormat_H__
#define __SkeletonFileFormat_H__
#pragma once
#include "graphic/graphic_config.h"
#include "prerequisites.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /****

                .skeleton files are binary files (for read efficiency at runtime) and are arranged into chunks
                of data, very like 3D Studio's format.
                A chunk always consists of:
                    ev_uint16 CHUNK_ID        : one of the following chunk ids identifying the chunk
                    ev_uint32  LENGTH          : length of the chunk in bytes, including this header
                    void*          DATA            : the data, which may contain other sub-chunks (various data types)

                A .skeleton file contains both the definition of the CSkeleton object and the animations it contains. It
                contains only a single skeleton but can contain multiple animations.


            ****/
            enum SkeletonChunkID
            {
                SKELETON_HEADER            = 4096,			///0x1000,
                ///zxt updatefor v1.8
                SKELETON_BLENDMODE		   = 4112, 			/// optional
                /// ev_char* version           : Version number check
                SKELETON_BONE              = 8192,			///0x2000,
                /// Repeating section defining each bone in the system.
                /// Bones are assigned indexes automatically based on their order of declaration
                /// starting with 0.
                /// ev_char* name                       : name of the bone
                /// ev_uint16 handle            : handle of the bone, should be contiguous & start at 0
                /// EarthView::World::Spatial::Math::CVector3 position                 : position of this bone relative to parent
                /// EarthView::World::Spatial::Math::CQuaternion orientation           : orientation of this bone relative to parent
                /// EarthView::World::Spatial::Math::CVector3 scale                    : scale of this bone relative to parent
                SKELETON_BONE_PARENT       = 12288,			///0x3000,
                /// Record of the parent of a single bone, used to build the node tree
                /// Repeating section, listed in CBone Index order, one per CBone
                /// ev_uint16 handle             : child bone
                /// ev_uint16 parentHandle   : parent bone
                SKELETON_ANIMATION         = 16384,			///0x4000,

                SKELETON_ANIMATION_BASEINFO = 16400,
                /// [Optional] base keyframe information
                /// char* baseAnimationName (blank for self)
                /// float baseKeyFrameTime

                /// A single animation for this skeleton
                /// ev_char* name                       : Name of the animation
                /// ev_real32 length                      : Length of the animation in seconds
                SKELETON_ANIMATION_TRACK = 16640,			///0x4100,
                /// A single animation track (relates to a single bone)
                /// Repeating section (within SKELETON_ANIMATION)

                /// ev_uint16 boneIndex     : Index of bone to apply to
                SKELETON_ANIMATION_TRACK_KEYFRAME = 16656,			///0x4110,
                /// A single keyframe within the track
                /// Repeating section
                /// ev_real32 time                    : The time position (seconds)
                /// EarthView::World::Spatial::Math::CQuaternion rotate            : Rotation to apply at this keyframe
                /// EarthView::World::Spatial::Math::CVector3 translate            : Translation to apply at this keyframe
                /// EarthView::World::Spatial::Math::CVector3 scale                : Scale to apply at this keyframe
                SKELETON_ANIMATION_LINK         = 20480			///0x5000
                /// Link to another skeleton, to re-use its animations
                /// ev_char* skeletonName					: name of skeleton to get animations from
                /// ev_real32 scale							: scale to apply to trans/scale keys
				
            };
        }
    }
}


#endif

