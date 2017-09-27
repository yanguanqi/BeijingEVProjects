#ifndef __SkeletonSerializer_H__
#define __SkeletonSerializer_H__
#pragma once
#include "graphic/graphic_config.h"
#include "serializer.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CSkeleton;
            class LinkedSkeletonAnimationSource;

            //// Skeleton compatibility versions
            enum SkeletonVersion
            {
                //// OGRE version v1.0+
                SKELETON_VERSION_1_0,
                //// OGRE version v1.8+
                SKELETON_VERSION_1_8,
                //// Latest version available
                SKELETON_VERSION_LATEST = 100,
				////X,3DS,DAE special version
				SKELETON_VERSION_X_SPECIAL = 101
            };
            class EV_GRAPHIC_DLL CSkeletonSerializer : public EarthView::World::Graphic::CSerializer
            {
            ev_private:
                CSkeletonSerializer(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                CSkeletonSerializer();
                virtual ~CSkeletonSerializer();

                /**** Exports a skeleton to the file specified.
                @remarks
                    This method takes an externally created EarthView::World::Graphic::CSkeleton object, and exports both it
                    and animations it uses to a .skeleton file.
                @param pSkeleton Weak reference to the EarthView::World::Graphic::CSkeleton to export
                @param filename The destination filename
                @param endianMode The endian mode to write in
                ****/
                ////zxt updatefor v1.8
                void exportSkeleton(const EarthView::World::Graphic::CSkeleton *pSkeleton, const EVString &filename);
                void exportSkeleton(const EarthView::World::Graphic::CSkeleton *pSkeleton, const EVString &filename, EarthView::World::Graphic::SkeletonVersion ver);
                void exportSkeleton(const EarthView::World::Graphic::CSkeleton *pSkeleton, const EVString &filename, EarthView::World::Graphic::SkeletonVersion ver, EarthView::World::Graphic::CSerializer::Endian endianMode);

                /**** Exports a skeleton to the stream specified.
                @remarks
                    This method takes an externally created Skeleton object, and exports both it
                    and animations it uses to a .skeleton file.
                @param pSkeleton Weak reference to the Skeleton to export
                @param stream The destination stream
                @param endianMode The endian mode to write in
                ****/
                void exportSkeleton(const EarthView::World::Graphic::CSkeleton *pSkeleton, EarthView::World::Core::DataStreamPtr stream);
                void exportSkeleton(const EarthView::World::Graphic::CSkeleton *pSkeleton, EarthView::World::Core::DataStreamPtr stream, EarthView::World::Graphic::SkeletonVersion ver);
                void exportSkeleton(const EarthView::World::Graphic::CSkeleton *pSkeleton, EarthView::World::Core::DataStreamPtr stream, EarthView::World::Graphic::SkeletonVersion ver, EarthView::World::Graphic::CSerializer::Endian endianMode);


                /**** Imports EarthView::World::Graphic::CSkeleton and animation data from a .skeleton file CDataStream.
                @remarks
                    This method imports data from a CDataStream opened from a .skeleton file and places it's
                    contents into the EarthView::World::Graphic::CSkeleton object which is passed in.
                @param stream The CDataStream holding the .skeleton data. Must be initialised (pos at the start of the buffer).
                @param pDest Weak reference to the EarthView::World::Graphic::CSkeleton object which will receive the data. Should be blank already.
                ****/
                void importSkeleton(_in EarthView::World::Core::DataStreamPtr &stream,  EarthView::World::Graphic::CSkeleton *pDest);
               
			ev_internal:
				void readFileHeader(_in EarthView::World::Core::DataStreamPtr &stream);
            protected:
                ////zxt updatefor v1.8
                void setWorkingVersion(EarthView::World::Graphic::SkeletonVersion ver);
                //// Internal export methods
                void writeSkeleton(const EarthView::World::Graphic::CSkeleton *pSkel, EarthView::World::Graphic::SkeletonVersion ver);


                void writeBone( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CBone *pBone);
                void writeBoneParent( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in ev_uint16 boneId, _in ev_uint16 parentId);
                void writeAnimation( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CAnimation *anim, EarthView::World::Graphic::SkeletonVersion ver);
                void writeAnimationTrack( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CNodeAnimationTrack *track);
                void writeKeyFrame( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CTransformKeyFrame *key);
                void writeSkeletonAnimationLink( _in const EarthView::World::Graphic::CSkeleton *pSkel,
                                                 _in const LinkedSkeletonAnimationSource &link);                
                
                void readBone(EarthView::World::Core::DataStreamPtr &stream, EarthView::World::Graphic::CSkeleton *pSkel);

                void readBoneParent(_in EarthView::World::Core::DataStreamPtr &stream,  EarthView::World::Graphic::CSkeleton *pSkel);
                void readAnimation(_in EarthView::World::Core::DataStreamPtr &stream,  EarthView::World::Graphic::CSkeleton *pSkel);
                void readAnimationTrack(_in EarthView::World::Core::DataStreamPtr &stream,  CAnimation *anim, EarthView::World::Graphic::CSkeleton *pSkel);
                void readKeyFrame(_in EarthView::World::Core::DataStreamPtr &stream,  CNodeAnimationTrack *track,  EarthView::World::Graphic::CSkeleton *pSkel);
                void readSkeletonAnimationLink(_in EarthView::World::Core::DataStreamPtr &stream,  EarthView::World::Graphic::CSkeleton *pSkel);
                ev_size_t calcBoneSize( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CBone *pBone);
                ev_size_t calcBoneSizeWithoutScale( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CBone *pBone);
                ev_size_t calcBoneParentSize( _in const EarthView::World::Graphic::CSkeleton *pSkel);
                ev_size_t calcAnimationSize( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CAnimation *pAnim);
                ev_size_t calcAnimationTrackSize( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CNodeAnimationTrack *pTrack);
                ev_size_t calcKeyFrameSize( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CTransformKeyFrame *pKey);
                ev_size_t calcKeyFrameSizeWithoutScale( _in const EarthView::World::Graphic::CSkeleton *pSkel, _in const CTransformKeyFrame *pKey);
                ev_size_t calcSkeletonAnimationLinkSize( _in const EarthView::World::Graphic::CSkeleton *pSkel,
                        _in const LinkedSkeletonAnimationSource &link);


            };
        }
    }
}


#endif

