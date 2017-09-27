#ifndef _PHOTO_3DSYMBOL_H
#define _PHOTO_3DSYMBOL_H


#include "symbol/symbol3d.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{

				/// <summary>
				/// 图像符号				
				/// </summary>
                class EV_SYMBOL_DLL CPhoto3DSymbol : public EarthView::World::Spatial::Display::CSymbol3D
                {
                public:
                    enum EVPhotoShapeType
                    {
                        PST_Rectangle = 0,
                        PST_Column,
                        PST_Sphere
                    };

                    enum EVPhotoTileOriginType
                    {
                        POT_LowerLeft,
                        POT_UpperLeft
                    };

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPhoto3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CPhoto3DSymbol();                    

                public:
					/// <summary>
					/// 获取图像路径
					/// </summary>
					/// <param name=""></param>
					/// <returns>图像路径</returns>
                    const EVString& getPhotoUri() const;
					/// <summary>
					/// 设置图像路径
					/// </summary>
					/// <param name="uri">图像路径</param>
					/// <returns></returns>
                    ev_void setPhotoUri(const EVString& uri);
					/// <summary>
					/// 获取图像旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>图像旋转角度</returns>
                    ev_real32 getRotate() const;
					/// <summary>
					/// 设置图像旋转角度
					/// </summary>
					/// <param name="angle">图像旋转角度</param>
					/// <returns></returns>
                    ev_void setRotate(ev_real32 angle);

					/// <summary>
					/// 获取图像几何形状类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>几何形状类型</returns>
                    EarthView::World::Spatial::Display::CPhoto3DSymbol::EVPhotoShapeType getShapeType() const;
					/// <summary>
					/// 设置图像几何形状类型
					/// </summary>
					/// <param name="type">几何形状类型</param>
					/// <returns></returns>
                    ev_void setShapeType(EarthView::World::Spatial::Display::CPhoto3DSymbol::EVPhotoShapeType type);

					/// <summary>
					/// 获取左视角
					/// </summary>
					/// <param name=""></param>
					/// <returns>左视角</returns>
                    ev_real32 getLeftFOV()const;
					/// <summary>
					/// 设置左视角
					/// </summary>
					/// <param name="fov">左视角</param>
					/// <returns></returns>
                    ev_void setLeftFOV(ev_real32 fov);
					/// <summary>
					/// 获取右视角
					/// </summary>
					/// <param name=""></param>
					/// <returns>右视角</returns>
                    ev_real32 getRightFOV()const;
					/// <summary>
					/// 设置右视角
					/// </summary>
					/// <param name="fov">右视角</param>
					/// <returns></returns>
                    ev_void setRightFOV(ev_real32 fov);
					/// <summary>
					/// 获取顶视角
					/// </summary>
					/// <param name=""></param>
					/// <returns>顶视角</returns>
                    ev_real32 getTopFOV()const;
					/// <summary>
					/// 设置顶视角
					/// </summary>
					/// <param name="fov">顶视角</param>
					/// <returns></returns>
                    ev_void setTopFOV(ev_real32 fov);
					/// <summary>
					/// 获取底视角
					/// </summary>
					/// <param name=""></param>
					/// <returns>底视角</returns>
                    ev_real32 getBottomFOV()const;
					/// <summary>
					/// 设置底视角
					/// </summary>
					/// <param name="fov">底视角</param>
					/// <returns></returns>
                    ev_void setBottomFOV(ev_real32 fov);
					/// <summary>
					/// 获取最近视距
					/// </summary>
					/// <param name=""></param>
					/// <returns>最近视距</returns>
                    ev_real64 getViewNear()const;
					/// <summary>
					/// 设置最近视距
					/// </summary>
					/// <param name="n">最近视距</param>
					/// <returns></returns>
                    ev_void setViewNear(ev_real64 n);

					/// <summary>
					/// 获取是否应用瓦片
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否应用瓦片</returns>
                    ev_bool getUseTile()const;
					/// <summary>
					/// 设置是否应用瓦片
					/// </summary>
					/// <param name="bUseTile">是否应用瓦片</param>
					/// <returns></returns>
                    ev_void setUseTile(ev_bool bUseTile);
					/// <summary>
					/// 获取瓦片大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>瓦片大小</returns>
                    ev_uint32 getTileSize()const;
					/// <summary>
					/// 设置瓦片大小
					/// </summary>
					/// <param name="size">瓦片大小</param>
					/// <returns></returns>
                    ev_void setTileSize(ev_uint32 size);

					/// <summary>
					/// 获取最大宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大宽度</returns>
                    ev_uint32 getMaxWidth()const;
					/// <summary>
					/// 设置最大宽度
					/// </summary>
					/// <param name="width">最大宽度</param>
					/// <returns></returns>
                    ev_void setMaxWidth(ev_uint32 width);
					/// <summary>
					/// 获取最大高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>最大高度</returns>
                    ev_uint32 getMaxHeight()const;
					/// <summary>
					/// 设置最大高度
					/// </summary>
					/// <param name="height">最大高度</param>
					/// <returns></returns>
                    ev_void setMaxHeight(ev_uint32 height);
					/// <summary>
					/// 获取中心点
					/// </summary>
					/// <param name=""></param>
					/// <returns>中心点</returns>
                    EarthView::World::Spatial::Display::CPhoto3DSymbol::EVPhotoTileOriginType getGridOrigin()const;
					/// <summary>
					/// 设置中心点
					/// </summary>
					/// <param name="index">中心点类型</param>
					/// <returns></returns>
                    ev_void setGridOrigin(EarthView::World::Spatial::Display::CPhoto3DSymbol::EVPhotoTileOriginType index);

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
                    EVString mPhotoUri;           //照片位置
                    ev_real32 mRotate;          //旋转角度
                    EarthView::World::Spatial::Display::CPhoto3DSymbol::EVPhotoShapeType mShpType;

                    ev_real32 mLeftFOV;         //图片可见范围
                    ev_real32 mRightFOV;
                    ev_real32 mTopFOV;
                    ev_real32 mBottomFOV;
                    ev_real64 mNear;

                    ev_bool mUseTile;           //是否使用切片
                    ev_uint32 mTileSize;        //切片尺寸

                    ev_uint32 mMaxWidth;        //图片原始宽度
                    ev_uint32 mMaxHeight;       //图片原始高度

                    EarthView::World::Spatial::Display::CPhoto3DSymbol::EVPhotoTileOriginType mGridOrigin;       //网格起点


                };

            }
        }
    }
}

#endif
