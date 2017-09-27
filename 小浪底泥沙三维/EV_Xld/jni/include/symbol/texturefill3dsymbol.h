#ifndef _TEXTURE_FILL_3DSYMBOL_H_
#define _TEXTURE_FILL_3DSYMBOL_H_

#include "symbol/simplefill3dsymbol.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{

				/// <summary>
				/// 纹理面扩展符号				
				/// </summary>
                class EV_SYMBOL_DLL CTextureFill3DSymbol : public EarthView::World::Spatial::Display::CSimpleFill3DSymbol
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTextureFill3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CTextureFill3DSymbol();

                public:
					/// <summary>
					/// 获取顶底面纹理信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>顶底面纹理信息</returns>
                    EarthView::World::Spatial::Display::CTextureInfo& getTopTextureInfo();
					/// <summary>
					/// 设置顶底面纹理信息
					/// </summary>
					/// <param name="ti">顶底面纹理信息</param>
					/// <returns></returns>
                    ev_void setTopTextureInfo(const EarthView::World::Spatial::Display::CTextureInfo& ti);
					/// <summary>
					/// 获取侧面纹理信息
					/// </summary>
					/// <param name=""></param>
					/// <returns>侧面纹理信息</returns>
                    EarthView::World::Spatial::Display::CTextureInfo& getSideTextureInfo();
					/// <summary>
					/// 设置侧面纹理信息
					/// </summary>
					/// <param name="ti">侧面纹理信息</param>
					/// <returns></returns>
                    ev_void setSideTextureInfo(const EarthView::World::Spatial::Display::CTextureInfo& ti);

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
                    /// 是否含有图片
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual ev_bool hasImage() const;

                    /// <summary>
                    /// 获取图片的个数
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>图片个数</returns>
                    virtual ev_uint32 getImageCount() const;

                    /// <summary>
                    /// 获取指定图片的ID
                    /// </summary>
                    /// <param name="index">图片序列号</param>
                    /// <returns>图片ID</returns>
                    virtual EVString getImageID(ev_uint32 index) const;

                    /// <summary>
                    /// 获取指定图片的数据
                    /// </summary>
                    /// <param name="index">图片序列号</param>
                    /// <returns>图片数据流</returns>
                    virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const;

                    /// <summary>
                    /// 设置指定图片的数据
                    /// </summary>
                    /// <param name="index">图片序列号</param>
                    /// <param name="imageID">图片ID</param>
                    /// <returns>图片数据流</returns>
                    virtual ev_void setImage(ev_uint32 index,const EVString& imageID,EarthView::World::Core::MemoryDataStreamPtr stream);

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
                    EarthView::World::Spatial::Display::CTextureInfo mTopTextureInfo;
                    EarthView::World::Spatial::Display::CTextureInfo mSideTextureInfo;
                };
            }
        }
    }
}

#endif
