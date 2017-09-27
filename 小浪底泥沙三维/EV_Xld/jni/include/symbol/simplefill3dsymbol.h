#ifndef _SIMPLE_FILL_3DSYMBOL_H_ 
#define _SIMPLE_FILL_3DSYMBOL_H_

#include "symbol/symbol3d.h"


namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{

				enum EVPolygonExtensionType
				{					
					PET_Upward = 0,
					PET_Downward,
					PET_Both,		
					PET_DownToGround,
					PET_NoExtension
				};

				/// <summary>
				/// 面扩展符号				
				/// </summary>
                class EV_SYMBOL_DLL CSimpleFill3DSymbol : public EarthView::World::Spatial::Display::CSymbol3D
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSimpleFill3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CSimpleFill3DSymbol();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    virtual ~CSimpleFill3DSymbol();

                public:
					/// <summary>
					/// 获取面扩展类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>面扩展类型</returns>
                    EarthView::World::Spatial::Display::EVPolygonExtensionType getExtensionType() const;
					/// <summary>
					/// 设置面扩展类型
					/// </summary>
					/// <param name="bExtrude">面扩展类型</param>
					/// <returns></returns>
                    ev_void setExtensionType(EarthView::World::Spatial::Display::EVPolygonExtensionType bExtrude);
					/// <summary>
					/// 获取面扩展厚度
					/// </summary>
					/// <param name=""></param>
					/// <returns>面扩展厚度</returns>
					ev_real32 getThickness()const;
					/// <summary>
					/// 设置面扩展厚度
					/// </summary>
					/// <param name="thickness">面扩展厚度</param>
					/// <returns></returns>
					ev_void setThickness(ev_real32 thickness);
					/// <summary>
					/// 获取面扩展厚度对应的字段
					/// </summary>
					/// <param name=""></param>
					/// <returns>面扩展厚度对应的字段</returns>
					const EVString& getThicknessField()const;
					/// <summary>
					/// 设置面扩展厚度对应的字段
					/// </summary>
					/// <param name="tf">面扩展厚度对应的字段</param>
					/// <returns></returns>
					ev_void setThicknessField(const EVString& tf);
					/// <summary>
					/// 获取面扩展顶部颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>面扩展顶部颜色</returns>
                    const EarthView::World::Spatial::Display::IColor* getTopColor() const;
					/// <summary>
					/// 设置面扩展顶部颜色
					/// </summary>
					/// <param name="pColor">面扩展顶部颜色</param>
					/// <returns></returns>
                    ev_void setTopColor(const EarthView::World::Spatial::Display::IColor* pColor);
					/// <summary>
					/// 获取面扩展侧面颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>面扩展侧面颜色</returns>
                    const EarthView::World::Spatial::Display::IColor* getSideColor() const;
					/// <summary>
					/// 设置面扩展侧面颜色
					/// </summary>
					/// <param name="pColor">面扩展侧面颜色</param>
					/// <returns></returns>
                    ev_void setSideColor(const EarthView::World::Spatial::Display::IColor* pColor);
					/// <summary>
					/// 获取面扩展边框颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>面扩展边框颜色</returns>
                    const EarthView::World::Spatial::Display::IColor* getLineColor() const;
					/// <summary>
					/// 设置面扩展边框颜色
					/// </summary>
					/// <param name="pColor">面扩展边框颜色</param>
					/// <returns></returns>
                    ev_void setLineColor(const EarthView::World::Spatial::Display::IColor* pColor);
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

                    ///重写的函数

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
					EarthView::World::Spatial::Display::CSimpleFill3DSymbol& operator=(const EarthView::World::Spatial::Display::CSimpleFill3DSymbol& other);
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
                    EarthView::World::Spatial::Display::EVPolygonExtensionType mExtType;
                    EarthView::World::Spatial::Display::IColor* mpTopColor;
                    EarthView::World::Spatial::Display::IColor* mpSideColor;   
                    EarthView::World::Spatial::Display::IColor* mpLineColor;
					ev_real32 mThickness;
					EVString mThicknessField;

					EVSymbol3DDrawingMode mDrawingMode;
                };
            }
        }
    }
}

#endif
