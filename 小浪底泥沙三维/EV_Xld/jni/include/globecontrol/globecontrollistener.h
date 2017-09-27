#ifndef GLOBECONTROLLISTENER_H__
#define GLOBECONTROLLISTENER_H__
#include "globecontrol/evglobecontrol_config.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"
#include "spatialgui/itool.h"
#include "mathengine/ev_math.h"
#include "graphic/scenequery.h"




namespace EarthView
{
	namespace World
	{
	
			namespace Spatial3D
			{
				class CGlobeSelection;
				namespace Controls
				{
					class CGlobeControl;
					/// <summary>
					/// 用于通知选择集改变，三维分析结束，实时经纬度的监听类
					/// </summary>
					class EV_GLOBECONTROL_DLL CGlobeControlListener : public EarthView::World::Core::CAllocatedObject
					{
					public:
						/// <summary>
						/// 构造函数
						/// </summary>					
						CGlobeControlListener();

						/// <summary>
						/// 析构函数
						/// </summary>	
					    virtual ~CGlobeControlListener();

						/// <summary>
						/// 选择集变化通知函数
						/// </summary>
						/// <param name="globeSelection">变化之后的选择集</param>						
						/// <returns></returns>
						virtual ev_void onGlobeSelectionChanged(EarthView::World::Spatial3D::CGlobeSelection* globeSelection);

						/// <summary>
						/// 射线查询通知函数
						/// </summary>
						/// <param name="result">射线查询结果</param>						
						/// <returns></returns>
						virtual ev_void onRaySceneQueryResult(EarthView::World::Graphic::RaySceneQueryResult &result);

						/// <summary>
						/// 三维分析开始前的通知事件
						/// </summary>
						/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
						/// <returns></returns>
						virtual ev_void onAnalysisStart(EarthView::World::Spatial::SystemUI::ITool* tool);

						/// <summary>
						/// 三维分析结束后的通知事件
						/// </summary>
						/// <param name="tool">三维分析工具指针（IAnalysisTool类型）</param>						
						/// <returns></returns>
						virtual ev_void onAnalysisEnd(EarthView::World::Spatial::SystemUI::ITool* tool);

						/// <summary>
						/// 取得鼠标在球上实时位置
						/// </summary>
						/// <param name="lat">纬度</param>
						/// <param name="lon">经度</param>
						/// <param name="alt">地形高度</param>					
						/// <param name="isValid">true代表与球相交，值有效</param>				
						/// <returns></returns>						
						virtual ev_void onMousePosition(Real lat,Real lon,Real alt,ev_bool isValid );

						/// <summary>
						/// 飞行播放自动结束触发的事件
						/// </summary>								
						/// <returns></returns>						
						virtual ev_void onFlyFinished(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl);

						/// <summary>
						/// 当前Tool改变的事件
						/// </summary>			
						/// <param name="globeControl">控件</param>
						/// <param name="pOldTool">改变之前的Tool</param>
						/// <param name="pNewTool">改变之后的Tool</param>		
						/// <returns></returns>
						virtual ev_void onCurrentToolChanged(EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl,EarthView::World::Spatial::SystemUI::ITool* pOldTool,EarthView::World::Spatial::SystemUI::ITool* pNewTool);
					ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">参数列表</param>					
						/// <returns></returns>
						CGlobeControlListener( EarthView::World::Core::CNameValuePairList *pList);

					};
				}
			}
		}
	}
#endif


