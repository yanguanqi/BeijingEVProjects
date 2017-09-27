#ifndef _CINDUSTRYUTILITY_HEADER_
#define _CINDUSTRYUTILITY_HEADER_

#pragma once
#include "industryengine/industrygraphic/industrygraphic_cfg.h"
#include "graphic/material.h"
#include "graphic/materialmanager.h"





namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			/// <summary>
			/// 工具类，提供创建基础对象的功能
			/// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CIndustryUtility : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CIndustryUtility(EarthView::World::Core::CNameValuePairList* pList);

			public:
				CIndustryUtility();
				~CIndustryUtility();
				/// <summary>
				/// 创建材质对象
				/// </summary>
				/// <param name="name">构造函数参数键值对表</param>
				static EarthView::World::Graphic::CMaterialPtr createDefaultMaterial(const EVString& name, const EVString& groupName);
			};
		}
	}
}
#endif
