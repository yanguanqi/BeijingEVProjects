#ifndef CSYMBOLMATERIAL_H
#define CSYMBOLMATERIAL_H

#include <graphic/material.h>
#include "geometry3d/geometry3d_config.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class IColor;
				class ISymbol;
				class CSymbol3D;
			}
		}
	}
}


namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			    /// <summary>
				/// 根CSymbol创建CMaterialPtr
				/// </summary>
				class EV_GEOMETRY3D_DLL CSymbolToMaterial : public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSymbolToMaterial();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSymbolToMaterial(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 创建简单的线材质
					/// </summary>
					/// <param name=""></param>
					/// <param name="groupName">资源组名称</param>
					/// <returns>材质</returns>
					static EarthView::World::Graphic::CMaterialPtr colorToLineMaterial(const EarthView::World::Spatial::Display::IColor* color,EVString& symbolName,const EVString& groupName);
					/// <summary>
					/// 创建材质
					/// </summary>
					/// <param name="symbol">风格</param>
					/// <param name="groupName">资源组名称</param>
					/// <returns>材质</returns>
					static EarthView::World::Graphic::CMaterialPtr createMaterial(EarthView::World::Spatial::Display::ISymbol* symbol,const EVString& groupName);
					/// <summary>
					/// 创建材质，用于面扩展
					/// </summary>
					/// <param name="symbol">风格</param>
					/// <param name="groupName">资源组名称</param>
					/// <param name="topMaterial">顶面材质</param>
					/// <param name="exteriorSideMaterial">外环侧面材质</param>
					/// <param name="interiorSideMaterial">内环侧面材质</param>
					/// <returns></returns>
					static void createMaterial(EarthView::World::Spatial::Display::ISymbol* symbol,const EVString& groupName,EarthView::World::Graphic::CMaterialPtr& topMaterial,EarthView::World::Graphic::CMaterialPtr& exteriorSideMaterial,EarthView::World::Graphic::CMaterialPtr& interiorSideMaterial);
					/// <summary>
					/// 创建材质，用于面扩展
					/// </summary>
					/// <param name="symbol">风格</param>
					/// <param name="groupName">资源组名称</param>
					/// <param name="topMaterial">顶面材质</param>
					/// <param name="exteriorSideMaterial">外环侧面材质</param>
					/// <returns></returns>
					static void createMaterial(EarthView::World::Spatial::Display::ISymbol* symbol,const EVString& groupName,EarthView::World::Graphic::CMaterialPtr& topMaterial,EarthView::World::Graphic::CMaterialPtr& exteriorSideMaterial);
					/// <summary>
					/// 创建材质，用于面扩展
					/// </summary>
					/// <param name="symbol">风格</param>
					/// <param name="groupName">资源组名称</param>
					/// <param name="topMaterial">顶面材质</param>
					/// <returns></returns>
					static void createMaterial(EarthView::World::Spatial::Display::ISymbol* symbol,const EVString& groupName,EarthView::World::Graphic::CMaterialPtr& topMaterial);
					/// <summary>
					/// 创建简单的线材质
					/// </summary>
					/// <param name="groupName">资源组名称</param>
					/// <returns>材质</returns>
					static EarthView::World::Graphic::CMaterialPtr blankLineMaterial(const EVString& groupName);
					
				};
		}
	}
}
#endif
