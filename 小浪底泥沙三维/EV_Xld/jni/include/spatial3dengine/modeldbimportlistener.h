#ifndef EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODEDBIMPORTLISTENER_H
#define EARTHVIEW_WORLD_SPATIAL3D_MODELMANAGER_MODEDBIMPORTLISTENER_H

#include "spatial3dengine/spatial3denginecomdef.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace ModelManager{

			class  EV_Spatial3DEngine_DLL CModelDBImportListener : public EarthView::World::Core::CAllocatedObject
			{
				
ev_private:
				CModelDBImportListener(_in EarthView::World::Core::CNameValuePairList* pList);
			
			public:

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CModelDBImportListener();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CModelDBImportListener();

				/// <summary>
				/// 模型导入开始侦听函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="curNo">当前个数</param>
				/// <param name="num">总个数</param>
				/// <param success="name">是否成功</param>
				/// <param name="msg">输出信息</param>
				/// <returns></returns>
				virtual void beginImport(EVString name, ev_uint32 curNo, ev_uint32 num,  ev_bool success,EVString msg);

				/// <summary>
				/// 模型导入结束侦听函数
				/// </summary>
				/// <param name="name">名称</param>
				/// <param name="curNo">当前个数</param>
				/// <param name="num">总个数</param>
				/// <param success="name">是否成功</param>
				/// <param name="msg">输出信息</param>
				/// <returns></returns>
				virtual void endImport(EVString name, ev_uint32 curNo, ev_uint32 num, ev_bool success,  EVString msg);

				};

			}//end namespace
		}
	}
}
#endif
