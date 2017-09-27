#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_MULTISYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_MULTISYMBOL_H
#include "symbol/symbol.h"
#include "symbol/symbollayer.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
			/// <summary>
			/// 多图层风格类，是所有多图层各风格类的基类
			/// 提供方法如下：
			/// 获取与移除指定风格图层，添加与插入风格图层、获取风格图层个数、移动某一风格图层
			/// 获取与设置指定图片的数据、获取图片的个数、获取指定图片的ID、是否含有图片
			/// 获取流、获取SLD、判断两个Symbol是否属性相同、将Symbol属性写入XML元素
			/// 从XML元素中恢复Symbol属性、从SLD恢复Symbol属性、从数据流恢复Symbol属性
			/// </summary>
			class EV_SYMBOL_DLL CMultiSymbol :
				public EarthView::World::Spatial::Display::CSymbol
			{
				friend class CDrawMultiSymbol;
				friend class CDrawPieStatistics;
			public:
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMultiSymbol();

				/// <summary>
				/// 获取指定风格图层
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>风格图层</returns>
				const EarthView::World::Spatial::Display::CSymbolLayer* getLayerRef(ev_int32 index) const ;
				EarthView::World::Spatial::Display::CSymbolLayer* getLayerRef(ev_int32 index);

				/// <summary>
				/// 添加风格图层
				/// </summary>
				/// <param name="symbol">图层风格</param>
				/// <param name="visible">是否可见</param>
				/// <param name="lock">是否锁定</param>
				/// <returns></returns>
				ev_void add(const EarthView::World::Spatial::Display::ISymbol* symbol, ev_bool visible, ev_bool lock);

				/// <summary>
				/// 添加风格图层
				/// </summary>
				/// <param name="layer">风格图层</param>
				/// <returns></returns>
				ev_void add(const EarthView::World::Spatial::Display::CSymbolLayer* layer);

				/// <summary>
				/// 插入风格图层
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="layer">风格图层</param>
				/// <returns></returns>
				ev_void insert( ev_int32 pos, const EarthView::World::Spatial::Display::CSymbolLayer* layer);

				/// <summary>
				/// 插入风格图层
				/// </summary>
				/// <param name="pos">插入位置</param>
				/// <param name="layer">风格图层</param>
				/// <param name="visible">是否可见</param>
				/// <param name="lock">是否锁定</param>
				/// <returns></returns>
				ev_void insert( ev_int32 pos, const EarthView::World::Spatial::Display::ISymbol *symbol, ev_bool visible, ev_bool lock );
				
				/// <summary>
				/// 移除指定风格图层
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns></returns>
				ev_void remove(ev_int32 index) ;

				/// <summary>
				/// 获取风格图层个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getCount() const;

				/// <summary>
				/// 移动某一风格图层
				/// </summary>
				/// <param name="oldIndex">旧位置</param>
				/// <param name="newIndex">新位置</param>
				/// <returns>若返回true,则移动风格图层成功</returns>
				ev_bool move(ev_int32 oldIndex, ev_int32 newIndex);
				
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
				/// <param name="stream">图片数据流</param>
				/// <returns></returns>
				virtual ev_void setImage(ev_uint32 index,const EVString& imageID,EarthView::World::Core::MemoryDataStreamPtr stream);
			ev_internal:
				/// <summary>
				/// 从SLD恢复Symbol属性
				/// </summary>
				/// <param name="sld">SLD字符串</param>
				/// <returns></returns>
				ev_void fromSLD( EVString& sld );

				/// <summary>
				/// 从数据流恢复Symbol属性
				/// </summary>
				/// <param name="stream">流对象</param>
				/// <returns></returns>
				ev_void fromStream( EarthView::World::Core::CDataStream& stream );
			ev_private:
				CMultiSymbol( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				CMultiSymbol();

			protected:
				/// <summary>
				/// 风格图层列表
				/// </summary>
				ev_list<EarthView::World::Spatial::Display::CSymbolLayer*>* m_vSymbolLayers;
			private:
				C_DISABLE_COPY( CMultiSymbol );
			};
		}
		}
	}
}
#endif

