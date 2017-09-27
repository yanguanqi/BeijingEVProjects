#ifndef __EFFECTMANAGER_H__
#define __EFFECTMANAGER_H__
#pragma once
#include "mathengine/vector3.h"
#include "spatial3dengine/effect.h"
#include "spatial3ddataset/effecttype.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3dengine/modelpublish.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneManager;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Plugin
		{
			namespace ParticleFX
			{
				class CAreaEmitter;
				class CPointEmitter;
				class CPointExtendEmitter;
				class CEllipsoidEmitter;
				class CHollowEllipsoidEmitter;
				class CBoxEmitter;
				class CCylinderEmitter;
				class CRingEmitter;
				class CColourFaderAffector;
				class CColourFaderAffector2;
				class CColourImageAffector;
				class CColourInterpolatorAffector;
				class CLinearForceAffector;
				class CRotationAffector;
				class CScaleAffector;
				class CDeflectorPlaneAffector;
				class CDirectionRandomiserAffector;
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
			class CParticleSystem;
			class CParticleEmitter;
			class CSceneManager;
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Core{

		}
	}
};


namespace EarthView{
	namespace World{
		namespace Spatial3D{

			namespace Dataset
			{
				class CEffectDataSource;
				class CEffectInstance;
				class CEffectUserTypeInfo;
				class CEffectInfo;
				class CEffectUserTypeTree;

			}
			namespace EffectManager
			{

				class CEffect;

				/// <summary>
				/// 特效管理析类
				/// </summary>
				class EV_Spatial3DEngine_DLL CEffectManager:public EarthView::World::Core::CAllocatedObject
				{
					friend class CEffect;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectManager(EarthView::World::Core::CNameValuePairList* pList);

					/// <summary>
					/// 从一个数据源，导到另外一个数据源
					/// </summary>
					/// <param name="src">源数据源指针</param>
					/// <param name="dest">目标数据源指针</param>
					/// <param name="isOverwrite">是否覆盖同名特效</param>
					/// <param name="listener">导入的监听</param>
					/// <param name="effectIdMap">特效ID键值对</param>
					/// <returns>是否正确导入</returns>
					ev_bool import( EarthView::World::Spatial3D::Dataset::CEffectDataSource* src,EarthView::World::Spatial3D::Dataset::CEffectDataSource* dest,ev_bool isOverwrite,EarthView::World::Spatial3D::CModelPublishToolListener* listener,map<ev_int32,ev_int32>& effectIdMap);

					/// <summary>
					/// 从一个数据源，导到另外一个数据源
					/// </summary>
					/// <param name="src">源数据源指针</param>
					/// <param name="dest">目标数据源指针</param>
					/// <param name="isOverwrite">是否覆盖同名特效</param>
					/// <param name="listener">导入的监听</param>
					/// <param name="effectIdMap">特效ID键值对</param>
					/// <param name="effectIDVec">特效ID键值对</param>
					/// <returns>是否正确导入</returns>
					ev_bool import( EarthView::World::Spatial3D::Dataset::CEffectDataSource* src,EarthView::World::Spatial3D::Dataset::CEffectDataSource* dest,ev_bool isOverwrite,EarthView::World::Spatial3D::CModelPublishToolListener* listener,map<ev_int32,ev_int32>& effectIdMap,const EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectIDVec);

					/// <summary>
					/// 增加特效
					/// </summary>
					/// <param name="info">特效信息</param>
					/// <param name="src">源数据源指针</param>
					/// <param name="dest">目标数据源指针</param>
					/// <param name="isOverwrite">是否覆盖同名特效</param>
					/// <param name="listener">导入的监听</param>
					/// <returns>返回新增特效的ID，如果失败返回0</returns>
					ev_int32 addEffect(EarthView::World::Spatial3D::Dataset::CEffectInfo& info,EarthView::World::Spatial3D::Dataset::CEffectDataSource* src,EarthView::World::Spatial3D::Dataset::CEffectDataSource* dest,ev_bool isOverwrite,EarthView::World::Spatial3D::CModelPublishToolListener* listener);

					/// <summary>
					/// 停止导入
					/// </summary>
					/// <param name="val">是否停止导入</param>
					/// <returns></returns>
					void stopImport(ev_bool val);
				public :
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CEffectManager();

