#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ICOLOR_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ICOLOR_H

#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "core/xml.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

				///<summary>
				/// 颜色空间类型
				///</summary>
				enum EVColorSpaceType
				{
					///<summary>
					/// 未知类型
					///</summary>
					CST_UNKNOWN               = 0,
					///<summary>
					/// RGB颜色空间
					///</summary>
					CST_RGB                   = 1,
					///<summary>
					/// HSV颜色空间
					///</summary>
					CST_HSV                   = 2,
					///<summary>
					/// CIELAB颜色空间
					///</summary>
					CST_CIELAB                = 3,
					///<summary>
					/// CMKY颜色空间
					///</summary>
					CST_CMKY                  = 4,
					///<summary>
					/// Gray颜色空间
					///</summary>
					CST_GRAY                  = 5
				};
				typedef enum EVColorBlendOperation
				{
					CBO_UNKNOWN		=	0,
					CBO_SELECTARG1	=	1,
					CBO_SELECTARG2	=	2,
					CBO_ADD			=	3,
					CBO_MODULATE	=	4
				}EVColorBlendOperation;
				///<summary>
				/// 颜色接口
				///</summary>
				class EV_INTERFACE_DLL IColor :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IColor();
				public:
					/// <summary>
					/// 获取颜色空间类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色空间类型枚举</returns>
					virtual EarthView::World::Spatial::Display::EVColorSpaceType getType() const;
					/// <summary>
					/// 获取CIELab颜色空间值
					/// </summary>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					virtual ev_void getCIELab(_out ev_real64 & L,_out ev_real64 & a,_out ev_real64 & b) const;
					/// <summary>
					/// 获取COLORREF类型的值
					/// </summary>
					/// <returns>COLORREF值</returns>
					virtual ev_uint32 getCOLORREF() const;
					/// <summary>
					/// 获取Rgb的值，一般是一个整数。
					/// </summary>
					/// <returns>Rgb值</returns>
					virtual ev_uint32 getRgbValue() const;
					/// <summary>
					/// 获取RGB颜色空间的R值
					/// </summary>
					/// <returns>R值,范围[0，255]</returns>
					virtual ev_uint8 getRed() const;
					/// <summary>
					/// 获取RGB颜色空间的G值
					/// </summary>
					/// <returns>G值,范围[0，255]</returns>
					virtual ev_uint8 getGreen() const;
					/// <summary>
					/// 获取RGB颜色空间的B值
					/// </summary>
					/// <returns>B值,范围[0，255]</returns>
					virtual ev_uint8 getBlue() const;
					/// <summary>
					/// 获取RGB颜色空间的R,G,B值
					/// </summary>
					/// <param name="red">输出类型,R值,范围[0，255]</param>
					/// <param name="green">输出类型,G值,范围[0，255]</param>
					/// <param name="blue">输出类型,B值,范围[0，255]</param>
					/// <returns></returns>
					virtual ev_void getRGB( _out ev_uint8 & red, _out ev_uint8 & green, _out ev_uint8 & blue ) const;
					/// <summary>
					/// 获取RGB颜色空间的Alpha通道
					/// </summary>
					/// <returns>Alpha通道值，范围[0，255]</returns>
					virtual ev_uint8 getTransparent() const;
					/// <summary>
					/// 判断颜色是否为空
					/// </summary>
					/// <returns>True,为空；False,该对象有效</returns>
					virtual ev_bool isNULL() const;
					/// <summary>
					/// 设置CIELab颜色空间值
					/// </summary>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					virtual ev_void setCIELab(ev_real64 L,ev_real64 a,ev_real64 b);
					/// <summary>
					/// 设置RGB颜色空间值
					/// </summary>
					/// <param name="red">R值</param>
					/// <param name="green">G值</param>
					/// <param name="blue">B值</param>
					/// <returns></returns>
					virtual ev_void setRGB(ev_uint8 red,ev_uint8 green,ev_uint8 blue);
					/// <summary>
					/// 设置颜色是否为空
					/// </summary>
					/// <returns></returns>
					virtual ev_void setNULL(ev_bool value);
					/// <summary>
					/// 设置颜色Alpha通道值
					/// </summary>
					/// <param name="value">Alpha值，范围[0，255]</param>
					/// <returns></returns>
					virtual ev_void setTransparent(ev_uint8 value);
					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆对象，需要外部释放。</returns>
					virtual _extfree IColor * clone() const;
					/// <summary>
					/// 转化为数据流
					/// </summary>
					/// <param name="stream">需要导出的数据流对象</param>
					/// <returns></returns>
					virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream) const;
					/// <summary>
					/// 转化为RGB字符串格式
					/// </summary>
					/// <returns>RGB字符串格式</returns>
					virtual EVString toRGBString() const;
					/// <summary>
					/// 从XML节点转化得到颜色对象
					/// </summary>
					/// <param name="element">XML节点对象</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 转化为一个XML节点对象
					/// </summary>
					/// <returns>XML节点对象</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 判断两个颜色是否相同
					/// </summary>
					/// <param name="pColor">需要判断的颜色对象</param>
					/// <returns>true，则相等；false，则不相等</returns>
					virtual ev_bool equal(const IColor* pColor);
					/// <summary>
					/// 转化为一个格式为XML的字符串
					/// </summary>
					/// <returns>字符串</returns>
					EVString toXML() const;
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					IColor( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IColor();
				private:
					C_DISABLE_COPY(IColor);
ev_internal:
					/// <summary>
					/// 从一个流中恢复颜色对象
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				};
			}
		}
	}
}

#endif
