#ifndef _SYMBOL3D_H_
#define _SYMBOL3D_H_

#include <core/datastream.h>
#include <core/fontdef.h>

#include <spatialinterface/isymbol.h>
#include <spatialinterface/altitudemode.h>

#include <color/color.h>

#include "symbol/symbolexports.h"
#include "symbol/symbol.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{      

				enum EVSymbol3DDrawingMode
				{
					SDM_ALL = 0,//双模式
					SDM_FILL,//填充模式
					SDM_FRAME//边框模式
				};

				/// <summary>
				/// 枚举:纹理寻址模式                
				/// </summary>
				enum EVTextureAddressMode
				{
					TAM_Wrap        = 0,
					TAM_Clamp,
					TAM_Mirror,
					TAM_Border
				};

				/// <summary>
				/// 纹理映射信息体                
				/// </summary>
				class EV_SYMBOL_DLL CTextureInfo : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CTextureInfo(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CTextureInfo();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~CTextureInfo();               

				public:   
					/// <summary>
					/// 纹理信息是否相同
					/// </summary>
					/// <param name="rhs">纹理信息</param>
					/// <returns></returns>
					ev_bool equal(const EarthView::World::Spatial::Display::CTextureInfo& rhs)
					{
						if(    realEqual(this->MinX,rhs.MinX)
							&& realEqual(this->MinY,rhs.MinY)
							&& realEqual(this->MaxX,rhs.MaxX)
							&& realEqual(this->MaxY,rhs.MaxY)
							&& realEqual(this->UnitSizeX,rhs.UnitSizeX)
							&& realEqual(this->UnitSizeY,rhs.UnitSizeY)
							&& realEqual(this->PicTransparency,rhs.PicTransparency)
							&& this->TextureID == rhs.TextureID
							)//纹理及映射方式不影响Mesh的创建，只影响材质
						{
							return true;
						}
						else 
						{
							return false;
						}
					}                                    
					/// <summary>
					/// 序列化成流
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void toStream(_out EarthView::World::Core::CDataStream &stream) const; 
					/// <summary>
					/// 从数据流恢复Symbol属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
					/// <summary>
					/// 获取是否已改变，主要是流
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否已改变</returns>
					ev_bool getDirty() const;
					/// <summary>
					/// 设置是否已改变，主要是流
					/// </summary>
					/// <param name="dirty">是否已改变</param>
					/// <returns></returns>
					ev_void setDirty(ev_bool dirty);
				public:
					EVString TextureID;                   //纹理图片资源路径
					ev_real32 MinX;                     //映射到纹理的纹理坐标x最小值
					ev_real32 MaxX;                     //映射到纹理的纹理坐标x最大值
					ev_real32 MinY;                     //映射到纹理的纹理坐标y最小值
					ev_real32 MaxY;                     //映射到纹理的纹理坐标y最大值         

					ev_real32 UnitSizeX;                //纹理映射到实体上的X单位长度(米);0表示拉伸到底
					ev_real32 UnitSizeY;                //纹理映射到实体上的Y单位长度(米);0表示拉伸到底

					EarthView::World::Spatial::Display::EVTextureAddressMode TAM;           //纹理映射模式

					EarthView::World::Core::MemoryDataStreamPtr TextureStream;  //纹理图片内存流

					ev_real32 PicTransparency;

				private:
					ev_bool realEqual(ev_real32 a,ev_real32 b)
					{
						ev_real32 pric = 0.00001f;
						return (a - b > -pric && a - b < pric);
					}

					ev_bool Dirty;
				};

				/// <summary>
				/// 三维符号的基类(抽象类，不允许实例化该类)                
				/// </summary>
				class EV_SYMBOL_DLL CSymbol3D : public EarthView::World::Spatial::Display::CSymbol
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CSymbol3D(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CSymbol3D();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CSymbol3D();

				public:

					/// <summary>
					/// 获取拉升的高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>当顶点Z值无效(等于0)时使用</returns>
					ev_real32 getHightenValue() const;

					/// <summary>
					/// 设置拉升的高度
					/// </summary>
					/// <param name="h">高度值,当顶点Z值无效(等于0)时使用</param>
					/// <returns></returns>
					ev_void setHightenValue(ev_real32 h);

					/// <summary>
					/// 获取拉升的高度
					/// </summary>
					/// <param name=""></param>
					/// <returns>当顶点Z值无效(等于0)时使用</returns>
					const EVString& getHightenField() const;

					/// <summary>
					/// 设置拉升的高度
					/// </summary>
					/// <param name="h">高度值,当顶点Z值无效(等于0)时使用</param>
					/// <returns></returns>
					ev_void setHightenField(const EVString& hf);

					/// <summary>
					/// 获取高度模式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeMode() const;

					/// <summary>
					/// 设置高度模式
					/// </summary>
					/// <param name="m">高度模式</param>
					/// <returns></returns>
					ev_void setAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode m);

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
					/// 获取显示注记的字段名
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getPropertyName() const;
					/// <summary>
					/// 设置显示注记的字段名
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setPropertyName(const EVString& fieldName);

					/// <summary>
					/// 获取显示注记的字体名
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getFontName() const;
					/// <summary>
					/// 设置显示注记的字体名
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setFontName(const EVString& fontName);

					/// <summary>
					/// 获取显示注记的字体大小
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getFontSize()const;
					/// <summary>
					/// 设置显示注记的字体大小
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setFontSize(ev_real32 fontSize);

					/// <summary>
					/// 获取风格颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色对象</returns>
					virtual EarthView::World::Spatial::Display::IColor* getFontColor() const;

					/// <summary>
					/// 获取字体边框颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色对象</returns>
					virtual EarthView::World::Spatial::Display::IColor* getFontOutlineColor() const;

					/// <summary>
					/// 设置字体边框颜色
					/// </summary>
					/// <param name="color">字体边框颜色</param>
					/// <returns></returns>
					virtual ev_void setFontOutlineColor(const EarthView::World::Spatial::Display::IColor* color);

					/// <summary>
					/// 设置风格颜色
					/// </summary>
					/// <param name="color">风格颜色</param>
					/// <returns></returns>
					virtual ev_void setFontColor(const EarthView::World::Spatial::Display::IColor* color);

					/// <summary>
					/// 获取显示注记是否从右向左
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getTextRightToLeft() const;
					/// <summary>
					/// 设置显示注记是否从右向左
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTextRightToLeft(ev_bool r2l);

					/// <summary>
					/// 获取显示注记的X方向偏移量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getTextOffsetX() const;
					/// <summary>
					/// 设置显示注记的X方向偏移量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTextOffsetX(ev_real32 x);

					/// <summary>
					/// 获取显示注记的Y方向偏移量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getTextOffsetY() const;
					/// <summary>
					/// 设置显示注记的Y方向偏移量
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTextOffsetY(ev_real32 y);

					/// <summary>
					/// 获取显示注记的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_real32 getTextAngle() const;
					/// <summary>
					/// 设置显示注记的旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTextAngle(ev_real32 angle);

					/// <summary>
					/// 获取显示注记的水平对齐方式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Core::EVTextHorizontalAlignment getTextHAlignment() const;
					/// <summary>
					/// 设置显示注记的水平对齐方式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTextHAlignment(EarthView::World::Core::EVTextHorizontalAlignment alignment);

					/// <summary>
					/// 获取显示注记的竖直对齐方式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Core::EVTextVerticalAlignment getTextVAlignment() const;
					/// <summary>
					/// 设置显示注记的竖直对齐方式
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setTextVAlignment(EarthView::World::Core::EVTextVerticalAlignment alignment);

					/// <summary>
					/// 加粗
					/// </summary>
					/// <param name="isBold">是否启用加粗</param>
					void setBoldEnabled(ev_bool isBold);
					/// <summary>
					/// 倾斜
					/// </summary>
					/// <param name="isItalic">是否启用倾斜</param>
					void setItalicEnabled(ev_bool isItalic);
					/// <summary>
					/// 获取是否加粗
					/// </summary>
					/// <param name=""></param>
					ev_bool getBoldEnabled();
					/// <summary>
					/// 获取是否倾斜
					/// </summary>
					/// <param name=""></param>
					ev_bool getItalicEnabled();

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
					/// 询问是否显示显示注记
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getShowText() const;
					/// <summary>
					/// 设置是否显示显示注记
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setShowText(ev_bool bShow);
					/// <summary>
					/// 设置注记是否开启阴影
					/// </summary>
					/// <param name=hasShadow>是否启用阴影</param>
					void setTextShadowEnabled(ev_bool hasShadow);
					/// <summary>
					/// 获取注记阴影是否开启
					/// </summary>
					/// <returns>阴影是否开启</returns>
					ev_bool getTextShadowEnabled();
					/// <summary>
					/// 将Symbol属性写入XML元素
					/// </summary>
					/// <param name="xml">XML字符串</param>
					/// <returns></returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 从XML元素中恢复Symbol属性
					/// </summary>
					/// <param name="xml">XML字符串</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

