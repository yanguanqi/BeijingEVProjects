#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORSPACECONVERT_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_COLORSPACECONVERT_H

#include "color/monitorparameter.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// 结构体 CIEYxy的值
				/// </summary>
				struct CCIEYxy
				{
					ev_real64 Y;
					ev_real64 x;
					ev_real64 y;
				};
				/// <summary>
				/// 结构体 CIEXYZ的值
				/// </summary>
				struct CCIEXYZ
				{
					ev_real64 X;
					ev_real64 Y;
					ev_real64 Z;
				};
				/// <summary>
				/// 结构体 CIERGB的值
				/// </summary>
				struct CCIERGB
				{
					ev_real64 R;
					ev_real64 G;
					ev_real64 B;
				};
				/// <summary>
				/// 结构体 CIELab的值
				/// </summary>
				struct CCIELab
				{
					ev_real64 L;
					ev_real64 a;
					ev_real64 b;
				};
				/// <summary>
				/// 颜色空间进行转换时的矩阵
				/// </summary>
				class CMatrix_3X3
				{
				public:
					CMatrix_3X3();
					~CMatrix_3X3();

					ev_real64 m_dfValue11;
					ev_real64 m_dfValue12;
					ev_real64 m_dfValue13;
					ev_real64 m_dfValue21;
					ev_real64 m_dfValue22;
					ev_real64 m_dfValue23;
					ev_real64 m_dfValue31;
					ev_real64 m_dfValue32;
					ev_real64 m_dfValue33;

					/// <summary>
					/// 求取逆矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns>CMatrix_3X3指针</returns>
					CMatrix_3X3 * inverse();
				};
				/// <summary>
				/// 颜色空间进行转换类
				/// 提供方法如下：
				/// 设置转换参数、查找“显示参数文件”的路径、是否能转换
				/// Lab 转成 RGB、RGB 转换 Lab、Lab 转成 HSV、Hsv 转成 Lab、RGB 转成 Hsv、HSV 转成 RGB
				/// 计算三色刺激值、初始化矩阵、从CIERGB中获取RGB值
				/// CIEYxy转成CIEXYZ、CIERGB转成CIEXYZ、CIEXYZ转成CIELab、CIELab转成CIEXYZ、CIEXYZ转成CIERGB
				/// rgb转成CIERGB、CIERGB转成rgb、rgb转成hsv、hsv 转成 rgb
				/// </summary>
				class EV_COLOR_DLL CColorSpaceConvert:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CColorSpaceConvert();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="param">显示器参数</param>
					/// <returns></returns>
					CColorSpaceConvert(EarthView::World::Spatial::Display::CMonitorParameter* param);

					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CColorSpaceConvert();

					/// <summary>
					/// 设置转换参数
					/// </summary>
					/// <param name="param">显示参数类对象</param>
					/// <returns></returns>
					ev_void setMonitorParameter(EarthView::World::Spatial::Display::CMonitorParameter *param);

					/// <summary>
					/// 查找“显示参数文件”的路径
					/// 内存需要外部释放
					/// </summary>
					/// <param name="param">显示参数类对象</param>
					/// <returns>EarthView::World::Spatial::Display::CMonitorParameter 类型指针</returns>
					EarthView::World::Spatial::Display::CMonitorParameter * getMonitorParameter();

					/// <summary>
					/// Lab 转成 RGB
					/// </summary>
					/// <param name="CIELab_L">L值</param>
					/// <param name="CIELab_a">a值</param>
					/// <param name="CIELab_b">b值</param>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <returns></returns>
					ev_void CIELabToRGB(ev_real64 CIELab_L,ev_real64 CIELab_a,ev_real64 CIELab_b,_out ev_uint8& RGB_r,_out ev_uint8& RGB_g,_out ev_uint8& RGB_b);

					/// <summary>
					/// RGB 转换 Lab
					/// </summary>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <param name="CIELab_L">L值</param>
					/// <param name="CIELab_a">a值</param>
					/// <param name="CIELab_b">b值</param>
					/// <returns></returns>
					ev_void rgbToCIELab(ev_int32 RGB_r,ev_int32 RGB_g,ev_int32 RGB_b,_out ev_real64& CIELab_L,_out ev_real64& CIELab_a, _out ev_real64& CIELab_b);

					/// <summary>
					/// Lab 转成 HSV
					/// </summary>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <param name="h">h值</param>
					/// <param name="s">s值</param>
					/// <param name="v">v值</param>
					/// <returns></returns>
					ev_void CIELabToHsv(ev_real64 L,ev_real64 a,ev_real64 b,_out ev_real64& h,_out ev_real64& s, _out ev_real64& v);

					/// <summary>
					/// Hsv 转成 Lab
					/// </summary>
					/// <param name="h">h值</param>
					/// <param name="s">s值</param>
					/// <param name="v">v值</param>
					/// <param name="L">L值</param>
					/// <param name="a">a值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					ev_void hsvToCIELab(ev_real64 h,ev_real64 s,ev_real64 v, _out ev_real64 &L, _out ev_real64 &a, _out ev_real64 &b);

					/// <summary>
					/// RGB 转成 Hsv
					/// </summary>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <param name="Hsv_h">h值</param>
					/// <param name="Hsv_s">s值</param>
					/// <param name="Hsv_v">v值</param>
					/// <returns></returns>
					ev_void rgbToHsv(ev_int32 RGB_r,ev_int32 RGB_g,ev_int32 RGB_b, _out ev_real64& Hsv_h, _out ev_real64& Hsv_s, _out ev_real64& Hsv_v);

					/// <summary>
					/// HSV 转成 RGB
					/// </summary>
					/// <param name="Hsv_h">h值</param>
					/// <param name="Hsv_s">s值</param>
					/// <param name="Hsv_v">v值</param>
					/// <param name="RGB_r">r值</param>
					/// <param name="RGB_g">g值</param>
					/// <param name="RGB_b">b值</param>
					/// <returns></returns>
					ev_void hsvToRGB(ev_real64 Hsv_h,ev_real64 Hsv_s,ev_real64 Hsv_v, _out ev_int32& RGB_r, _out ev_int32& RGB_g, _out ev_int32& RGB_b);

					/// <summary>
					/// 是否能转换
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool canConvert();
				ev_private:
					CColorSpaceConvert( EarthView::World::Core::CNameValuePairList* pList );
				private:
					/// <summary>
					/// 计算三色刺激值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void computeXYZ();

					/// <summary>
					/// CIEYxy 转成 CIEXYZ
					/// </summary>
					/// <param name="Yxy">Yxz值</param>
					/// <param name="XYZ">XYZ值</param>
					/// <returns></returns>
					ev_void CIEYxy2CIEXYZ(CCIEYxy &Yxy,CCIEXYZ &XYZ);

					/// <summary>
					/// 初始化矩阵
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void initMatrix_3X3();

					/// <summary>
					/// rgb转成CIERGB
					/// </summary>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <param name="CIERGB_Point">CIERGB_Point值</param>
					/// <returns></returns>
					ev_void rgb2CIERGB(ev_int32 r,ev_int32 g,ev_int32 b,CCIERGB &CIERGB_Point);

					/// <summary>
					/// CIERGB转成CIEXYZ
					/// </summary>
					/// <param name="CIERGB_Point">CIERGB_Point值</param>
					/// <param name="CIEXYZ_Point">CIEXYZ_Point值</param>
					/// <returns></returns>
					ev_void CIERGB2CIEXYZ(CCIERGB CIERGB_Point,CCIEXYZ &CIEXYZ_Point);

					/// <summary>
					/// CIEXYZ转成CIELab
					/// </summary>
					/// <param name="CIERGB_Point">CIERGB_Point值</param>
					/// <param name="CIELab_Point">CIELab_Point值</param>
					/// <returns></returns>
					ev_void CIEXYZ2CIELab(CCIEXYZ CIEXYZ_Point,CCIELab &CIELab_Point);

					/// <summary>
					/// CIELab转成CIEXYZ
					/// </summary>
					/// <param name="CIELab_Point">CIELab_Point值</param>
					/// <param name="CIEXYZ_Point">CIEXYZ_Point值</param>
					/// <returns></returns>
					ev_void CIELab2CIEXYZ(CCIELab CIELab_Point,CCIEXYZ &CIEXYZ_Point);

					/// <summary>
					/// CIEXYZ转成CIERGB
					/// </summary>
					/// <param name="CIEXYZ_Point">CIEXYZ_Point值</param>
					/// <param name="CIERGB_Point">CIERGB_Point值</param>
					/// <returns></returns>
					ev_void CIEXYZ2CIERGB(CCIEXYZ CIEXYZ_Point,CCIERGB &CIERGB_Point);

					/// <summary>
					/// CIERGB转成rgb
					/// </summary>
					/// <param name="CIERGB_Point">CIERGB_Point值</param>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					ev_void CIERGB2rgb(CCIERGB CIERGB_Point,ev_uint8 &r,ev_uint8 &g,ev_uint8 &b);

					/// <summary>
					/// 从CIERGB中获取RGB值
					/// </summary>
					/// <param name="value">CIERGB值</param>
					/// <returns>RGB值</returns>
					ev_int32 getValueForRgb(ev_real64 value);

					/// <summary>
					/// rgb转成hsv
					/// </summary>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <param name="h">h值</param>
					/// <param name="s">s值</param>
					/// <param name="v">v值</param>
					/// <returns></returns>
					ev_void rgb2Hsv(ev_real32 r, ev_real32 g, ev_real32 b, ev_real32 &h, ev_real32 &s, ev_real32 &v);

					/// <summary>
					/// hsv 转成 rgb
					/// </summary>
					/// <param name="h">h值</param>
					/// <param name="s">s值</param>
					/// <param name="v">v值</param>
					/// <param name="r">r值</param>
					/// <param name="g">g值</param>
					/// <param name="b">b值</param>
					/// <returns></returns>
					ev_void hsv2Rgb(ev_real64 h, ev_real64 s, ev_real64 v, ev_real64 &r, ev_real64 &g, ev_real64 &b);

					C_DISABLE_COPY( CColorSpaceConvert );
				protected:
					/// <summary>
					/// 转换时所需的参数
					/// </summary>
					EarthView::World::Spatial::Display::CMonitorParameter * m_pParam;
				private:
					/// <summary>
					/// 红点的三色刺激值
					/// </summary>
					CCIEXYZ m_RedPoint;
					/// <summary>
					/// 绿的三色刺激值
					/// </summary>
					CCIEXYZ m_GreenPoint;
					/// <summary>
					/// 蓝点的三色刺激值
					/// </summary>
					CCIEXYZ m_BluePoint;
					/// <summary>
					/// 白点的三色刺激值
					/// </summary>
					CCIEXYZ m_WhitePoint;
					/// <summary>
					/// XYZ 转成 RGB 时所需的矩阵
					/// </summary>
					EarthView::World::Spatial::Display::CMatrix_3X3 * m_pMatrix_XYZ2RGB;
					/// <summary>
					/// RGB转成 XYZ 时所需的矩阵
					/// </summary>
					EarthView::World::Spatial::Display::CMatrix_3X3 * m_pMatrix_RGB2XYZ;
				};
			}
		}
	}
}

#endif
