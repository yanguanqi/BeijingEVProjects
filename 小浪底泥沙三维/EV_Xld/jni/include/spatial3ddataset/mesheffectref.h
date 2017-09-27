#ifndef EARTHVIEW_WORLD_SPATIAL3D_MESHEFFECTREF_H
#define EARTHVIEW_WORLD_SPATIAL3D_MESHEFFECTREF_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "core/stringvector.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"

#define TABLE_MESHATTACH "EV_MESH_ATTACHMENT_REF"
#define TABLE_MESHINS "EV_MESH_INS"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class CFields;
			}
		}
	}
}



namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{

				class CModelDataSource;


				/// <summary>
				///特效绑定的类型枚举
				/// </summary>
				enum EVMeshAttachMentType
				{
					/// <summary>
					/// 特效绑定在subMesh上
					/// </summary>
					MAMT_EffectSubMesh = 0, 
					/// <summary>
					/// 特效绑定的是骨骼上
					/// </summary>
					MAMT_EffectBone = 1,
					/// <summary>
					/// 模型绑定在subMesh
					/// </summary>
					MAMT_ModelSubMesh = 2,
					/// <summary>
					/// 模型绑定在骨头上
					/// </summary>
					MAMT_ModelBone = 3,
					/// <summary>
					/// 灯光绑定在subMesh上
					/// </summary>
					MAMT_LightSubMesh = 4,
					/// <summary>
					/// 特效绑定在节点上
					/// </summary>
					MAMT_EffectNode = 5,
					/// <summary>
					/// 模型绑定在节点上
					/// </summary>
					MAMT_ModelNode = 6
				};


				//模型特效绑定信息类
				class EV_Spatial3DDataset_DLL CMeshEffectRefInfo : public EarthView::World::Core::CAllocatedObject
				{
				private:
					ev_uint32 mMeshID;///模型ID
					ev_uint32 mEffectID;///特效ID
					EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType mType;///绑定类型
					ev_uint32 mInfoID;///关联表信息ID
					EVString mBoneName;///骨骼名称
					EarthView::World::Spatial::Math::CVector3 mOffSetPosition;///偏移位置信息
					EarthView::World::Spatial::Math::CQuaternion mRotate;///旋转四元数
					EarthView::World::Spatial::Math::CVector3 mScale;///缩放信息
					EVString mAliasName;///别名

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshEffectRefInfo(_in EarthView::World::Core::CNameValuePairList *pList);
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMeshEffectRefInfo();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CMeshEffectRefInfo();

					/// <summary>
					/// 设置绑定的别名
					/// </summary>
					/// <param name="aliasName">别名</param>
					/// <returns></returns>
					ev_void setAliasName(const EVString& aliasName);

					/// <summary>
					/// 获取绑定的别名
					/// </summary>
					/// <param name=""></param>
					/// <returns>绑定对象的别名</returns>
					EVString getAliasName();

					/// <summary>
					/// 设置绑定的ID
					/// </summary>
					/// <param name="pList">关联表ID</param>
					/// <returns></returns>
					ev_void setInfoID(ev_uint32 infoID);

					/// <summary>
					/// 获取绑定的ID
					/// </summary>
					/// <param name="pList"></param>
					/// <returns>获取绑定ID</returns>
					ev_uint32 getInfoID();

					/// <summary>
					///设置模型的ID
					/// </summary>
					/// <param name="meshID">模型的ID</param>
					/// <returns></returns>
					ev_void setMeshID(ev_uint32 meshID);

					/// <summary>
					/// 获取模型ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回模型ID</returns>
					ev_uint32 getMeshID();

					/// <summary>
					/// 设置特效的ID
					/// </summary>
					/// <param name="effectID">特效的ID</param>
					/// <returns></returns>
					ev_void setEffectID(ev_uint32 effectID);

					/// <summary>
					/// 获取特效的ID
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回特效ID</returns>
					ev_uint32 getEffectID();

					/// <summary>
					/// 设置绑定对象的类型
					/// </summary>
					/// <param name="type">类型</param>
					/// <returns></returns>
					ev_void setType(EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType type);

					/// <summary>
					/// 获取绑定对象的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回绑定对象的类型</returns>
					EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType getType();


					/// <summary>
					/// 设置骨骼的名称
					/// </summary>
					/// <param name="boneName">骨骼名称</param>
					ev_void setBoneName(EVString boneName);

					/// <summary>
					/// 获取骨骼的名称
					/// </summary>
					/// <param name="pList">骨骼名称</param>
					/// <returns></returns>
					EVString  getBoneName();

					/// <summary>
					/// 获取偏移量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回位置偏移量信息</returns>
					EarthView::World::Spatial::Math::CVector3 getOffSetPosition();

					/// <summary>
					/// 设置位置偏移量
					/// </summary>
					/// <param name="offSetPosition">位置偏移量</param>
					/// <returns></returns>
					ev_void setOffSetPosition(EarthView::World::Spatial::Math::CVector3 offSetPosition);

					/// <summary>
					/// 获取旋转四元数
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回旋转四元数</returns>
					EarthView::World::Spatial::Math::CQuaternion getRotate() ;

					/// <summary>
					/// 设置旋转四元数
					/// </summary>
					/// <param name="val">四元数</param>
					/// <returns></returns>
					ev_void setRotate(EarthView::World::Spatial::Math::CQuaternion val);

					/// <summary>
					/// 获取缩放
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回缩放信息</returns>

					EarthView::World::Spatial::Math::CVector3 getScale();

					/// <summary>
					/// 设置缩放信息
					/// </summary>
					/// <param name="scale">缩放信息</param>
					/// <returns></returns>

					ev_void setScale(EarthView::World::Spatial::Math::CVector3 scale);


				};

				//绑定信息容器封装类
				class EV_Spatial3DDataset_DLL CMeshEffectRefInfoVector:public EarthView::World::Core::CBaseObject
				{
ev_private:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshEffectRefInfoVector(_in EarthView::World::Core::CNameValuePairList *pList);
				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMeshEffectRefInfoVector();
ev_private:
					typedef vector<EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo > InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);
					iterator insert(iterator pos, EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo const &t);
				private:
					InternalList mList;
				public:

					/// <summary>
					/// 在容器末尾添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo const &t);

					/// <summary>
					/// 删除最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();


					/// <summary>
					/// 返回第一个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>第一个元素值</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& front();

					/// <summary>
					/// 返回最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>最后元素值</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& back();

					/// <summary>
					/// 插入元素
					/// </summary>
					/// <param name="pos">插入位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo const &t);


					void remove(ev_size_t pos);

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>为空返回true，否则false</returns>
					ev_bool empty() const;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& operator[](ev_size_t n);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& at(ev_size_t n);

					/// <summary>
					/// 返回中间某元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>元素值</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo const &at(ev_size_t n) const;

					/// <summary>
					/// 返回容器中元素数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器中元素数量大小</returns>
					ev_size_t size() const;


					/// <summary>
					/// 改变容器大小
					/// </summary>
					/// <param name="newSize">容器大小</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void reserve(ev_size_t count);

					/// <summary>
					/// 清空容器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();

				};


				class EV_Spatial3DDataset_DLL CMeshEffectRefManager : public EarthView::World::Core::CAllocatedObject
				{
					friend class CModelDataSource;
				private:
					CModelDataSource* mpDataSource;
ev_private:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshEffectRefManager(_in EarthView::World::Core::CNameValuePairList *pList);
				protected:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CMeshEffectRefManager();
				public:

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CMeshEffectRefManager();

					/// <summary>
					/// 获取绑定信息集合
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getMeshEffectRefInfos(ev_uint32 meshID);

					/// <summary>
					/// 获取绑定子模型信息集合
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getBindModelMeshEffectRefInfos(ev_uint32 meshID);

					/// <summary>
					/// 获取绑定模型绑定的特效信息集合
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getBindEffectMeshEffectRefInfos(ev_uint32 meshID);

					/// <summary>
					/// 获取绑定模型绑定的光源信息集合
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector，返回绑定信息集合</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector getBindLightMeshEffectRefInfos(ev_uint32 meshID);

					/// <summary>
					/// 获取绑定信息
					/// </summary>
					/// <param name="evID">绑定的InfoID</param>
					/// <returns>EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo，返回绑定信息</returns>
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo getMeshEffectRefInfo(ev_uint32 evID);

					/// <summary>
					/// 插入一条绑定信息
					/// </summary>
					/// <param name="info">绑定信息</param>
					/// <returns>返回绑定生成的InfoID</returns>
					ev_uint32 insertMeshEffectRefInfo(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* info);

					/// <summary>
					/// 通过模型ID，删除模型绑定所有信息
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool deleteMeshEffectRef(ev_uint32 meshID);

					/// <summary>
					/// 通过模型ID，删除模型绑定子模型所有信息
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool deleteBindModelMeshEffectRef(ev_uint32 meshID);

					/// <summary>
					/// 通过模型ID，删除模型绑定子光源所有信息
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool deleteBindLightMeshEffectRef(ev_uint32 meshID);

					/// <summary>
					/// 通过模型ID，删除模型绑定特效所有信息
					/// </summary>
					/// <param name="meshID">模型ID</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool deleteBindEffectMeshEffectRef(ev_uint32 meshID);

					/// <summary>
					/// 通过绑定ID，删除模型绑定信息
					/// </summary>
					/// <param name="BindID">绑定ID</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool deleteBindMeshRef( ev_uint32 BindID );

					/// <summary>
					/// 通过InfoID，删除绑定信息
					/// </summary>
					/// <param name="evID">InfoID</param>
					/// <returns></returns>
					ev_bool deleteRef(ev_uint32 evID);

					/// <summary>
					/// 清除绑定关系表中的信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool clearTable();

					/// <summary>
					/// 通过绑定信息ID更新绑定信息
					/// </summary>
					/// <param name="evId">InfoID</param>
					/// <param name="offSetPosition">位置偏移量信息</param>
					/// <param name="rotate">旋转四元数信息</param>
					/// <param name="scale">缩放信息</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool updateMeshEffectRefPosition(ev_uint32 evId,EarthView::World::Spatial::Math::CVector3 offSetPosition,EarthView::World::Spatial::Math::CQuaternion rotate,EarthView::World::Spatial::Math::CVector3 scale);

					/// <summary>
					/// 检查绑定的别名是否存在
					/// </summary>
					/// <param name="aliasName">别名</param>
					/// <returns>存在返回1，不存在返回0,执行失败返回-1</returns>
					ev_uint32 checkAliasName(const EVString& aliasName,ev_uint32 modelId);

					/// <summary>
					/// 通过绑定信息ID更新绑定的别名
					/// </summary>
					/// <param name="evId">InfoID</param>
					/// <param name="aliasName">别名</param>
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool updateMeshEffectRefAliasName(ev_uint32 evId, const EVString& aliasName);

					/// <summary>
					/// 通过绑定信息ID更新绑定的别名
					/// </summary>
					/// <param name="evId">InfoID</param>
					/// <param name="aliasName">别名</param> 
					/// <returns>成功返回true，失败返回false</returns>
					ev_bool updateMeshLightRefProperty(ev_uint32 evId, const EVString& propertyStr);

					/// <summary>
					/// 检测关系表信息
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void checkMeshEffectRefTable();

					/// <summary>
					/// 获取关系表中的最大ID值
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大ID值</returns>
					ev_uint32 getMaxMeshEffectRefID();


					//ev_bool updateMeshEffectRefInfo(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* info);
					/// <summary>
					/// 将EV_MESH_INS表中的位置初始化为0
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否操作成功</returns>
					ev_bool initMeshInsPos();

				};



			}//namespace
		}
	}
}
#endif
