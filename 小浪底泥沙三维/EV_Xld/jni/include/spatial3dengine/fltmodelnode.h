#ifndef _FLTMODELNODE_H
#define _FLTMODELNODE_H

#include "spatial3dengine/spatial3denginecomdef.h"
#include "graphic/scenenode.h"
#include "mathengine/vector3.h"
#include "mathengine/vector4.h"
#include "graphic/scenemanager.h"
#include "core/ev_time.h"
#include "plugin_octreescenemanager/octreenode.h"
#include "core/core_common.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{  

				
				class EV_Spatial3DEngine_DLL CBlinkSequence : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBlinkSequence(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CBlinkSequence();
					~CBlinkSequence();
					/** add a pulse of specified color and duration to the BlinkSequence.*/
					void addPulse(ev_real64 length,const EarthView::World::Spatial::Math::CVector4& color);

					/** return the number of pulses. */
					ev_int32 getNumPulses() const { return mPulseData.size(); }

					/** return the pulse data at position i. */
					ev_void getPulse(ev_uint32 i, ev_real64& length,EarthView::World::Spatial::Math::CVector4& color) const;

					/** set pulse of specified color and duration to the BlinkSequence.*/
					ev_void setPulse(ev_uint32 i,ev_real64 length,const EarthView::World::Spatial::Math::CVector4& color);

					/** get the total pulse period of the blink sequence, which is equal to the sum of all the pulse periods.*/
					ev_real64 getPulsePeriod() const { return mPulsePeriod; }
					/** set the phase shift of the blink sequence, this would be used to shift a sequence within a sequence group.*/
					void setPhaseShift(ev_real64 ps) { mPhaseShift = ps; }

					/** get the pahse shift.*/
					ev_real64 getPhaseShift() const { return mPhaseShift; }

					/** compute the local time clamped to this BlinkSequences period, and accounting for the phase shift and sequence group.*/
					ev_real64 localTime(ev_real64 time) const;

					/** compute the color for the time interval sepecifed. Averages the colors if the length is greater than the current pulse.*/
					EarthView::World::Spatial::Math::CVector4 color(ev_real64 time,ev_real64 length) const;

					ev_void setName(EVString name);
					EVString getName();

					EarthView::World::Spatial::Math::CVector4 nextColor();
					EarthView::World::Spatial::Math::CVector4 getColor(ev_int32 index);
				protected:
					typedef std::pair<ev_real64,EarthView::World::Spatial::Math::CVector4> IntervalColor;
					typedef ev_vector<IntervalColor>  PulseData;

					ev_real64                      mPulsePeriod;
					ev_real64                      mPhaseShift;
					PulseData                      mPulseData;
					ev_int32 mCurrentIndex;
					EVString  mName;
				};
				/*FLT LightPoint类*/
				class EV_Spatial3DEngine_DLL CLightPoint : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLightPoint(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CLightPoint(EarthView::World::Spatial::Math::CVector3 pos,EarthView::World::Spatial::Math::CVector3 normal,EarthView::World::Spatial::Math::CVector4 color);
					~CLightPoint();

					enum EVBlendingMode
					{
						BM_ADDITIVE,
						BM_BLENDED
					};

					ev_void setIsOn(ev_bool isOn);
	
					ev_bool getIsOn();

					ev_void setIntensity(ev_real32 intensity);
					ev_real32 getIntensity();

					ev_void setRadius(ev_real32 radius);
					ev_real32 getRadius();

					ev_void setBlendingMode(CLightPoint::EVBlendingMode mode);
					CLightPoint::EVBlendingMode getBlendingMode();

					ev_void setBlinkSequence(EarthView::World::Spatial3D::ModelManager::CBlinkSequence blinkSequence);
					EarthView::World::Spatial3D::ModelManager::CBlinkSequence getBlinkSequence();

					ev_void setRotate(EarthView::World::Spatial::Math::CVector3 rotate);
					EarthView::World::Spatial::Math::CVector3 getRotate();

					EarthView::World::Spatial::Math::CVector3 getPosition(){return mPosition;}

					EarthView::World::Spatial::Math::CVector4 getColor(){return mColor;}

					EarthView::World::Spatial::Math::CVector3 getNormal(){return mNormal;}
				protected:
					ev_bool                        mIsOn;
					EarthView::World::Spatial::Math::CVector3                  mPosition;
					EarthView::World::Spatial::Math::CVector3                  mNormal;
					EarthView::World::Spatial::Math::CVector4                  mColor;
					ev_real32                       mIntensity;
					ev_real32                       mRadius;


					EarthView::World::Spatial3D::ModelManager::CBlinkSequence mBlinkSequence;

					CLightPoint::EVBlendingMode                mBlendingMode;
					EarthView::World::Spatial::Math::CVector3 mRotate;
				};
				/*FLT LightPointSystem类*/
				class EV_Spatial3DEngine_DLL CLightPointSystem : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLightPointSystem(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CLightPointSystem();
					~CLightPointSystem();

				   enum EVAnimationState{
						AS_ANIMATION_ON,
						AS_ANIMATION_OFF,
						AS_ANIMATION_RANDOM
					} ;

					void setIntensity( ev_real32 intensity ) { mIntensity = intensity; }
					ev_real32 getIntensity() const { return mIntensity; }

					void setAnimationState( EarthView::World::Spatial3D::ModelManager::CLightPointSystem::EVAnimationState state ) { mAnimationState = state; }
					EarthView::World::Spatial3D::ModelManager::CLightPointSystem::EVAnimationState getAnimationState() const { return mAnimationState; }

					virtual EarthView::World::Graphic::CNode* serializerAttributes(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator,_in EarthView::World::Core::NameValuePairList& attributes);
				protected:
					ev_real32 mIntensity;
					EVAnimationState mAnimationState;
				};
				/*FLT场景节点扩展基类*/
				class EV_Spatial3DEngine_DLL  CFltBaseNode : public EarthView::World::Graphic::COctreeNode
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFltBaseNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					enum EVFltNodeType
					{
						FLT_BASENODE,
						FLT_GROUP,
						FLT_SEQUENCE,
						FLT_SWITCH,
						FLT_MUTISWITCH,
						FLT_LIGHTPOINT,
						FLT_LOD,
						FLT_DOF
					};
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">分配的节点名称</param>
					/// <returns></returns>
					CFltBaseNode(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator);
					~CFltBaseNode();
					/// <summary>
					/// 更新节点
					/// 内部方法
					/// </summary>
					/// <param name="updateChildren">为真，逐级更新所有子节点</param>
					/// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
					/// <returns></returns>
					//virtual ev_void _update(ev_bool updateChildren, ev_bool parentHasChanged);
					/// <summary>
					/// 获取FLT节点类型
					/// </summary>
					/// <returns>节点类型</returns>
					EarthView::World::Spatial3D::ModelManager::CFltBaseNode::EVFltNodeType getType();

					virtual ev_void serializerAttributes(EarthView::World::Core::NameValuePairList& attributes);

					virtual ev_void setRefInstancedEntityVector(EarthView::World::Spatial3D::InstancedEntityVector refInstancedEntityVector);
					virtual EarthView::World::Spatial3D::InstancedEntityVector getRefInstancedEntityVector();
					virtual ev_void setRefEntity(EarthView::World::Graphic::CEntity* refEntity);
					virtual ev_void addRefSubEntityIndex(ev_uint32 subEntityIndex);
					virtual ev_void addHideRefSubEntityIndex(ev_uint32 subEntityIndex);
					virtual ev_int32 getSubEntityIndex(ev_uint32 index);
					virtual ev_int32 getHideSubEntityIndex(ev_uint32 index);
					virtual ev_uint32 numSubEntity();
					virtual ev_uint32 numHideSubEntity();
					virtual ev_void clearHideEntityIndex();
					virtual EarthView::World::Graphic::CEntity* getEntity();
					virtual void setVisible(ev_bool visible, ev_bool cascade);
					virtual void setVisible(ev_bool visible);
					virtual void _findVisibleObjects(EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *queue, EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds,
						ev_bool includeChildren , ev_bool displayNodes, ev_bool onlyShadowCasters);
					/// <summary>
					/// 通过名称删除指定子节点及其它的字节点
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					virtual void removeAndDestroyChild(const EVString &name);
					/// <summary>
					/// 通过检索删除指定子节点及其它的字节点
					/// </summary>
					/// <param name="index">检索</param>
					/// <returns></returns>
					virtual void removeAndDestroyChild(ev_uint16 index);
					/// <summary>
					/// 删除此节点的所有子节点
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual void removeAndDestroyAllChildren();
					/** Internal method for creating a new child node - must be overridden per subclass. */
			

					virtual ev_bool getVisible();
					virtual ev_bool getDerivedVisible();
					virtual ev_void addChildOrder(ev_uint32 indexOrder,EVString nodeName);
					virtual ev_void updateEntitySelectable(ev_bool flag);
					virtual ev_void updateSubEntityVisible(ev_bool flag,ev_bool updateChild);
					virtual void _addToRenderQueue( EarthView::World::Graphic::CCamera *cam, EarthView::World::Graphic::CRenderQueue *q, ev_bool onlyShadowCasters,
						EarthView::World::Graphic::VisibleObjectsBoundsInfo *visibleBounds);
