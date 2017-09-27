#ifndef EARTHVIEW_WORLD_SPATIAL_CLABELWITHINALGORITHM_H
#define EARTHVIEW_WORLD_SPATIAL_CLABELWITHINALGORITHM_H
#include "tileutility/labeldrawalgorithm.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 内部注记的算法类
            /// </summary>
			class EV_TILEUTILITY_DLL  CLabelWithInAlgorithm
				:public EarthView::World::Spatial::CLabelDrawAlgorithm
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CLabelWithInAlgorithm();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CLabelWithInAlgorithm();
			ev_private:
				CLabelWithInAlgorithm(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				C_DISABLE_COPY( CLabelWithInAlgorithm );
			};
		}
	}
}
#endif
