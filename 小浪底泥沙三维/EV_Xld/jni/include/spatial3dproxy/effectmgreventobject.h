#ifndef EFFECTMGR_EVENT_OBJECT_H__
#define EFFECTMGR_EVENT_OBJECT_H__

#include "core/object.h"
#include "spatial3dproxy/spatial3dproxy_config.h"
#include "spatial3ddataset/effecttype.h"
#include "graphic/graphic_config.h"
#include "graphic/framelistener.h"
#include "graphic/animationstate.h"
#include "graphic/image.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
        class CMovableObject;
		class CSceneManager;
		class CRoot;
		class CSceneManager;
		class CCamera;
		class CViewport;
		class CSceneNode;
		class CRenderWindow ;
		};
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IDataSource;
			}
		};
		namespace Spatial3D
		{
			namespace EffectManager
			{
				class CEffect;
			};
			namespace Dataset
			{
				class CEffectDataSource;
			};
			class CThreeAxis;
		};
		namespace Core
		{
			class CStringArray;
		};
	}
};


namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			class CEffectTreeviewEvent;

			/// <summary>
			/// 飘带动画监听类
			/// </summary>
			class  EV_SPATIAL3DPROXY_DLL CAnimationTrailListener:public EarthView::World::Graphic::CFrameListener
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="state">动画状态</param>
				/// <returns></returns>	
				CAnimationTrailListener(EarthView::World::Graphic::CAnimationState* ref_state);

				/// <summary>
				/// 帧渲染队列
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>返回true</returns>	
				virtual ev_bool frameRenderingQueued(const EarthView::World::Graphic::FrameEvent &evt);
			private:
				EarthView::World::Graphic::CAnimationState* mpAnimationState;
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CAnimationTrailListener(_in EarthView::World::Core::CNameValuePairList *pList);
			};

			/// <summary>
			/// 特效窗口事件类
			/// </summary>
			class EV_SPATIAL3DPROXY_DLL CEffectMgrEventObject : public EarthView::World::Core::CEventObject
			{
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CEffectMgrEventObject(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CEffectMgrEventObject();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CEffectMgrEventObject();

				

#pragma region 对应每个特效树上菜单的操作

				/// <summary>
				/// 创建用户自定义分类
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="parentCode">父节点名</param>
				/// <param name="newUserTypeName">新分类名</param>
				/// <returns></returns>
				virtual void createUserType(const EVString& datasourceName,EVString parentCode,EVString newUserTypeName);
				
				/// <summary>
				/// 创建用户自定义分类
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="parentCode">父节点名</param>
				/// <param name="newUserTypeName">新分类名</param>
				/// <returns></returns>
				virtual void createUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,EVString parentCode,EVString newUserTypeName);
				
				/// <summary>
				/// 创建用户自定义分类接收函数
				/// </summary>
				/// <param name="e">创建用户自定义分类事件</param>
				/// <returns></returns>
				virtual void onCreateUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
				
				/// <summary>
				/// 从模板库导入事件接收函数
				/// </summary>
				/// <param name="e">从模板库导入事件</param>
				/// <returns></returns>
				virtual void onImportFromTemplateDB(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dir">文件路径</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="destDatasourceName">数据库名</param>
				/// <param name="successScriptNames">成功信息</param>
				/// <param name="errorArray">失败信息</param>
				/// <returns></returns>
				virtual void importFromScript(const EVString& dir,const EVString& userTypeCode,const EVString& destDatasourceName,_out EarthView::World::Core::CStringArray& successScriptNames,_out EarthView::World::Core::CStringArray& errorArray);
				
				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dir">文件路径</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="ds">数据库</param>
				/// <param name="successScriptNames">成功信息</param>
				/// <param name="errorArray">失败信息</param>
				/// <returns></returns>
				virtual void importFromScript(const EVString& dir,const EVString& userTypeCode,const EarthView::World::Spatial::GeoDataset::IDataSource* ds,_out EarthView::World::Core::CStringArray& successScriptNames,_out EarthView::World::Core::CStringArray& errorArray);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="effectId">要导出的特效ID</param>
				/// <param name="effectDataSource">特效数据源</param>
				/// <param name="exportPath">路径</param>
				/// <param name="overrideFile">是否覆盖名称相同的文件</param>
				/// <returns>bool，成功导出为TRUE,未成功导出为FALSE</returns>
				virtual bool exportEffectToLocal(ev_uint32 effectId,EarthView::World::Spatial3D::Dataset::CEffectDataSource *effectDataSource, const EVString& exportPath,bool overrideFile);

				/// <summary>
				/// 停止从脚本文件导入
				/// </summary>
				/// <param name="val">是否停止导入</param>
				/// <returns></returns>
				void stopImportFromScript(ev_bool val);
				
				/// <summary>
				/// 从文件导入事件接收函数
				/// </summary>
				/// <param name="e">从文件导入事件</param>
				/// <returns></returns>
				virtual void onImportFromScript(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 导出到模板库事件接收函数
				/// </summary>
				/// <param name="e">导出到模板库事件</param>
				/// <returns></returns>
				virtual void onExportToTemplateDB(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 创建新特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="name">特效名称</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="type">特效类型</param>
				/// <param name="parentEffectId">特效父节点ID</param>
				/// <returns></returns>
				virtual void createNewEffect(const EVString& datasourceName,const EVString& name,const EVString& userTypeCode,EarthView::World::Spatial3D::Dataset::EffectType type,ev_uint32 parentEffectId );

				/// <summary>
				/// 创建新特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="name">特效名称</param>
				/// <param name="userTypeCode">用户分类号</param>
				/// <param name="type">特效类型</param>
				/// <param name="parentEffectId">特效父节点ID</param>
				/// <returns></returns>
				virtual void createNewEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& name,const EVString& userTypeCode,EarthView::World::Spatial3D::Dataset::EffectType type,ev_uint32 parentEffectId );
				
				/// <summary>
				/// 创建新特效事件接收函数
				/// </summary>
				/// <param name="e">创建新特效事件</param>
				/// <returns></returns>
				virtual void onCreateNewEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 用户分类重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">用户分类号</param>
				/// <param name="newName">新用户自定义类型名称</param>
				/// <returns></returns>
				virtual void renameUserType(const EVString& datasourceName,const EVString& code,const EVString& newName);
				
				/// <summary>
				/// 用户分类重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">用户分类号</param>
				/// <param name="newName">新用户分类名称</param>
				/// <returns></returns>
				virtual void renameUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& code,const EVString& newName);
				
				/// <summary>
				/// 重命名用户分类事件接收函数
				/// </summary>
				/// <param name="e">重命名用户分类事件</param>
				/// <returns></returns>
				virtual void onRenameUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
				
				/// <summary>
				/// 复合特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="code">复合特效ID</param>
				/// <param name="newName">新复合特效名称</param>
				/// <returns></returns>
				virtual void renameBlendEffect(const EVString& datasourceName,const EVString& code,const EVString& newName);
				
				/// <summary>
				/// 复合特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">复合特效ID</param>
				/// <param name="newName">新复合特效名称</param>
				/// <returns></returns>
				virtual void renameBlendEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& code,const EVString& newName);
				
				/// <summary>
				/// 重命名复合特效事件接收函数
				/// </summary>
				/// <param name="e">重命名复合特效事件</param>
				/// <returns></returns>
				virtual void onRenameBlendEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
				
				/// <summary>
				/// 独立特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">独立特效ID</param>
				/// <param name="newName">新独立特效名称</param>
				/// <returns></returns>
				virtual void renameSingleEffect(const EVString& datasourceName,const EVString& code,const EVString& newName);

				/// <summary>
				/// 从现有特效拷贝出新特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">特效ID</param>
				/// <param name="newName">新名称</param>
				/// <returns></returns>
				virtual void copyNewEffect(const EVString& datasourceName,ev_uint32 effectId,const EVString& newName);

				/// <summary>
				/// 从现有特效拷贝出新特效
				/// </summary>
				/// <param name="datasourceName">数据库指针</param>
				/// <param name="code">特效ID</param>
				/// <param name="newName">新名称</param>
				/// <returns></returns>
				virtual void copyNewEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,ev_uint32 effectId,const EVString& newName);

				/// <summary>
				/// 独立特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">独立特效ID</param>
				/// <param name="newName">新独立特效名称</param>
				/// <returns></returns>
				virtual void renameSingleEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& code,const EVString& newName);
				
				/// <summary>
				/// 重命名独立特效事件接收函数
				/// </summary>
				/// <param name="e">重命名独立特效事件</param>
				/// <returns></returns>
				virtual void onRenameSingleEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
            
				/// <summary>
				/// 复合特效子特效重命名
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">复合特效子特效ID</param>
				/// <param name="newName">新复合特效子特效名称</param>
				/// <returns></returns>
			 	virtual void renameBEChild(const EVString& datasourceName,const EVString& code,const EVString& newName);
				
				/// <summary>
				/// 复合特效子特效重命名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">复合特效子特效ID</param>
				/// <param name="newName">新复合特效子特效名称</param>
				/// <returns></returns> 
				virtual void renameBEChild(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& code,const EVString& newName);
				
				/// <summary>
				/// 重命名复合特效子特效事件接收函数
				/// </summary>
				/// <param name="e">重命名复合特效子特效事件</param>
				/// <returns></returns>
				virtual void onRenameBEChildEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
				//jyj 5.8 
				//裴大为 jyj5.15 暂时注掉 用于以后拓展
				/*virtual void renameEffect(const EVString& datasourceName,const EVString& code, const EVString& newName);
				virtual void renameEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& code,const EVString& newName);*/
			/*	virtual void onRenameEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);*/
				//裴大为

				/// <summary>
				/// 删除用户分类
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="code">用户分类ID</param>
				/// <returns></returns> 
				virtual void deleteUserType(const EVString& datasourceName,const EVString& code);
				
				/// <summary>
				/// 删除用户分类
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="code">用户分类ID</param>
				/// <returns></returns> 
				virtual void deleteUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& code);
				
				/// <summary>
				/// 删除用户分类事件接收函数
				/// </summary>
				/// <param name="e">删除用户分类事件</param>
				/// <returns></returns>
				virtual void onDeleteUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 删除特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="parentEffectId">父节点ID</param>
				/// <param name="effectId">特效ID</param>
				/// <param name="type">特效类型</param>
				/// <returns></returns> 
				virtual void deleteEffect(const EVString& datasourceName,ev_uint32 parentEffectId,ev_uint32 effectId,EarthView::World::Spatial3D::Dataset::EffectType type);
				
				/// <summary>
				/// 删除特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="parentEffectId">父节点ID</param>
				/// <param name="effectId">特效ID</param>
				/// <param name="type">特效类型</param>
				/// <returns></returns> 
				virtual void deleteEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,ev_uint32 parentEffectId,ev_uint32 effectId,EarthView::World::Spatial3D::Dataset::EffectType type);
				

				/// <summary>
				/// 删除特效事件接收函数
				/// </summary>
				/// <param name="e">删除特效事件</param>
				/// <returns></returns>
				virtual void onDeleteEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <returns></returns>
				virtual void addEffectToBlendEffect(const EVString& datasourceName,ev_uint32 editEffectId,ev_uint32 dragEffectId);
				
				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <returns></returns>
				virtual void addEffectToBlendEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,ev_uint32 editEffectId,ev_uint32 dragEffectId);				
				
				/// <summary>
				/// 添加特效到复合特效事件接受函数
				/// </summary>
				/// <param name="e">添加特效到复合特效事件</param>
				/// <returns></returns>
				virtual void onAddEffectToBlendEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
				 
				/// <summary>
				/// 添加特效到复合特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="editEffectId">复合特效ID</param>
				/// <param name="dragEffectId">添加的特效的ID</param>
				/// <param name="info">添加的特效的信息</param>
				/// <returns>新的复合特效信息</returns>
				EarthView::World::Spatial3D::Dataset::CEffectInfo addEffectToBlendEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,ev_uint32 editEffectId,EarthView::World::Spatial3D::Dataset::CEffectInfo& info);

				/// <summary>
				/// 判断是否重名
				/// </summary>
				/// <param name="dataSourceName">数据库名称</param>
				/// <param name="effectName">特效名称</param>
				/// <param name=" effectType">特效类型</param>
				/// <param name="blendeffectName"></param>
				/// <returns>重名返回true,不重名返回false</returns>
				virtual bool isExistName(const EVString& dataSourceName,const EVString& effectName,const EVString& typeCode,EarthView::World::Spatial3D::Dataset::EffectType effectType,const EVString& blendeffectName="");
               
				/// <summary>
				/// 判断是否重名
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effectName">特效名称</param>
				/// <param name="typeCode">用户分类类型</param>
				/// <param name=" effectType">特效类型</param>
				/// <param name="blendeffectName"></param>
				/// <returns>重名返回true,不重名返回false</returns>
				virtual bool isExistName(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& effectName,const EVString& typeCode,EarthView::World::Spatial3D::Dataset::EffectType effectType,const EVString& blendeffectName="");

				/// <summary>
				/// 添加特效到用户分类下
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="srcItemId">特效ID</param>
				/// <param name="dstUserTypeCode">用户分类号</param>
				/// <returns></returns>
				virtual void addEffectToUserType(const EVString& datasourceName,ev_uint32 srcItemId,const EVString& dstUserTypeCode);
				
				/// <summary>
				/// 添加特效到用户分类下
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="srcItemId">ID</param>
				/// <param name="dstUserTypeCode">用户分类号</param>
				/// <returns></returns>
				virtual void addEffectToUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,ev_uint32 srcItemId,const EVString& dstUserTypeCode);
				
				/// <summary>
				/// 添加特效到用户分类下事件处理
				/// </summary>
				/// <param name="e">添加特效到用户分类下事件</param>
				/// <returns></returns>
				virtual void onAddEffectToUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 添加用户分类到用户分类下
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="srcUserTypeCode">添加的用户分类号</param>
				/// <param name="dstUserTypeCode">目标用户分类号</param>
				/// <returns></returns>
				virtual void addUserTypeToUserType(const EVString& datasourceName,const EVString& srcUserTypeCode,const EVString& dstUserTypeCode);
				
				/// <summary>
				/// 添加用户分类到用户分类下
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="srcUserTypeCode">添加的用户分类号</param>
				/// <param name="dstUserTypeCode">目标用户分类号</param>
				/// <returns></returns>
				virtual void addUserTypeToUserType(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,const EVString& srcUserTypeCode,const EVString& dstUserTypeCode);
			
				/// <summary>
				/// 添加用户分类到用户分类下事件处理函数
				/// </summary>
				/// <param name="e">添加用户分类到用户分类下事件</param>
				/// <returns></returns>
				virtual void onAddUserTypeToUserType(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);
				//裴大为-2013-4-21-结束
				
				/// <summary>
				/// 保存特效
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="effect">特效</param>
				/// <returns></returns>
				virtual void saveEffect(const EVString& datasourceName,EarthView::World::Spatial3D::EffectManager::CEffect* effect);
				
				/// <summary>
				/// 保存特效
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effect">特效</param>
				/// <returns></returns>
				virtual void saveEffect(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,EarthView::World::Spatial3D::EffectManager::CEffect* effect);
				
				/// <summary>
				/// 保存特效的事件接收
				/// </summary>
				/// <param name="e">保存特效事件</param>
				/// <returns></returns>
				virtual void onSaveEffect(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);

				/// <summary>
				/// 保存特效资源
				/// </summary>
				/// <param name="ds">数据库名称</param>
				/// <param name="effectID">特效ID</param>
				/// <returns></returns>
				virtual void saveEffectMaterial(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,ev_uint32 effectID);
				
				/// <summary>
				/// 保存特效资源
				/// </summary>
				/// <param name="datasourceName">数据库名称</param>
				/// <param name="effectID">特效ID</param>
				/// <returns></returns>
				virtual void saveEffectMaterial(const EVString& datasourceName,ev_uint32 effectID);
				
				/// <summary>
				/// 保存特效资源的事件接收
				/// </summary>
				/// <param name="e">保存特效资源的事件</param>
				/// <returns></returns>
				virtual void onSaveEffectMaterial(EarthView::World::Spatial3DProxy::CEffectTreeviewEvent* e);	
