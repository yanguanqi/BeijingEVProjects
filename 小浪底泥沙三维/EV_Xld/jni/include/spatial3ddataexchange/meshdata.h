#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHDATA_H_
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHDATA_H_

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"

#include "core/datastream.h"
#include "graphic/mesh.h"
#include "mathengine/matrix4.h"
#include "mathengine/vector3.h"
#include "mathengine/quaternion.h"
#include "spatialinterface/ipropertyset.h"
#include <map>


namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange
{

	class EV_Spatial3DDataExchange_DLL MeshAttrMap : public EarthView::World::Core::CAllocatedObject
	{
ev_private:
		MeshAttrMap(_in EarthView::World::Core::CNameValuePairList *pList){}
	public:
		MeshAttrMap();
		ev_bool push(const EVString& key, EVString const &val);
		ev_bool exist(const EVString &key);
		EVString& operator[](const EVString &key);
		EVString& get(const EVString &key);
		void erase(const EVString &key);
		ev_size_t size() const;
		void clear();
		ev_bool empty() const;
		EarthView::World::Core::StringVector getKeys()const;
ev_private:
		typedef EarthView::World::Core::hashmap<EVString, EVString, _StringHash> InternalList;
		typedef InternalList::iterator iterator;
		typedef InternalList::const_iterator const_iterator;
		typedef InternalList::mapped_type mapped_type;
		typedef InternalList::key_type key_type;
		typedef InternalList::value_type value_type;
		typedef InternalList::_Pairib _Pairib;
		RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);
		_Pairib insert(const value_type &val);
		iterator find(const EVString &key);
		const_iterator find(const EVString &key) const;
	private:
		InternalList mList;
	};


	/// <summary>
	/// 自定义的mesh对象
	/// </summary>
	class EV_Spatial3DDataExchange_DLL CMeshData:public EarthView::World::Core::CAllocatedObject
	{
ev_private:
		CMeshData(EarthView::World::Core::CNameValuePairList* pList);
	public:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name="mesh">mesh对象</param>
		/// <param name="worldTransform">世界矩阵</param>
		/// <returns></returns>
		//CMeshData(CMeshPtr mesh, const CMatrix4& worldTransform);
		CMeshData(EarthView::World::Graphic::CMeshPtr mesh, const EarthView::World::Spatial::Math::CVector3& pos,const EarthView::World::Spatial::Math::CVector3& scale,const EarthView::World::Spatial::Math::CQuaternion& quater);
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name="mesh">mesh对象</param>
		/// <returns></returns>
		CMeshData(EarthView::World::Graphic::CMeshPtr mesh);
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <returns></returns>
		CMeshData();
		/// <summary>
		/// 析构函数
		/// </summary>
		/// <returns></returns>
		~CMeshData();
		/// <summary>
		/// 获取世界矩阵
		/// </summary>
		/// <returns>返回世界矩阵</returns>
		//const CMatrix4& getWorldTransform()const;

		/// <summary>
		/// 获取位置信息（从.scene文件读取的，有可能不是经纬度）
		/// </summary>
		/// <returns>返回CVector3</returns>
		const EarthView::World::Spatial::Math::CVector3& getPosition()const;

		/// <summary>
		/// 获取缩放比例信息
		/// </summary>
		/// <returns>返回CVector3</returns>
		const EarthView::World::Spatial::Math::CVector3& getScale()const;

		/// <summary>
		/// 获取四元数信息
		/// </summary>
		/// <returns>返回CQuaternion</returns>
		const EarthView::World::Spatial::Math::CQuaternion& getQuaternion()const;
		/// <summary>
		/// 获取mesh对象
		/// </summary>
		/// <returns>返回mesh</returns>
		const EarthView::World::Graphic::CMeshPtr getMeshPtr()const;
		/// <summary>
		/// 获取所在的资源组
		/// </summary>
		/// <returns>返回资源组名</returns>
	    EVString getResGroupName()const;
		/// <summary>
		/// 获取mesh名字
		/// </summary>
		/// <returns>返回mesh名字</returns>
		EVString getMeshName()const;
		/// <summary>
		/// 返回源文件的路径
		/// </summary>
		/// <returns>返回路径</returns>
		EVString getSourcePath()const;
		/// <summary>
		/// 设置源文件的路径
		/// </summary>
		/// <param name="path">源路径</param>
		/// <returns></returns>
		void setSourcePath(const EVString& path);
		/// <summary>
		/// 设置节点动画流
		/// </summary>
		/// <param name="ptr">动画流</param>
		/// <returns></returns>
		ev_void setNodeAnimationStream(EarthView::World::Core::MemoryDataStreamPtr ptr);
		/// <summary>
		/// 获取节点动画流
		/// </summary>
		/// <returns>返回节点动画流</returns>
		EarthView::World::Core::MemoryDataStreamPtr getNodeAnimationStream()const;
		/// <summary>
		/// 获取自定义属性
		/// </summary>
		/// <returns>返回自定义属性</returns>
		const MeshAttrMap& getAttr()const;
		/// <summary>
		/// 设置自定义属性
		/// </summary>
		/// <param name="attrmap">自定义属性map</param>
		/// <returns></returns>
		ev_void setAttr(const MeshAttrMap& attrmap);
	private:
		EVString               mSourcePath;
		EarthView::World::Graphic::CMeshPtr             mMesh;                 // 对应的mesh数据
		EarthView::World::Spatial::Math::CVector3             mPos;                  //位置信息
		EarthView::World::Spatial::Math::CVector3             mScale;                //缩放比例
		EarthView::World::Spatial::Math::CQuaternion          mQuation;               //四元数信息
		//CMatrix4             m_worldTransform;       // 模型数据的世界变换矩阵
		EarthView::World::Core::MemoryDataStreamPtr	 mNodeAnimationStream;	 //	节点动画流
		MeshAttrMap  mAttr;                 // 业务属性
	};
}}}}


#endif