					/// <summary>
					/// 返回单例的数据源工厂句柄
					/// </summary>
					/// <returns>CModelDataSourceFactory，失败则返回NULL</returns>
					static EarthView::World::Spatial3D::EffectManager::CEffectManager* getSingletonPtr();

					/// <summary>
					/// 清除所有特效
					/// </summary>
					/// <param name="EarthView::World::Core::Database::CSqlDatabase">数据库连接</param>
					/// <returns>是否清除成功</returns>
					ev_bool clearEffectAll(const EarthView::World::Core::Database::CSqlDatabase& db);

					/// <summary>
					/// 判断特效是否存在
					/// </summary>
					/// <param name="src">数据源指针</param>
					/// <param name="effectName">特效名称</param>
					/// <param name="effectId">要判断的特效ID</param>
					/// <returns>特效是否存在</returns>
					ev_bool existEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* src,const EVString& effectName,_out ev_uint32& effectId );

					/// <summary>
					/// 将一条特效从一个数据源，导到另外一个数据源
					/// </summary>
					/// <param name="info">特效信息</param>
					/// <param name="src">源数据源指针</param>
					/// <param name="dest">目标数据源指针</param>
					/// <param name="isOverwrite">是否覆盖同名特效</param>
					/// <param name="listener">导入的监听</param>
					/// <returns>返回导入的新特效ID，没导入成功返回0</returns>
					ev_int32 import(EarthView::World::Spatial3D::Dataset::CEffectInfo& info,EarthView::World::Spatial3D::Dataset::CEffectDataSource* src,EarthView::World::Spatial3D::Dataset::CEffectDataSource* dest,ev_bool isOverwrite,EarthView::World::Spatial3D::CModelPublishToolListener* listener);

					/// <summary>
					/// 将现有特效和资源全部拷贝一份为新的
					/// </summary>
					/// <param name="datasource">数据源指针</param>
					/// <param name="effectId">要拷贝的特效ID</param>
					/// <param name="newName">特效新名称</param>
					/// <returns>返回新的EarthView::World::Spatial3D::Dataset::CEffectInfo，失败则返回NULL</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo copyNewEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* datasource,ev_uint32 effectId,const EVString& newName);

					/// <summary>
					/// 创建用户分类
					/// </summary>
					/// <param name="datasource">数据源指针</param>
					/// <param name="parentCode">父节点编码</param>
					/// <param name="newUserTypeName">新创建用户分类名称</param>
					/// <returns>新创建用户分类对象</returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo createUserType(EarthView::World::Spatial3D::Dataset::CEffectDataSource* datasource,EVString parentCode,EVString newUserTypeName);

					/// <summary>
					/// 从脚本导入
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="userTypeCode">用户自定义特效分类编码</param>
					/// <param name="folder">文件路径</param>
					/// <param name="successScriptNames">成功导入的脚本名字</param>
					/// <param name="errorArray">错误信息队列</param>
					/// <returns>成功导入返回true</returns>
					ev_bool importFromScript(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,const EVString& userTypeCode,const EVString& folder,_out EarthView::World::Core::CStringArray& successScriptNames,_out EarthView::World::Core::CStringArray& errorArray);

					/// <summary>
					/// 将粒子脚本的名字进行更换
					/// </summary>	
					/// <param name="script">脚本内容</param>
					/// <param name="oldName">旧粒子系统名字</param>
					/// <param name="newName">新粒子系统名字</param>
					/// <returns>替换后脚本内容</returns>
					EVString renameParticleScript(const EVString& script,const EVString& oldName,const EVString& newName);

					/// <summary>
					/// 创建特效
					/// </summary>
					/// <param name="datasource">数据源</param>
					/// <param name="name">用户自定义特效分类名称</param>
					/// <param name="userTypeCode">用户自定义特效分类编码</param>
					/// <param name="type">特效类型</param>
					/// <param name="parentEffectId">父特效ID(在新建非复合特效的时候该参数可为任意值)</param>
					/// 这个函数是唯一的创建特效接口
					/// <returns>特效信息</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo createNewEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* datasource,const EVString& name,const EVString& userTypeCode,EarthView::World::Spatial3D::Dataset::EffectType type,ev_uint32 parentEffectId);

					/// <summary>
					/// 修改特效分类编码
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="fileName">用户自定义特效分类名称</param>
					/// <returns>成功修改返回true</returns>
					ev_bool renameUserType(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,const EVString& code,const EVString& newName);

