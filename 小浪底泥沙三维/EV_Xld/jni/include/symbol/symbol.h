#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOL_H

#include "symbol/symbolexports.h"
#include "spatialinterface/isymbol.h"
#include "color/color.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 所有Symbol类的基类
			/// 提供方法如下：
			/// 获取与设置 符号名字、风格颜色、指定图片的数据
			/// 是否含有图片、获取图片的个数、获取指定图片的ID
			///	从流中读取与写入字符串，并将流位置向后提升
			/// 获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CSymbol:
				public EarthView::World::Spatial::Display::ISymbol 
			{			
			public:
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
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CSymbol();

				/// <summary>
				/// 获取符号名字
				/// </summary>
				/// <param name=""></param>
				/// <returns>符号名字</returns>
				virtual EVString getName() const; 

				/// <summary>
				/// 设置符号名字
				/// </summary>
				/// <param name="szName">符号名字</param>
				/// <returns></returns>
				virtual ev_void setName(const EVString& szName);

				/// <summary>
				/// 获取风格颜色
				/// </summary>
				/// <param name=""></param>
				/// <returns>颜色对象</returns>
				virtual EarthView::World::Spatial::Display::IColor* getColor() const;

				/// <summary>
				/// 设置风格颜色
				/// </summary>
				/// <param name="color">风格颜色</param>
				/// <returns></returns>
				virtual ev_void setColor(const EarthView::World::Spatial::Display::IColor* color);

				/// <summary>
				/// 获取流
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				virtual ev_void toStream( _out EarthView::World::Core::CDataStream &stream ) const;				

				/// <summary>
				/// 获取SLD
				/// </summary>
				/// <param name=""></param>
				/// <returns>SLD字符串</returns>
				virtual EVString toSLD() const;


				/// <summary>
				/// 判断两个Symbol是否属性相同
				/// </summary>
				/// <param name="pSymbol">Symbol对象</param>
				/// <returns></returns>
				virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);

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
			protected:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CSymbol();

                /// <summary>
                /// 从流中读取字符串，并将流位置向后提升
                /// </summary>
                /// <param name="stream">流</param>
                /// <returns>字符串</returns>
                static EVString readString(EarthView::World::Core::CDataStream& stream);

                /// <summary>
                /// 向流中写入字符串，并将流位置向后提升
                /// </summary>
                /// <param name="stream">流</param>
                /// <param name="str">字符串</param>
                /// <returns></returns>
                static ev_void writeString(EarthView::World::Core::CDataStream& stream,const EVString& str);
			ev_internal:

				/// <summary>
				/// 从SLD恢复Symbol属性
				/// </summary>
				/// <param name="sld">SLD字符串</param>
				/// <returns></returns>
				virtual ev_void fromSLD( EVString& sld );
				/// <summary>
				/// 从数据流恢复Symbol属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			ev_private:
				CSymbol(EarthView::World::Core::CNameValuePairList *pList);
			protected:
				/// <summary>
				/// Symbol的颜色
				/// </summary>
				EarthView::World::Spatial::Display::IColor* m_pColor;

				/// <summary>
				/// Symbol的名字
				/// </summary>
				EVString m_szName;
			private:
				C_DISABLE_COPY(CSymbol);
			};
		}
		}
	}
}
#endif