#pragma  endregion
#pragma region 特效管理窗体其它的一些操作

				/// <summary>
				/// 加载特效树
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <returns></returns>
				virtual ev_void loadTree( const EVString& datasourceName, _out EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree& tree);

				/// <summary>
				/// 加载特效树
				/// </summary>
				/// <param name="datasourceName">数据库</param>
				/// <returns></returns>
				virtual ev_void loadTree(const EarthView::World::Spatial::GeoDataset::IDataSource* ds, EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree& tree);		

				/// <summary>
				/// 获得复合特效信息
				/// </summary>
				/// <param name="datasourceName">数据库名</param>
				/// <param name="effectId">复合特效ID</param>
				/// <param name="vec">特效信息容器</param>
				/// <returns></returns>
				virtual ev_void getBlendEffectInfos(const EVString& datasourceName,ev_uint32 effectId,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec);

				/// <summary>
				/// 获得复合特效信息
				/// </summary>
				/// <param name="ds">数据库</param>
				/// <param name="effectId">复合特效ID</param>
				/// <param name="vec">特效信息容器</param>
				/// <returns></returns>
				virtual ev_void getBlendEffectInfos(const EarthView::World::Spatial::GeoDataset::IDataSource* ds,ev_uint32 effectId,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec);
				

				/// <summary>
				/// 销毁场景
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void destoryScene();

				//void showBoundingBox(CMovableObject* mo,ev_bool val);
				//void addEffect(EarthView::World::Spatial3D::EffectManager::CEffect* effect,ev_uint32 x,ev_uint32 y,ev_uint32 widgetWidth,ev_uint32 widgetHeight);

				/// <summary>
				/// 自动调整窗体内控件大小
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void windowResized();

				/// <summary>
				/// 鼠标按下事件处理
				/// </summary>
				/// <param name="x">鼠标按下处在x轴上的位置</param>
				/// <param name="y">鼠标按下处在y轴上的位置</param>
				/// <param name="button">鼠标按钮标识</param>
				/// <returns></returns>
				void mouseButtonPress(int x,int y,ev_uint32 button);

				/// <summary>
				/// 鼠标双击事件处理
				/// </summary>
				/// <param name="x">鼠标双击处在x轴上的位置</param>
				/// <param name="y">鼠标双击处在y轴上的位置</param>
				/// <param name="button">鼠标按钮标识</param>
				/// <returns></returns>
				void mouseDoubleButtonPress(int x,int y,ev_uint32 button);

				/// <summary>
				/// 鼠标弹起事件处理
				/// </summary>
				/// <param name="x">鼠标弹起处在x轴上的位置</param>
				/// <param name="y">鼠标弹起处在y轴上的位置</param>
				/// <param name="button">鼠标按钮标识</param>
				/// <returns></returns>
				void mouseButtonRelease(int x,int y,ev_uint32 button);

				/// <summary>
				/// 鼠标移动事件处理
				/// </summary>
				/// <param name="x">当前鼠标在x轴上的位置</param>
				/// <param name="y">当前鼠标在y轴上的位置</param>
				/// <returns></returns>
				void mouseMove(int x,int y);

				/// <summary>
				/// 鼠标滚轮滚动事件处理
				/// </summary>
				/// <param name="delta">滚动度量值</param>
				/// <returns></returns>
				void mouseWheel(float delta);

				//void keyPress(int key,int virtualKey);

				//void keyRelease(int key,int virtualKey);

				//void dropEvent( EarthView::World::Spatial3D::EffectManager::CEffect* effect,ev_uint32 x,ev_uint32 y,ev_uint32 widgetWidth,ev_uint32 widgetHeight);
				
				/// <summary>
				/// 查找用户分类号断号
				/// </summary>
				/// <param name="effectDatasource">数据库</param>
				/// <param name="userTypeCode">父用户分类号</param>
				/// <returns></returns>
				EVString findDiscontinuousID(EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDatasource,const EVString& userTypeCode);