ev_internal:
					virtual EarthView::World::Graphic::CNode *createChildImpl();
					/** Internal method for creating a new child node - must be overridden per subclass. */
					virtual EarthView::World::Graphic::CNode *createChildImpl(_in const EVString &name);
ev_private:
					virtual ev_void traverse();
					ev_vector<EarthView::World::Graphic::CNode*> mRefDofAndLightNode;
					virtual ev_void addDetachedNode(EarthView::World::Graphic::CNode* node);
				protected:
					virtual ev_void detachNodeFromParent(EarthView::World::Graphic::CNode* node,EarthView::World::Graphic::CNode* parent);
					virtual ev_void attachNode(EarthView::World::Graphic::CNode* node);
					virtual EarthView::World::Graphic::CNode* attachNodeByName(EVString nodeName);
					virtual ev_void attachAllDetachedNodes();
					virtual ev_void traverseChild();
					virtual ev_void _updateChildUpdateState(EarthView::World::Spatial3D::ModelManager::CFltBaseNode* node, ev_bool needUpdate );
				protected:
					EarthView::World::Spatial3D::InstancedEntityVector mRefInstancedEntityVector;
					EVFltNodeType mNodeType;
					EarthView::World::Graphic::CSceneManager* mRefSceneMgr;
					EarthView::World::Graphic::CEntity* mRefEntity;
					ev_vector<ev_uint32> mRefSubEntityIndex;
					ev_vector<ev_uint32> mHideRefSubEntityIndex;
					ev_vector<ev_uint32> mRefOtherSubEntityIndex;
					
					ev_bool mVisible;
					ev_bool mDerivedVisible;
					ev_bool mNeedUpdateVisible;
					ev_map<ev_uint32,EVString> mNodeOrderMap;
					ev_map<EVString,EarthView::World::Graphic::CNode*> mDetachedNodeMap;
					ev_private:
					ev_void traverseChildAndDetachObject(EarthView::World::Graphic::CNode* child);
				};
				/*FLT序列动画节点*/
				class EV_Spatial3DEngine_DLL  CSequenceNode : public EarthView::World::Spatial3D::ModelManager::CFltBaseNode
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSequenceNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">分配的节点名称</param>
					/// <returns></returns>
					CSequenceNode(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator);
					~CSequenceNode();
					/** value is which child node is to be displayed */
					ev_void setValue(ev_int32 value) { mValue = value ; }
					ev_int32 getValue() const { return mValue; }

					/** Set time in seconds for child. */
					ev_void setTime(ev_uint32 frame, ev_real64 t);

					/** Get time for child. */
					ev_real64 getTime(ev_uint32 frame) const;

					///** Set the time list for children. */
					//	ev_void setTimeList(const EarthView::World::Core::RealVector& timeList) { mFrameTime = timeList; }

					///** Get the time list for children. */
					//	const EarthView::World::Core::RealVector& getTimeList() const { return mFrameTime; }

					/** Set default time in seconds for new child.
					if t<0, t=0 */
					ev_void setDefaultTime(ev_real64 t) {mDefaultTime = (t<0.?0.:t);}

					/** Get default time in seconds for new child. */
					ev_real64 getDefaultTime() const {return mDefaultTime;};

					/** Set time of last frame of last loop, in seconds.
					if t<= 0, then ignored */
					ev_void setLastFrameTime(ev_real64 t) {mLastFrameTime = (t<0.?0.:t);}

					/** Get last frame time in seconds */
					ev_real64 getLastFrameTime() const {return mLastFrameTime;};

					/** Get number of frames */
					ev_uint32 getNumFrames() const { return mFrameTime.size(); }

					/** Interval modes. 'Loop' repeats frames 1-N; 'swing' repeats 1->N, (N-1)->1. */
					enum EVLoopMode
					{
						LM_LOOP,
						LM_SWING,
						LM_NOTLOOP
					};

					/** Set sequence mode. */
					ev_void setLoopMode(EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVLoopMode mode) { mLoopMode = mode; mValue = -1; }

					/** Get sequence mode. */
					EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVLoopMode getLoopMode() const { return mLoopMode; }

					/** Set interval beginning. */
					ev_void setBegin(ev_int32 begin) 
					{
						mBegin = begin;
						mValue = -1; 
					}

					/** Get interval beginning. */
					ev_int32 getBegin() const { return mBegin; }

					/** Set interval ending. */
					ev_void setEnd(ev_int32 end) 
					{
						mEnd = end; 
						mValue = -1; 
					}

					/** Get interval ending. */
					ev_int32 getEnd() const { return mEnd; }

					/** Set sequence mode & interval (range of children to be displayed). */
					ev_void setInterval(EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVLoopMode mode, ev_int32 begin, ev_int32 end);

					/** Get sequence mode & interval. */
					ev_void getInterval(EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVLoopMode& mode, ev_int32& begin, ev_int32& end) const
					{
						mode = mLoopMode;
						begin = mBegin;
						end = mEnd;
					}

					/** Set speed. */
					ev_void setSpeed(ev_real32 speed)
					{
						mSpeed = speed;
					}

					/** Get speed. */
					ev_real32 getSpeed() const 
					{ 
						return mSpeed; 
					}

					/** Set number of repeats. */
					ev_void setNumRepeats(ev_int32 nreps) 
					{ 
						if (nreps < 0)
						{
							mNreps = -1;
						}
						else
						{
							mNreps = nreps;
						}
						mNrepsRemain = mNreps; 
					}

					/** Get number of repeats. */
					ev_int32 getNumRepeats() const { return mNreps; }

					/** Set duration: speed-up & number of repeats */
					ev_void setDuration(ev_real32 speed, ev_int32 nreps);

					/** Get duration & number of repeats. */
					ev_void getDuration(ev_real32& speed, ev_int32& nreps) const
					{
						speed = mSpeed;
						nreps = mNreps;
					}

					/** Sequence modes. */
					enum EVSequenceMode
					{
						SM_START,
						SM_STOP,
						SM_PAUSE,
						SM_RESUME
					};

					/** Set sequence mode. Start/stop & pause/resume. */
					ev_void setMode(EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVSequenceMode mode);

					/** Get sequence mode. */
					EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVSequenceMode getMode() const { return mMode; }

					/** If false (default), frames will not be sync'd to frameTime.  If
					true, frames will be sync'd to frameTime. */
					ev_void setSync(ev_bool sync) { mSync = sync; }

					/** Get sync value */
					ev_bool getSync() const { return mSync; }

					/** If true, show no child nodes after stopping */
					ev_void setClearOnStop(ev_bool clearOnStop) { mClearOnStop = clearOnStop; }

					/** Get whether to show no child nodes after stopping */
					ev_bool getClearOnStop() const { return mClearOnStop; }

					virtual ev_void serializerAttributes(EarthView::World::Core::NameValuePairList& attributes);

					/// <summary>
					/// 更新节点
					/// 内部方法
					/// </summary>
					/// <param name="updateChildren">为真，逐级更新所有子节点</param>
					/// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
					/// <returns></returns>
					//virtual ev_void _update(ev_bool updateChildren, ev_bool parentHasChanged);
				ev_private:
					virtual ev_void traverse();
				protected:
					//get next _value in sequence
					ev_int32 _getNextValue() ;

					// update local variables
					ev_void updateLocalVariables() ;

					// init to -1 to mean "restart"
					ev_int32 mValue;

					// current time, set by traverse
					ev_real64 mNow ;

					// time this frame started.  init to -1.0f- means get current time
					ev_real64 mStart;

					// a vector of frame times, one per value
					//EarthView::World::Core::RealVector mFrameTime;
					ev_vector<ev_real64> mFrameTime;

					// the total time for one sequence, from BEGIN to END
					ev_real64 mTotalTime ;

					// true if _totalTime needs to be recalculated because setTime or
					// setInterval was invoked, or a new child was added
					ev_bool mResetTotalTime ;

					// store "loop mde", either LOOP or SWING
					// init to LOOP- set by setInterval
					EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVLoopMode mLoopMode;

					// first and last "values" to sequence through
					// begin inits to 0
					// end inits to -1- means to init to number of values
					ev_int32 mBegin, mEnd;

					// multiplier of real-time clock- set to N to go N times faster
					// init to 0- going nowhere
					ev_real32 mSpeed;

					// _nreps: how many times to repeat- default param is -1, repeat forever
					// init to 0, no repetitions
					// _nrepsRemain: set to nreps and counts down every traversal,
					// stopping when it gets to zero.  init to 0
					ev_int32 mNreps, mNrepsRemain;

					// frame step (are we stepping forward or backward?)
					ev_int32 mStep;

					// default frame time for newly created frames or children- default is 1.
					// set by setDefaultTime
					ev_real64 mDefaultTime ;

					// special time to display last frame of last loop
					// <= zero means to not do anything special
					ev_real64 mLastFrameTime ;

					// save the actual time of the last frame, and what value was stored
					ev_real64 mSaveRealLastFrameTime ;
					ev_uint32 mSaveRealLastFrameValue ;

					// the current mode
					EarthView::World::Spatial3D::ModelManager::CSequenceNode::EVSequenceMode mMode;

					// the current sync value
					ev_bool mSync ;

					// the current clearOnStop value
					ev_bool mClearOnStop ;

					ev_int32 mPreviousTime;
				private:
					ev_void initVar();
				};
				/*FLT切换集合节点*/
				class EV_Spatial3DEngine_DLL  CMutiSwitchNode : public EarthView::World::Spatial3D::ModelManager::CFltBaseNode
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMutiSwitchNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">分配的节点名称</param>
					/// <returns></returns>
					CMutiSwitchNode(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator);

					~CMutiSwitchNode();

					ev_void setNewChildDefaultValue(ev_bool value) { mNewChildDefaultValue = value; }

					ev_bool getNewChildDefaultValue() const { return mNewChildDefaultValue; }

					ev_void setValue(ev_uint32 switchSet, ev_uint32 pos,ev_bool value);

					ev_bool getValue(ev_uint32 switchSet, ev_uint32 pos) const;

					ev_void setChildValue(const EarthView::World::Graphic::CSceneNode* child,ev_uint32 switchSet, ev_bool value);

					ev_bool getChildValue(const EarthView::World::Graphic::CSceneNode* child,ev_uint32 switchSet) const;

					/** Set all the children off (false), and set the new default child value to off (false).*/
					ev_bool setAllChildrenOff(ev_uint32 switchSet);

					/** Set all the children on (true), and set the new default child value to on (true).*/
					ev_bool setAllChildrenOn(ev_uint32 switchSet);

					/** Set a single child to be on, MultiSwitch off all other children.*/
					ev_bool setSingleChildOn(ev_uint32 switchSet, ev_uint32 pos);

					/** Set which of the available switch set lists to use.*/
					ev_void setActiveSwitchSet(ev_uint32 switchSet) { mActiveSwitchSet = switchSet; }

					/** Get which of the available switch set lists to use.*/
					ev_uint32 getActiveSwitchSet() const { return mActiveSwitchSet; }

				
					typedef EarthView::World::Core::StringVector SwitchSetNameList;
					
					///** Set the compile set of different values.*/
					//ev_void setSwitchSetList(const SwitchSetList& switchSetList);

					///** Get the compile set of different values.*/
					//const SwitchSetList& getSwitchSetList() const { return mValues; }

					///** Set the a single set of different values for a particular switch set.*/
					//ev_void setValueList(ev_uint32 switchSet, const ValueList& values);

					///** Get the a single set of different values for a particular switch set.*/
					//const ValueList& getValueList(ev_uint32 switchSet) const { return mValues[switchSet]; }

					ev_void setValueName(ev_uint32 switchSet, const EVString& name);

					const EVString& getValueName(ev_uint32 switchSet) const { return mValueNames[switchSet]; }

					virtual ev_void serializerAttributes(EarthView::World::Core::NameValuePairList& attributes);
					/// <summary>
					/// 更新节点
					/// 内部方法
					/// </summary>
					/// <param name="updateChildren">为真，逐级更新所有子节点</param>
					/// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
					/// <returns></returns>
					//virtual ev_void _update(ev_bool updateChildren, ev_bool parentHasChanged);

					ev_void setNumChild(ev_uint32 numChild);
