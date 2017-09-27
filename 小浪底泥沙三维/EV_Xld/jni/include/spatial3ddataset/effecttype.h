#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTTYPE_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTTYPE_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatial3ddataset/effecttabledef.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset{
				
				/// <summary>
				/// 数据集节点树类
				/// </summary>
				class EV_Spatial3DDataset_DLL CEffectUserTypeTree : public EarthView::World::Core::CAllocatedObject
				{
					
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectUserTypeTree(EarthView::World::Core::CNameValuePairList *pList);

					/// <summary>
					/// 设置特效信息
					/// </summary>
					/// <param name="effectInfos">特效信息</param>
					/// <returns></returns>
					ev_void setEffectInfos(CEffectInfoVector effectInfos);	

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectUserTypeTree();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="code">用户自定义特效分类编码</param>
					/// <param name="name">名称</param>
					/// <returns></returns>
					CEffectUserTypeTree(EVString code, EVString name);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CEffectUserTypeTree();

					/// <summary>
					/// 获取子节点数目
					/// </summary>
					/// <param name=""></param>
					/// <returns>节点数目</returns>
					ev_uint32 getChildNum();

					/// <summary>
					/// 获取子节点
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>子节点</returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* getChild(ev_uint32 index);

					/// <summary>
					/// 获取特效数目
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效数目</returns>
					ev_uint32 getEffectInfoNum();

					/// <summary>
					/// 获取特效信息
					/// </summary>
					/// <param name="index">索引值</param>
					/// <returns>特效信息</returns>
					EarthView::World::Spatial3D::Dataset::CEffectInfo getEffectInfo(ev_uint32 index);

					/// <summary>
					/// 获取节点信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>节点信息</returns>
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo getInfo();

					/// <summary>
					/// 设置类型信息
					/// </summary>
					/// <param name="typeInfo">类型信息</param>
					/// <returns></returns>
					void setInfo(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo typeInfo);

					/// <summary>
					/// 添加子节点
					/// </summary>
					/// <param name="ref_node">子节点</param>
					/// <returns></returns>
					void addChild(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree* ref_node);
				private:					
					vector<EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*> mChildren;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo mTypeInfo;
					CEffectInfoVector mEffectInfos;
				};
			}
		}
	}
}
#endif
