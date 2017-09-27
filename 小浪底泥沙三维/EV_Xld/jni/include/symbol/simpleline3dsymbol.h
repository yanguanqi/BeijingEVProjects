#ifndef _SIMPLE_LINE_3DSYMBOL_H_ 
#define _SIMPLE_LINE_3DSYMBOL_H_

#include "symbol/symbol3d.h"
#include "spatialinterface/icolor.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{

				///截面形状
                enum EVTransectShapeType     
                {
                    TST_Unknown = 0,
                    TST_Point,                ///点
                    TST_Wall,                 ///墙                    
                    TST_Triangle,             ///三角形,中心点在高线中点
                    TST_Rectangle,            ///矩形
                    TST_Ellipse,              ///椭圆

                    TST_Trapezia,             ///梯形                    
                    TST_Channel,              ///渠道<上不封口>
                    TST_Tunnel,               ///隧道<下不封口>
                    TST_Dome,                 ///拱形，中心点在底部矩形的上边中点
					TST_WideLine,                ///宽线
					TST_Road                  ///道路
                };

				///闭合形状
                enum EVClosedShapeType          
                {
                    CST_None = 0,               ///不闭合
                    CST_Line,                   ///直线闭合
                    CST_Arc                     ///半圆弧闭合
                };
				
                enum EVPropertyValueType
                {
                    PVT_BOOL = 0,
                    PVT_INT8,
                    PVT_INT16,
                    PVT_INT32 = 4,
                    PVT_INT64 = 8,
                    PVT_FLOAT,
                    PVT_DOUBLE,
                    PVT_STRING = 100
                };

				/// <summary>
				/// 键值对				
				/// </summary>
                class EV_SYMBOL_DLL KeyValuePair : public EarthView::World::Core::CBaseObject
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					KeyValuePair(_in EarthView::World::Core::CNameValuePairList* pList)
						: Key(pList ? (ev_char*)pList->GetAt("key") : NULL)
						, Value(pList ? (ev_char*)pList->GetAt("val") : NULL)
						, ValueType(pList ? *(EarthView::World::Spatial::Display::EVPropertyValueType*)pList->GetAt("type") : (EarthView::World::Spatial::Display::EVPropertyValueType)0)
						, Memo(pList ? (ev_char*)pList->GetAt("memo") : NULL)
					{}
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    KeyValuePair(){}
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="key">键</param>
					/// <param name="val">值</param>
					/// <param name="type">数据类型</param>
					/// <param name="memo">描述</param>
					/// <returns></returns>
                    KeyValuePair(EVString key,EVString val,EarthView::World::Spatial::Display::EVPropertyValueType type,EVString memo):Key(key),Value(val),ValueType(type),Memo(memo){}

                public:
                    EVString Key;
                    EVString Value;
                    EarthView::World::Spatial::Display::EVPropertyValueType ValueType;
                    EVString Memo;
                };

				/// <summary>
				/// 线扩展符号				
				/// </summary>
                class EV_SYMBOL_DLL CSimpleLine3DSymbol : public EarthView::World::Spatial::Display::CSymbol3D
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSimpleLine3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CSimpleLine3DSymbol();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~CSimpleLine3DSymbol();

                public:
					/// <summary>
					/// 获取线扩展截面形状类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>截面形状类型</returns>
                    EarthView::World::Spatial::Display::EVTransectShapeType getTransectShapeType() const;
					/// <summary>
					/// 设置线扩展截面形状类型
					/// </summary>
					/// <param name="type">截面形状类型</param>
					/// <returns></returns>
                    ev_void setTransectShapeType(EarthView::World::Spatial::Display::EVTransectShapeType type);

					/// <summary>
					/// 获取线扩展属性数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>属性数量</returns>
                    ev_uint32 getPropertyCount() const;
					/// <summary>
					/// 获取线扩展属性
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
                    const EarthView::World::Spatial::Display::KeyValuePair& getProperty(ev_uint32 index) const;
					/// <summary>
					/// 设置线扩展属性
					/// </summary>
					/// <param name="index">属性索引</param>
					/// <param name="value">属性</param>
					/// <returns></returns>
                    ev_void setPropertyValue(ev_uint32 index,const EVString& value);

					/// <summary>
					/// 获取线扩展属性字段数量，和属性相同
					/// </summary>
					/// <param name=""></param>
					/// <returns>属性数量</returns>
					ev_uint32 getPropertyFieldCount() const;
					/// <summary>
					/// 获取线扩展属性字段
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns></returns>
					const EarthView::World::Spatial::Display::KeyValuePair& getPropertyField(ev_uint32 index) const;
					/// <summary>
					/// 设置线扩展属性字段
					/// </summary>
					/// <param name="index">属性索引</param>
					/// <param name="value">属性字段</param>
					/// <returns></returns>
					ev_void setPropertyFieldValue(ev_uint32 index,const EVString& value);

					/// <summary>
					/// 获取线扩展首端闭合类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>首端闭合类型</returns>
                    EarthView::World::Spatial::Display::EVClosedShapeType getHeaderClosed() const;
					/// <summary>
					/// 设置线扩展首端闭合类型
					/// </summary>
					/// <param name="closed">首端闭合类型</param>
					/// <returns></returns>
                    ev_void setHeaderClosed(EarthView::World::Spatial::Display::EVClosedShapeType closed);
					/// <summary>
					/// 获取线扩展尾端闭合类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>尾端闭合类型</returns>
                    EarthView::World::Spatial::Display::EVClosedShapeType getTailClosed() const;
					/// <summary>
					/// 设置线扩展尾端闭合类型
					/// </summary>
					/// <param name="closed">尾端闭合类型</param>
					/// <returns></returns>
                    ev_void setTailClosed(EarthView::World::Spatial::Display::EVClosedShapeType closed);
					/// <summary>
					/// 获取填充颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>填充颜色</returns>
                    const EarthView::World::Spatial::Display::IColor* getFillColor() const;
					/// <summary>
					/// 设置填充颜色
					/// </summary>
					/// <param name="pColor">填充颜色</param>
					/// <returns></returns>
                    ev_bool setFillColor(const EarthView::World::Spatial::Display::IColor* pColor);
					/// <summary>
					/// 获取线扩展边框颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>线扩展边框颜色</returns>
                    const EarthView::World::Spatial::Display::IColor* getLineColor() const;
					/// <summary>
					/// 设置线扩展边框颜色
					/// </summary>
					/// <param name="pColor">线扩展边框颜色</param>
					/// <returns></returns>
                    ev_bool setLineColor(const EarthView::World::Spatial::Display::IColor* pColor);
					/// <summary>
					/// 设置绘制模式
					/// </summary>
					/// <param name="mode">绘制模式</param>
					/// <returns></returns>
					virtual ev_void setDrawingMode(EVSymbol3DDrawingMode mode);
					/// <summary>
					/// 获取绘制模式
					/// </summary>
					/// <param name=""></param>
					/// <returns>绘制模式</returns>
					virtual EVSymbol3DDrawingMode getDrawingMode();
					/// <summary>
					/// 设置线扩展是否插值
					/// </summary>
					/// <param name="need">线扩展是否插值</param>
					/// <returns></returns>
					ev_void setNeedInterpolate(ev_bool need);
					/// <summary>
					/// 设置线扩展是否插值
					/// </summary>
					/// <param name=""></param>
					/// <returns>线扩展是否插值</returns>
					ev_bool getNeedInterpolate() const;

					/// <summary>
					/// 设置线扩展拐点是否平滑插值,局部坐标不考虑
					/// </summary>
					/// <param name="smooth">线扩展是否平滑插值</param>
					/// <returns></returns>
					ev_void setCornerSmoothing(ev_bool smooth);
					/// <summary>
					/// 拐点是否平滑插值,局部坐标不考虑
					/// </summary>
					/// <param name=""></param>
					/// <returns>拐点是否平滑插值</returns>
					ev_bool getCornerSmoothing() const;

					/// <summary>
					/// 设置线扩展插值距离
					/// </summary>
					/// <param name="dis">线扩展插值距离</param>
					/// <returns></returns>
					ev_void setInterpolateDistance(ev_real32 dis);
					/// <summary>
					/// 设置线扩展插值距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>线扩展插值距离</returns>
					ev_real32 getInterpolateDistance() const;

                    /// <summary>
                    /// 获取符号类型
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ev_int32 getSymbolType() const;                    

                    /// <summary>
                    /// 序列化成流
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ev_void toStream(_out EarthView::World::Core::CDataStream &stream) const;                    

                    /// <summary>
                    /// 自我复制
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual EarthView::World::Spatial::Display::ISymbol* clone() const;
					/// <summary>
					///  复制操作，复制所有信息，含颜色，法向量
					/// <summary>
					EarthView::World::Spatial::Display::CSimpleLine3DSymbol& operator=(const EarthView::World::Spatial::Display::CSimpleLine3DSymbol& other);
                    /// <summary>
                    /// 判断两个Symbol是否属性相同
                    /// </summary>
                    /// <param name="pSymbol">Symbol对象</param>
                    /// <returns></returns>
                    ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);

                    /// <summary>
                    /// 判断两个Symbol是否相似
                    /// 如果相似，则可以同一批次创建三维渲染对象
                    /// </summary>
                    /// <param name="pSymbol">Symbol对象</param>
                    /// <returns></returns>
                    ev_bool similar(const EarthView::World::Spatial::Display::ISymbol* pSymbol)const;

					/// <summary>
					/// 设置是否启用沿线注记
					/// </summary>
					/// <param name="lineLabel">是否启用沿线注记</param>
					/// <returns></returns>
					ev_void setLineLabel(ev_bool lineLabel);
					/// <summary>
					/// 获取是否开启了沿线注记
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否启用沿线注记</returns>
					ev_bool getLineLabel( ) const;

                    /// <summary>
                    /// 从XML元素中恢复Symbol属性
                    /// </summary>
                    /// <param name="xml">XML字符串</param>
                    /// <returns></returns>
                    virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

                    /// <summary>
                    /// 将Symbol属性写入XML元素
                    /// </summary>
                    /// <param name="xml">XML字符串</param>
                    /// <returns></returns>
                    virtual EarthView::World::Core::CXmlElement toXmlElement() const;
                
ev_internal:
					/// <summary>
					/// 从数据流恢复Symbol属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
                protected:
                    EarthView::World::Spatial::Display::EVTransectShapeType mTransectType;

                    typedef vector<EarthView::World::Spatial::Display::KeyValuePair> Propertys;
                    Propertys mPropertys;
					Propertys mPropertyFields;

                    EarthView::World::Spatial::Display::EVClosedShapeType mHeaderClosedType;
                    EarthView::World::Spatial::Display::EVClosedShapeType mTailClosedType;

                    EarthView::World::Spatial::Display::IColor* mpFillColor;
                    EarthView::World::Spatial::Display::IColor* mpLineColor;

					EVSymbol3DDrawingMode mDrawingMode;

					ev_bool mbNeedInterpolate;
					ev_real32 mInterpolateDis;

					ev_bool mbCornerSmooth;

					ev_bool mbLineLabel;
                };
            }
        }
    }
}

#endif