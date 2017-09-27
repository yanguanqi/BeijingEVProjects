#ifndef GLOBEVIEWPROXY_H
#define GLOBEVIEWPROXY_H
#include "spatial3dproxy_config.h"
#include "core/object.h"
#include "spatialinterface/ilayer.h"
#include "globecontrol/globecontrol.h"


namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			class EV_SPATIAL3DPROXY_DLL CGlobeViewEventObject: public EarthView::World::Core::CEventObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CGlobeViewEventObject(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				CGlobeViewEventObject();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ~CGlobeViewEventObject();

				/// <summary>
				/// 拖拽事件
				/// </summary>
				/// <param name="id">对象id</param>
				/// <param name="layer">图层指针</param>
				/// <param name="globecontrol">球控件</param>
				/// <param name="dropx">屏幕坐标x</param>
				/// <param name="dropy">屏幕坐标y</param>
				/// <returns></returns>	
			    void dragDrop(ev_uint32 id,EarthView::World::Spatial::Atlas::ILayer* layer,EarthView::World::Spatial3D::Controls::CGlobeControl* globecontrol,ev_uint32 dropx,ev_uint32 dropy);

			};
		}
	}
}
#endif
