#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DLISTENER_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CANALYSIS3DLISTENER_H

#include "analysis3d_config.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class IAnalysis3DTool;
				/// <summary>
				/// 空间分析监听类
				/// 用户根据需求重写此类已达到监听效果
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DListener : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DListener(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CAnalysis3DListener();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DListener();
					/// <summary>
					/// 在启动空间分析时调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					virtual ev_void onAnalysisStart(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
					/// <summary>
					/// 在结束空间分析时调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					virtual ev_void onAnalysisEnd(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
					/// <summary>
					/// 在触发ITool事件的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					virtual ev_void onEventStart(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
					/// <summary>
					/// 在ITool事件结束的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					virtual ev_void onEventEnd(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
					/// <summary>
					/// 在开始分析前调用的函数，用于准备数据
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					virtual ev_void prepareParma(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool);
					/// <summary>
					/// 空间分析中步骤发生改变调用的函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					/// <param name="info">给出的提示</param>
					virtual ev_void onStepChanged (EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, EVString info);
					/// <summary>
					/// 在ITool事件结束的时候调用的监听函数
					/// </summary>
					/// <param name="tool">空间分析的指针</param>
					/// <param name="value">当前处理的值</param>
					/// <param name="count">总值</param>
					virtual ev_void onProgressChanged(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* tool, ev_uint32 value, ev_uint32 count);
					/// <summary>
					/// 空间分析中鼠标点击后调用的函数
					/// </summary>
					/// <param name="pTool">空间分析的指针</param>
					virtual ev_void onMouseClicked(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* pTool);
				};
			}
		}
	}
}
#endif
