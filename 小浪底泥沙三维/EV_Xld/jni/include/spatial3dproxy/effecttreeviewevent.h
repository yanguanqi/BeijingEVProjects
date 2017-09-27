#ifndef	EffectTreeViewEvent_H__
#define EffectTreeViewEvent_H__

#include "core/event.h"
#include "spatial3dproxy/spatial3dproxy_config.h"



namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			/// <summary>
			/// 特效树事件处理类
			/// </summary>
			class  EV_SPATIAL3DPROXY_DLL CEffectTreeviewEvent : public EarthView::World::Core::CEvent
			{
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CEffectTreeviewEvent(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="type">类型标识</param>
				/// <returns></returns>
				/// <memo></memo>
				CEffectTreeviewEvent(ev_uint16 type);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				~CEffectTreeviewEvent();

				/// <summary>
				/// 得到节点类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回节点类型</returns>
				/// <memo></memo>
				ev_int32 getNodeType();
				
				/// <summary>
				/// 设置节点类型
				/// </summary>
				/// <param name="nodetype">节点类型</param>
				/// <returns></returns>
				/// <memo></memo>
				void setNodeType(ev_int32 nodetype);

				/// <summary>
				/// 得到名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回名称</returns>
				EVString getName() ;

				/// <summary>
				/// 设置名称
				/// </summary>
				/// <param name="EVString">名称</param>
				/// <returns></returns>
				ev_void setName(EVString name);

				/// <summary>
				/// 得到ID
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回ID名称</returns>
				/// <memo></memo>
				EVString getID() ;

				/// <summary>
				/// 设置ID
				/// </summary>
				/// <param name="EVString">id名称</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setID(EVString id);

				/// <summary>
				/// 得到请求状态
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回请求状态是否成功</returns>
				/// <memo></memo>
				ev_bool getResponseState();

				/// <summary>
				/// 设置请求状态
				/// </summary>
				/// <param name="state">设置请求状态</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setResponseState(ev_bool state);
			
				/// <summary>
				/// 设置事件处理百分比
				/// </summary>
				/// <param name="percent">百分比</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setPercent(ev_uint32 percent);
				
				/// <summary>
				/// 得到事件处理百分比
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回事件百分比</returns>
				/// <memo></memo>
				ev_uint32 getPercent(); 

			private:				
				ev_bool mResponseState;
				EVString mId;
				EVString mName;
				ev_int32 mNodeType;
				ev_uint32 mPercent;
			};
		}
	}
}
#endif