					/// <summary>
					/// 修改混合特效名称
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="newName">新混合特效名称</param>
					/// <returns>成功修改返回true</returns>
					ev_bool renameBlendEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,const EVString& code,const EVString& newName);

					/// <summary>
					/// 修改混合特效中子特效名称
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="newName">新子特效名称</param>
					/// <returns>成功修改返回true</returns>
					ev_bool renameBEChild(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,const EVString& code,const EVString& newName);

					/// <summary>
					/// 修改单粒子特效名称
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="newName">新特效名称</param>
					/// <returns>成功修改返回true</returns>
					ev_bool renameSingleEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,const EVString& code,const EVString& newName);

					/// <summary>
					/// 删除用户自定义特效分类编码
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <returns>成功删除返回true</returns>
					ev_bool deleteUserType(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,const EVString& code);

					/// <summary>
					/// 删除特效
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="parentEffectId">父特效ID</param>
					/// <param name="effectId">特效ID</param>
					/// <param name="type">特效类型</param>
					/// <returns>成功删除返回true</returns>
					ev_bool deleteEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,ev_uint32 parentEffectId,ev_uint32 effectId,EarthView::World::Spatial3D::Dataset::EffectType type);

					/// <summary>
					/// 添加普通特效到混合特效中
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="editEffectId">混合特效ID</param>
					/// <param name="dragEffectId">普通特效ID</param>
					/// <returns>特效信息</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo addEffectToBlendEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,ev_uint32 editEffectId,ev_uint32 dragEffectId );

					/// <summary>
					/// 添加普通特效到混合特效中
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="editEffectId">混合特效ID</param>
					/// <param name="effectInfo">特效信息</param>
					/// <returns>特效信息</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo addEffectToBlendEffect( EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,ev_uint32 editEffectId,_in EarthView::World::Spatial3D::Dataset::CEffectInfo& effectInfo );

					/// <summary>
					/// 保存特效
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="effect">特效指针</param>
					/// <returns>成功保存返回true</returns>
					ev_bool saveEffect(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,EarthView::World::Spatial3D::EffectManager::CEffect* effect);

					/// <summary>
					/// 保存特效材质
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="effectId">特效ID</param>
					/// <returns>成功保存返回true</returns>
					ev_bool saveEffectMaterial(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,ev_uint32 effectId);

					/// <summary>
					/// 保存特效材质
					/// </summary>
					/// <param name="ds">数据源</param>
					/// <param name="matPtr">材质Ptr</param>
					/// <param name="resourceId">资源ID</param>
					/// <returns>成功保存返回true</returns>
					ev_bool saveEffectMaterial(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,EarthView::World::Graphic::CMaterialPtr matPtr,ev_uint32 resourceId);


					/// <summary>
					/// 查找用户自定义特效分类编码断号
					/// </summary>
					/// <param name="effectDatasource">特效数据源</param>
					/// <param name="userTypeCode">父用户自定义特效分类编码</param>
					/// <returns>返回用户自定义特效分类编码断号</returns>
					EVString findDiscontinuousID( EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDatasource,const EVString& userTypeCode );

					/// <summary>
					/// 创建用户类别树
					/// </summary>
					/// <param name="ds">特效数据源</param>
					/// <param name="tree">用户类别树指针</param>
					/// <returns></returns>
					ev_void bulidUserTypeTree(EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds,_out EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree& tree);

					/// <summary>
					/// 序列化
					/// </summary>
					/// <param name="ps">粒子系统指针</param>
					/// <param name="psName">粒子系统</param>
					/// <returns>EVString,粒子脚本</returns>
					EVString serialize(_in EarthView::World::Graphic::CParticleSystem* ps,EVString psName);




				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEffectManager();
				private:				
					static EarthView::World::Spatial3D::EffectManager::CEffectManager* mSingletonPtr;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* mParentPtr;
					vector<EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*> mChildren;
					ev_bool mIsStop;

					ev_uint32 copyRes(EarthView::World::Spatial3D::Dataset::CEffectDataSource* datasource, ev_uint32 effectId, EVString newEffectName ,EarthView::World::Core::CStringArray &newResIds);

					/// <summary>
					///将混合特效的二进制字段解析成id数组
					/// </summary>					
					/// <returns></returns>
					EarthView::World::Core::StringVector getBlendEffectChildIds(const EVString& val);

