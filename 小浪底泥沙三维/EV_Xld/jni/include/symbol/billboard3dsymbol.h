#ifndef _BILLBOARD_3DSYMBOL_H
#define _BILLBOARD_3DSYMBOL_H

#include <core/datastream.h>

#include "symbol/symbol3d.h"





namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{

				enum EVBillboardOriginType
				{
					BOT_TOP_LEFT,
					BOT_TOP_CENTER,
					BOT_TOP_RIGHT,
					BOT_CENTER_LEFT,
					BOT_CENTER,
					BOT_CENTER_RIGHT,
					BOT_BOTTOM_LEFT,
					BOT_BOTTOM_CENTER,
					BOT_BOTTOM_RIGHT
				};

				/// <summary>
				/// 广告板符号				
				/// </summary>
				class EV_SYMBOL_DLL CBillboard3DSymbol : public EarthView::World::Spatial::Display::CSymbol3D
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CBillboard3DSymbol(); 
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CBillboard3DSymbol();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CBillboard3DSymbol( EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 获取广告板几何中心位置的枚举类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Display::EVBillboardOriginType getBillboardOriginType() const;
					/// <summary>
					/// 设置广告板几何中心位置的枚举类型
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setBillboardOriginType(EarthView::World::Spatial::Display::EVBillboardOriginType type);

					/// <summary>
					/// 获取广告板宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getBillboardWidth() const;
					/// <summary>
					/// 设置广告板宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setBillboardWidth(ev_real32 w);

					/// <summary>
					/// 获取广告板高度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getBillboardHeight() const;
					/// <summary>
					/// 设置广告板高度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setBillboardHeight(ev_real32 h);

					/// <summary>
					/// 获取广告板显示的图片的ID
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getPictureID() const;
					/// <summary>
					/// 设置广告板显示的图片的ID
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setPictureID(const EVString& id);

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
					/// 获取广告板显示的图片的缩放比例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getPictureScale() const;
					/// <summary>
					/// 设置广告板显示的图片的缩放比例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setPictureScale(ev_real32 scale); 

					/// <summary>
					/// 获取广告板是否平行于地面显示
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getLiedown() const;
					/// <summary>
					/// 设置广告板显示的图片的缩放比例
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setLiedown(ev_bool liedown);  

					/// <summary>
					/// 获取广告板显示的图片的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getPictureAngle() const;
					/// <summary>
					/// 设置广告板显示的图片的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setPictureAngle(ev_real32 angle);

					/// <summary>
					/// 获取图片旋转角度字段值
					/// </summary>
					/// <param name=""></param>
					/// <returns>图片旋转角度字段值</returns>
					const EVString& getPictureAngleField() const;

					/// <summary>
					/// 设置片旋转角度字段值
					/// </summary>
					/// <param name="paf">图片旋转角度字段值</param>
					/// <returns></returns>
					ev_void setPictureAngleField(const EVString& paf);

					/// <summary>
					/// 询问广告板是否显示图片
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getShowPicture() const;
					/// <summary>
					/// 设置广告板是否显示图片
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setShowPicture(ev_bool bShow);

					/// <summary>
					/// 询问广告板图片是否已经修改
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getImageDirty() const;
					/// <summary>
					/// 设置广告板图片是否已经修改
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setImageDirty(ev_bool dirty);

					/// <summary>
					/// 获取不透明度
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明度(0 : 完全透明; 1 : 完全不透明)</returns>
					ev_real32 getPicTransparency() const;

					/// <summary>
					/// 设置透明度
					/// </summary>
					/// <param name="t">透明度(0 : 完全透明; 1 : 完全不透明)</param>
					/// <returns></returns>
					ev_void setPicTransparency(ev_real32 t);
					/// <summary>
					/// 设置延伸到地面
					/// </summary>
					/// <param name="downToGround">是否延伸到地面(false : 延伸到地面; true : 不延伸到地面)</param>
					/// <returns></returns>
					ev_void setDownToGround(ev_bool downToGround);

					/// <summary>
					/// 获取延伸到地面
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否延伸到地面(false : 延伸到地面; true : 不延伸到地面)</returns>
					ev_bool getDownToGround() const;
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
					virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);

					/// <summary>
					/// 判断两个Symbol是否相似
					/// 如果相似，则可以同一批次创建三维渲染对象
					/// </summary>
					/// <param name="pSymbol">Symbol对象</param>
					/// <returns></returns>
					virtual ev_bool similar(const EarthView::World::Spatial::Display::ISymbol* pSymbol)const;

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
					EarthView::World::Spatial::Display::EVBillboardOriginType mBOT;
					ev_real32 mWidth;
					ev_real32 mHeight;

					EVString mPicID;
					EarthView::World::Core::MemoryDataStreamPtr mPicStream;
					ev_real32 mPicScale;                    
					ev_real32 mPicAngle;
					EVString mPicAngleField;

					ev_bool mShowPic;
					ev_bool mImageDirty;

					ev_real32 mPicTransparency;

					ev_bool mbLiedown;
					ev_bool mbDownToGround;
				};
			}

		}
	}
}
#endif