ev_private:
					virtual ev_void traverse();
				protected:
					virtual ev_void _updateVisible(EarthView::World::Spatial3D::ModelManager::CFltBaseNode* node,ev_bool parentVisible);
		
					ev_void expandToEncompassSwitchSet(ev_uint32 switchSet);

					typedef ev_vector<ev_bool>        ValueList;
					typedef ev_vector<ValueList>   SwitchSetList;
					ev_bool              mNewChildDefaultValue;
					ev_uint32      mActiveSwitchSet;
					SwitchSetList     mValues;
					SwitchSetNameList mValueNames;
					ev_uint32 mNumChild;
				};
				/*FLT切换节点*/
				class EV_Spatial3DEngine_DLL  CSwitchNode : public EarthView::World::Spatial3D::ModelManager::CFltBaseNode
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSwitchNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">分配的节点名称</param>
					/// <returns></returns>
					CSwitchNode(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator);

					~CSwitchNode();

					ev_void setNewChildDefaultValue(ev_bool value) { mNewChildDefaultValue = value; }

					ev_bool getNewChildDefaultValue() const { return mNewChildDefaultValue; }

					ev_void setValue(ev_uint32 pos,ev_bool value);

					ev_bool getValue(ev_uint32 pos) const;

					ev_void setChildValue(const EarthView::World::Graphic::CSceneNode* child,ev_bool value);

					ev_bool getChildValue(const EarthView::World::Graphic::CSceneNode* child) const;

					/** Set all the children off (false), and set the new default child
					* value to off (false). */
					ev_bool setAllChildrenOff();

					/** Set all the children on (true), and set the new default child
					* value to on (true). */
					ev_bool setAllChildrenOn();

					/** Set a single child on, switch off all other children. */
					ev_bool setSingleChildOn(ev_uint32 pos);


			/*		typedef BoolVector   ValueList;

					void setValueList(const ValueList& values) { mValues=values; }

					const ValueList& getValueList() const { return mValues; }*/

					//virtual BoundingSphere computeBound() const;
					virtual ev_void serializerAttributes(EarthView::World::Core::NameValuePairList& attributes);
					/// <summary>
					/// 更新节点
					/// 内部方法
					/// </summary>
					/// <param name="updateChildren">为真，逐级更新所有子节点</param>
					/// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
					/// <returns></returns>
					//virtual ev_void _update(ev_bool updateChildren, ev_bool parentHasChanged);