					/// <summary>
					/// 清空树
					/// </summary>
					/// <param name="EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree">父用户类别树指针</param>
					/// <returns></returns>
					ev_void clearTree(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* parenttree);

					/// <summary>
					/// 创建树
					/// </summary>
					/// <param name="node">特效分类树节点</param>
					/// <param name="userTypeInfos">自定义分类信息容器</param>
					/// <param name="effectInfos">特效信息容器</param>
					/// <returns></returns>
					ev_void buildTree(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* node,_out EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector& userTypeInfos, _out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectInfos);

					/// <summary>
					/// 读取分类子节点
					/// </summary>
					/// <param name="code">分类编码</param>
					/// <param name="allUserTypeInfos">所有的自定义分类信息容器</param>
					/// <param name="childTypeInfoList">子分类信息容器(输出)</param>
					/// <returns></returns>
					ev_void readChildNode(EVString code, EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector& allUserTypeInfos,_out EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector& childTypeInfoList );

					/// <summary>
					/// 根据分类读取特效信息
					/// </summary>
					/// <param name="userType">特效分类编码</param>
					/// <param name="effectInfos">特效信息容器</param>
					/// <param name="effectInfoVec">特效信息容器(输出)</param>
					/// <returns></returns>
					void getEffectInfoByUserType( const EVString& userType,EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectInfos,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectInfoVec);

					/// <summary>
					/// 获取用户类别子树节点信息
					/// </summary>
					/// <param name="nodeCode">父节点编码</param>
					/// <param name="typeInfoList">子节点集信息</param>
					/// <returns></returns>
					ev_void getChildType(EVString& nodeCode,_out vector<EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*>& typeInfoList);

					/// <summary>
					/// 序列化基础信息
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeCommon(_inout EVString& particleScriptBody,EarthView::World::Graphic::CParticleSystem* pe);

					/// <summary>
					/// 序列化基础发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeEmitterBase(_inout EVString& particleScriptBody,EarthView::World::Graphic::CParticleEmitter* pe);

					/// <summary>
					/// 序列化域发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeAreaEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CAreaEmitter* pe);

					/// <summary>
					/// 序列化盒状发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeBoxEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CBoxEmitter* pe);

					/// <summary>
					/// 序列化圆柱发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeCylinderEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CCylinderEmitter* pe);

					/// <summary>
					/// 序列化环形发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeRingEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CRingEmitter* pe);

					/// <summary>
					/// 序列化点发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializePointEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CPointEmitter* pe);

					/// <summary>
					/// 序列化点发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializePointExtendEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CPointExtendEmitter* pe);

					/// <summary>
					/// 序列化椭圆发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeEllipsoidEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CEllipsoidEmitter* pe);

					/// <summary>
					/// 序列化空心椭圆发射器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeHollowEllipsoidEmitter(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CHollowEllipsoidEmitter* pe);

					/// <summary>
					/// 序列化颜色衰减效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeColourFaderAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CColourFaderAffector* pe);

					/// <summary>
					/// 序列化颜色衰减效应器2
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeColourFaderAffector2(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CColourFaderAffector2* pe);

					/// <summary>
					/// 序列化颜色图片效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeColourImageAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CColourImageAffector* pe);

					/// <summary>
					/// 序列化颜色修改效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeColourInterpolatorAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CColourInterpolatorAffector* pe);

					/// <summary>
					/// 序列化反弹效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeDeflectorPlaneAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CDeflectorPlaneAffector* pe);

					/// <summary>
					/// 序列化随机效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeDirectionRandomiserAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CDirectionRandomiserAffector* pe);

					/// <summary>
					/// 序列化线性力效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeLinearForceAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CLinearForceAffector* pe);

					/// <summary>
					/// 序列化旋转效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeRotatorAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CRotationAffector* pe);

					/// <summary>
					/// 序列化缩放效应器
					/// </summary>
					/// <param name="particleScriptBody">粒子脚本</param>
					/// <param name="pe">粒子系统指针</param>
					/// <returns></returns>
					ev_void serializeScalerAffector(_inout EVString& particleScriptBody,EarthView::World::Plugin::ParticleFX::CScaleAffector* pe);

				};
			}
		}
	}
}
#endif
