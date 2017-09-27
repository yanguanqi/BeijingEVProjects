#ifndef _MODEL_3DSYMBOL_H
#define _MODEL_3DSYMBOL_H


#include "symbol/symbol3d.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
            namespace Display{

				/// <summary>
				/// 模型符号				
				/// </summary>
                class EV_SYMBOL_DLL CModel3DSymbol : public EarthView::World::Spatial::Display::CSymbol3D
                {
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModel3DSymbol(_in EarthView::World::Core::CNameValuePairList* pList);
                public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
                    CModel3DSymbol();                    

                public:
					/// <summary>
					/// 获取模型路径
					/// </summary>
					/// <param name=""></param>
					/// <returns>模型路径</returns>
                    const EVString& getModelUri()const;
					/// <summary>
					/// 设置模型路径
					/// </summary>
					/// <param name="uri">模型路径</param>
					/// <returns></returns>
                    ev_void setModelUri(const EVString& uri);
					/// <summary>
					/// 获取模型大小比例
					/// </summary>
					/// <param name=""></param>
					/// <returns>大小比例</returns>
                    ev_real32 getModelScale() const;
					/// <summary>
					/// 设置图标大小比例
					/// </summary>
					/// <param name="scale">大小比例</param>
					/// <returns></returns>
                    ev_void setModelScale(ev_real32 scale);

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
                    EVString mModelUri;
                    ev_real32 mModelScale;
                };
            }
        }
    }
}
#endif