ev_internal:

					/// <summary>
					/// 从数据流恢复Symbol属性
					/// </summary>
					/// <param name="stream">流对象</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );

				protected:
					inline ev_bool realEqual(ev_real32 a,ev_real32 b)
					{
						ev_real32 pric = 0.00001f;
						return (a - b > -pric && a - b < pric);
					}

				protected:
					ev_real32 mHightenValue;//高度值
					EVString mHightenField;
					EarthView::World::Spatial::Utility::EVAltitudeMode AM;//高度模式

					EVString mFieldName;
					EVString mFontName;
					ev_real32 mFontSize;
					EarthView::World::Spatial::Display::IColor* mpFontColor;
					EarthView::World::Spatial::Display::IColor* mpFontOutlineColor;
					ev_bool mbBold;
					ev_bool mbItalic;
					ev_bool mbAntiAlias;

					/*EVString mText;*/
					ev_bool   mRightToLeft;
					ev_real32 mTextOffsetX;
					ev_real32 mTextOffsetY;
					ev_real32 mTextAngle;
					EarthView::World::Core::EVTextHorizontalAlignment mHorizontalAlignment;
					EarthView::World::Core::EVTextVerticalAlignment mVerticalAlignment;

					ev_bool mShowText;

					ev_bool mbTextShadowEnabled;
				};
			}
		}
	}
}

#endif