ev_private:
					virtual ev_void traverse();
				protected:
					typedef ev_vector<ev_bool>   ValueList;
					virtual ev_void _updateVisible(EarthView::World::Spatial3D::ModelManager::CFltBaseNode* node,ev_bool parentVisible);
					ev_bool     mNewChildDefaultValue;
					ValueList   mValues;
				};

				class EV_Spatial3DEngine_DLL  CLightPointNode : public EarthView::World::Spatial3D::ModelManager::CFltBaseNode
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLightPointNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">分配的节点名称</param>
					/// <returns></returns>
					CLightPointNode(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator);
					~CLightPointNode();


					ev_uint32 getNumLightPoints() const { return mLightPointList.size(); }


					ev_uint32 addLightPoint(const EarthView::World::Spatial3D::ModelManager::CLightPoint& lp);

					ev_void removeLightPoint(ev_uint32 pos);


					EarthView::World::Spatial3D::ModelManager::CLightPoint& getLightPoint(ev_uint32 pos) { return mLightPointList[pos]; }


					ev_void setMinPixelSize(ev_real32 minPixelSize) { mMinPixelSize = minPixelSize; }

					ev_real32 getMinPixelSize() const { return mMinPixelSize; }

					ev_void setMaxPixelSize(ev_real32 maxPixelSize) { mMaxPixelSize = maxPixelSize; }

					ev_real32 getMaxPixelSize() const { return mMaxPixelSize; }

					ev_void setMaxVisibleDistance2(ev_real32 maxVisibleDistance2) { mMaxVisibleDistance2 = maxVisibleDistance2; }

					ev_real32 getMaxVisibleDistance2() const { return mMaxVisibleDistance2; }

					ev_void setLightPointSystem( EarthView::World::Spatial3D::ModelManager::CLightPointSystem* lps) { mLightSystem = lps; }

					EarthView::World::Spatial3D::ModelManager::CLightPointSystem* getLightPointSystem() { return mLightSystem; }


					ev_void setPointSprite(ev_bool enable=true) { mPointSprites = enable; }

					ev_bool getPointSprite() const { return mPointSprites; }

					virtual ev_void serializerAttributes(EarthView::World::Core::NameValuePairList& attributes);
					/// <summary>
					/// 更新节点
					/// 内部方法
					/// </summary>
					/// <param name="updateChildren">为真，逐级更新所有子节点</param>
					/// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
					/// <returns></returns>
					//virtual ev_void _update(ev_bool updateChildren, ev_bool parentHasChanged);
					ev_void setCameraParam(ev_real32 viewPortWidth,ev_real32 viewPortHeight,EarthView::World::Spatial::Math::CMatrix4 viewMatrix,EarthView::World::Spatial::Math::CMatrix4 projMatrix);
