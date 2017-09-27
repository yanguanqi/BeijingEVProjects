#pragma once
#ifndef __SkeletonInstance_H__
#define __SkeletonInstance_H__
#include "graphic/graphic_config.h"
#include <mathengine/quaternion.h>
#include <mathengine/vector3.h>
#include "skeleton.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CQuaternion;	
			}
		}

	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CTagPoint;
            class CBone;
            
			/// <summary>
			/// 骨骼实例类
			/// 作为骨骼类EarthView::World::Graphic::CSkeleton的实例
			/// CSkeletonInstance与CSkeleton的关系好比CEntity与CMesh的关系
			/// </summary>
            class EV_GRAPHIC_DLL CSkeletonInstance : public EarthView::World::Graphic::CSkeleton
            {
            ev_private:
                CSkeletonInstance(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /***** Constructor, don't call directly, this will be created automatically
                when you create an CEntity based on a skeletally animated CMesh.
                ****/
                CSkeletonInstance(_in const EarthView::World::Graphic::CSkeletonPtr &masterCopy);
                ~CSkeletonInstance();
                
				/// <summary>
				/// 获得此骨骼上的动画的数量				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                ev_uint16 getNumAnimations() const;

				/// <summary>
				/// 获得动画			
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Graphic::CAnimation *getAnimation(_in ev_uint16 index) const;
				EarthView::World::Graphic::CAnimation *getAnimation(_in const EVString &name,
					_in const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker) const;
				EarthView::World::Graphic::CAnimation *getAnimation(_in const EVString &name) const;

                //// Internal accessor for animations (returns null if animation does not exist)
                EarthView::World::Graphic::CAnimation *_getAnimationImpl(_in const EVString &name,
                                              _in const EarthView::World::Graphic::LinkedSkeletonAnimationSource **linker) const;
                EarthView::World::Graphic::CAnimation *_getAnimationImpl(_in const EVString &name) const;
                
				/// <summary>
				/// 创建动画				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Graphic::CAnimation *createAnimation(_in const EVString &name, Real length);                
                
				/// <summary>
				/// 移除动画				
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                void removeAnimation(_in const EVString &name);

				/// <summary>
				/// 在骨头上创建挂接点(用于挂接可移动对象)
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                EarthView::World::Graphic::CTagPoint *createTagPointOnBone( EarthView::World::Graphic::CBone *bone,
                                                 _in const EarthView::World::Spatial::Math::CQuaternion &offsetOrientation,
                                                 _in const EarthView::World::Spatial::Math::CVector3 &offsetPosition);
                EarthView::World::Graphic::CTagPoint *createTagPointOnBone( EarthView::World::Graphic::CBone *bone,
                                                 _in const EarthView::World::Spatial::Math::CQuaternion &offsetOrientation );
                EarthView::World::Graphic::CTagPoint *createTagPointOnBone( EarthView::World::Graphic::CBone *bone);
                
				/// <summary>
				/// 释放挂接点
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                void freeTagPoint( EarthView::World::Graphic::CTagPoint *tagPoint);

                //// @copydoc CSkeleton::addLinkedSkeletonAnimationSource
                void addLinkedSkeletonAnimationSource(_in const EVString &skelName,
                                                      _in Real scale);
                void addLinkedSkeletonAnimationSource(_in const EVString &skelName);
                //// @copydoc CSkeleton::removeAllLinkedSkeletonAnimationSources
                void removeAllLinkedSkeletonAnimationSources();
                //// @copydoc CSkeleton::getLinkedSkeletonAnimationSourceIterator
                EarthView::World::Graphic::CSkeleton::LinkedSkeletonAnimSourceIterator
                getLinkedSkeletonAnimationSourceIterator() const;
                
				/// <summary>
				/// 初始化动画状态集
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                void _initAnimationState( EarthView::World::Graphic::CAnimationStateSet *animSet);
				/// <summary>
				/// 更新动画状态集
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
                void _refreshAnimationState( EarthView::World::Graphic::CAnimationStateSet *animSet);

                //// @copydoc CResource::getName
                EVString getName() const;
                //// @copydoc CResource::getHandle
                ResourceHandle getHandle() const;
                //// @copydoc CResource::getGroup
                EVString getGroup();

				/// <summary>
				/// 更新挂接点姿态
				/// </summary>
				/// <param name=""></param>				
				/// <returns></returns>
				ev_void updateTagPoints();

			ev_private:
				EarthView::World::Graphic::CTagPoint* createTagPoint();

            protected:
                //// Pointer back to master EarthView::World::Graphic::CSkeleton
                EarthView::World::Graphic::CSkeletonPtr mSkeleton;
                typedef list<EarthView::World::Graphic::CTagPoint *> TagPointList;
                /***** Active tag point list.
                @remarks
                    This is a linked list of pointers to active tag points
                @par
                    This allows very fast insertions and deletions from anywhere in the list to activate / deactivate
                    tag points (required for weapon / equip systems etc) as well as reuse of EarthView::World::Graphic::CTagPoint instances
                    without construction & destruction which avoids memory thrashing.
                ****/
                TagPointList mActiveTagPoints;
                /***** Free tag point list.
                @remarks
                    This contains a list of the tag points free for use as new instances
                    as required by the set. When a EarthView::World::Graphic::CTagPoint instance is deactivated, there will be a reference on this
                    list. As they get used this list reduces, as they get released back to to the set they get added
                    back to the list.
                ****/
                TagPointList mFreeTagPoints;
                //// EarthView::World::Graphic::CTagPoint automatic handles
                ev_uint16 mNextTagPointAutoHandle;
                void cloneBoneAndChildren(_in EarthView::World::Graphic::CBone *source,  EarthView::World::Graphic::CBone *parent);
            ev_internal:
                /***** Overridden from EarthView::World::Graphic::CSkeleton
                ****/
                void loadImpl();
                /***** Overridden from EarthView::World::Graphic::CSkeleton
                ****/
                void unloadImpl();
            };
        }
    }
}


#endif

