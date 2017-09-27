#ifndef __DYNAMICPIXELLODSTRATEGY_H__
#define __DYNAMICPIXELLODSTRATEGY_H__

#include "industryengine/dynamicmodellibrary/dynamiclodstrategy.h"
#include "industryengine/dynamicmodellibrary/dynamicmodel_cfg.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 基于像素投影的LOD策略
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicPixelLodStrategy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy
			{
			public:
				/// <summary>
				/// 像素LOD策略构造函数
				/// </summary>
				CDynamicPixelLodStrategy(); 
				/// <summary>
				/// 像素LOD策略构造函数
				/// </summary>
				virtual ~CDynamicPixelLodStrategy(); 
ev_private:
				/// <summary>
				/// 距离LOD策略构造函数
				/// </summary>
				/// <param name="pList">参数列表</param>
				CDynamicPixelLodStrategy(_in EarthView::World::Core::CNameValuePairList* pList);
ev_internal:
				/// <summary>
				/// 计算动态目标对象当前的LOD值
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				/// <returns>动态目标对象当前的LOD值</returns>
				virtual Real getLodValue(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject,EarthView::World::Spatial3D::CGlobeCamera* camera);

			};  //end class CDynamicPixelLodStrategy


		}//end namespace 
	}//end namespace 
}
#endif