#pragma endregion
			ev_internal:
				/// <summary>
				/// 事件处理
				/// </summary>
				/// <param name="e">事件</param>
				/// <returns></returns>
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
			private:
				EVString renameParticleScriptMaterialName(const EVString &context, const EVString &newMaterialName);
				EarthView::World::Graphic::CRoot* mRoot;
				EarthView::World::Graphic::CSceneManager* mSceneManagerEdit;
				EarthView::World::Graphic::CCamera* mCameraEdit;
				EarthView::World::Graphic::CViewport* mViewportEdit;
				EarthView::World::Graphic::CSceneManager* mSceneManagerView;
				EarthView::World::Graphic::CCamera* mCameraView;
				EarthView::World::Graphic::CViewport* mViewportView;
				EarthView::World::Spatial::Math::CVector3 camPos;
				EarthView::World::Graphic::CSceneNode* mNodeEdit;
				EarthView::World::Spatial3D::CThreeAxis* mAxisEdit;
				EarthView::World::Graphic::CRenderWindow* mEditWindow;
			    EarthView::World::Graphic::CRenderWindow* mViewWindow;
				EarthView::World::Spatial3D::EffectManager::CEffect* mEffectEdit;
				EarthView::World::Spatial3D::EffectManager::CEffect* mEffectView;
				EarthView::World::Graphic::CSceneNode* mRootNodeEdit;
				EarthView::World::Graphic::CSceneNode* mRootNodeView;
				bool isPressed;
				ev_uint32 pressX;
				ev_uint32 pressY;
				EarthView::World::Graphic::CSceneNode* axisNode;
				EarthView::World::Graphic::CSceneNode* axisXNode;
				EarthView::World::Graphic::CSceneNode* axisYNode;
				EarthView::World::Graphic::CSceneNode* axisZNode;
				CAnimationTrailListener* mpTrailListener;
				ev_bool mIsStopImport;
			};


		}
	}
}
#endif
