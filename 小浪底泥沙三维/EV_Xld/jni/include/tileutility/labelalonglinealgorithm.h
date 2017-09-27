#ifndef EARTHVIEW_WORLD_SPATIAL_CLABELALONGLINEALGORITHM_H
#define EARTHVIEW_WORLD_SPATIAL_CLABELALONGLINEALGORITHM_H
#include "tileutility/labeldrawalgorithm.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 沿线注记的算法类
            /// </summary>
			class EV_TILEUTILITY_DLL  CLabelAlongLineAlgorithm:
				public EarthView::World::Spatial::CLabelDrawAlgorithm
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CLabelAlongLineAlgorithm();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CLabelAlongLineAlgorithm();
			ev_private:
				CLabelAlongLineAlgorithm(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				C_DISABLE_COPY( CLabelAlongLineAlgorithm );
			};
		}
	}
}
#endif
