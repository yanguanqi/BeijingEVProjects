#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_ENTITYMETADATA_H_
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_ENTITYMETADATA_H_


#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "mathengine/matrix4.h"
#include "spatial3ddataexchange/meshdata.h"


namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange
{
	/// <summary>
	// Entity基础信息
	// 相当于scene文件中的一个entity节点
	/// </summary>
	class EV_Spatial3DDataExchange_DLL CEntityMetaData: public EarthView::World::Core::CBaseObject
	{
ev_private:
		CEntityMetaData(EarthView::World::Core::CNameValuePairList* pList);
	public:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <returns></returns>
		CEntityMetaData();
		/// <summary>
		/// 析构函数
		/// </summary>
		/// <returns></returns>
		~CEntityMetaData();

		EVString                mMeshPath;              // mesh文件的绝对路径(全路径)
		EVString                mMeshName;              // mesh名字，不包括任何路径
		EarthView::World::Spatial::Math::CVector3              mPos;                   //位置信息
		EarthView::World::Spatial::Math::CVector3              mScale;                 //缩放信息
		EarthView::World::Spatial::Math::CQuaternion           mQuation;                //四元数信息 
		//CMatrix4              m_worldTransform;       // 世界矩阵
		EarthView::World::Spatial3D::DataExchange::MeshAttrMap   mAttriMap;             // scene文件存储的属性键值对 第一个是字段名 第二个是值        
	};
}}}}

#endif
