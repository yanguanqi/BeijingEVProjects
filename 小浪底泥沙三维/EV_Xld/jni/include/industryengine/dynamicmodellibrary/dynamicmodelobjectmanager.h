#ifndef __DYNAMICMODELOBJECTMANAGER_H__
#define __DYNAMICMODELOBJECTMANAGER_H__

#include "industryengine/industrygraphic/polylineFeaturemanager.h"
#include "industryengine/dynamicmodellibrary/dynamicmodelobject.h"
#include "industryengine/dynamicmodellibrary/dynamicmodelmanagerlistener.h"
#include "industryengine/dynamicmodellibrary/dynamiclodstrategy.h"
#include "graphic/scenemanager.h"
#include "spatial3dengine/modelobjectfactory.h"
#include "graphic/scenenode.h"
#include "industryengine/dynamicmodellibrary/dynamiccameralockhandler.h"
#include "color/rgbcolor.h"
#include "industryengine/industrygraphic/scutcheontextlistener.h"
#include "core/thread.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			class CDynamicModelManagerFrameListener;
			class CDynamicModelManagerCameraListener;
			class CUpdateModeResourceThreadFunc;
			/// <summary>
			/// 动态目标管理器
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicModelObjectManager : public EarthView::World::Core::CAllocatedObject
			{
				/// <summary>
				/// 动态目标管理器场景监听
				/// </summary>
				friend class CDynamicModelManagerListener;
				friend class CUpdateModeResourceThreadFunc;
				friend class CDynamicModelObject;
				friend class CDynamicModelManagerFrameListener;
				friend class CDynamicModelManagerCameraListener;
			public:
				/// <summary>
				/// 动态目标集合
				/// </summary>
				class EV_DYNAMICMODELLIBRARY_DLL  CDynamicModelObjectMap : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 动态目标哈希表构造函数
					/// </summary>
					CDynamicModelObjectMap() {}
					/// <summary>
					/// 压入指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <param name="val">值对象</param>
					/// <returns>是否成功</returns>
					ev_bool push(const EVString &key, EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *const &val)
					{
						if(mList.find(key) == mList.end())
						{
							mList[key] = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *)val;
							return true;
						}
						else
						{
							return false;
						}
					}
					/// <summary>
					/// 获取是否存在指定键值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>是否存在指定键值对象</returns>
					ev_bool exist(const EVString &key)
					{
						return mList.find(key) != mList.end();
					}
					/// <summary>
					/// 获取指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>指定键值对象</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*& operator[](const EVString &key)
					{
						return get(key);
					}
					/// <summary>
					/// 获取指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					/// <returns>指定键值对象</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*& get(const EVString &key)
					{
						return mList[key];
					}
					/// <summary>
					/// 移除指定键的值对象
					/// </summary>
					/// <param name="key">关键字</param>
					void erase(const EVString &key)
					{
						if(exist(key))
							mList.erase(key);
					}
					/// <summary>
					/// 返回对象个数
					/// </summary>
					/// <returns>对象个数</returns>
					ev_size_t size() const
					{
						return mList.size();
					}
					/// <summary>
					/// 清除所有对象
					/// </summary>
					void clear()
					{
						mList.clear();
					}
					/// <summary>
					/// 获取集合是否为空
					/// </summary>
					/// <returns>是否为空</returns>
					ev_bool empty() const
					{
						return mList.empty();
					}


ev_private:
					CDynamicModelObjectMap(EarthView::World::Core::CNameValuePairList *pList) {}
ev_private:
					typedef map<EVString, EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::mapped_type mapped_type;
					typedef InternalList::key_type key_type;
					typedef InternalList::value_type value_type;
					typedef pair<iterator, bool> _Pairib;
					RESERVE_CONTAINER_FUNCTION_MAP(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					_Pairib insert(const value_type &val)
					{
						return mList.insert(val);
					}
					iterator find(const EVString &key)
					{
						return mList.find(key);
					}
					const_iterator find(const EVString &key) const
					{
						return mList.find(key);
					}
				private:
					InternalList mList;
				};
				/// <summary>
				/// 动态目标键值对
				/// </summary>
				class EV_DYNAMICMODELLIBRARY_DLL CDynamicModelObjectIteratorPair : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 键值
					/// </summary>
					EVString first;
					/// <summary>
					/// 动态目标对象
					/// </summary>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *second;
					/// <summary>
					/// 动态目标键值对构造函数
					/// </summary>
					CDynamicModelObjectIteratorPair();