ev_private:
					virtual ev_void traverse();
				protected:
					//mutable osg::BoundingBox _bbox;
					typedef ev_vector<EarthView::World::Spatial3D::ModelManager::CLightPoint > LightPointList;
					LightPointList  mLightPointList;

					ev_real32 mMinPixelSize;
					ev_real32 mMaxPixelSize;
					ev_real32 mMaxVisibleDistance2;

					EarthView::World::Spatial3D::ModelManager::CLightPointSystem* mLightSystem;

					ev_bool mPointSprites;

					ev_map<ev_int32,EarthView::World::Graphic::CManualObject*> mDrawbleMap;
					ev_map<ev_int32,EarthView::World::Graphic::CMaterialPtr> mMaterialMap;
					ev_map<ev_int32,EarthView::World::Graphic::CSceneNode*> mNodeMap;
					EarthView::World::Core::CTime mLastTime;
					EarthView::World::Spatial::Math::CMatrix4 mProjMatrix;
					EarthView::World::Spatial::Math::CMatrix4 mViewMatrix;
					ev_real32 mViewPortWidth;
					ev_real32 mViewPortHeight;
				private:
					ev_int32 mPreviousTime;
					ev_real32 getPixelSize(EarthView::World::Spatial::Math::CVector3 pos,ev_real32 radius);
					EarthView::World::Spatial::Math::CVector4 computePixelSizeVector();
					EarthView::World::Graphic::CMaterialPtr createMaterial(EVString matName,Real size);
					EarthView::World::Graphic::CManualObject* createOrUpdateDrawable(EarthView::World::Spatial::Math::CVector3 pos,EarthView::World::Spatial::Math::CVector4 color,EVString matName,ev_int32 updateKey);
				};
	
				/*FLT LOD节点*/
				class EV_Spatial3DEngine_DLL CLODNode: public EarthView::World::Spatial3D::ModelManager::CFltBaseNode
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLODNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">分配的节点名称</param>
					/// <returns></returns>
					CLODNode(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator);
					~CLODNode();
					virtual ev_void serializerAttributes(EarthView::World::Core::NameValuePairList& attributes);
					/// <summary>
					/// 更新节点
					/// 内部方法
					/// </summary>
					/// <param name="updateChildren">为真，逐级更新所有子节点</param>
					/// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
					/// <returns></returns>
					//virtual ev_void _update(ev_bool updateChildren, ev_bool parentHasChanged);

					void setSwitchInDistance(ev_real64 switchInDistance);
					ev_real64 getSwitchInDistance();

					void setSwitchOutDistance(ev_real64 switchOutDistance);
					ev_real64 getSwitchOutDistance();

					void setLODCenter(EarthView::World::Spatial::Math::CVector3 lodCenter);
					EarthView::World::Spatial::Math::CVector3 getLODCenter();

