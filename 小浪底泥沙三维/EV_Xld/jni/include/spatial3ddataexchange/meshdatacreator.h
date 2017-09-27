#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHDATACREATE_H_
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHDATACREATE_H_


#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "spatial3ddataexchange/meshdata.h"
#include "spatial3ddataexchange/entitymetadata.h"
//#include "./modelcomponent.h"
#include <vector>
namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange
{
	/// <summary>
	/// 负责创建meshdata，每次调用时create和destory都必须成对出现
	/// </summary>
	class EV_Spatial3DDataExchange_DLL CMeshDataCreator:public EarthView::World::Core::CBaseObject
	{
ev_private:
		CMeshDataCreator(_in EarthView::World::Core::CNameValuePairList *pList){}
	public:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <returns></returns>
		CMeshDataCreator();
		/// <summary>
		/// 析构函数
		/// </summary>
		/// <returns></returns>
		~CMeshDataCreator();
		/// <summary>
		/// 创建meshdata
		/// </summary>
		/// <param name="modelMetaData">模型源数据</param>
		/// <returns>返回meshdata</returns>	
		CMeshData createMeshData(const CEntityMetaData& modelMetaData);
		/// <summary>
		/// 创建meshdata
		/// </summary>
		/// <param name="modelcomponet">自定义模型组件</param>
		/// <returns>返回meshdata</returns>	
		//CMeshData createMeshData(const CModelComponent& modelcomponet); 
		/// <summary>
		/// 创建meshdata
		/// </summary>
		/// <param name="meshPath">本地的.mesh文件</param>
		/// <returns>返回meshdata</returns>	
	    CMeshData createMeshData(const EVString& meshPath);
		/// <summary>
		/// 销毁meshdata
		/// </summary>
		/// <param name="meshData">销毁对象</param>
		/// <returns></returns>	
		ev_void destroyMeshData(CMeshData& meshData);
	};
}}}}

#endif
