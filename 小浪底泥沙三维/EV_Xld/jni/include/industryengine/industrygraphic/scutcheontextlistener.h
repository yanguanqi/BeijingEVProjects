#ifndef __BORDERTEXTMOVABLELISTENER_H__
#define __BORDERTEXTMOVABLELISTENER_H__

#include "industrygraphic_cfg.h"
#include "graphic/framelistener.h"
#include "graphic/scenemanager.h"
#include "industryengine/industrygraphic/scutcheontext.h"
#include "globecontrol/globecontrol.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			/// <summary>
			/// 标牌遮蔽计算监听对象
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CScutcheonTextListener : public EarthView::World::Graphic::CFrameListener
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CScutcheonTextListener(_in EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_control">EarthView::World::Spatial3D::Controls::CGlobeControl控件</param>
				CScutcheonTextListener(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_control);

				/// <summary>
				/// 析构方法
				/// </summary>
				/// <param name="parent">外部类对象</param>
				~CScutcheonTextListener();
			public:
				/// <summary>
				/// 帧监听
				/// </summary>
				/// <param name="evt">帧事件</param>
				/// <returns>true为处理成功，false为处理失败</returns>
				virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent &evt);

				/// <summary>
				/// 添加需要考虑遮蔽的标牌对象
				/// </summary>
				/// <param name="ref_movable">标牌对象，需要保证其生命周期在进行遮蔽判断期间一直存在，直到移除标牌对象、或不再进行遮蔽判断后才可以将标牌对象释放</param>
				ev_void addScutcheonText(EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_scutcheonText);

				/// <summary>
				/// 移除不再考虑遮蔽的标牌对象
				/// </summary>
				/// <param name="ref_movable">标牌对象</param>
				ev_void removeScutcheonText(EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* scutcheonText);

			protected:
				/// <summary>
				/// 计算遮蔽
				/// </summary>
				/// <param name=""></param>
				ev_void computeShade();

			protected:
				/// <summary>
				/// 标牌容器
				/// </summary>
				vector<EarthView::IndustryEngine::IndustryGraphic::CScutcheonText*> mpScutcheonTextList;

				EarthView::World::Spatial3D::Controls::CGlobeControl* ref_mpGlobeControl;
			};

		}
	}
}
#endif