ev_private:
					virtual ev_void traverse();
				protected:
	                ev_bool shouldCull();
					ev_real64 mSwitchInDistance;
					ev_real64 mSwitchOutDistance;
					EarthView::World::Spatial::Math::CVector3  mLODCenter;
				};
				/*FLT DOF节点*/
				class EV_Spatial3DEngine_DLL CDOFNode: public EarthView::World::Spatial3D::ModelManager::CFltBaseNode
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CDOFNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">分配的节点名称</param>
					/// <returns></returns>
					CDOFNode(_in const EVString &name,_in EarthView::World::Graphic::CSceneManager *ref_creator);
					~CDOFNode();
					virtual ev_void serializerAttributes(EarthView::World::Core::NameValuePairList& attributes);
					/// <summary>
					/// 更新节点
					/// 内部方法
					/// </summary>
					/// <param name="updateChildren">为真，逐级更新所有子节点</param>
					/// <param name="parentHasChanged">为true，表明父节点位置改变，子节点继承父节点变化</param>
					/// <returns></returns>
					//virtual ev_void _update(ev_bool updateChildren, ev_bool parentHasChanged);
					//
					void setMinHPR(const EarthView::World::Spatial::Math::CVector3& hpr) { mMinRotate = hpr;}
					const EarthView::World::Spatial::Math::CVector3& getMinHPR() const { return mMinRotate;}

					void setMaxHPR(const EarthView::World::Spatial::Math::CVector3& hpr) {mMaxRotate = hpr;}
					const EarthView::World::Spatial::Math::CVector3& getMaxHPR() const { return mMaxRotate;}

					void setIncrementHPR(const EarthView::World::Spatial::Math::CVector3& hpr) {mIncrementRotate = hpr;}
					const EarthView::World::Spatial::Math::CVector3& getIncrementHPR() const { return mIncrementRotate;}

					void setCurrentHPR(const EarthView::World::Spatial::Math::CVector3& hpr) {mCurrentRotate = hpr;mSrcCurrentRotate = hpr; }
					const EarthView::World::Spatial::Math::CVector3& getCurrentHPR() const {return mCurrentRotate;}


					void setMinTranslate(const EarthView::World::Spatial::Math::CVector3& translate) {mMinTranslate = translate; }
					const EarthView::World::Spatial::Math::CVector3& getMinTranslate() const { return mMinTranslate;}

					void setMaxTranslate(const EarthView::World::Spatial::Math::CVector3& translate) {mMaxTranslate = translate; }
					const EarthView::World::Spatial::Math::CVector3& getMaxTranslate() const { return mMaxTranslate;}

					void setIncrementTranslate(const EarthView::World::Spatial::Math::CVector3& translate) { mIncrementTranslate = translate; }
					const EarthView::World::Spatial::Math::CVector3& getIncrementTranslate() const { return mIncrementTranslate;}

					void setCurrentTranslate(const EarthView::World::Spatial::Math::CVector3& translate){ mCurrentTranslate = translate;mSrcCurrentTranslate =translate;}
					const EarthView::World::Spatial::Math::CVector3& getCurrentTranslate() const { return mCurrentTranslate;}


					void setMinScale(const EarthView::World::Spatial::Math::CVector3& scale) { mMinScale = scale;}
					const EarthView::World::Spatial::Math::CVector3& getMinScale() const { return mMinScale;}

					void setMaxScale(const EarthView::World::Spatial::Math::CVector3& scale) { mMaxScale = scale;}
					const EarthView::World::Spatial::Math::CVector3& getMaxScale() const { return mMaxScale;}

					void setIncrementScale(const EarthView::World::Spatial::Math::CVector3& scale) { mIncrementScale = scale;}
					const EarthView::World::Spatial::Math::CVector3& getIncrementScale() const { return mIncrementScale;}

					void setCurrentScale(const EarthView::World::Spatial::Math::CVector3& scale) { mCurrentScale = scale;mSrcCurrentScale = scale; }
					const EarthView::World::Spatial::Math::CVector3& getCurrentScale() const { return mCurrentScale;}
					

					void setPutMatrix(const EarthView::World::Spatial::Math::CMatrix4& put) { mPutMatrix = put;  }
					const EarthView::World::Spatial::Math::CMatrix4& getPutMatrix() const {return mPutMatrix;}

					void setInversePutMatrix(const EarthView::World::Spatial::Math::CMatrix4& inversePut) { mInversePutMatrix = inversePut; }
					const EarthView::World::Spatial::Math::CMatrix4& getInversePutMatrix() const {return mInversePutMatrix;}

					enum EVLimitationFlag
					{
						LF_SCALE_X,
						LF_SCALE_Y,
						LF_SCALE_Z,
						LF_ROTATION_X,
						LF_ROTATION_Y,
						LF_ROTATION_Z,
						LF_TRANSLATE_X,
						LF_TRANSLATE_Y,
						LF_TRANSLATE_Z
					};

					void setLimitationFlags(ev_uint64 flags) { mLimitFlags = flags;}
					ev_uint64 getLimitationFlags() const {return mLimitFlags;}

					void setLimitationFlags(EVLimitationFlag limitFlag,ev_bool flag);
					ev_bool getLimitationFlags(EVLimitationFlag limitFlag) const;

					//
					enum EVMultOrder
					{
						MO_PRH,
						MO_PHR,
						MO_HPR,
						MO_HRP,
						MO_RPH,
						MO_RHP
					};

					void setHPRMultOrder(EVMultOrder order) { mMultOrder = order; }
					EVMultOrder getHPRMultOrder() const { return mMultOrder;}

					void setAnimationOn(ev_bool do_animate);
					ev_bool getAnimationOn() const { return mAnimationOn; }

					ev_bool hasAnimation();
					ev_void setAnimationPause(ev_bool pause_animate){mAnimationPause = pause_animate;}
					ev_bool getAnimationPause() const {return mAnimationPause;}

					ev_void setAnimationLoop(ev_bool loop_animate){mAnimationLoop = loop_animate;}
					ev_bool getAnimationLoop() const {return mAnimationLoop;}
