#ifndef LABELPROPERTY3D_H
#define LABELPROPERTY3D_H
#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>

#include "spatial3dlayer/3dlayerconfig.h"

#include "spatialinterface/ilabelproperty.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Atlas{

				/// <summary>
				/// 三维图层注记属性类
				/// 管理三维图层注记属性
				/// </summary>
				class EV_3DLAYER_DLL CLayer3DLabelProperty:
					public EarthView::World::Spatial::Display::ILabelProperty
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CLayer3DLabelProperty(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CLayer3DLabelProperty();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CLayer3DLabelProperty();

				public:
					/// <summary>
					/// 图层注记是否可见
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isVisible() const;

					/// <summary>
					/// 设置图层注记是否可见
					/// </summary>
					/// <param name="bVisible">是否可见</param>
					/// <returns></returns>
					ev_void setVisible( _in ev_bool bVisible );

					/// <summary>
					/// 设置图层注记风格
					/// </summary>
					/// <param name="pSymbol">注记风格</param>
					/// <returns></returns>
					ev_void setTextSymbol( const EarthView::World::Spatial::Display::ISymbol *pSymbol );

					/// <summary>
					/// 返回图层注记风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>注记风格</returns>
					EarthView::World::Spatial::Display::ISymbol *getTextSymbol() const;

					/// <summary>
					/// 设置图层注记字段
					/// </summary>
					/// <param name="field">注记字段</param>
					/// <returns></returns>
					ev_void setField( const EVString &field );
					/// <summary>
					/// 返回图层注记字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>注记字段</returns>
					EVString getField() const;

					/// <summary>
					/// 设置是否启用沿线注记，针对线图层
					/// </summary>
					/// <param name="bLineLabel">是否沿线注记</param>
					/// <returns></returns>
					ev_void setLineLabel( ev_bool bLineLabel );
					/// <summary>
					/// 返回是否沿线注记，针对线图层
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否沿线注记</returns>
					ev_bool getLineLabel() const;
					/// <summary>
					/// 设置注记是否开启阴影
					/// </summary>
					/// <param name=hasShadow>是否启用阴影</param>
					void setLabelShadowEnabled(ev_bool hasShadow);
					/// <summary>
					/// 获取注记阴影是否开启
					/// </summary>
					/// <returns>阴影是否开启</returns>
					ev_bool getLabelShadowEnabled();
					/// <summary>
					/// 反走样
					/// </summary>
					/// <param name="isBold">是否启用反走样</param>
					void setAntiAliasEnabled(ev_bool isAntiAlias);

					/// <summary>
					/// 获取是否反走样
					/// </summary>
					/// <param name=""></param>
					ev_bool getAntiAliasEnabled();

					/// <summary>
					/// 设置是否进行字体压盖测试,目前主要是对贴地沿线注记有效
					/// </summary>
					/// <param name="enable">是否进行字体压盖测试</param>
					/// <returns></returns>
					void setOverlapCheckEnabled(ev_bool enable);
					/// <summary>
					/// 获取是否进行字体压盖测试
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否进行字体压盖测试</returns>
					ev_bool getOverlapCheckEnabled();

					/// <summary>
					/// clone
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Display::ILabelProperty * clone() const;

					/// <summary>
					/// 从xml恢复图层参数
					/// </summary>
					/// <param name="element">xml</param>
					/// <returns></returns>
					ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 序列化成xml文本
					/// </summary>
					/// <param name=""></param>   
					/// <returns></returns>	
					EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 序列化成流
					/// </summary>
					/// <param name="stream">流</param>   
					/// <returns></returns>	
					ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;
ev_internal:
					/// <summary>
					/// 从流恢复图层参数
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				protected:
					C_DISABLE_COPY( CLayer3DLabelProperty )

					/// <summary>
					/// 是否可见
					/// </summary>
					ev_bool m_bVisible;
					/// <summary>
					/// 标注字段
					/// </summary>
					EVString m_szExpression;
					/// <summary>
					/// 标注风格
					/// </summary>
					EarthView::World::Spatial::Display::ISymbol *m_pSymbol;

					ev_bool mbLineLabel;

					ev_bool mbShadowEnabled;
					ev_bool mbAntiAlias;
					ev_bool mbOverlapCheck;
				};

			}
		}
	}
}
#endif
