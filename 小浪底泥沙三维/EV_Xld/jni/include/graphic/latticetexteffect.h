#ifndef __TEXTEFFECT_H__
#define __TEXTEFFECT_H__

#include "graphic/graphic_config.h"
#include "core/global.h"
#include "graphic/latticemovabletext.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CAxisAlignedBox;
			}
		};

		namespace Graphic
		{
			class EV_GRAPHIC_DLL ILatticeTextEffect: public EarthView::World::Core::CAllocatedObject
			{
				friend class CLatticeMovableText;
				friend class CLatticeMovableText::Attributes;
				friend class CTextureMovableText;
			public:
				///<summary>
				/// 构造函数
				///</summary>				
				ILatticeTextEffect()
					:m_attr(NULL),m_argb(0x0){}
				ILatticeTextEffect(ev_uint32 argb)
					:m_attr(NULL),m_argb(argb){}
				ILatticeTextEffect(const EarthView::World::Graphic::CColourValue& color)
					:m_argb(NULL)
				{
					setColor(color);
				}

				///<summary>
				/// 设置颜色 注意:此重载版本不处理OpenGL和D3D的颜色2进制值编码顺序问题
				///</summary>
				///<param name="color">包括alpha值在内的颜色值,若值为0x0, 附件效果元素的颜色将和可渲染文本一致</param>
				void setColor(ev_uint32 argb)
				{
					m_argb = argb;
				}
				///<summary>
				/// 设置颜色
				///</summary>
				///<param name="color">包括alpha值在内的颜色值,若值为CColourValue(0.0,0.0,0.0,0.0), 附件效果元素的颜色将和可渲染文本一致</param>
				void setColor(const EarthView::World::Graphic::CColourValue& color)
				{
					CRoot::getSingletonPtr()->convertColourValue(color, &m_argb);
				}
				///<summary>
				/// 获取颜色
				///</summary>
				///<returns>颜色二进制值</returns>
				ev_uint32 getColor();
				///<summary>
				///析构函数
				///</summary>
				virtual ~ILatticeTextEffect(){}
			protected:
				/// <summary>
				/// 文本可渲染对象附加效果应用回调
				/// </summary>
				/// <param name="pVertexBuf">CTextMovable的顶点缓存指针</param>
				/// <param name="localAABB">CTextMovable局部坐标包围盒</param>
				/// <param name="offset">3D文本相对于局部坐标原点的偏移</param>
				/// <returns>写入完成后顶点缓存数据末尾地址</returns>
				virtual ev_real32* applyEffect(_inout ev_real32* pVertexBuf, const EarthView::World::Spatial::Math::CAxisAlignedBox& localAABB, const EarthView::World::Spatial::Math::CVector3& offset);
				///<summary>
				/// 文本可渲染对象属性指针
				///</summary>
				const CLatticeMovableText::Attributes* m_attr;
			private:
				ev_uint32 m_argb;
			ev_private:
				ILatticeTextEffect(EarthView::World::Core::CNameValuePairList* pList);
			};
		}
	}
}

#endif