ev_private:
					virtual ev_void traverse();
				protected:
					static const ev_uint32 TRANSLATION_X_LIMIT_BIT  = 0x80000000u >> 0;
					static const ev_uint32 TRANSLATION_Y_LIMIT_BIT  = 0x80000000u >> 1;
					static const ev_uint32 TRANSLATION_Z_LIMIT_BIT  = 0x80000000u >> 2;
					static const ev_uint32 ROTATION_PITCH_LIMIT_BIT = 0x80000000u >> 3;
					static const ev_uint32 ROTATION_ROLL_LIMIT_BIT  = 0x80000000u >> 4;
					static const ev_uint32 ROTATION_YAW_LIMIT_BIT   = 0x80000000u >> 5;
					static const ev_uint32 SCALE_X_LIMIT_BIT        = 0x80000000u >> 6;
					static const ev_uint32 SCALE_Y_LIMIT_BIT        = 0x80000000u >> 7;
					static const ev_uint32 SCALE_Z_LIMIT_BIT        = 0x80000000u >> 8;

					virtual ev_bool computeLocalToWorldMatrix(EarthView::World::Spatial::Math::CMatrix4& matrix) const;

					virtual ev_bool computeWorldToLocalMatrix(EarthView::World::Spatial::Math::CMatrix4& matrix) const;
					void updateCurrentHPR(const EarthView::World::Spatial::Math::CVector3& hpr);
					void updateCurrentTranslate(const EarthView::World::Spatial::Math::CVector3& translate);
					void updateCurrentScale(const EarthView::World::Spatial::Math::CVector3& scale);
					void animate(float deltaTime);
					EarthView::World::Spatial::Math::CVector3 mMinTranslate;
					EarthView::World::Spatial::Math::CVector3 mMaxTranslate;
					EarthView::World::Spatial::Math::CVector3 mCurrentTranslate;
					EarthView::World::Spatial::Math::CVector3 mSrcCurrentTranslate;
					EarthView::World::Spatial::Math::CVector3 mIncrementTranslate;

					EarthView::World::Spatial::Math::CVector3 mMinScale;
					EarthView::World::Spatial::Math::CVector3 mMaxScale;
					EarthView::World::Spatial::Math::CVector3 mCurrentScale;
					EarthView::World::Spatial::Math::CVector3 mSrcCurrentScale;
					EarthView::World::Spatial::Math::CVector3 mIncrementScale;

					EarthView::World::Spatial::Math::CVector3 mMinRotate;
					EarthView::World::Spatial::Math::CVector3 mMaxRotate;
					EarthView::World::Spatial::Math::CVector3 mCurrentRotate;
					EarthView::World::Spatial::Math::CVector3 mSrcCurrentRotate;
					EarthView::World::Spatial::Math::CVector3 mIncrementRotate;

					EarthView::World::Spatial::Math::CVector3 mxAxis;
					EarthView::World::Spatial::Math::CVector3 myAxis;
					EarthView::World::Spatial::Math::CVector3 mzAxis;
					EarthView::World::Spatial::Math::CVector3 mLocalOrigin;

					ev_bool mLimitScaleX;
					ev_bool mLimitScaleY;
					ev_bool mLimitScaleZ;

					ev_bool mLimitRotationX;
					ev_bool mLimitRotationY;
					ev_bool mLimitRotationZ;

					ev_bool mLimitTranslateX;
					ev_bool mLimitTranslateY;
					ev_bool mLimitTranslateZ;
					ev_uint64 mLimitFlags;
					ev_bool mAnimationOn;
					ev_bool mAnimationPause;
					ev_bool mAnimationLoop;
					EVMultOrder mMultOrder;
					EarthView::World::Spatial::Math::CMatrix4 mPutMatrix;
					EarthView::World::Spatial::Math::CMatrix4 mInversePutMatrix;

					ev_uint32   mPreviousTraversalNumber;
					ev_int32          mPreviousTime;
					ev_uint16 mIncreasingFlags;
					EarthView::World::Graphic::CNode* mDofNode;
					EarthView::World::Graphic::CEntity* mDofCloneEntity;
					private:
			            ev_void createDofNode();
						ev_void createDofCloneEntity();
						ev_void destoryDofCloneEntity();
						ev_void fillDofSubEntity();
						ev_bool validCurrentDofData();
						ev_void resetCurrentValue();
						ev_void iniVar();
						ev_void iterateFillSubEntity(EarthView::World::Graphic::CNode* node);
						ev_map<EarthView::World::Graphic::CNode*,EarthView::World::Core::IntVector> msubEntityIndexMap;
						ev_bool mSubEntityIndexFilled;
				};
			}
		}
	}
}
#endif