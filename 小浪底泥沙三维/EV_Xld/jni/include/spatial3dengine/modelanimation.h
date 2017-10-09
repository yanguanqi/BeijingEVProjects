#ifndef MODELANIMATION_H
#define MODELANIMATION_H

#include "core/stdheaders.h"
#include "core/xml.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "graphic/framelistener.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"
#include "graphic/aniserializer.h"


namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CAnimation;
			class CAnimationState;
			class CSceneManager;
			class CNode;
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
				/// <summary>
				/// 动画的时间长度：由建模软件决定,同一个模型的所有部件的动画时间长度是一样的。
				/// 动画的有效时间段：它就是个时间段，包含一个起始时刻和一个终止时刻。模型中的部件在这个时间段里会有方位的变化,一般会比动画的总时间长度要短。
				/// 时间标记点：仅是一个名字，它对应某个时刻。
				/// 区间：由时间标记点和播放的段数来决定，它就是个时间段，包含一个起始时刻和一个终止时刻。如果段数为正n，那起始时刻就是标记点对应的时刻。
				/// 终止时刻为起始标记点后面第n个标记点对应的时刻。如果段数为负n，那么终止时刻为标记对应的时刻，起始时刻为终止时刻前面第n个标记点对应的时刻。
				/// NONE:动画的有效时间段与区间不相交。
				/// INSIDE：动画的有效时间段被区间包含，即有效时间段起始时刻比区间的起始时刻要大，且有效时间段的终止时刻比区间的终止时刻要小。
				/// CONTAIN:动画的有效时间段包含区间, 即有效时间段起始时刻比区间的起始时刻要小，且有效时间段的终止时刻比区间的终止时刻要大。
				/// BEGININSIDE: 动画的有效时间段的起始时刻在区间范围内,但是终止时刻不在区间范围内。
			    /// ENDINSIDE: 动画的有效时间段的终止时刻在区间范围内,但是起始时刻不在区间范围内。
				/// ALL:包含以上所有情况。
				/// </summary>
				enum TimeRelationShip
				{
					NONE = 1,
					INSIDE = 2,
					CONTAIN = 4,
					BEGININSIDE = 8,
					ENDINSIDE = 16,
					ALL = 31 
				};

				class EV_Spatial3DEngine_DLL CModelAnimationInfomation:public EarthView::World::Core::CBaseObject
				{
				public:

					enum AnimationType
					{
						MODELANIMATION = 0,
						NODEANIMATION,
						UNKNOWN
					};
					/// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <returns></returns>
					CModelAnimationInfomation();
					/// <summary>
					/// 判断时间段是否有效
					/// </summary>
					/// <param name="startTime">开始时间</param>
					/// <param name="endTime">结束时间</param>
					/// <returns>动画的有效时间与区间的关系</returns>
					EarthView::World::Spatial3D::ModelManager::TimeRelationShip checkRelationShip(_in ev_real64 startTime,_in ev_real64 endTime);

					EarthView::World::Graphic::CAnimationState* manimationState;

					ev_bool menable;

					ev_bool mpause;

					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType manimationType;

			        ev_real64 mvalidStartTime;

					ev_real64 mvalidEndTime;

				ev_private:
					
					CModelAnimationInfomation(_in EarthView::World::Core::CNameValuePairList* plist);
				};

				class EV_Spatial3DEngine_DLL CModelNodeAnimation:public EarthView::World::Core::CBaseObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CModelNodeAnimation(_in EarthView::World::Graphic::CSceneManager* ref_sceneManager,_in EarthView::World::Graphic::CNode* ref_node);

					virtual ~CModelNodeAnimation();
					/// <summary>
					/// 根据animationSeriailzer对象初始化模型的节点动画
					/// </summary>
					/// <param name="animationSeriailzer">动画的序列化对象</param>
					/// <returns></returns>
					void fromAnimationSeriailzer(_in const EarthView::World::Graphic::CAnimationSerializer& animationSeriailzer);
					/// <summary>
					/// 根据xmlElement对象初始化模型的节点动画
					/// </summary>
					/// <param name="xmlElement">动画的XML节点</param>
					/// <returns></returns>
					void fromXml(_in EarthView::World::Core::CXmlElement& xmlElement);
					/// <summary>
					/// 根据xmlElement对象解析出位置信息
					/// </summary>
					/// <param name="xmlElement">XML文档节点</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CVector3 getPostion(_in EarthView::World::Core::CXmlElement& xmlElement);
					/// <summary>
					/// 根据xmlElement对象解析出旋转信息
					/// </summary>
					/// <param name="xmlElement">XML文档节点</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CQuaternion getQuaternion(_in EarthView::World::Core::CXmlElement& xmlElement);
					/// <summary>
					/// 根据xmlElement对象解析出缩放信息
					/// </summary>
					/// <param name="xmlElement">XML文档节点</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CVector3 getScale(_in EarthView::World::Core::CXmlElement& xmlElement);
					/// <summary>
					/// 返回节点动画对象
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CAnimationState* getAnimationState()
					{
						return manimationState;
					}
					/// <summary>
					/// 返回节点动画的名称
					/// </summary>
					/// <returns></returns>
					const EVString& getAnimationName()
					{
						return manimationName;
					}

					/// <summary>
					/// 返回节点动画有效的开始时间
					/// </summary>
					/// <returns></returns>
					ev_real64 getValidStartTime() const;

					/// <summary>
					/// 返回节点动画有效的结束时间
					/// </summary>
					/// <returns></returns>
					ev_real64 getValidEndTime() const;

					/// <summary>
					/// 返回节点动画的节点
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CNode* getNode() const
					{
						return mnode;
					}

                ev_private:

					CModelNodeAnimation(_in EarthView::World::Core::CNameValuePairList* plist);

				protected:
					EarthView::World::Graphic::CSceneManager* msceneManager;
					EarthView::World::Graphic::CNode* mnode;
					EarthView::World::Graphic::CAnimation* manimation;
					EarthView::World::Graphic::CAnimationState* manimationState;
					EVString manimationName;
					ev_real64 mvalidStartTime;
					ev_real64 mvalidEndTime;
				};

				class EV_Spatial3DEngine_DLL CModelNodeAnimationList : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION(mList); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="pos">位置迭代器</param>
					/// <param name="t">元素值</param>
					/// <returns>插入元素后元素迭代器</returns>
					CModelNodeAnimationList::iterator insert(_in CModelNodeAnimationList::iterator pos, _in CModelNodeAnimation *const &t);
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelNodeAnimationList(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CModelNodeAnimationList();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void push_back(_in EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					ev_void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					ev_void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& operator[](_in ev_size_t n);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *const &operator[](_in ev_size_t n) const;
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation*& at(_in ev_size_t n);
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::CModelNodeAnimation *const &at(_in ev_size_t n) const;
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					ev_void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					ev_void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void clear();
				};

				class EV_Spatial3DEngine_DLL CModelAnimationInformationMap:public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelAnimationInformationMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CModelAnimationInformationMap();
					/// <summary>
					/// 增加动画集合元素
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <returns>成功增加true，否则false</returns>
					ev_bool push( _in const EVString &key, _in EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *const &val);
					/// <summary>
					/// 判断元素是否存在
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>存在true，否则false</returns>
					ev_bool exist( _in const EVString &key);
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*& operator[]( _in const EVString &key);
					/// <summary>
					/// 获得键对应的值
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>返回键对应的值</returns>
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation*& get( _in const EVString &key);
					/// <summary>
					/// 删除键对应的键值对
					/// </summary>
					/// <param name="key">键</param>
					/// <returns></returns>
					void erase( _in const EVString &key);
					/// <summary>
					/// 返回集合的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>集合的大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 清空集合
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
					/// <summary>
					/// 判断集合是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>集合为空返回true，否则false</returns>
					ev_bool empty() const;


					ev_bool getKey(_in ev_int32 index,_inout EVString& key) const;

					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* getValue(_in ev_int32 index,_inout ev_bool& succes ) const;
ev_private:
					typedef map<EVString, EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation *> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);			/// 保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					/// <summary>
					/// 集合插入元素
					/// </summary>
					/// <param name="val">值</param>
					/// <returns>插入后的键值对</returns>
					_Pairib insert( _in const value_type &val);
					/// <summary>
					/// 查找元素
					/// </summary>
					/// <param name="key">键</param>
					/// <returns>查找后返回对应迭代器</returns>
					iterator find( _in const EVString &key);
					const_iterator find( _in const EVString &key) const;
				private:
					InternalList mList;
				};

				class EV_Spatial3DEngine_DLL CModelAnimation:public EarthView::World::Graphic::CFrameListener
				{
ev_private:
					CModelAnimation(_in EarthView::World::Core::CNameValuePairList* plist);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CModelAnimation();

					virtual ~CModelAnimation();
					/// <summary>
					/// 使动画有效
					/// </summary>
					/// <returns></returns>
					void enableAnimation();
					/// <summary>
					/// 使动画无效
					/// </summary>
					/// <returns></returns>
					void disableAnimation();
					/// <summary>
					/// 添加模型带有的动画对象
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="animationState">动画对象</param>
					/// <param name="animationType">动画的类型</param>
					/// <returns></returns>
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation* addAnimationState(_in const EVString& animationName,_in EarthView::World::Graphic::CAnimationState* animationState,_in EarthView::World::Spatial3D::ModelManager::CModelAnimationInfomation::AnimationType animationType);
					/// <summary>
					/// 移除模型带有的动画对象
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <returns></returns>
					void removeAnimation(_in const EVString& animationName);
					/// <summary>
					///开始播放所有的动画
					/// </summary>
					/// <returns></returns>
					void startAllAnimation();
					/// <summary>
					///开始播放所有的动画
					/// </summary>
					/// <returns></returns>
					void startAllNodeAnimation();
					/// <summary>
					///停止播放所有的动画
					/// </summary>
					/// <returns></returns>
					void stopAllAnimation();
					/// <summary>
					///停止播放所有的节点动画
					/// </summary>
					/// <returns></returns>
					void stopAllNodeAnimation();
					/// <summary>
					///停止播放区间动画,并静止到某个时间
					/// </summary>
					/// <param name="timePosition">静止的时间的位置</param>
					/// <returns></returns>
					void stopRangeAnimation(_in Real timePosition);
					/// <summary>
					///暂停播放所有的动画
					/// </summary>
					/// <returns></returns>
					void pauseAllAnimation();
					/// <summary>
					///继续播放所有的动画
					/// </summary>
					/// <returns></returns>
					void continueAllAnimation();
					/// <summary>
					///设置动画是否循环播放
					/// </summary>
					/// <param name="loop">动画的循环标志</param>
					/// <returns></returns>
					void setAllAnimationLoop(_in ev_bool loop);
					/// <summary>
					///根据动画的名字开启某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <returns></returns>
					void startAnimation(_in const EVString& animationName);
					/// <summary>
					///根据动画的名字开启某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					void startAnimation(_in const EVString& animationName,_in ev_bool processChild);

					///// <summary>
					/////根据动画的名字开启某个动画
					///// </summary>
					///// <param name="animationName">动画的名字</param>
					///// <param name="disableOther">动画的循环标志</param>
					///// <returns></returns>
					//void startAnimation(_in const EVString& animationName,_in bool disableOther);
					/// <summary>
					///根据动画的名字停止某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <returns></returns>
					void stopAnimation(_in const EVString& animationName);
					/// <summary>
					///根据动画的名字停止某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					void stopAnimation(_in const EVString& animationName,_in ev_bool processChild);
					/// <summary>
					///根据动画的名字暂停某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <returns></returns>
					void pauseAnimation(_in const EVString& animationName);
					/// <summary>
					///根据动画的名字暂停某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					void pauseAnimation(_in const EVString& animationName,_in ev_bool processChild);
					/// <summary>
					///根据动画的名字继续某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <returns></returns>
					void continueAnimation(_in const EVString& animationName);
					/// <summary>
					///根据动画的名字继续某个动画
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					void continueAnimation(_in const EVString& animationName,_in ev_bool processChild);
					/// <summary>
					///根据动画的名字设置某个动画是否循播放
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="loop">动画的循环标志</param>
					/// <returns></returns>
					void setAnimationLoop(_in const EVString& animationName,_in bool loop);
					/// <summary>
					///根据动画的名字设置某个动画是否循播放
					/// </summary>
					/// <param name="animationName">动画的名字</param>
					/// <param name="loop">动画的循环标志</param>
					/// <param name="processChild">是否处理子动画。(只有节点动画具有子节点)</param>
					/// <returns></returns>
					void setAnimationLoop(_in const EVString& animationName,_in bool loop,_in ev_bool processChild);
					/// <summary>
					///处理帧事件
					/// </summary>
					/// <param name="evt">帧事件对象</param>
					/// <returns></returns>
					virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent &evt);
					/// <summary>
					///读取模型的节点动画
					/// </summary>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="node">父节点</param>
					/// <param name="xmlElement">动画的XML文档节点</param>
					/// <returns></returns>
					ev_void readNodeAnimation(_in EarthView::World::Graphic::CSceneManager* sceneManager,_in EarthView::World::Graphic::CNode* node,_in EarthView::World::Core::CXmlElement xmlElement);
					/// <summary>
					///读取模型的节点动画
					/// </summary>
					/// <param name="sceneManager">场景管理器</param>
					/// <param name="node">父节点</param>
					/// <param name="animation">动画的XML序列化对象</param>
					/// <returns></returns>
					ev_void readNodeAnimation(_in EarthView::World::Graphic::CSceneManager* sceneManager,_in EarthView::World::Graphic::CNode* node,_in const EarthView::World::Graphic::CAnimationSerializer& animation);
					/// <summary>
					///返回模型管理的动画状态
					/// </summary>
					/// <returns></returns>
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap getModelAnimationInformationMap();

					/// <summary>
					/// 设置是否夹取播放动画
					/// </summary>
					/// <param name="clip">是否夹取</param>
					/// <returns></returns>
					void setClipToRange(_in ev_bool clip);
					/// <summary>
					/// 返回是否夹取播放动画
					/// </summary>
					/// <returns></returns>
					ev_bool getClipToRange() const;
					/// <summary>
					/// 设置夹取播放动画的边界
					/// </summary>
					/// <param name="start">边界的起始时间</param>
					/// <param name="end">边界的终止时间</param>
					/// <returns></returns>
					void setRange(_in Real start,_in Real end);
					/// <summary>
					/// 设置夹取播放动画的前边界
					/// </summary>
					/// <param name="start">边界的起始时间</param>
					/// <returns></returns>
					void setRangeStart(_in Real start);
					/// <summary>
					/// 设置夹取播放动画的后边界
					/// </summary>
					/// <param name="end">边界的结束时间</param>
					/// <returns></returns>
					void setRangeEnd(_in Real end);
					/// <summary>
					/// 返回边界的起始点
					/// </summary>
					/// <returns></returns>
					Real getRangeStart() const;
					/// <summary>
					/// 返回边界的终止点
					/// </summary>
					/// <returns></returns>
					Real getRangeEnd() const;

					/// <summary>
					/// 设置关键帧标记队列
					/// </summary>
					/// <returns></returns>
					void setFrameTagList(_in EarthView::World::Graphic::CFrameTagList& frameTagList);
					/// <summary>
					/// 返回关键帧标记队列
					/// </summary>
					/// <returns></returns>
					EarthView::World::Graphic::CFrameTagList getFrameTagList() const;
					/// <summary>
					/// 设置节点动画的总长度
					/// </summary>
					/// <param name="timeLength">时间长度</param>
					/// <returns></returns>
					void setNodeAnimtionLength(_in Real timeLength);
					/// <summary>
					/// 返回节点动画的总长度
					/// </summary>
					/// <returns></returns>
					Real getNodeAnimtionLength() const;

				protected:
					ev_bool menable;
					ev_bool mpause;
					EarthView::World::Spatial3D::ModelManager::CModelAnimationInformationMap mModelAnimationInformation;
					CModelNodeAnimationList mmodelNodeAnimationList;
					//2013-10-13 add by zk
					bool mClipToRange;
					Real mRangeStart;
					Real mRangeEnd;
					EarthView::World::Graphic::CFrameTagList mFrameTagList;
					Real mNodeAnimationLength;
				ev_private:
					EVString mGUIDString;

				protected:
				    void getChildAnimationStateName(const EVString& animationName,ev_vector<EVString>& childNames,ev_real64& vaildTime);
				};
			}
		}
	}
}

#endif