ev_private:
					/// <summary>
					/// 动态目标键值对构造函数
					/// </summary>
					/// <param name="pList">构造参数</param>
					CDynamicModelObjectIteratorPair(_in EarthView::World::Core::CNameValuePairList *pList);
				};
				/// <summary>
				/// 动态目标遍历对象
				/// </summary>
				class EV_DYNAMICMODELLIBRARY_DLL CDynamicModelObjectIterator : public EarthView::World::Core::CAllocatedObject
				{
ev_private:
					typedef EarthView::World::Core::CMapIterator<EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap> InternalIterator;
					typedef InternalIterator::const_iterator const_iterator;
					typedef InternalIterator::iterator iterator;
					typedef InternalIterator::iterator IteratorType;
					typedef InternalIterator::PairType PairType;
					typedef InternalIterator::KeyType KeyType;
					typedef InternalIterator::ValueType ValueType;
					typedef InternalIterator::PointerType PointerType;
					CDynamicModelObjectIterator(const_iterator first, const_iterator last);
					~CDynamicModelObjectIterator();
					InternalIterator::KeyType peekNextKey() const;
					InternalIterator::ValueType peekNextValue (  ) const;
					const InternalIterator::PointerType peekNextValuePtr ();
					InternalIterator::ValueType getNext();

					const IteratorType &begin();
					IteratorType &current();
					const IteratorType &end();
ev_private:
					/// <summary>
					/// 赋值符号"="的重载
					/// </summary>
					/// <param name="other">EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator类的引用</param>
					/// <returns>返回赋值后的引用</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator &operator=(_in const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator &other);
ev_private:
					/// <summary>
					/// 动态目标遍历对象构造函数
					/// </summary>
					/// <param name="pList">构造参数</param>
					CDynamicModelObjectIterator(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 动态目标遍历对象构造函数
					/// </summary>
					/// <param name="lst">构造参数</param>
					CDynamicModelObjectIterator(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap &lst);
					/// <summary>
					/// 动态目标遍历对象构造函数
					/// </summary>
					/// <param name="other">构造参数</param>
					CDynamicModelObjectIterator(const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator &other);
					/// <summary>
					/// 是否存在下一个元素
					/// </summary>
					/// <param name="lst">构造参数</param>
					/// <returns>true为存在，false为不存在</returns>
					ev_bool hasMoreElements ( ) const;
					/// <summary>
					/// 移动到下一个元素
					/// </summary>
					/// <param name="lst">构造参数</param>
					void moveNext (  );
					/// <summary>
					/// 获取下一个元素键值
					/// </summary>
					/// <returns>下一个元素键值</returns>
					ev_uint16 nextKey() const;
					/// <summary>
					/// 获取下一个元素
					/// </summary>
					/// <returns>下一个元素</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *nextValue() const;
					/// <summary>
					/// 获取下一个元素智能指针
					/// </summary>
					/// <returns>下一个元素智能指针</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject **nextValuePtr();
					/// <summary>
					/// 获取下一个元素
					/// </summary>
					/// <returns>下一个元素</returns>
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *next();
					/// <summary>
					/// 获取起始对象键值对
					/// </summary>
					/// <returns>起始对象键值对</returns>
					const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair &getBegin();
					/// <summary>
					/// 获取终止对象键值对
					/// </summary>
					/// <returns>终止对象键值对</returns>
					const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair &getEnd();
					/// <summary>
					/// 获取当前对象键值对
					/// </summary>
					/// <returns>当前对象键值对</returns>
					const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair &getCurrent();
				private:
					InternalIterator *mIterator;
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair mBeginPair;
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair mCurrentPair;
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair mEndPair;
					EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject *mptr;
					InternalIterator::ValueType mvt;
				};
				/// <summary>
				/// 动态目标管理器构造函数
				/// </summary>
				/// <param name="name">唯一标识名称</param>
				/// <param name="ref_sceneManager">场景管理器</param>
				/// <param name="ref_globeControl">三维场景核心控件</param>
				CDynamicModelObjectManager(_in const EVString& name,_in EarthView::World::Graphic::CSceneManager* ref_sceneManager,_in EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globeControl); 
				/// <summary>
				/// 动态目标管理器析构函数
				/// </summary>
				virtual ~CDynamicModelObjectManager(); 
				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshName">模型Mesh名称</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <returns>是否添加成功</returns>
				ev_bool addDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource,const EVString& name,const EVString& meshName,EarthView::World::Spatial3D::ModelType modelType,_in ev_bool immediateRefresh); 
				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshName">模型Mesh名称</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <param name="onLineModeEnable">是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）</param>
				/// <returns>是否添加成功</returns>
				ev_bool addDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource,const EVString& name,const EVString& meshName,EarthView::World::Spatial3D::ModelType modelType,_in ev_bool immediateRefresh,_in ev_bool onLineModeEnable); 
				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshName">模型Mesh名称</param>
				/// <param name="modelType">模型类型</param>
				/// <returns>是否添加成功</returns>
				ev_bool addDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource,const EVString& name,const EVString& meshName,EarthView::World::Spatial3D::ModelType modelType); 
				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshIndex">模型索引号</param>
				/// <param name="modelType">模型类型</param>
				/// <returns>是否添加成功</returns>
				ev_bool addDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource,const EVString& name,const ev_uint32& meshIndex,EarthView::World::Spatial3D::ModelType modelType);
				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshIndex">模型索引号</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <param name="onLineModeEnable">是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）</param>
				/// <returns>是否添加成功</returns>
				ev_bool addDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource,const EVString& name,const ev_uint32& meshIndex,EarthView::World::Spatial3D::ModelType modelType,_in ev_bool immediateRefresh,_in ev_bool onLineModeEnable);
				/// <summary>
				/// 添加动态目标对象
				/// </summary>
				/// <param name="ref_modelDataSource">模型数据源,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="meshIndex">模型索引号</param>
				/// <param name="modelType">模型类型</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <returns>是否添加成功</returns>
				ev_bool addDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_modelDataSource,const EVString& name,const ev_uint32& meshIndex,EarthView::World::Spatial3D::ModelType modelType,_in ev_bool immediateRefresh);
				/// <summary>
				/// 由子部件生成动态目标对象
				/// </summary>
				/// <param name="ref_modelObject">源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <returns>是否添加成功</returns>
				ev_bool addSubEntityDynamicModelObject(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject,const EVString& name,EarthView::World::Core::IntVector subEntityIndex);
				/// <summary>
				/// 由子部件生成动态目标对象
				/// </summary>
				/// <param name="ref_modelObject">源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <returns>是否添加成功</returns>
				ev_bool addSubEntityDynamicModelObject(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject,const EVString& name,EarthView::World::Core::IntVector subEntityIndex,_in ev_bool immediateRefresh);
				/// <summary>
				/// 由子部件生成动态目标对象
				/// </summary>
				/// <param name="ref_modelObject">源动态目标对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				/// <param name="name">动态目标对象名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="immediateRefresh">是否立即刷新模型资源</param>
				/// <param name="onLineModeEnable">是否启用在线模式（在线模式会定时清除冗余的轨迹点，优化内存管理，不可以进行动画回放功能）</param>
				/// <returns>是否添加成功</returns>
				ev_bool addSubEntityDynamicModelObject(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject,const EVString& name,EarthView::World::Core::IntVector subEntityIndex,_in ev_bool immediateRefresh,_in ev_bool onLineModeEnable);
				/// <summary>
				/// 移除动态目标对象
				/// </summary>
				/// <param name="name">动态目标对象名称</param>
				/// <returns>是否移除成功</returns>
				ev_bool removeDynamicModelObject(const EVString& name); 
				/// <summary>
				/// 获取动态目标对象
				/// </summary>
				/// <param name="name">动态目标对象名称</param>
				/// <returns>动态目标对象</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* getDynamicModelObject(const EVString& name);
				/// <summary>
				/// 是否存在动态目标对象
				/// </summary>
				/// <param name="name">动态目标对象名称</param>
				/// <returns>是否存在动态目标对象</returns>
				ev_bool existDynamicModelObject(const EVString& name);
				/// <summary>
				/// 设置指定名称的动目标是否获取动目标朝向
				/// </summary>
				/// <param name="value">是否获取模型朝向</param>
				ev_void setDynamicModelObjectEnabledToGetHeading(const EVString& name, const ev_bool& isEnable);

				/// <summary>
				/// 获取指定名称的动目标是否获取动目标朝向
				/// </summary>
				/// <returns>是否获取模型朝向</returns>
				ev_bool getDynamicModelObjectEnabledToGetHeading(const EVString& name);

				/// <summary>
				/// 设置自定义动态目标场景监听对象
				/// </summary>
				/// <param name="ref_listener">自定义动态目标场景监听对象,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void setDynamicModelManagerListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener* ref_listener);
				/// <summary>
				/// 移除自定义动态目标场景监听对象
				/// </summary>
				ev_void removeDynamicModelManagerListener();
				/// <summary>
				/// 向指定名称动态目标对象添加一组轨迹动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="controlPoints">一组轨迹动画控制点</param>
				ev_void addDynamicModelGlobeTrackPoints(const EVString& name, EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet& controlPoints);
				/// <summary>
				/// 添加一组特定关键帧时间的轨迹动画关键控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="controlPoints">一组控制点</param>
				void addDynamicModelGlobeNodeTrackPoints(const EVString& name,EarthView::World::Spatial3D::CGlobeControlPointMap& controlPoints); 
				/// <summary>
				/// 清除指定名称动态目标对象的所有轨迹动画关键控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void clearAllDynamicModelGlobeNodeTrackPoints(const EVString& name);
				/// <summary>
				/// 向指定名称动态目标对象添加一组相机动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="cameraanimations">一组相机动画控制点</param>
				ev_void addDynamicModelCameraTrackPoints(const EVString& name, EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet& cameraanimations);
				/// <summary>
				/// 向指定名称动态目标对象追加一个轨迹动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="controlPoint">轨迹动画控制点</param>
				ev_void addDynamicModelGlobeTrackPoint(const EVString& name, EarthView::World::Spatial3D::CGlobeControlPoint controlPoint);
				/// <summary>
				/// 向指定名称动态目标对象追加一个相机动画控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="cameraanimation">相机动画控制点</param>
				ev_void addDynamicModelCameraTrackPoints(const EVString& name, EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam cameraanimation);
				/// <summary>
				/// 清除指定名称动态目标对象的所有相机动画关键控制点
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void clearAllDynamicModelCameraNodeTrackPoints(const EVString& name);
				/// <summary>
				/// 设置指定名称动态目标对象的航迹可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">航迹是否可见</param>
				ev_void setTrackTrailVisible(const EVString& name,const ev_bool& visible);
				/// <summary>
				/// 获取指定名称动态目标对象的航迹可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>航迹是否可见</returns>
				ev_bool getTrackTrailVisible(const EVString& name);
				/// <summary>
				/// 设置指定名称动态目标对象的航迹点显示数目
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="number">航迹点显示数目</param>
				ev_void setTrackTrailDisplayPointNum(const EVString& name,const ev_int32& number);
				/// <summary>
				/// 获取指定名称动态目标对象的航迹点显示数目
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>航迹点显示数目</returns>
				ev_int32 getTrackTrailDisplayPointNum(const EVString& name);
				/// <summary>
				/// 设置指定名称动态目标对象的航迹显示风格
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="trackTrailSymbol">显示风格</param>
				ev_void setTrackTrailSymbol(const EVString& name, EarthView::World::Spatial::Display::ISymbol* trackTrailSymbol);
				/// <summary>
				/// 设置指定名称动态目标对象的航迹是否显示为视高线
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="isHighLine">是否显示为视高线</param>
				ev_void setIsTrackTrailHighLine(const EVString& name, const ev_bool& isHighLine);
				/// <summary>
				/// 获取指定名称动态目标对象的航迹是否显示为视高线
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否显示为视高线</returns>
				ev_bool getIsTrackTrailHighLine(const EVString& name);
				/// <summary>
				/// 设置指定名称动态目标对象的视高线显示颜色
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="staticHighLineColor">静态部分的颜色</param>
				/// <param name="dynamicHighLineColor">动态部分的颜色</param>
				ev_void setHighLineColorInfo(const EVString& name,EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor,EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor);
				/// <summary>
				/// 设置指定名称动态目标对象的视高线间距
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="highLineDistance">间距</param>
				ev_void setHighLineDistance(const EVString& name,const ev_real64& highLineDistance);
				/// <summary>
				/// 获取指定名称动态目标对象的视高线间距
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>视高线间距</returns>
				Real getHighLineDistance(const EVString& name);
				/// <summary>
				/// 获取指定名称动态目标对象的航迹显示风格
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>显示风格</returns>
				EarthView::World::Spatial::Display::ISymbol const* getTrackTrailSymbol(const EVString& name); 
				/// <summary>
				/// 设置指定名称动态目标对象的航迹参考坐标系
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="ref_sr">参考坐标系,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void setTrackTrailSpatialReference(const EVString& name,EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				/// <summary>
				/// 获取指定名称动态目标对象的航迹参考坐标系
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>参考坐标系</returns>
				EarthView::World::Spatial::Geometry::ISpatialReference const* getTrackTrailSpatialReference(const EVString& name);
				/// <summary>
				/// 设置航迹显示模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="displayMode">航迹显示模式</param>
				ev_void setTrackTrailDisplayMode(const EVString& name,EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode displayMode);
				/// <summary>
				/// 获取航迹显示模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>航迹显示模式</returns>
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode getTrackTrailDisplayMode(const EVString& name);
				/// <summary>
				/// 设置指定名称动态目标对象的标牌可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">标牌可见性</param>
				ev_void setScutcheonVisible(const EVString& name,const ev_bool& visible);
				/// <summary>
				/// 获取指定名称动态目标对象的标牌可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>标牌可见性</returns>	
				ev_bool getScutcheonVisible(const EVString& name) ;

				/// <summary>
				/// 设置标牌字体颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="textColor">标牌字体颜色</param>
				ev_void setScutcheonTextColor(const EVString& modelName,const EarthView::World::Graphic::CColourValue& textColor);
				/// <summary>
				/// 获取标牌字体颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌字体颜色</returns>	
				EarthView::World::Graphic::CColourValue getScutcheonTextColor(const EVString& modelName);
				/// <summary>
				/// 设置标牌描述信息
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="caption">标牌描述信息</param>
				ev_void setScutcheonCaption(const EVString& modelName,const EVString& caption);
				/// <summary>
				/// 获取标牌描述信息
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌描述信息</returns>	
				EVString getScutcheonCaption(const EVString& modelName);
				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="size">标牌字体大小</param>
				ev_void setScutcheonFontSize(const EVString& modelName,ev_byte size);
				/// <summary>
				/// 设置标牌字体大小
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌字体大小</returns>	
				ev_byte getScutcheonFontSize(const EVString& modelName);
				/// <summary>
				/// 设置标牌字体名称
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="fontName">标牌字体名称</param>
				ev_void setScutcheonFontName(const EVString& modelName,EVString fontName);
				/// <summary>
				/// 获取标牌字体名称
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌字体名称</returns>	
				EVString getScutcheonFontName(const EVString& modelName);
				/// <summary>
				/// 获取标牌连接线颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌连接线颜色</returns>	
				EarthView::World::Graphic::CColourValue getScutcheonLineColor(const EVString& modelName);
				/// <summary>
				/// 设置标牌连接线颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="lineColor">标牌连接线颜色</param>
				ev_void setScutcheonLineColor(const EVString& modelName, const EarthView::World::Graphic::CColourValue& lineColor);
				/// <summary>
				/// 获取标牌边框颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌边框颜色</returns>	
				EarthView::World::Graphic::CColourValue getScutcheonFrameColor(const EVString& modelName);
				/// <summary>
				/// 设置标牌边框颜色
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="boardColor">标牌边框颜色</param>
				ev_void setScutcheonFrameColor(const EVString& modelName, const EarthView::World::Graphic::CColourValue& frameColor);

				/// <summary>
				/// 获取标牌延伸线长度
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <returns>标牌延伸线长度</returns>	
				EarthView::World::Spatial::Math::CVector3 getScutcheonLineLength(const EVString& modelName);

				/// <summary>
				/// 设置标牌延伸线长度
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="lineLength">标牌延伸线长度</param>
				ev_void setScutcheonLineLength(const EVString& modelName, const EarthView::World::Spatial::Math::CVector3& lineLength);

				/// <summary>
				/// 设置标牌纹理材质名称
				/// </summary>
				/// <param name="modelName">动态目标名称</param>
				/// <param name="matName">材质名称</param>
				ev_void setScutcheonTextureMatName(const EVString& modelName, const EVString& matName);
				/// <summary>
				/// 设置指定名称动态目标对象的粒子可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">粒子可见性</param>
				ev_void setParticleVisible(const EVString& name,const ev_bool& visible);
				/// <summary>
				/// 获取指定名称动态目标对象的粒子可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>粒子可见性</returns>	
				ev_bool getParticleVisible(const EVString& name) ;
				/// <summary>
				/// 设置指定名称动态目标对象的飘带可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">飘带可见性</param>
				ev_void setRibbonTrailVisible(const EVString& name,const ev_bool& visible);
				/// <summary>
				/// 获取指定名称动态目标对象的飘带可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>飘带可见性</returns>	
				ev_bool getRibbonTrailVisible(const EVString& name) ;
				/// <summary>
				/// 获取动态目标管理对象绑定的节点
				/// </summary>
				/// <returns>绑定的节点</returns>
				EarthView::World::Graphic::CSceneNode* getSceneNode() const;   
				/// <summary>
				/// 锁定指定名称动态目标对象的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void lockGlobeNodeTrackModelObject(const EVString& name);
				/// <summary>
				/// 解锁指定名称动态目标对象的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void unlockGlobeNodeTrackModelObject();
				/// <summary>
				/// 设置指定名称动态目标对象的锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="distance">锁定观察距离</param>
				ev_void setLockDistance(const EVString& name,const ev_real64& distance);
				/// <summary>
				/// 获取指定名称动态目标对象的锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>锁定观察距离</returns>	
				ev_real64 getLockDistance(const EVString& name);
				/// <summary>
				/// 设置指定名称动态目标对象的锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="tilt">锁定观察俯仰角</param>
				ev_void setLockTilt(const EVString& name,const EarthView::World::Spatial::Math::CDegree& tilt);
				/// <summary>
				/// 获取指定名称动态目标对象的锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>锁定观察俯仰角</returns>	
				EarthView::World::Spatial::Math::CDegree getLockTilt(const EVString& name);
				/// <summary>
				/// 设置是否锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="locked">是否锁定</param>
				ev_void setIsLockDistance(const EVString& name,const ev_bool& locked);
				/// <summary>
				/// 获取是否锁定观察距离
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否锁定</returns>	
				ev_bool getIsLockDistance(const EVString& name);
				/// <summary>
				/// 设置是否锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="locked">是否锁定</param>
				ev_void setIsLockTilt(const EVString& name,const ev_bool& locked);
				/// <summary>
				/// 获取是否锁定观察俯仰角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否锁定</returns>	
				ev_bool getIsLockTilt(const EVString& name);
				/// <summary>
				/// 设置是否锁定观察偏航角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="locked">是否锁定</param>
				ev_void setIsLockHeading(const EVString& name,const ev_bool& locked);
				/// <summary>
				/// 获取是否锁定观察偏航角
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否锁定</returns>	
				ev_bool getIsLockHeading(const EVString& name);
				/// <summary>
				/// 获取当前锁定的动态目标对象
				/// </summary>
				/// <returns>当前锁定的动态目标对象</returns>	
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject const* getLockedGlobeNodeTrackModelObject() const;
				/// <summary>
				/// 获取当前的相机动画对象
				/// </summary>
				/// <returns>相机动画对象</returns>	
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject const* getCameraNodeTrackModelObject() const;
				/// <summary>
				/// 设置相机动画局部观察中心位置
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="localCenter">局部观察中心位置</param>
				ev_void setCameraNodeTrackLocalCenter(const EVString& name,const EarthView::World::Spatial::Math::CVector3& localCenter);
				/// <summary>
				/// 获取相机动画局部观察中心位置
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>局部观察中心位置</returns>	
				EarthView::World::Spatial::Math::CVector3 getCameraNodeTrackLocalCenter(const EVString& name);
				/// <summary>
				/// 设置LOD策略
				/// </summary>
				/// <param name="lodStrategy">LOD策略,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void setLodStrategy(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* ref_lodStrategy); 
				/// <summary>
				/// 获取LOD策略
				/// </summary>
				/// <returns>LOD策略</returns>	
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* getLodStrategy() const;
				/// <summary>
				/// 设置是否启用LOD策略
				/// </summary>
				/// <param name="enable">是否启用</param>
				ev_void setLodStrategyEnable(const ev_bool& enable);
				/// <summary>
				/// 获取是否启用LOD策略
				/// </summary>
				/// <returns>是否启用</returns>	
				ev_bool getLodStrategyEnable()const;
				/// <summary>
				/// 设置动态目标的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="visible">可见性</param>
				ev_void setDynamicModelObjectVisible(const EVString& name,const ev_bool visible);
				/// <summary>
				/// 获取动态目标的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>可见性</returns>	
				ev_bool getDynamicModelObjectVisible(const EVString& name);
				/// <summary>
				/// 设置子部件的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityVector">子部件索引集合</param>
				/// <param name="visible">可见性</param>
				ev_void setSubEntityVisible(const EVString& name,const EarthView::World::Core::IntVector& subEntityVector,const ev_bool& visible);
				/// <summary>
				/// 获取子部件的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引</param>
				/// <returns>可见性</returns>	
				ev_bool getSubEntityVisible(const EVString& name,const ev_int32& subEntityIndex);
				/// <summary>
				/// 设置子部件绑定特效的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityVector">子部件索引集合</param>
				/// <param name="visible">可见性</param>
				ev_void setSubEntityAllParticleVisible(const EVString& name,const EarthView::World::Core::IntVector& subEnetityVector,const ev_bool& visible);
				/// <summary>
				/// 设置子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityVector">子部件索引集合</param>
				/// <param name="visible">可见性</param>
				ev_void setSubEntityAllRibbonTrailVisible(const EVString& name,const EarthView::World::Core::IntVector& subEnetityVector,const ev_bool& visible);
				/// <summary>
				/// 设置子部件绑定特效的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="particleAliasName">特效别名</param>
				/// <param name="visible">可见性</param>	
				ev_void setSubEntityParticleVisible(const EVString& name,const ev_int32& subEntityIndex,const EVString& particleAliasName,const ev_bool& visible);
				/// <summary>
				/// 获取子部件绑定特效的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="particleAliasName">特效别名</param>
				/// <returns>可见性</returns>	
				ev_bool getSubEntityParticleVisible(const EVString& name,const ev_int32& subEntityIndex,const EVString& particleAliasName);
				/// <summary>
				/// 设置子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="ribbonTrailName">飘带名称</param>
				/// <param name="visible">可见性</param>
				ev_void setSubEntityAllRibbonTrailVisible(const EVString& name,const ev_int32& subEntityIndex,const EVString& ribbonTrailName,const ev_bool& visible);
				/// <summary>
				/// 设置子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="ribbonTrailName">飘带名称</param>
				/// <param name="visible">可见性</param>	
				ev_void setSubEntityRibbonTrailVisible(const EVString& name,const ev_int32& subEntityIndex,const EVString& ribbonTrailName,const ev_bool& visible);
				/// <summary>
				/// 获取子部件绑定飘带的可见性
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <param name="ribbonTrailName">飘带名称</param>
				/// <returns>可见性</returns>	
				ev_bool getSubEntityRibbonTrailVisible(const EVString& name,const ev_int32& subEntityIndex,const EVString& ribbonTrailName);
				/// <summary>
				/// 获取子部件绑定的飘带对象
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引</param>
				/// <returns>飘带对象</returns>	
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap getSubEntityBindedRibbonTrailObjectMap(const EVString& name,const ev_int32& subEntityIndex);
				/// <summary>
				/// 获取子部件绑定的粒子特效对象
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="subEntityIndex">子部件索引集合</param>
				/// <returns>粒子特效对象</returns>	
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap getSubEntityBindedParticleObjectMap(const EVString& name,const ev_int32& subEntityIndex);
				/// <summary>
				/// 获取子部件数目
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>子部件数目</returns>	
				ev_int32 getSubEntityCount(const EVString& name);
				/// <summary>
				/// 获取绑定特效的子部件索引集合
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>绑定特效的子部件索引集合</returns>	
				EarthView::World::Core::IntVector getBindedParticleSubEntityIndexVector(const EVString& name);
				/// <summary>
				/// 设置管理器的可见性
				/// </summary>
				/// <param name="visible">可见性</param>
				ev_void setVisible(ev_bool visible);
				/// <summary>
				/// 获取管理器的可见性
				/// </summary>
				/// <returns>可见性</returns>
				ev_bool getVisible()const;
				/// <summary>
				/// 设置轨迹动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				ev_void setGlobeNodeTrackCurrentFrameTime(const EVString& name,const ev_real64& curKeyFrameTime);
				/// <summary>
				/// 获取轨迹动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>当前关键帧时间</returns>
				ev_real64 getGlobeNodeTrackCurrentFrameTime(const EVString& name);
				/// <summary>
				/// 设置相机动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				ev_void setCameraNodeTrackCurrentFrameTime(const EVString& name,const ev_real64& curKeyFrameTime);
				/// <summary>
				/// 获取相机动画当前帧的时间
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>当前关键帧时间</returns>
				ev_real64 getCameraNodeTrackCurrentFrameTime(const EVString& name);
				/// <summary>
				/// 开始所有动态目标的轨迹动画
				/// </summary>
				ev_void startAllGlobeNodeTrack();
				/// <summary>
				/// 停止所有动态目标的轨迹动画
				/// </summary>
				ev_void stopAllGlobeNodeTrack();
				/// <summary>
				/// 开始指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void startGlobeNodeTrack(const EVString& name);
				/// <summary>
				/// 停止指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void stopGlobeNodeTrack(const EVString& name);
				/// <summary>
				/// 暂停指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void pauseGlobeNodeTrack(const EVString& name);
				/// <summary>
				/// 继续指定名称动态目标的轨迹动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void continueGlobeNodeTrack(const EVString& name);
				/// <summary>
				/// 开始指定名称动态目标的相机动画
				/// </summary>
				/// <param name="name">动态目标名称</param>
				ev_void startCameraNodeTrack(const EVString& name);
				/// <summary>
				/// 停止相机动画
				/// </summary>
				ev_void stopCameraNodeTrack();
				/// <summary>
				/// 暂停相机动画
				/// </summary>
				ev_void pauseCameraNodeTrack();
				/// <summary>
				/// 继续相机动画
				/// </summary>
				ev_void continueCameraNodeTrack();
				/// <summary>
				/// 设置轨迹动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="loop">是否循环</param>
				ev_void setGlobeNodeTrackIsLoop(const EVString& name,const ev_bool& loop);
				/// <summary>
				/// 获取轨迹动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否循环</returns>
				ev_bool getGlobeNodeTrackIsLoop(const EVString& name);
				/// <summary>
				/// 设置轨迹动画高度模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="altitudeMode">高度模式</param>
				virtual ev_void setGlobeNodeTrackAltitudeMode(const EVString& name,EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode);
				/// <summary>
				/// 获取轨迹动画高度模式
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>高度模式</returns>
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getGlobeNodeTrackAltitudeMode(const EVString& name);
				/// <summary>
				/// 设置相机动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="loop">是否循环</param>
				ev_void setCameraNodeTrackIsLoop(const EVString& name,const ev_bool& loop);
				/// <summary>
				/// 获取相机动画是否循环播放
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否循环</returns>
				ev_bool getCameraNodeTrackIsLoop(const EVString& name);
				/// <summary>
				/// 设置模型显示比例
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="scale">模型显示比例</param>
				ev_void setModelScale(const EVString& name,const EarthView::World::Spatial::Math::CVector3& scale);
				/// <summary>
				/// 获取模型显示比例
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>模型显示比例</returns>
				EarthView::World::Spatial::Math::CVector3 getModelScale(const EVString& name);
				/// <summary>
				/// 设置模型旋转角度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="rotateDegree">旋转角度</param>
				ev_void setModelRotateDegree(const EVString& name,const EarthView::World::Spatial::Math::CVector3& rotateDegree);
				/// <summary>
				/// 获取模型旋转角度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>旋转角度</returns>
				EarthView::World::Spatial::Math::CVector3 getModelRotateDegree(const EVString& name);
				/// <summary>
				/// 设置模型局部坐标系偏移量
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="offsetVector">局部坐标系偏移量</param>
				ev_void setModelLocalOffsetVector(const EVString& name,const EarthView::World::Spatial::Math::CVector3& offsetVector);
				/// <summary>
				/// 获取模型局部坐标系偏移量
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>局部坐标系偏移量</returns>
				EarthView::World::Spatial::Math::CVector3 getModelLocalOffsetVector(const EVString& name);
				/// <summary>
				/// 设置轨迹动画速度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="speed">轨迹动画速度</param>
				ev_void setFlySpeed(const EVString& name,const ev_real64& speed);
				/// <summary>
				/// 获取轨迹动画速度
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>轨迹动画速度</returns>
				ev_real64 getFlySpeed(const EVString& name);
				/// <summary>
				/// 设置轨迹动画是否进行插值
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="interpolate">是否插值</param>
				ev_void setInterpolate(const EVString& name,const ev_bool& interpolate);
				/// <summary>
				/// 获取轨迹动画是否进行插值
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否插值</returns>
				ev_bool getInterpolate(const EVString& name);
				/// <summary>
				/// 设置是否启用海洋反射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="enable">是否启用海洋反射</param>
				ev_void setReflectable(const EVString& name,const ev_bool& enable);
				/// <summary>
				/// 获取是否启用海洋反射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否启用海洋反射</returns>
				ev_bool getReflectable(const EVString& name);
				/// <summary>
				/// 设置是否启用海洋折射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <param name="enable">是否启用海洋折射</param>
				ev_void setRefractable(const EVString& name,const ev_bool& enable);
				/// <summary>
				/// 获取是否启用海洋折射效果
				/// </summary>
				/// <param name="name">动态目标名称</param>
				/// <returns>是否启用海洋折射</returns>
				ev_bool getRefractable(const EVString& name);

				/// <summary>
				/// 获取动态目标对象遍历对象
				/// </summary>
				/// <returns>获取动态目标对象遍历对象</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator getDynamicModelObjectIterator();
				/// <summary>
				/// 设置轨迹动画监听对象
				/// </summary>
				/// <param name="ref_globeNodeTrackAnimationListener">轨迹动画监听,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void setDynamicGlobeNodeTrackAnimationListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_globeNodeTrackAnimationListener);
				/// <summary>
				/// 获取轨迹动画监听对象
				/// </summary>
				/// <returns>轨迹动画监听</returns>
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* getDynamicGlobeNodeTrackAnimationListener();
				/// <summary>
				/// 获取动画集长度
				/// </summary>
				/// <returns>动画集长度</returns>
				Real getAnimationsetLength()const;
				/// <summary>
				/// 设置动画集长度
				/// </summary>
				/// <param name="length">动画集长度</param>
				ev_void setAnimationsetLength(const Real& length);
				/// <summary>
				/// 开始播放动画集
				/// </summary>
				ev_void startAnimationset();
				/// <summary>
				/// 停止播放动画集
				/// </summary>
				ev_void stopAnimationset();
				/// <summary>
				/// 暂停播放动画集
				/// </summary>
				ev_void pauseAnimationset();
				/// <summary>
				/// 继续播放动画集
				/// </summary>
				ev_void continueAnimationset();
				/// <summary>
				/// 设置动画集当前帧的时间
				/// </summary>
				/// <param name="curKeyFrameTime">当前关键帧时间</param>
				ev_void setAnimationsetTime(const ev_real64& curKeyFrameTime);
				/// <summary>
				/// 获取动画集当前帧的时间
				/// </summary>
				/// <returns>当前关键帧时间</returns>
				ev_real64 getAnimationsetTime();
				/// <summary>
				/// 设置动画集播放速率
				/// </summary>
				/// <param name="timeRatio">动画集播放速率</param>
				ev_void setAnimationsetTimeRatio(const Real& timeRatio);
				/// <summary>
				/// 获取动画集播放速率
				/// </summary>
				/// <returns>动画集播放速率</returns>
				Real getAnimationsetTimeRatio()const;

				/// <summary>
				/// 添加事件
				/// </summary>
				/// <param name="ref_dynamicObjectEvent">事件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void addEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent);
				/// <summary>
				/// 删除事件
				/// </summary>
				/// <param name="dynamicObjectEvent">事件</param>
				ev_void removeEvent(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent);

				/// <summary>
				/// 考虑相应动目标对象中标牌的遮蔽关系
				/// </summary>
				/// <param name="name">动目标名称</param>
				ev_void addShadeScutcheon(const EVString& name);

				/// <summary>
				/// 不在考虑相应动目标对象中标牌的遮蔽关系
				/// </summary>
				/// <param name="name">动目标名称</param>
				ev_void removeShadeScutcheon(const EVString& name);
				/// <summary>
				/// 删除指定动目标的所有航迹点
				/// </summary>
				/// <param name="name">动目标名称</param>
				virtual ev_void removeAllTrackTrailPoint(const EVString& name);
				/// <summary>
				/// 为指定动目标的增加航迹点
				/// </summary>
				/// <param name="name">动目标名称</param>
				/// <param name="point">要添加的航迹点</param>
				virtual ev_void addTrackTrailPoint(const EVString& name,const EarthView::World::Spatial::Geometry::CCoordinate& point);
				/// <summary>
				/// 刷新航迹
				/// </summary>
				virtual ev_void refreshTrackTrail();
				/// <summary>
				/// 设置是否需要刷新
				/// </summary>
				/// <param name="needUpdate">是否需要刷新</param>
				virtual ev_void setNeedUpdate(const ev_bool& needUpdate);
				/// <summary>
				/// 获取是否需要刷新
				/// </summary>
				/// <returns>是否需要刷新</returns>
				virtual ev_bool getNeedUpdate()const;

				EarthView::World::Core::CReadWriteLock* getDynamicModelObjectsLocker();
ev_private:
				/// <summary>
				/// 动态目标管理器对象构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CDynamicModelObjectManager(_in EarthView::World::Core::CNameValuePairList* pList);

			protected:
				/// <summary>
				/// 将动态目标管理对象绑定到节点上
				/// </summary>
				/// <returns>绑定的节点</returns>	
				EarthView::World::Graphic::CSceneNode* createSceneNode();
				/// <summary>
				/// 初始化刷新资源线程
				/// </summary>
				ev_void initializeThread();
				/// <summary>
				/// 刷新模型资源，包括根据条件加载与释放Mesh
				/// </summary>
				/// <returns></returns>
				virtual ev_void refreshModelResource();
				/// <summary>
				/// 刷新节点状态，包括根据条件挂接与反挂接节点
				/// </summary>
				/// <returns></returns>
				virtual ev_void refreshSceneNodeState();
				/// <summary>
				/// 生成动态目标相机锁定控制对象
				/// </summary>
				/// <param name="ref_globeControl">地球控件,该参数对象的生命周期要保持大于本对象的生命周期</param>
				ev_void createDynamicCameraLockHandler(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_globeControl);
				/// <summary>
				/// 销毁动态目标相机锁定控制对象
				/// </summary>
				ev_void destroyDynamicCameraLockHandler();

				virtual EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* createDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,const EVString& name,const EVString& meshName,EarthView::World::Spatial3D::ModelType modelType,_in ev_bool immediateRefresh);
				virtual EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* createDynamicModelObject(EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,const EVString& name,const ev_uint32& meshIndex,EarthView::World::Spatial3D::ModelType modelType,_in ev_bool immediateRefresh);
				virtual EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* createSubEntityDynamicModelObject(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ref_modelObject,const EVString& name,EarthView::World::Core::IntVector subEntityIndex,_in ev_bool immediateRefresh);

				virtual ev_void destroyAllDynamicModelObject(); 

				virtual ev_bool isAttached();

				virtual ev_void attachDynamicObjectToNode(const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* model);

				virtual EarthView::World::Graphic::CSceneNode* getDynamicObjectNode(const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* model);

				virtual ev_void createMaterial();

				virtual _extfree EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem* createLodItem(const EVString& name,const Real& minValue,const Real& maxValue);

				virtual ev_void destroyRemovedDynamicModelObject();

			protected:

				EV_MUTEX(mInitMutex)
					EV_THREAD_SYNCHRONISER(mInitSync)

					EarthView::World::Core::CThread mUpdateThread;
				ev_bool mIsCreateUpdateThread;
				ev_bool mNeedUpdate;


				EVString mName;

				ev_bool mVisible;

				EarthView::World::Graphic::CSceneNode* mSceneNode;

				ev_bool mLodStrategyEnable;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener* mDefaultDynamicModelManagerListener;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener* mUserDynamicModelManagerListener;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* mGlobeNodeTrackAnimationListener;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* mLockedGlobeNodeTrackModelObject;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* mCameraNodeTrackModelObject;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* mLodStrategy;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy* mDefaultLodStrategy;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener* mDefaultLodStrategyListener;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerCameraListener* mCameraListener;

				EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;

				EarthView::World::Graphic::CSceneManager* mSceneManager;

				EarthView::World::Spatial3D::CGlobeCamera* mCamera;

				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeatureManager* mTrackTrailManager;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap mDynamicModelObjects;
				EarthView::World::Core::CReadWriteLock mDynamicModelObjectsLocker;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler* mDynamicCameraLockHandler;

				EarthView::World::Graphic::CColourValue mDefaultScutcheonLineColor;
				EarthView::World::Graphic::CColourValue mDefaultScutcheonFrameColor;
				EarthView::World::Graphic::CColourValue mDefaultScutcheonTextColor;
				EVString mScutcheonOverlayMatName;
				EVString mScutcheonFrameMatName;
				EVString mScutcheonLineMatName;
				Real mDefaultScutcheonLineLength;

				EarthView::World::Graphic::CMaterialPtr mOverlayMaterial;
				EarthView::World::Graphic::CMaterialPtr mLineMaterial;
				EarthView::World::Graphic::CMaterialPtr mFrameMaterial;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener* mpScutcheonTextListener;

				EarthView::World::Spatial3D::CTrackAnimation* mTrackAnimation;

				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* mEventManager;

				Real mAnimationLength;
			private:
				ev_void addManagerListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener* listener);
				ev_void removeManagerListener(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener* listener);
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap mNeedDeletedDynamicModelObjects;
				EarthView::World::Core::CReadWriteLock mDeletedModelObjectsLocker;
				EarthView::IndustryEngine::DynamicModelLibrary::CUpdateModeResourceThreadFunc* mUpdateThreadFunc;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerFrameListener* mFrameListener;
			private:
				EarthView::World::Core::CMutex mModelResourceMutex;

			};  //end class CDynamicModelObjectManager

		}//end namespace 
	}//end namespace 
}


#endif

