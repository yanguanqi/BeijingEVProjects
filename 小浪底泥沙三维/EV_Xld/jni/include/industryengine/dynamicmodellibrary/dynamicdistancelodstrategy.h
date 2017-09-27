#ifndef __DYNAMICDISTANCELODSTRATEGY_H__
#define __DYNAMICDISTANCELODSTRATEGY_H__

#include "dynamiclodstrategy.h"
#include "dynamicmodel_cfg.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			/// <summary>
			/// 距离LOD策略
			/// </summary>
			class EV_DYNAMICMODELLIBRARY_DLL CDynamicDistanceLodStrategy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy
			{

			public:
				/// <summary>
				/// 距离LOD策略构造函数
				/// </summary>
				CDynamicDistanceLodStrategy(); 
				/// <summary>
				/// 距离LOD策略析构函数
				/// </summary>
				virtual ~CDynamicDistanceLodStrategy(); 

ev_private:
				/// <summary>
				/// 距离LOD策略构造函数
				/// </summary>
				/// <param name="pList">参数列表</param>
				CDynamicDistanceLodStrategy(_in EarthView::World::Core::CNameValuePairList* pList);

ev_internal:
				/// <summary>
				/// 计算动态目标对象当前的LOD值
				/// </summary>
				/// <param name="modelObject">动态目标对象</param>
				/// <param name="camera">相机对象</param>
				/// <returns>动态目标对象当前的LOD值</returns>
				virtual Real getLodValue(EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* modelObject,EarthView::World::Spatial3D::CGlobeCamera* camera);

			};  //end class CDistanceLodStrategy


		}//end namespace 
	}//end namespace 
}

#endif

