#ifndef _ICON_3DSYMBOL_H
#define _ICON_3DSYMBOL_H

#include "symbol/symbol3d.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{

                enum EVIconAnchorType
                {
                    IAT_Pixels = 0, //像素坐标<起点在左上角>
                    IAT_Fraction,   //比例<起点在左上角>
                    IAT_InsetPixels //像素坐标<起点在右上角>
                };

				/// <summary>
				/// 图标符号				
				/// </summary>
                class EV_SYMBOL_DLL CIcon3DSymbol : public EarthView::World::Spatial::Display::CSymbol3D
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CIcon3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CIcon3DSymbol();                   

                public:
					/// <summary>
					/// 获取图标路径
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标路径</returns>
                    const EVString& getIconUri()const;
					/// <summary>
					/// 设置图标路径
					/// </summary>
					/// <param name="uri">图标路径</param>
					/// <returns></returns>
                    ev_void setIconUri(const EVString& uri);
					/// <summary>
					/// 获取图标大小比例
					/// </summary>
					/// <param name=""></param>
					/// <returns>大小比例</returns>
                    ev_real32 getIconScale()const;
					/// <summary>
					/// 设置图标大小比例
					/// </summary>
					/// <param name="scale">大小比例</param>
					/// <returns></returns>
                    ev_void setIconScale(ev_real32 scale);

					/// <summary>
					/// 获取图标角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>角度</returns>
                    ev_real32 getHeading()const;
					/// <summary>
					/// 设置图标角度
					/// </summary>
					/// <param name="angle">角度</param>
					/// <returns></returns>
                    ev_void setHeading(ev_real32 angle);
					/// <summary>
					/// 获取图标锚定类型x
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标锚定类型x</returns>
                    EarthView::World::Spatial::Display::EVIconAnchorType getAnchorTypeX()const;
					/// <summary>
					/// 设置图标锚定类型x
					/// </summary>
					/// <param name="type">图标锚定类型x</param>
					/// <returns></returns>
                    ev_void setAnchorTypeX(EarthView::World::Spatial::Display::EVIconAnchorType type);

					/// <summary>
					/// 获取图标锚定类型y
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标锚定类型y</returns>
                    EarthView::World::Spatial::Display::EVIconAnchorType getAnchorTypeY()const;
					/// <summary>
					/// 设置图标锚定类型y
					/// </summary>
					/// <param name="type">图标锚定类型y</param>
					/// <returns></returns>
                    ev_void setAnchorTypeY(EarthView::World::Spatial::Display::EVIconAnchorType type);
					/// <summary>
					/// 获取图标热点x
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标热点x</returns>
                    ev_real32 getHotspotX()const;
					/// <summary>
					/// 设置图标热点x
					/// </summary>
					/// <param name="x">图标热点x</param>
					/// <returns></returns>
                    ev_void setHotspotX(ev_real32 x);
					/// <summary>
					/// 获取图标热点y
					/// </summary>
					/// <param name=""></param>
					/// <returns>图标热点y</returns>
                    ev_real32 getHotspotY()const;
					/// <summary>
					/// 设置图标热点y
					/// </summary>
					/// <param name="y">图标热点y</param>
					/// <returns></returns>
                    ev_void setHotspotY(ev_real32 y);

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
                    EVString mIconUri;
                    ev_real32 mIconScale;
                    ev_real32 mHeading;
                    ev_real32 mHotspotX;
                    ev_real32 mHotspotY;

                    EarthView::World::Spatial::Display::EVIconAnchorType mAnchorTypeX;
                    EarthView::World::Spatial::Display::EVIconAnchorType mAnchorTypeY;
                };
            }
        }
    }
}
#endif

