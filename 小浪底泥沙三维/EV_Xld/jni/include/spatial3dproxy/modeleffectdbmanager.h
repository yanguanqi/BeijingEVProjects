#ifndef EARTHVIEW_WORLD_SPATIAL3DPROXY__MODELEFFECTDBMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL3DPROXY__MODELEFFECTDBMANAGER_H

#include "spatial3dproxy/spatial3dproxy_config.h"
#include "spatial3ddataset/usertypemanager.h"
#include "spatial3ddataset/mesheffectref.h"
#include "spatial3ddataset/meshtemplatefeature.h"
#include "spatial3dengine/modelbaseobject.h"
#include "spatialinterface/ifeatureiterator.h"
#include "spatial3ddataset/effectdatasource.h"
#include "spatial3dengine/effect.h"
#include "spatial3ddataset/modeldatasource.h"
#include "spatial3dengine/modeldbimportlistener.h"
#include "spatial3ddataset/propertymanager.h"
#include "spatial3dproxy/modeldatasourcetool.h"
#include "spatialinterface/ifields.h"
#include "graphic/common.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"
#include "spatial3dengine/modelpublish.h"
#include "spatialdatabase/propertyset.h"
#include "spatial3dproxy/modelfilesourcepublish.h"
#include "spatial3dproxy/modeldbsourcepublish.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "spatial3ddataset/modeltemplateplugin.h"
#include "spatial3dproxy/modeldatastreamsourcepublish.h"


namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			class  EV_SPATIAL3DPROXY_DLL CModelEffectDBManager : public EarthView::World::Core::CAllocatedObject
			{
			protected:
				EarthView::World::Spatial3D::Dataset::CModelDataSource* mpDataSource;
				CModelDBSourcePublishTool* mpPublishTool;
				ModelDataSourceTool* mModelDataSourceTool;
#if EV_PLATFORM != EV_PLATFORM_ANDROID
				CModelFileSourcePublishTool* mpModelFileSourcePublicTool;
				CModelDataStreamSourcePublishTool* mpModelStreamPublishTool;
#endif

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CModelEffectDBManager(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				EarthView::World::Graphic::CRenderWindow* mpRenderWindow;
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_pDataSource">数据源句柄</param>
				/// <returns></returns>
				CModelEffectDBManager(EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_pDataSource);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CModelEffectDBManager();

				/// <summary>
				/// 设置模型数据源
				/// </summary>
				/// <param name="ref_pDatasource">数据源句柄</param>
				/// <returns></returns>
				void setModelDataSource(EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_pDatasource);



				/////*************************************导入导出接口***************************************//////

				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <returns></returns>
				ev_bool import(EarthView::World::Spatial3D::Dataset::CModelDataSource* src,EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, EarthView::World::Spatial3D::CModelPublishToolListener* listener,ev_bool bClear, ev_bool bCoverOrInstead);

				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="idAndNameMap">返回导入成功的模型id及其名称</param>
				/// <returns></returns>
				ev_bool import(EarthView::World::Spatial3D::Dataset::CModelDataSource* src,EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, EarthView::World::Spatial3D::CModelPublishToolListener* listener,ev_bool bClear, ev_bool bCoverOrInstead,EarthView::World::Spatial3D::ModelIdAndNameMap &idAndNameMap);

				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="modelIDVec">需要导出的模型ID集合</param>
				/// <param name="typeCodesVec">需要导出的模型分类编码集合</param>
				/// <param name="effectInfoVec">需要导出的特效信息集合</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <returns></returns>
				ev_bool import(EarthView::World::Spatial3D::Dataset::CModelDataSource* src,EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, EarthView::World::Spatial3D::CModelPublishToolListener* listener,EarthView::World::Core::IntVector modelIDVec,const EarthView::World::Core::StringVector &typeCodesVec,const EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectInfoVec, ev_bool bClear, ev_bool bCoverOrInstead);

				/// <summary>
				/// 模型导入函数
				/// </summary>
				/// <param name="src">源数据源</param>
				/// <param name="dest">目标数据源</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="modelIDVec">需要导出的模型ID集合</param>
				/// <param name="typeCodesVec">需要导出的模型分类编码集合</param>
				/// <param name="effectInfoVec">需要导出的特效信息集合</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="idAndNameMap">返回导入成功的模型id及其名称</param>
				/// <returns></returns>
				ev_bool import(EarthView::World::Spatial3D::Dataset::CModelDataSource* src,EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, EarthView::World::Spatial3D::CModelPublishToolListener* listener,EarthView::World::Core::IntVector modelIDVec,const EarthView::World::Core::StringVector &typeCodesVec,const EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectInfoVec, ev_bool bClear, ev_bool bCoverOrInstead,EarthView::World::Spatial3D::ModelIdAndNameMap &idAndNameMap);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dataFolder">模型文件根目录</param>
				/// <param name="pModelDBDataSource">目标数据源</param>
				/// <param name="mgr">场景管理器</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="userTypeNodecode">用户类别编码</param>
				/// <returns></returns>
				ev_bool importModelDBFromLocalFiles(const EVString& dataFolder, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDBDataSource,EarthView::World::Graphic::CSceneManager* mgr, EarthView::World::Spatial3D::CModelPublishToolListener* listener,ev_bool bClear, ev_bool bCoverOrInstead,ev_bool bCompositorSubmesh,const EVString& userTypeNodecode,ev_bool isLeftHand);

				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dataFolder">模型文件根目录</param>
				/// <param name="pModelDBDataSource">目标数据源</param>
				/// <param name="mgr">场景管理器</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="userTypeNodecode">用户类别编码</param>
				/// <returns></returns>
				ev_bool importModelDBFromLocalFiles(const EVString& dataFolder, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDBDataSource,EarthView::World::Graphic::CSceneManager* mgr, EarthView::World::Spatial3D::CModelPublishToolListener* listener,ev_bool bClear, ev_bool bCoverOrInstead,ev_bool bCompositorSubmesh,const EVString& userTypeNodecode,ev_bool isLeftHand,ev_bool doubleSideLight, ev_bool isReCalNormal);
				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dataFolder">模型文件根目录</param>
				/// <param name="pModelDBDataSource">目标数据源</param>
				/// <param name="mgr">场景管理器</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="userTypeNodecode">用户类别编码</param>
				/// <param name="idAndNameMap">返回导入成功的模型id及其名称</param>
				/// <returns></returns>
				ev_bool importModelDBFromLocalFiles(const EVString& dataFolder, EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDBDataSource,EarthView::World::Graphic::CSceneManager* mgr, EarthView::World::Spatial3D::CModelPublishToolListener* listener,ev_bool bClear, ev_bool bCoverOrInstead,ev_bool bCompositorSubmesh,const EVString& userTypeNodecode,ev_bool isLeftHand,EarthView::World::Spatial3D::ModelIdAndNameMap &idAndNameMap);


				/// <summary>
				/// 从文件导入
				/// </summary>
				/// <param name="dataFolder">模型文件根目录</param>
				/// <param name="pModelDBDataSource">目标数据源</param>
				/// <param name="mgr">场景管理器</param>
				/// <param name="listener">过程监听器</param>
				/// <param name="bClear">是否清空原有数据</param>
				/// <param name="bCoverOrInstead">覆盖或是替换</param>
				/// <param name="userTypeNodecode">用户类别编码</param>
				/// <param name="idAndNameMap">返回导入成功的模型id及其名称</param>
				/// <returns></returns>
				ev_bool importModelDBFromStream( const CModelData& modelData , EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDBDataSource,EarthView::World::Graphic::CSceneManager* mgr, ev_bool bCoverOrInstead,const EVString& userTypeNodecode,_out ev_uint32 &meshid );

				
				/// <summary>
				/// 清除模板数据源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clearModelTemplDataSource();

				/// <summary>
				/// 停止导入(从数据源导入的时候停止)
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void stopImport();

				/// <summary>
				/// 停止模型文件导入
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void stopModelFileImport();

				/// <summary>
				/// 销毁文件导入库工具对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void destroyModelFileImport();

				////////************************************模型库遍历****************************************//////
				/// <summary>
				/// 获取根用户类型信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeInfo，根节点信息</returns>
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo getRootUserType();

				/// <summary>
				/// 获取根用户类型信息
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo，根节点信息</returns>
				ev_bool getEffectRootUserType(_out EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo& rootUserTypeInfo);

				/// <summary>
				/// 获取指定节点的子用户类型信息
				/// </summary>
				/// <param name="nodeCode">父节点编码</param>
				/// <param name="typeList">子节点信息存储对象</param>
				/// <returns>是返回ture，否则返回false</returns>
				ev_bool getChildUserType(const EVString& nodeCode, _out EarthView::World::Spatial3D::Dataset::CUserTypeInfoList& typeList);

				/// <summary>
				/// 获取EV_EFFECT表里所有的特效信息。
				/// </summary>
				/// <param name="vec">传出的特效信息集合</param>
				/// <returns>操作是否成功</returns>
				ev_bool getEffectInfos(_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec);

				/// <summary>
				/// 获取指定节点的子用户类型信息
				/// </summary>
				/// <param name="nodeCode">父节点编码</param>
				/// <param name="typeList">子节点信息存储对象</param>
				/// <returns>是返回ture，否则返回false</returns>
				ev_bool getEffectChildUserType(const EVString& nodeCode, _out EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector& typeList );

				/// <summary>
				/// 在指定节点下创建新的用户信息
				/// </summary>
				/// <param name="parentnodeCode">父节点编码</param>
				/// <param name="nwType">新类型名称</param>
				/// <param name="pFilds">创建新类型的字段集</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeInfo，返回创建出来的类型信息</returns>
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo createUserType(const EVString& parentnodeCode,const EVString& nwType,EarthView::World::Spatial::GeoDataset::IFields* pFilds);

				/// <summary>
				/// 删除指定节点的用户信息(该节点下的子节点都会被删除)
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool deleteUserType(const EVString& nodeCode);


				/// <summary>
				/// 清除指定节点下模型(子节点信息不清除)
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool clearUserType(const EVString& nodeCode);

				/// <summary>
				/// 删除给定id的mesh文件及相关资源
				/// </summary>
				/// <param name="MeshID">模型的InstID值</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool deleteMesh(ev_int32 MeshID);

				/// <summary>
				/// 查找是否有给定节点的用户信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CUserTypeInfo，返回查找出来的节点信息</returns>
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo findUserType(const EVString& nodeCode);

				/// <summary>
				/// 更新节点(将一个节点下的模型移动到另一个节点下)
				/// </summary>
				/// <param name="nodeCode">源节点</param>
				/// <param name="id">模型ID</param>
				/// <param name="nwNodeCode">需要更新为的节点</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool changeType(const EVString& nodeCode, ev_uint32 id, const EVString& nwNodeCode);

				/// <summary>
				///判断用户类型是否存在
				/// </summary>
				/// <param name="typeName">用户类型名称</param>
				/// <returns>存在返回true，不存在返回false</returns>
				ev_bool isExist(const EVString& typeName);

				/// <summary>
				/// 通过模型ID获取mesh文件的名字
				/// </summary>
				/// <param name="meshID">模型ID</param>
				/// <returns>返回模型名称</returns>
				EVString getMeshName(ev_uint32 meshID);

				/// <summary>
				/// 通过模型ID获取模型Template文件的名字
				/// </summary>
				/// <param name="meshID">模型ID</param>
				/// <returns>返回模型Template名称</returns>
				EVString getMeshTemplateName(ev_uint32 meshID);

				/// <summary>
				/// 修改节点对应的属性表描述
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <param name="nwTypename">新的属性表名称描述</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool renameType( EVString& nodecode,  EVString& nwTypename);

				/// <summary>
				/// 修改模型名称
				/// </summary>
				/// <param name="meshID">模型ID</param>
				/// <param name="nwMeshname">新的模型名称</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool renameMeshName(ev_int32 meshID,  EVString& nwMeshname);

				/// <summary>
				/// 修改组件名称
				/// </summary>
				/// <param name="evid">组件主键</param>
				/// <param name="mainModelId">主模型ID</param>
				/// <param name="nwMeshname">新的组件名称</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool renameAttachComponent(ev_int32 evid,ev_int32 mainModelId,const EVString& nwComponentName);
				/// <summary>
				/// 获取给定节点下的所有模型id
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <returns>EarthView::World::Core::IntVector，返回模型ID集</returns>
				EarthView::World::Core::IntVector getObjectIDs(const EVString& nodecode);

				/// <summary>
				/// 获取给定节点下的所有模型id与名称
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <param name="idAndNameMap">ID与名称</param>
				/// <returns></returns>
				void getObjectIDAndNames(const EVString& nodecode,_out EarthView::World::Spatial3D::ModelIdAndNameMap& idAndNameMap);

				// <summary>
				/// 获取给定节点下的所有特效id
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <returns>EarthView::World::Core::IntVector，返回特效ID集</returns>
				EarthView::World::Core::IntVector getEffectObjectIDs(const EVString& nodecode);

				// <summary>
				/// 获取给定节点下的所有特效id与名称
				/// </summary>
				/// <param name="nodecode">节点编码</param>
				/// <param name="vec">特效信息集合</param>
				/// <returns></returns>
				void getEffectObjectIDs(const EVString& nodecode,_out EarthView::World::Spatial3D::Dataset::CEffectInfoVector& vec);

				/// <summary>
				/// 通过模型别名名获取模型对应的instance的ID
				/// </summary>
				/// <param name="meshName">模型别名</param>
				/// <returns>模型instance的ID</returns>
				ev_int32 getMeshID(const EVString& meshName);

				/// <summary>
				/// 通过分类描述获取模型分类对象
				/// </summary>
				/// <param name="meshName">模型别名</param>
				/// <returns>模型instance的ID</returns>
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo getModelUserTypeByNodeDesc(const EVString& desc);

				/// <summary>
				/// 通过分类编码获得分类对象
				/// </summary>
				/// <param name="meshName">模型别名</param>
				/// <returns>模型instance的ID</returns>				
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo getModelUserTypeByNodeCode(const EVString& nodeCode);

				/// <summary>
				/// 获取指定节点所对应的属性表字段结构
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="flds">传出的属性表字段结构</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool getAttrTypeFields(const EVString& nodeCode,_out EarthView::World::Spatial::GeoDataset::CFields* flds);

				/// <summary>
				/// 获取指定节点下面给定模型id的属性信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="meshID">模型ID</param>
				/// <returns>EarthView::World::Spatial::GeoDataset::CPropertySet，模型的属性信息</returns>
				EarthView::World::Spatial::GeoDataset::CPropertySet getMeshAttr(const EVString& nodeCode, ev_uint32 meshID);

				/// <summary>
				/// 更新属性表字段
				/// </summary>
				/// <param name="typeName">属性表名称</param>
				/// <param name="flds">属性表新的字段结构</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateAttrTypeFields(const EVString& typeName,_in EarthView::World::Spatial::GeoDataset::CFields* flds);

				/// <summary>
				/// 更新模型属性信息
				/// </summary>
				/// <param name="nodeCode">模型所在的节点编码</param>
				/// <param name="meshID">模型ID</param>
				/// <param name="vals">模型属性信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateMeshAttr(const EVString& nodeCode, ev_uint32 meshID, EarthView::World::Spatial::GeoDataset::CPropertySet* vals);

				/// <summary>
				/// 从数据库获取模型信息
				/// </summary>
				/// <param name="id">模型ID</param>
				/// <param name="quater">模型旋转信息</param>
				/// <param name="position">模型位置信息</param>
				/// <param name="scale">模型缩放信息</param>
				/// <param name="nodeCode">模型所在节点编码</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool getModelInfoFromDB( ev_uint32 id,_out EarthView::World::Spatial::Math::CVector3& quater, _out EarthView::World::Spatial::Math::CVector3 &position,_out EarthView::World::Spatial::Math::CVector3 &scale,_out EVString& nodeCode);

				/// <summary>
				/// 获取绑定对象信息
				/// </summary>
				/// <param name="id">该绑定的ID值</param>
				/// <param name="quater">绑定对象的旋转信息</param>
				/// <param name="position">绑定对象的位置信息</param>
				/// <param name="scale">绑定对象的缩放信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool getAttachInfoFromDB( ev_uint32 id,_out EarthView::World::Spatial::Math::CVector3& quater,_out EarthView::World::Spatial::Math::CVector3 &position,_out EarthView::World::Spatial::Math::CVector3 &scale );


				/// <summary>
				/// 判断是否存在绑定关系
				/// </summary>
				/// <param name="mainID">主模型ID</param>
				/// <param name="BindID">被绑定对象的ID</param>
				/// <returns>存在返回true，不存在返回false</returns>
				ev_bool isExistBindID(ev_int32 mainID,ev_int32 BindID);

				/// <summary>
				/// 仅仅拷贝模型，不传出拷贝之后的模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool copyModel(const EVString& nodeCode,ev_int32 copyID);

				/// <summary>
				/// 仅仅拷贝模型，并传出拷贝之后的模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <param name="nodeCode">传出新的ID</param>
				/// <param name="copyID">传出拷贝模型别名</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool copyModel(const EVString& nodeCode,ev_int32 copyID,ev_int32& newID,EVString& newName);


				/// <summary>
				/// 拷贝模型及其绑定信息，不传出拷贝之后模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool copyModelAndBindInfo(const EVString& nodeCode,ev_int32 copyID);

				/// <summary>
				/// 拷贝模型及其绑定信息，并传出拷贝之后模型信息
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <param name="copyID">需要拷贝的模型ID</param>
				/// <param name="nodeCode">新的ID</param>
				/// <param name="copyID">拷贝模型别名</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool copyModelAndBindInfo(const EVString& nodeCode,ev_int32 copyID,ev_int32& newID,EVString& newName);

				/// <summary>
				/// 获取关系表名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>EarthView::World::Core::StringVector，返回关系表的集合</returns>
				EarthView::World::Core::StringVector getAttrTableNames();

				/// <summary>
				/// 获取关联表字段信息
				/// </summary>
				/// <param name="typeName">属性关联表表名</param>
				/// <param name="flds">传出的属性关联表字段结构</param>
				/// <returns></returns>
				void getAttrTableFileds(const EVString& typeName,_out EarthView::World::Spatial::GeoDataset::CFields* flds);

				///////*********************************模型加载****************************************/////////////////////////////

				/// <summary>
				/// 创建 模型库 中的一个模型对象
				/// </summary>
				/// <param name="modelType">创建模型的类型(MT_MODEL或者MT_INSTANCE)</param>
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="meshName">模型名称</param>
				/// <returns>传入MT_MODEL，创建成功则返回CManualModelObject;传入MT_INSTANCE，创建成功则返回CManualInstanceObject;失败则返回NULL</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createModelObject(EarthView::World::Spatial3D::ModelType modelType, EarthView::World::Graphic::CSceneManager* pSceneManager, const EVString& meshName);


				/// <summary>
				/// 创建 模型库 中的一个模型对象
				/// </summary>
				/// <param name="modelType">创建模型的类型(MT_MODEL或者MT_INSTANCE)</param>
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="meshID">模型id</param>
				/// <returns>传入MT_MODEL，创建成功则返回CManualModelObject;传入MT_INSTANCE，创建成功则返回CManualInstanceObject;失败则返回NULL</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* createModelObject(EarthView::World::Spatial3D::ModelType modelType,EarthView::World::Graphic::CSceneManager* pSceneManager, ev_uint32 meshID);

				/// <summary>
				/// 销毁 模型库 中的一个模型对象
				/// </summary>
				/// <param name="pModel">模型对象</param>				
				/// <returns>失败则返回false</returns>
				ev_bool destroyModelObject(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

				/// <summary>
				/// 通过特效名字创建一个特效
				/// </summary>				
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="effectName">特效名字</param>
				/// <returns>返回创建成功的特效对象</returns>
				EarthView::World::Spatial3D::EffectManager::CEffect* createEffect(EarthView::World::Graphic::CSceneManager* pSceneManager,const EVString& effectName);

				/// <summary>
				/// 通过特效ID创建一个特效
				/// </summary>				
				/// <param name="pSceneManager">场景管理器对象</param>				
				/// <param name="effectId">特效ID</param>
				/// <returns>返回创建成功的特效对象</returns>
				EarthView::World::Spatial3D::EffectManager::CEffect* createEffect(EarthView::World::Graphic::CSceneManager* pSceneManager,ev_uint32 effectId);

ev_private:				
				/// <summary>
				/// 加载一个模型,与unloadModelObject成对出现
				/// </summary>
				/// <param name="meshID">模型ID</param>
				/// <param name="mgr">场景管理器</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建出来的模型对象</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* loadModelObject(ev_uint32 meshID,EarthView::World::Graphic::CSceneManager* mgr);
				/// <summary>
				/// 卸载一个模型,与loadModelObject成对出现
				/// </summary>
				/// <param name="pModel">需要销毁的模型对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool unloadModelObject(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel);

			public:
				/// <summary>
				/// 销毁一个特效
				/// </summary>
				/// <param name="effect">需要销毁的特效对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool destroyEffect(EarthView::World::Spatial3D::EffectManager::CEffect* effect);

				///////*********************************模型绑定编辑(会更新数据库)****************************************/////////////////////////////
				/// <summary>
				/// 获取模型的绑定信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getBindedInfo(ev_uint32 meshID);

				/// <summary>
				/// 获取模型绑定子模型信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getBindedModelInfo(ev_uint32 meshID);

				/// <summary>
				/// 获取模型绑定特效信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getBindedEffectInfo(ev_uint32 meshID);

				/// <summary>
				/// 获取模型绑定光源信息
				/// </summary>
				/// <param name="meshID">该模型ID</param>
				/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回该模型绑定的对象的信息的集合</returns>
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getBindedLightInfo(ev_uint32 meshID);

				/// <summary>
				/// 插入模型绑定信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <param name="meshID">绑定信息位置名称</param>
				/// <param name="meshID">需要绑定的信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool insertBindedInfo(ev_uint32 meshID,EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* info);

				/// <summary>
				/// 根据主键删除一条模型绑定信息
				/// </summary>
				/// <param name="meshID">主键ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool deleteBindedInfoByEVID(ev_uint32 evID);

				/// <summary>
				/// 根据主模型ID删除模型绑定信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool deleteBindedInfo(ev_uint32 meshID);

				/// <summary>
				/// 删除模型绑定仅子模型信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool deleteBindedModelInfo(ev_uint32 meshID);

				/// <summary>
				/// 删除模型绑定特效信息
				/// </summary>
				/// <param name="meshID">主模型ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool deleteBindedEffectInfo(ev_uint32 meshID);

				/// <summary>
				/// 在subentity上绑定一个模型
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedMeshID">需要绑定的模型ID</param>
				/// <param name="subEntityIndex">主模型对象中的subEntity的索引</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* bindModelAtSubEntity(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, ev_uint32 bindedMeshID, ev_uint32 subEntityIndex,const EarthView::World::Spatial::Math::CMatrix4& mat4);

				/// <summary>
				/// 在模型骨头上进行绑定一个模型
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedMeshID">需要绑定的模型ID</param>
				/// <param name="boneName">主模型对象中的骨头名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* bindModelAtBone(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, ev_uint32 bindedMeshID, const EVString& boneName,const EarthView::World::Spatial::Math::CMatrix4& mat4);

				/// <summary>
				/// 在模型节点上进行绑定一个模型
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedMeshID">需要绑定的模型ID</param>
				/// <param name="nodeName">主模型对象中的节点名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::ModelManager::CModelBaseObject，返回创建绑定的模型</returns>
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* bindModelAtNode(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, ev_uint32 bindedMeshID, const EVString& nodeName,const EarthView::World::Spatial::Math::CMatrix4& mat4);

				/// <summary>
				/// 在模型subentity上绑定特效
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="subEntityIndex">主模型对象中的subEntity的索引</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				EarthView::World::Spatial3D::EffectManager::CEffect* bindEffectAtSubEntity(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, ev_uint32 bindedEffectID, ev_uint32 subEntityIndex,const EarthView::World::Spatial::Math::CMatrix4& mat4);

				/// <summary>
				/// 在模型subentity上绑定光源
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="l">需绑定的光源对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="subEntityIndex">主模型对象中的subEntity的索引</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				ev_int32  bindLightAtSubEntity(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj,EarthView::World::Graphic::CLight *l, ev_uint32 bindedLightID, ev_uint32 subEntityIndex,const EarthView::World::Spatial::Math::CMatrix4& mat4);

				/// <summary>
				/// 在模型骨头上绑定特效
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="boneName">主模型对象中的骨头名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				EarthView::World::Spatial3D::EffectManager::CEffect* bindEffectAtBone(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, ev_uint32 bindedEffectID, const EVString& boneName,const EarthView::World::Spatial::Math::CMatrix4& mat4);

				/// <summary>
				/// 在模型骨头上绑定特效
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="bindedEffectID">需要绑定的特效ID</param>
				/// <param name="nodeName">主模型对象中的节点名称</param>
				/// <param name="mat4">绑定模型相对主模型的矩阵</param>
				/// <returns>EarthView::World::Spatial3D::EffectManager::CEffect，返回创建绑定的特效</returns>
				EarthView::World::Spatial3D::EffectManager::CEffect* bindEffectAtNode(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, ev_uint32 bindedEffectID, const EVString& nodeName,const EarthView::World::Spatial::Math::CMatrix4& mat4);

				/// <summary>
				/// 取消绑定的模型并销毁
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定模型对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool unBindAndDestoryModel(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pBindedObj);

				/// <summary>
				/// 取消绑定的特效并销毁
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定特效对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool unBindAndDestoryEffect(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, EarthView::World::Spatial3D::EffectManager::CEffect* pBindedObj);

				/// <summary>
				/// 取消绑定的光源并销毁
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定光源对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool unBindAndDestoryLight(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, EarthView::World::Graphic::CLight* pBindedObj,ev_uint32 bindID);

				/// <summary>
				/// 更新绑定的模型的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定模型对象</param>
				/// <param name="pos">绑定模型位置信息</param>
				/// <param name="scale">绑定模型缩放信息</param>
				/// <param name="rotate">绑定模型旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateBindedModelPosition(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj
					,EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pBindedObj
					,const EarthView::World::Spatial::Math::CVector3& pos
					,const EarthView::World::Spatial::Math::CVector3& scale
					,const EarthView::World::Spatial::Math::CVector3& rotate);

				/// <summary>
				/// 更新绑定的特效的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定特效对象</param>
				/// <param name="pos">绑定特效位置信息</param>
				/// <param name="scale">绑定特效缩放信息</param>
				/// <param name="rotate">绑定特效旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateBindedEffectPosition(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj
					,EarthView::World::Spatial3D::EffectManager::CEffect* pBindedObj
					,const EarthView::World::Spatial::Math::CVector3& pos
					,const EarthView::World::Spatial::Math::CVector3& scale
					,const EarthView::World::Spatial::Math::CVector3& rotate);

				/// <summary>
				/// 更新绑定的光源的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定光源对象</param>
				/// <param name="pos">绑定光源位置信息</param>
				/// <param name="scale">绑定光源缩放信息</param>
				/// <param name="rotate">绑定光源旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateBindedLightPosition(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj
					, ev_uint32 bindID
					,const EarthView::World::Spatial::Math::CVector3& pos
					,const EarthView::World::Spatial::Math::CVector3& scale
					,const EarthView::World::Spatial::Math::CVector3& rotate);

				/// <summary>
				/// 更新绑定的光源的属性
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pBindedObj">绑定光源对象</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateBindedLightProperty(ev_uint32 bindID
					, EarthView::World::Graphic::CLight *l);

				/// <summary>
				/// 更新主模型的姿态
				/// </summary>
				/// <param name="pMainObj">主模型对象</param>
				/// <param name="pos">模型位置信息</param>
				/// <param name="scale">模型缩放信息</param>
				/// <param name="rotate">模型旋转信息</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateMainModelLocalMatrix(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj
					,const EarthView::World::Spatial::Math::CVector3& pos
					,const EarthView::World::Spatial::Math::CVector3& scale
					,const EarthView::World::Spatial::Math::CVector3& rotate);

				//////**********************************材质编辑**************************************////////////////

				/// <summary>
				/// 更新模型材质
				/// </summary>
				/// <param name="pModel">模型对象</param>
				/// <param name="matPtr">需要更新的模型材质</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool updateMaterial(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel, EarthView::World::Graphic::CMaterialPtr& matPtr,const EarthView::World::Core::StringVector& replacedTextures,const EarthView::World::Core::StringVector& newTextureFilesPath);


				//////**********************************模板库接口**************************************//////////////////////////


			private:
				/// <summary>
				/// 判断子对象是否有绑定关系
				/// </summary>
				/// <param name="mainID">主模型ID</param>
				/// <param name="bindID">绑定对象ID</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool isChildBindId(ev_int32 mainID,ev_int32 bindID);

				/// <summary>
				/// 删除给定节点下的所有用户类型
				/// </summary>
				/// <param name="nodeCode">节点编码</param>
				/// <returns>成功返回true，失败返回false</returns>
				ev_bool deleteChildType(const EVString& nodeCode);

				void deleteAllType(const EVString& nodeCode,EarthView::World::Spatial3D::Dataset::CModelDataSource* datasource);
				EVString lightParameterToXml(EarthView::World::Graphic::CLight *l);
				//////*****************************************************************************************/////

			};


		}//end namespace
	}
}
#endif
