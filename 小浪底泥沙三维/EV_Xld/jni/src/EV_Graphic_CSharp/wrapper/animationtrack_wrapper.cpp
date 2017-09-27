/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/animationtrack.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTimeIndex_hasKeyIndex_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTimeIndex* ptrNativeObject = (EarthView::World::Graphic::CTimeIndex*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasKeyIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTimeIndex_getTimePos_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTimeIndex* ptrNativeObject = (EarthView::World::Graphic::CTimeIndex*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTimePos();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTimeIndex_getKeyIndex_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTimeIndex* ptrNativeObject = (EarthView::World::Graphic::CTimeIndex*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getKeyIndex();
				return objXXXX;
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback)(_in ev_uint16 index);
			typedef Real  ( _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex);
			typedef Real  ( _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback)(_in Real timePos);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback)(_in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback)(_in const void* timeIndex, _in Real weight, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback)(_in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback)(_in const void* timeIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback)(_inout void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback)(_in const void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CKeyFrame* base);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback)(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback)(_in Real time);
			typedef void  ( _stdcall EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback)(_out EarthView::World::Graphic::CAnimationTrack* clone);
			class CAnimationTrackProxy : public EarthView::World::Graphic::CAnimationTrack
			{
			private:
				EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback* m_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback;
				EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback;
				EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* m_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback;
				EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback* m_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback;
				EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* m_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback;
				EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback;
				EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback* m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback;
				EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback* m_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback;
				EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* m_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback;
				EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback* m_EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback;
				EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* m_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback;
				EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback* m_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback;
				EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback* m_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback;
			public:
				CAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationTrack(pList)
				{
					m_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16(EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real(EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16(EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void(EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real(EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real(EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex(EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void(EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool(EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_optimise_void(EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener(EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack(EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback = pCallback;
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CAnimationTrack::getNumKeyFrames();
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CAnimationTrack::getKeyFrame(index);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex) const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback(&timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
						return returnValue;
					}
					else
						return this->CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback(&timeIndex, keyFrame1, keyFrame2);
						return returnValue;
					}
					else
						return this->CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CAnimationTrack::createKeyFrame(timePos);
				}
				virtual void removeKeyFrame(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback(index);
					}
					else
						return this->CAnimationTrack::removeKeyFrame(index);
				}
				virtual void removeAllKeyFrames()
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback();
					}
					else
						return this->CAnimationTrack::removeAllKeyFrames();
				}
				virtual void getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback(&timeIndex, kf);
					}
					else
						return this->CAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback(&timeIndex, weight, scale);
					}
					else
						return this->CAnimationTrack::apply(timeIndex, weight, scale);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback(&timeIndex, weight);
					}
					else
						return this->CAnimationTrack::apply(timeIndex, weight);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback(&timeIndex);
					}
					else
						return this->CAnimationTrack::apply(timeIndex);
				}
				virtual void _keyFrameDataChanged() const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback();
					}
					else
						return this->CAnimationTrack::_keyFrameDataChanged();
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CAnimationTrack::hasNonZeroKeyFrames();
				}
				virtual void optimise()
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback();
					}
					else
						return this->CAnimationTrack::optimise();
				}
				virtual void _collectKeyFrameTimes(_inout EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
				}
				virtual void _buildKeyFrameIndexMap(_in const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
				}
				virtual void _applyBaseKeyFrame(_in const EarthView::World::Graphic::CKeyFrame* base)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback(base);
					}
					else
						return this->CAnimationTrack::_applyBaseKeyFrame(base);
				}
				virtual void setListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback(ref_l);
					}
					else
						return this->CAnimationTrack::setListener(ref_l);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(_in Real time)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback(time);
						return returnValue;
					}
					else
						return this->CAnimationTrack::createKeyFrameImpl(time);
				}
				virtual void populateClone(_out EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback(clone);
					}
					else
						return this->CAnimationTrack::populateClone(clone);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationTrackProxy);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CAnimationTrack* t, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			class CAnimationTrackListenerProxy : public EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener
			{
			private:
				EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* m_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback;
			public:
				CAnimationTrackListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationTrackListener(pList)
				{
					m_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				virtual ev_bool getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CAnimationTrack* t, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf)
				{
					if(m_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback(t, &timeIndex, kf);
						return returnValue;
					}
					else
						return this->CAnimationTrackListener::getInterpolatedKeyFrame(t, timeIndex, kf);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationTrackListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(void *pObjectXXXX, _in const EarthView::World::Graphic::CAnimationTrack* t, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackListenerProxy*>((EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener::getInterpolatedKeyFrame(t, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getInterpolatedKeyFrame(t, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CAnimationTrackListenerProxy* ptr = dynamic_cast<CAnimationTrackListenerProxy*>((EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationTrack_CAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CAnimationTrack* t, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener::getInterpolatedKeyFrame(t, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimationTrack_getHandle_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getHandle();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getNumKeyFrames();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumKeyFrames();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CAnimationTrack_getNumKeyFrames_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getNumKeyFrames();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getKeyFrame(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->getKeyFrame(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getKeyFrame(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(void *pObjectXXXX, _in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getKeyFramesAtTime(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(void *pObjectXXXX, _in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2 )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, keyFrame1, keyFrame2);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getKeyFramesAtTime(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, keyFrame1, keyFrame2);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2 )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, keyFrame1, keyFrame2);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::createKeyFrame(timePos);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->createKeyFrame(timePos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CAnimationTrack_createKeyFrame_CKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::createKeyFrame(timePos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::removeKeyFrame(index);
				else
					ptrNativeObject->removeKeyFrame(index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_removeKeyFrame_void_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::removeKeyFrame(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::removeAllKeyFrames();
				else
					ptrNativeObject->removeAllKeyFrames();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_removeAllKeyFrames_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::removeAllKeyFrames();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
				else
					ptrNativeObject->getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_apply_void_CTimeIndex_NoVirtual(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_keyFrameDataChanged();
				else
					ptrNativeObject->_keyFrameDataChanged();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__keyFrameDataChanged_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_keyFrameDataChanged();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::hasNonZeroKeyFrames();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasNonZeroKeyFrames();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::hasNonZeroKeyFrames();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_optimise_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::optimise();
				else
					ptrNativeObject->optimise();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_optimise_void( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_optimise_void_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_optimise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_optimise_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::optimise();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_push_back_void_Real(void *pObjectXXXX, _in Real& t )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_front_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_back_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_insert_void_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 pos, _in Real& t )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& objYYYY = *(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				Real& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_at_Real_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_KeyFrameTimes_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(void *pObjectXXXX, _inout void* keyFrameTimes )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_collectKeyFrameTimes(*(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*)keyFrameTimes);
				else
					ptrNativeObject->_collectKeyFrameTimes(*(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*)keyFrameTimes);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_NoVirtual(void *pObjectXXXX, _inout void* keyFrameTimes )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_collectKeyFrameTimes(*(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*)keyFrameTimes);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(void *pObjectXXXX, _in const void* keyFrameTimes )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_buildKeyFrameIndexMap(*(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*)keyFrameTimes);
				else
					ptrNativeObject->_buildKeyFrameIndexMap(*(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*)keyFrameTimes);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_NoVirtual(void *pObjectXXXX, _in const void* keyFrameTimes )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_buildKeyFrameIndexMap(*(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*)keyFrameTimes);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_applyBaseKeyFrame(base);
				else
					ptrNativeObject->_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::setListener(ref_l);
				else
					ptrNativeObject->setListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_setListener_void_CAnimationTrackListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::setListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CAnimationTrack_getParent_CAnimation(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getParent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::createKeyFrameImpl(time);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->createKeyFrameImpl(time);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::createKeyFrameImpl(time);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack(void *pObjectXXXX, _out EarthView::World::Graphic::CAnimationTrack* clone )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::populateClone(clone);
				else
					ptrNativeObject->populateClone(clone);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback )
			{
				CAnimationTrackProxy* ptr = dynamic_cast<CAnimationTrackProxy*>((EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationTrack_populateClone_void_CAnimationTrack_NoVirtual(void *pObjectXXXX, _out EarthView::World::Graphic::CAnimationTrack* clone )
			{
				const EarthView::World::Graphic::CAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CAnimationTrack::populateClone(clone);
			}
			typedef EarthView::World::Graphic::CNumericKeyFrame*  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback)(_in Real timePos);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback)(_in const void* val);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback)(_in ev_uint16 index);
			typedef Real  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex);
			typedef Real  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback)(_in Real timePos);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback)(_in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback)(_in const void* timeIndex, _in Real weight, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback)(_in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback)(_in const void* timeIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback)(_inout void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback)(_in const void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CKeyFrame* base);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback)(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback)(_in Real time);
			typedef void  ( _stdcall EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback)(_out EarthView::World::Graphic::CAnimationTrack* clone);
			class CNumericAnimationTrackProxy : public EarthView::World::Graphic::CNumericAnimationTrack
			{
			private:
				EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback* m_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback;
			public:
				CNumericAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CNumericAnimationTrack(pList)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real(EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr(EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr(EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16(EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real(EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16(EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void(EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real(EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real(EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex(EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void(EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool(EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void(EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener(EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack(EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CNumericKeyFrame* createNumericKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNumericKeyFrame* returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::createNumericKeyFrame(timePos);
				}
				virtual void getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback(&timeIndex, kf);
					}
					else
						return this->CNumericAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback(&timeIndex, weight, scale);
					}
					else
						return this->CNumericAnimationTrack::apply(timeIndex, weight, scale);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback(&timeIndex, weight);
					}
					else
						return this->CNumericAnimationTrack::apply(timeIndex, weight);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback(&timeIndex);
					}
					else
						return this->CNumericAnimationTrack::apply(timeIndex);
				}
				virtual const EarthView::World::Graphic::AnimableValuePtr& getAssociatedAnimable() const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::AnimableValuePtr& returnValue = *(EarthView::World::Graphic::AnimableValuePtr*)m_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback();
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::getAssociatedAnimable();
				}
				virtual void setAssociatedAnimable(_in const EarthView::World::Graphic::AnimableValuePtr& val)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback(&val);
					}
					else
						return this->CNumericAnimationTrack::setAssociatedAnimable(val);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(_in Real time)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback(time);
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::createKeyFrameImpl(time);
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::getNumKeyFrames();
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::getKeyFrame(index);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex) const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback(&timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback(&timeIndex, keyFrame1, keyFrame2);
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::createKeyFrame(timePos);
				}
				virtual void removeKeyFrame(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback(index);
					}
					else
						return this->CNumericAnimationTrack::removeKeyFrame(index);
				}
				virtual void removeAllKeyFrames()
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback();
					}
					else
						return this->CNumericAnimationTrack::removeAllKeyFrames();
				}
				virtual void _keyFrameDataChanged() const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback();
					}
					else
						return this->CNumericAnimationTrack::_keyFrameDataChanged();
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CNumericAnimationTrack::hasNonZeroKeyFrames();
				}
				virtual void optimise()
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback();
					}
					else
						return this->CNumericAnimationTrack::optimise();
				}
				virtual void _collectKeyFrameTimes(_inout EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CNumericAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
				}
				virtual void _buildKeyFrameIndexMap(_in const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CNumericAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
				}
				virtual void _applyBaseKeyFrame(_in const EarthView::World::Graphic::CKeyFrame* base)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback(base);
					}
					else
						return this->CNumericAnimationTrack::_applyBaseKeyFrame(base);
				}
				virtual void setListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback(ref_l);
					}
					else
						return this->CNumericAnimationTrack::setListener(ref_l);
				}
				virtual void populateClone(_out EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if(m_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback(clone);
					}
					else
						return this->CNumericAnimationTrack::populateClone(clone);
				}
			};
			REGISTER_FACTORY_CLASS(CNumericAnimationTrackProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericKeyFrame*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNumericKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::createNumericKeyFrame(timePos);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNumericKeyFrame* objXXXX = ptrNativeObject->createNumericKeyFrame(timePos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericKeyFrame*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_createNumericKeyFrame_CNumericKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CNumericKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::createNumericKeyFrame(timePos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
				else
					ptrNativeObject->getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_apply_void_CTimeIndex_NoVirtual(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex_Real_Real(void *pObjectXXXX, _in const void* anim, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->applyToAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)anim, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex_Real(void *pObjectXXXX, _in const void* anim, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->applyToAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)anim, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_applyToAnimable_void_AnimableValuePtr_CTimeIndex(void *pObjectXXXX, _in const void* anim, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->applyToAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)anim, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::AnimableValuePtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::getAssociatedAnimable();
					const EarthView::World::Graphic::AnimableValuePtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::AnimableValuePtr& objXXXX = ptrNativeObject->getAssociatedAnimable();
					const EarthView::World::Graphic::AnimableValuePtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getAssociatedAnimable_AnimableValuePtr_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				const EarthView::World::Graphic::AnimableValuePtr& objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::getAssociatedAnimable();
				const EarthView::World::Graphic::AnimableValuePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr(void *pObjectXXXX, _in const void* val )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::setAssociatedAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)val);
				else
					ptrNativeObject->setAssociatedAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)val);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_setAssociatedAnimable_void_AnimableValuePtr_NoVirtual(void *pObjectXXXX, _in const void* val )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::setAssociatedAnimable(*(EarthView::World::Graphic::AnimableValuePtr*)val);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericKeyFrame*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_getNumericKeyFrame_CNumericKeyFrame_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CNumericKeyFrame* objXXXX = ptrNativeObject->getNumericKeyFrame(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNumericAnimationTrack*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack__clone_CNumericAnimationTrack_CAnimation(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimation* newParent )
			{
				const EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* objXXXX = ptrNativeObject->_clone(newParent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::createKeyFrameImpl(time);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->createKeyFrameImpl(time);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CNumericAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNumericAnimationTrack::createKeyFrameImpl(time);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getNumKeyFrames_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_createKeyFrame_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeKeyFrame_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_removeAllKeyFrames_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__keyFrameDataChanged_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_hasNonZeroKeyFrames_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_optimise_void_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_optimise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_setListener_void_CAnimationTrackListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback )
			{
				CNumericAnimationTrackProxy* ptr = dynamic_cast<CNumericAnimationTrackProxy*>((EarthView::World::Graphic::CNumericAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNumericAnimationTrack_populateClone_void_CAnimationTrack(pCallback);
				}
			}
			typedef EarthView::World::Graphic::CTransformKeyFrame*  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback)(_in Real timePos);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_node);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback)(_in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback)(_in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback)(_in EarthView::World::Graphic::CNode* node, _in const void* timeIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback)(_in ev_bool useShortestPath);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CTransformKeyFrame*  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback)();
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback)(_in ev_uint16 index);
			typedef Real  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex);
			typedef Real  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback)(_in Real timePos);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback)(_in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback)(_in const void* timeIndex, _in Real weight, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback)(_in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback)(_in const void* timeIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback)(_inout void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback)(_in const void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CKeyFrame* base);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback)(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback)(_in Real time);
			typedef void  ( _stdcall EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback)(_out EarthView::World::Graphic::CAnimationTrack* clone);
			class CNodeAnimationTrackProxy : public EarthView::World::Graphic::CNodeAnimationTrack
			{
			private:
				EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback* m_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback;
			public:
				CNodeAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeAnimationTrack(pList)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real(EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode(EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode(EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool(EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool(EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16(EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void(EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16(EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16(EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void(EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real(EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex(EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void(EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void(EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener(EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack(EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CTransformKeyFrame* createNodeKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTransformKeyFrame* returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::createNodeKeyFrame(timePos);
				}
				virtual EarthView::World::Graphic::CNode* getAssociatedNode() const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::getAssociatedNode();
				}
				virtual void setAssociatedNode(_in EarthView::World::Graphic::CNode* ref_node)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback(ref_node);
					}
					else
						return this->CNodeAnimationTrack::setAssociatedNode(ref_node);
				}
				virtual void applyToNode(_in EarthView::World::Graphic::CNode* node, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback(node, &timeIndex, weight, scale);
					}
					else
						return this->CNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
				}
				virtual void applyToNode(_in EarthView::World::Graphic::CNode* node, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback(node, &timeIndex, weight);
					}
					else
						return this->CNodeAnimationTrack::applyToNode(node, timeIndex, weight);
				}
				virtual void applyToNode(_in EarthView::World::Graphic::CNode* node, _in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback(node, &timeIndex);
					}
					else
						return this->CNodeAnimationTrack::applyToNode(node, timeIndex);
				}
				virtual void setUseShortestRotationPath(_in ev_bool useShortestPath)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback(useShortestPath);
					}
					else
						return this->CNodeAnimationTrack::setUseShortestRotationPath(useShortestPath);
				}
				virtual ev_bool getUseShortestRotationPath() const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::getUseShortestRotationPath();
				}
				virtual void getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback(&timeIndex, kf);
					}
					else
						return this->CNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback(&timeIndex, weight, scale);
					}
					else
						return this->CNodeAnimationTrack::apply(timeIndex, weight, scale);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback(&timeIndex, weight);
					}
					else
						return this->CNodeAnimationTrack::apply(timeIndex, weight);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback(&timeIndex);
					}
					else
						return this->CNodeAnimationTrack::apply(timeIndex);
				}
				virtual void _keyFrameDataChanged() const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback();
					}
					else
						return this->CNodeAnimationTrack::_keyFrameDataChanged();
				}
				virtual EarthView::World::Graphic::CTransformKeyFrame* getNodeKeyFrame(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CTransformKeyFrame* returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::getNodeKeyFrame(index);
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::hasNonZeroKeyFrames();
				}
				virtual void optimise()
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback();
					}
					else
						return this->CNodeAnimationTrack::optimise();
				}
				virtual void _applyBaseKeyFrame(_in const EarthView::World::Graphic::CKeyFrame* base)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback(base);
					}
					else
						return this->CNodeAnimationTrack::_applyBaseKeyFrame(base);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(_in Real time)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback(time);
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::createKeyFrameImpl(time);
				}
				virtual void buildInterpolationSplines() const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback();
					}
					else
						return this->CNodeAnimationTrack::buildInterpolationSplines();
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::getNumKeyFrames();
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::getKeyFrame(index);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex) const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback(&timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback(&timeIndex, keyFrame1, keyFrame2);
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CNodeAnimationTrack::createKeyFrame(timePos);
				}
				virtual void removeKeyFrame(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback(index);
					}
					else
						return this->CNodeAnimationTrack::removeKeyFrame(index);
				}
				virtual void removeAllKeyFrames()
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback();
					}
					else
						return this->CNodeAnimationTrack::removeAllKeyFrames();
				}
				virtual void _collectKeyFrameTimes(_inout EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CNodeAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
				}
				virtual void _buildKeyFrameIndexMap(_in const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CNodeAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
				}
				virtual void setListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback(ref_l);
					}
					else
						return this->CNodeAnimationTrack::setListener(ref_l);
				}
				virtual void populateClone(_out EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if(m_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback(clone);
					}
					else
						return this->CNodeAnimationTrack::populateClone(clone);
				}
			};
			REGISTER_FACTORY_CLASS(CNodeAnimationTrackProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTransformKeyFrame*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::createNodeKeyFrame(timePos);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTransformKeyFrame* objXXXX = ptrNativeObject->createNodeKeyFrame(timePos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTransformKeyFrame*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_createNodeKeyFrame_CTransformKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::createNodeKeyFrame(timePos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getAssociatedNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getAssociatedNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getAssociatedNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getAssociatedNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_node )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::setAssociatedNode(ref_node);
				else
					ptrNativeObject->setAssociatedNode(ref_node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_setAssociatedNode_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_node )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::setAssociatedNode(ref_node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
				else
					ptrNativeObject->applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool(void *pObjectXXXX, _in ev_bool useShortestPath )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::setUseShortestRotationPath(useShortestPath);
				else
					ptrNativeObject->setUseShortestRotationPath(useShortestPath);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_setUseShortestRotationPath_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool useShortestPath )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::setUseShortestRotationPath(useShortestPath);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getUseShortestRotationPath();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getUseShortestRotationPath();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getUseShortestRotationPath_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getUseShortestRotationPath();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
				else
					ptrNativeObject->getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_apply_void_CTimeIndex_NoVirtual(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::_keyFrameDataChanged();
				else
					ptrNativeObject->_keyFrameDataChanged();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack__keyFrameDataChanged_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::_keyFrameDataChanged();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTransformKeyFrame*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getNodeKeyFrame(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CTransformKeyFrame* objXXXX = ptrNativeObject->getNodeKeyFrame(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTransformKeyFrame*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_getNodeKeyFrame_CTransformKeyFrame_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::getNodeKeyFrame(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::hasNonZeroKeyFrames();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasNonZeroKeyFrames();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::hasNonZeroKeyFrames();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_optimise_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::optimise();
				else
					ptrNativeObject->optimise();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_optimise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_optimise_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::optimise();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack__clone_CNodeAnimationTrack_CAnimation(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimation* newParent )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* objXXXX = ptrNativeObject->_clone(newParent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::_applyBaseKeyFrame(base);
				else
					ptrNativeObject->_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::createKeyFrameImpl(time);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->createKeyFrameImpl(time);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::createKeyFrameImpl(time);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::buildInterpolationSplines();
				else
					ptrNativeObject->buildInterpolationSplines();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CNodeAnimationTrack_buildInterpolationSplines_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CNodeAnimationTrack::buildInterpolationSplines();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getNumKeyFrames_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeKeyFrame_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_removeAllKeyFrames_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_setListener_void_CAnimationTrackListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback )
			{
				CNodeAnimationTrackProxy* ptr = dynamic_cast<CNodeAnimationTrackProxy*>((EarthView::World::Graphic::CNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CNodeAnimationTrack_populateClone_void_CAnimationTrack(pCallback);
				}
			}
			typedef EarthView::World::Graphic::CSphereTransformKeyFrame*  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback)(_in Real timePos);
			typedef EarthView::World::Graphic::CNode*  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback)(_in EarthView::World::Graphic::CNode* ref_node);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback)(_in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback)(_in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback)(_in EarthView::World::Graphic::CNode* node, _in const void* timeIndex);
			typedef EarthView::World::Graphic::CSphereTransformKeyFrame*  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback)(_in ev_uint16 index);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback)(_in ev_uint16 index);
			typedef Real  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex);
			typedef Real  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback)(_in Real timePos);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback)(_in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback)(_in const void* timeIndex, _in Real weight, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback)(_in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback)(_in const void* timeIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback)(_inout void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback)(_in const void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CKeyFrame* base);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback)(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback)(_in Real time);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback)(_out EarthView::World::Graphic::CAnimationTrack* clone);
			class CSphereNodeAnimationTrackProxy : public EarthView::World::Graphic::CSphereNodeAnimationTrack
			{
			private:
				EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback;
			public:
				CSphereNodeAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereNodeAnimationTrack(pList)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real(EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode(EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode(EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16(EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16(EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16(EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void(EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real(EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex(EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void(EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void(EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener(EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack(EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CSphereTransformKeyFrame* createNodeKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSphereTransformKeyFrame* returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::createNodeKeyFrame(timePos);
				}
				virtual EarthView::World::Graphic::CNode* getAssociatedNode() const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CNode* returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback();
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::getAssociatedNode();
				}
				virtual void setAssociatedNode(_in EarthView::World::Graphic::CNode* ref_node)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback(ref_node);
					}
					else
						return this->CSphereNodeAnimationTrack::setAssociatedNode(ref_node);
				}
				virtual void applyToNode(_in EarthView::World::Graphic::CNode* node, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback(node, &timeIndex, weight, scale);
					}
					else
						return this->CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
				}
				virtual void applyToNode(_in EarthView::World::Graphic::CNode* node, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback(node, &timeIndex, weight);
					}
					else
						return this->CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight);
				}
				virtual void applyToNode(_in EarthView::World::Graphic::CNode* node, _in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback(node, &timeIndex);
					}
					else
						return this->CSphereNodeAnimationTrack::applyToNode(node, timeIndex);
				}
				virtual void getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback(&timeIndex, kf);
					}
					else
						return this->CSphereNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback(&timeIndex, weight, scale);
					}
					else
						return this->CSphereNodeAnimationTrack::apply(timeIndex, weight, scale);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback(&timeIndex, weight);
					}
					else
						return this->CSphereNodeAnimationTrack::apply(timeIndex, weight);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback(&timeIndex);
					}
					else
						return this->CSphereNodeAnimationTrack::apply(timeIndex);
				}
				virtual void _keyFrameDataChanged() const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback();
					}
					else
						return this->CSphereNodeAnimationTrack::_keyFrameDataChanged();
				}
				virtual EarthView::World::Graphic::CSphereTransformKeyFrame* getNodeKeyFrame(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CSphereTransformKeyFrame* returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::getNodeKeyFrame(index);
				}
				virtual void setListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback(ref_l);
					}
					else
						return this->CSphereNodeAnimationTrack::setListener(ref_l);
				}
				virtual void _applyBaseKeyFrame(_in const EarthView::World::Graphic::CKeyFrame* base)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback(base);
					}
					else
						return this->CSphereNodeAnimationTrack::_applyBaseKeyFrame(base);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(_in Real time)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback(time);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::createKeyFrameImpl(time);
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::getNumKeyFrames();
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::getKeyFrame(index);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex) const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback(&timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback(&timeIndex, keyFrame1, keyFrame2);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::createKeyFrame(timePos);
				}
				virtual void removeKeyFrame(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback(index);
					}
					else
						return this->CSphereNodeAnimationTrack::removeKeyFrame(index);
				}
				virtual void removeAllKeyFrames()
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback();
					}
					else
						return this->CSphereNodeAnimationTrack::removeAllKeyFrames();
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrack::hasNonZeroKeyFrames();
				}
				virtual void optimise()
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback();
					}
					else
						return this->CSphereNodeAnimationTrack::optimise();
				}
				virtual void _collectKeyFrameTimes(_inout EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CSphereNodeAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
				}
				virtual void _buildKeyFrameIndexMap(_in const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CSphereNodeAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
				}
				virtual void populateClone(_out EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback(clone);
					}
					else
						return this->CSphereNodeAnimationTrack::populateClone(clone);
				}
			};
			REGISTER_FACTORY_CLASS(CSphereNodeAnimationTrackProxy);
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback)(_in EarthView::World::Graphic::CSphereTransformKeyFrame* kf);
			typedef ev_real64  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB);
			typedef void  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback)(_in const void* yawA, _in const void* pitchA, _in const void* rollA, _in const void* yawB, _in const void* pitchB, _in const void* rollB, _in ev_real64 timeRatio, _inout void* yaw, _inout void* pitch, _inout void* roll);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CAnimationTrack* t, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			class CSphereNodeAnimationTrackListenerProxy : public EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener
			{
			private:
				EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback;
				EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback;
			public:
				CSphereNodeAnimationTrackListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereNodeAnimationTrackListener(pList)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback = NULL;
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame(EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				virtual ev_real64 getRadius(_in EarthView::World::Graphic::CSphereTransformKeyFrame* kf)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback(kf);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrackListener::getRadius(kf);
				}
				virtual ev_real64 getHeading(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(latA, lonA, latB, lonB);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrackListener::getHeading(latA, lonA, latB, lonB);
				}
				virtual void getEuler(_in const EarthView::World::Spatial::Math::CDegree& yawA, _in const EarthView::World::Spatial::Math::CDegree& pitchA, _in const EarthView::World::Spatial::Math::CDegree& rollA, _in const EarthView::World::Spatial::Math::CDegree& yawB, _in const EarthView::World::Spatial::Math::CDegree& pitchB, _in const EarthView::World::Spatial::Math::CDegree& rollB, _in ev_real64 timeRatio, _inout EarthView::World::Spatial::Math::CDegree& yaw, _inout EarthView::World::Spatial::Math::CDegree& pitch, _inout EarthView::World::Spatial::Math::CDegree& roll)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback(&yawA, &pitchA, &rollA, &yawB, &pitchB, &rollB, timeRatio, &yaw, &pitch, &roll);
					}
					else
						return this->CSphereNodeAnimationTrackListener::getEuler(yawA, pitchA, rollA, yawB, pitchB, rollB, timeRatio, yaw, pitch, roll);
				}
				virtual ev_bool getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CAnimationTrack* t, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf)
				{
					if(m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback(t, &timeIndex, kf);
						return returnValue;
					}
					else
						return this->CSphereNodeAnimationTrackListener::getInterpolatedKeyFrame(t, timeIndex, kf);
				}
			};
			REGISTER_FACTORY_CLASS(CSphereNodeAnimationTrackListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame(void *pObjectXXXX, _in EarthView::World::Graphic::CSphereTransformKeyFrame* kf )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackListenerProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getRadius(kf);
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getRadius(kf);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback* pCallback )
			{
				CSphereNodeAnimationTrackListenerProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackListenerProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getRadius_ev_real64_CSphereTransformKeyFrame_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSphereTransformKeyFrame* kf )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getRadius(kf);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackListenerProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getHeading(latA, lonA, latB, lonB);
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getHeading(latA, lonA, latB, lonB);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CSphereNodeAnimationTrackListenerProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackListenerProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getHeading(latA, lonA, latB, lonB);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(void *pObjectXXXX, _in const void* yawA, _in const void* pitchA, _in const void* rollA, _in const void* yawB, _in const void* pitchB, _in const void* rollB, _in ev_real64 timeRatio, _inout void* yaw, _inout void* pitch, _inout void* roll )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackListenerProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getEuler(*(EarthView::World::Spatial::Math::CDegree*)yawA, *(EarthView::World::Spatial::Math::CDegree*)pitchA, *(EarthView::World::Spatial::Math::CDegree*)rollA, *(EarthView::World::Spatial::Math::CDegree*)yawB, *(EarthView::World::Spatial::Math::CDegree*)pitchB, *(EarthView::World::Spatial::Math::CDegree*)rollB, timeRatio, *(EarthView::World::Spatial::Math::CDegree*)yaw, *(EarthView::World::Spatial::Math::CDegree*)pitch, *(EarthView::World::Spatial::Math::CDegree*)roll);
				else
					ptrNativeObject->getEuler(*(EarthView::World::Spatial::Math::CDegree*)yawA, *(EarthView::World::Spatial::Math::CDegree*)pitchA, *(EarthView::World::Spatial::Math::CDegree*)rollA, *(EarthView::World::Spatial::Math::CDegree*)yawB, *(EarthView::World::Spatial::Math::CDegree*)pitchB, *(EarthView::World::Spatial::Math::CDegree*)rollB, timeRatio, *(EarthView::World::Spatial::Math::CDegree*)yaw, *(EarthView::World::Spatial::Math::CDegree*)pitch, *(EarthView::World::Spatial::Math::CDegree*)roll);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback* pCallback )
			{
				CSphereNodeAnimationTrackListenerProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackListenerProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(void *pObjectXXXX, _in const void* yawA, _in const void* pitchA, _in const void* rollA, _in const void* yawB, _in const void* pitchB, _in const void* rollB, _in ev_real64 timeRatio, _inout void* yaw, _inout void* pitch, _inout void* roll )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getEuler(*(EarthView::World::Spatial::Math::CDegree*)yawA, *(EarthView::World::Spatial::Math::CDegree*)pitchA, *(EarthView::World::Spatial::Math::CDegree*)rollA, *(EarthView::World::Spatial::Math::CDegree*)yawB, *(EarthView::World::Spatial::Math::CDegree*)pitchB, *(EarthView::World::Spatial::Math::CDegree*)rollB, timeRatio, *(EarthView::World::Spatial::Math::CDegree*)yaw, *(EarthView::World::Spatial::Math::CDegree*)pitch, *(EarthView::World::Spatial::Math::CDegree*)roll);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetRadius_void_ev_bool(void *pObjectXXXX, _in ev_bool enableGetRadius )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ptrNativeObject->setEnabledToGetRadius(enableGetRadius);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetRadius_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabledToGetRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetHeading_void_ev_bool(void *pObjectXXXX, _in ev_bool enableGetHeading )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ptrNativeObject->setEnabledToGetHeading(enableGetHeading);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetHeading_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabledToGetHeading();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_setEnabledToGetEuler_void_ev_bool(void *pObjectXXXX, _in ev_bool enableGetEuler )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ptrNativeObject->setEnabledToGetEuler(enableGetEuler);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getEnabledToGetEuler_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabledToGetEuler();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CSphereNodeAnimationTrackListenerProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackListenerProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_CSphereNodeAnimationTrackListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereTransformKeyFrame*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::createNodeKeyFrame(timePos);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* objXXXX = ptrNativeObject->createNodeKeyFrame(timePos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereTransformKeyFrame*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_createNodeKeyFrame_CSphereTransformKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CSphereTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::createNodeKeyFrame(timePos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::getAssociatedNode();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getAssociatedNode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getAssociatedNode_CNode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::getAssociatedNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_node )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::setAssociatedNode(ref_node);
				else
					ptrNativeObject->setAssociatedNode(ref_node);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_setAssociatedNode_void_CNode_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_node )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::setAssociatedNode(ref_node);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
				else
					ptrNativeObject->applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_applyToNode_void_CNode_CTimeIndex_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* node, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
				else
					ptrNativeObject->getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_apply_void_CTimeIndex_NoVirtual(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::_keyFrameDataChanged();
				else
					ptrNativeObject->_keyFrameDataChanged();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__keyFrameDataChanged_void_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::_keyFrameDataChanged();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereTransformKeyFrame*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::getNodeKeyFrame(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* objXXXX = ptrNativeObject->getNodeKeyFrame(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereTransformKeyFrame*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_getNodeKeyFrame_CSphereTransformKeyFrame_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CSphereTransformKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::getNodeKeyFrame(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSphereNodeAnimationTrack*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__clone_CSphereNodeAnimationTrack_CAnimation(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimation* newParent )
			{
				const EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* objXXXX = ptrNativeObject->_clone(newParent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::setListener(ref_l);
				else
					ptrNativeObject->setListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_setListener_void_CAnimationTrackListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::setListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::_applyBaseKeyFrame(base);
				else
					ptrNativeObject->_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::createKeyFrameImpl(time);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->createKeyFrameImpl(time);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CSphereNodeAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CSphereNodeAnimationTrack::createKeyFrameImpl(time);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getNumKeyFrames_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_createKeyFrame_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeKeyFrame_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_removeAllKeyFrames_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_hasNonZeroKeyFrames_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_optimise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback )
			{
				CSphereNodeAnimationTrackProxy* ptr = dynamic_cast<CSphereNodeAnimationTrackProxy*>((EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CSphereNodeAnimationTrack_populateClone_void_CAnimationTrack(pCallback);
				}
			}
			typedef EarthView::World::Graphic::CVertexMorphKeyFrame*  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback)(_in Real timePos);
			typedef EarthView::World::Graphic::CVertexPoseKeyFrame*  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback)(_in Real timePos);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback)(_in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex, _in Real weight, _in const EarthView::World::Graphic::PoseList* poseList);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback)(_in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback)(_in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback)(_in ev_uint16 index);
			typedef Real  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex);
			typedef Real  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback)(_in const void* timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback)(_in Real timePos);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback)(_in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback)(_in const void* timeIndex, _in Real weight, _in Real scale);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback)(_in const void* timeIndex, _in Real weight);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback)(_in const void* timeIndex);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback)(_inout void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback)(_in const void* keyFrameTimes);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CKeyFrame* base);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback)(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l);
			typedef EarthView::World::Graphic::CKeyFrame*  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback)(_in Real time);
			typedef void  ( _stdcall EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback)(_out EarthView::World::Graphic::CAnimationTrack* clone);
			class CVertexAnimationTrackProxy : public EarthView::World::Graphic::CVertexAnimationTrack
			{
			private:
				EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback;
				EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback* m_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback;
			public:
				CVertexAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexAnimationTrack(pList)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = NULL;
					m_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real(EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real(EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList(EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real(EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex(EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16(EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real(EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16(EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void(EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real(EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real(EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex(EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void(EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool(EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void(EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener(EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack(EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CVertexMorphKeyFrame* createVertexMorphKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexMorphKeyFrame* returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::createVertexMorphKeyFrame(timePos);
				}
				virtual EarthView::World::Graphic::CVertexPoseKeyFrame* createVertexPoseKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CVertexPoseKeyFrame* returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::createVertexPoseKeyFrame(timePos);
				}
				virtual void getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback(&timeIndex, kf);
					}
					else
						return this->CVertexAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in Real scale)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback(&timeIndex, weight, scale);
					}
					else
						return this->CVertexAnimationTrack::apply(timeIndex, weight, scale);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback(&timeIndex, weight);
					}
					else
						return this->CVertexAnimationTrack::apply(timeIndex, weight);
				}
				virtual void apply(_in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback(&timeIndex);
					}
					else
						return this->CVertexAnimationTrack::apply(timeIndex);
				}
				virtual void applyToVertexData(_in EarthView::World::Graphic::CVertexData* data, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight, _in const EarthView::World::Graphic::PoseList* poseList)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback(data, &timeIndex, weight, poseList);
					}
					else
						return this->CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight, poseList);
				}
				virtual void applyToVertexData(_in EarthView::World::Graphic::CVertexData* data, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in Real weight)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback(data, &timeIndex, weight);
					}
					else
						return this->CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight);
				}
				virtual void applyToVertexData(_in EarthView::World::Graphic::CVertexData* data, _in const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback(data, &timeIndex);
					}
					else
						return this->CVertexAnimationTrack::applyToVertexData(data, timeIndex);
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::hasNonZeroKeyFrames();
				}
				virtual void optimise()
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback();
					}
					else
						return this->CVertexAnimationTrack::optimise();
				}
				virtual void _applyBaseKeyFrame(_in const EarthView::World::Graphic::CKeyFrame* base)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback(base);
					}
					else
						return this->CVertexAnimationTrack::_applyBaseKeyFrame(base);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(_in Real time)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback(time);
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::createKeyFrameImpl(time);
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::getNumKeyFrames();
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::getKeyFrame(index);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2, _out ev_uint16* firstKeyIndex) const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback(&timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
				}
				virtual Real getKeyFramesAtTime(_in const EarthView::World::Graphic::CTimeIndex& timeIndex, _out EarthView::World::Graphic::CKeyFrame** keyFrame1, _out EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback(&timeIndex, keyFrame1, keyFrame2);
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(_in Real timePos)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CKeyFrame* returnValue = m_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback(timePos);
						return returnValue;
					}
					else
						return this->CVertexAnimationTrack::createKeyFrame(timePos);
				}
				virtual void removeKeyFrame(_in ev_uint16 index)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback(index);
					}
					else
						return this->CVertexAnimationTrack::removeKeyFrame(index);
				}
				virtual void removeAllKeyFrames()
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback();
					}
					else
						return this->CVertexAnimationTrack::removeAllKeyFrames();
				}
				virtual void _keyFrameDataChanged() const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback();
					}
					else
						return this->CVertexAnimationTrack::_keyFrameDataChanged();
				}
				virtual void _collectKeyFrameTimes(_inout EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CVertexAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
				}
				virtual void _buildKeyFrameIndexMap(_in const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback(&keyFrameTimes);
					}
					else
						return this->CVertexAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
				}
				virtual void setListener(_in EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback(ref_l);
					}
					else
						return this->CVertexAnimationTrack::setListener(ref_l);
				}
				virtual void populateClone(_out EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if(m_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback(clone);
					}
					else
						return this->CVertexAnimationTrack::populateClone(clone);
				}
			};
			REGISTER_FACTORY_CLASS(CVertexAnimationTrackProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getAnimationType_VertexAnimationType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::VertexAnimationType objXXXX = ptrNativeObject->getAnimationType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getVertexAnimationIncludesNormals_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getVertexAnimationIncludesNormals();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexMorphKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexMorphKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::createVertexMorphKeyFrame(timePos);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexMorphKeyFrame* objXXXX = ptrNativeObject->createVertexMorphKeyFrame(timePos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexMorphKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createVertexMorphKeyFrame_CVertexMorphKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CVertexMorphKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::createVertexMorphKeyFrame(timePos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexPoseKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CVertexPoseKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::createVertexPoseKeyFrame(timePos);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CVertexPoseKeyFrame* objXXXX = ptrNativeObject->createVertexPoseKeyFrame(timePos);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexPoseKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createVertexPoseKeyFrame_CVertexPoseKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real timePos )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::createVertexPoseKeyFrame(timePos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
				else
					ptrNativeObject->getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getInterpolatedKeyFrame_void_CTimeIndex_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::getInterpolatedKeyFrame(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, kf);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight, _in Real scale )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_apply_void_CTimeIndex_NoVirtual(void *pObjectXXXX, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::apply(*(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex, _in Real weight, _in const EarthView::World::Graphic::PoseList* poseList )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, poseList);
				else
					ptrNativeObject->applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, poseList);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_PoseList_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex, _in Real weight, _in const EarthView::World::Graphic::PoseList* poseList )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight, poseList);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
				else
					ptrNativeObject->applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Real_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex, _in Real weight )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex, weight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
				else
					ptrNativeObject->applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyToVertexData_void_CVertexData_CTimeIndex_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* data, _in const void* timeIndex )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, *(EarthView::World::Graphic::CTimeIndex*)timeIndex);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexMorphKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getVertexMorphKeyFrame_CVertexMorphKeyFrame_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CVertexMorphKeyFrame* objXXXX = ptrNativeObject->getVertexMorphKeyFrame(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexPoseKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getVertexPoseKeyFrame_CVertexPoseKeyFrame_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame* objXXXX = ptrNativeObject->getVertexPoseKeyFrame(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_setAssociatedVertexData_void_CVertexData(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexData* ref_data )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->setAssociatedVertexData(ref_data);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getAssociatedVertexData_CVertexData(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->getAssociatedVertexData();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_setTargetMode_void_TargetMode(void *pObjectXXXX, _in int m )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->setTargetMode((EarthView::World::Graphic::CVertexAnimationTrack::TargetMode)m);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_getTargetMode_TargetMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack::TargetMode objXXXX = ptrNativeObject->getTargetMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::hasNonZeroKeyFrames();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasNonZeroKeyFrames();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_hasNonZeroKeyFrames_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::hasNonZeroKeyFrames();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_optimise_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::optimise();
				else
					ptrNativeObject->optimise();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_optimise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_optimise_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::optimise();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexAnimationTrack*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack__clone_CVertexAnimationTrack_CAnimation(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimation* newParent )
			{
				const EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* objXXXX = ptrNativeObject->_clone(newParent);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::_applyBaseKeyFrame(base);
				else
					ptrNativeObject->_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack__applyBaseKeyFrame_void_CKeyFrame_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CKeyFrame* base )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				if (dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::createKeyFrameImpl(time);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->createKeyFrameImpl(time);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CKeyFrame*  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrameImpl_CKeyFrame_Real_NoVirtual(void *pObjectXXXX, _in Real time )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				EarthView::World::Graphic::CKeyFrame* objXXXX = ptrNativeObject->EarthView::World::Graphic::CVertexAnimationTrack::createKeyFrameImpl(time);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CVertexAnimationTrack_applyPoseToVertexData_void_CPose_CVertexData_Real(void *pObjectXXXX, _in const EarthView::World::Graphic::CPose* pose, _in EarthView::World::Graphic::CVertexData* data, _in Real influence )
			{
				EarthView::World::Graphic::CVertexAnimationTrack* ptrNativeObject = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX;
				ptrNativeObject->applyPoseToVertexData(pose, data, influence);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getNumKeyFrames_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_getKeyFramesAtTime_Real_CTimeIndex_CKeyFrame_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_createKeyFrame_CKeyFrame_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeKeyFrame_void_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_removeAllKeyFrames_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__keyFrameDataChanged_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__collectKeyFrameTimes_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack__buildKeyFrameIndexMap_void_KeyFrameTimes(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_setListener_void_CAnimationTrackListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack( void *pObjectXXXX, EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack_Callback* pCallback )
			{
				CVertexAnimationTrackProxy* ptr = dynamic_cast<CVertexAnimationTrackProxy*>((EarthView::World::Graphic::CVertexAnimationTrack*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CVertexAnimationTrack_populateClone_void_CAnimationTrack(pCallback);
				}
			}
		}
	}
}
