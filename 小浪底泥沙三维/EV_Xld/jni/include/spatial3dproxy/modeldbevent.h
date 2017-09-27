#ifndef __MODELDB_EVENT__
#define  __MODELDB_EVENT__

#include "spatial3dproxy_config.h"
#include "core/event.h"
#include "core/variant.h"


namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			namespace ModelDB{

				class EV_SPATIAL3DPROXY_DLL CModelDBEvent : public EarthView::World::Core::CEvent
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelDBEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <param name="type">事件类别</param>
					/// <returns></returns>
					/// <memo></memo>
					CModelDBEvent(ev_uint16 type);

					/// <summary>
					///  构造函数
					/// </summary>
					/// <param name="type">事件类别</param>
					/// <param name="ref_sender">发送对象</param>
					/// <returns></returns>
					/// <memo></memo>
					CModelDBEvent(ev_uint16 type, EarthView::World::Core::CEventObject *ref_sender);

					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					virtual ~CModelDBEvent();
ev_private:
					typedef vector<EarthView::World::Core::CVariant> DataList;
					DataList mDataList;
				};
				
			}}}}//end namespace
#endif
