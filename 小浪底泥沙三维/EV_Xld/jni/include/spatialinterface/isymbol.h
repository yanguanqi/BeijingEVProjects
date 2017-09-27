#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISYMBOL_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISYMBOL_H

#include "core/memoryallocatedobject.h"
#include "core/xml.h"

#include "spatialinterface/icolor.h"
#include "spatialinterface/config.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
#ifdef EV_OS_WIN
	#define DefaultSymbolFontFamily  "宋体"
#endif
#ifdef EV_OS_LINUX
#ifdef EV_OS_ANDROID
	#define DefaultSymbolFontFamily  "微软雅黑"
#else
	#define DefaultSymbolFontFamily  "文泉驿微米黑"
#endif
#endif
				enum EVSymbolType
				{
					ST_UNKNOWN               = 0,
					ST_MULTIMARKER			 = 1,
					ST_SIMPLEMARKER			 = 2,
					ST_ARROWMARKER			 = 3,
					ST_FONTMARKER			 = 4,
					ST_SVGMARKER			 = 5,
					ST_PICTUREMARKER		 = 6,

					ST_MULTILINE			 = 10,
					ST_SIMPLELINE			 = 11,
					ST_CARTOGRAPHICLINE		 = 12,

					ST_MULTIFILL			 = 20,
					ST_SIMPLEFILL			 = 21,
					ST_MARKERFILL			 = 22,
					ST_LINEFILL				 = 23,
					ST_GRADIENTFILL			 = 24,
					ST_PICTUREFILL			 = 25,

			
					ST_SIMPLETEXT			 = 30,
					ST_FORMATTEDTEXT		 = 31,

					ST_BARSTATISTICS		 = 40,
					ST_PIESTATISTICS		 = 41,
					ST_STACKEDSTATISTICS	 = 42,

					ST_PHOTO3D               = 100,
					ST_ICON3D                = 101,
					ST_BILLBOARD3D           = 102,
					ST_MODEL3D               = 103,

					ST_SIMPLELINE3D          = 110,
					ST_TEXTURELINE3D         = 111,

					ST_SIMPLEFILL3D          = 120,
					ST_TEXTUREFILL3D         = 121,
					ST_FRESNELSURFACE3D = 122,
					
					ST_3DBARSTATISTICS       = 140,
					ST_3DPIESTATISTICS		 = 141,
					ST_3DSTACKEDSTATISTICS	 = 142
				};
				/// <summary>
				/// 符号类基类  
				/// </summary>
				class EV_INTERFACE_DLL ISymbol :
					public EarthView::World::Core::CAllocatedObject
				{
					friend class CSymbolFactory;
				public:	
					/// <summary>
					/// 从XmlElement读取符号
					/// </summary>
					/// <param name="element">指定的EarthView::World::Core::CXmlElement</param>
					/// <returns></returns>
					virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);
					/// <summary>
					/// 将符号输出到EarthView::World::Core::CXmlElement
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回EarthView::World::Core::CXmlElement</returns>
					virtual EarthView::World::Core::CXmlElement toXmlElement() const;
					/// <summary>
					/// 默认析构函数      
					/// </summary>
					virtual ~ISymbol();
					/// <summary>
					/// 获取符号大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回符号大小</returns>
					virtual ev_real64 getSize() const;
					/// <summary>
					/// 获取符号颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回颜色</returns>
					virtual const EarthView::World::Spatial::Display::IColor* getColorRef() const;
					/// <summary>
					/// 将符号输出到流
					/// </summary>
					/// <param name="stream">目标流</param>
					/// <returns></returns>
					virtual ev_void toStream(_out EarthView::World::Core::CDataStream &stream) const;	
					/// <summary>
					/// 将符号输出到xml字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回xml字符串</returns>
					EVString toXML() const;
					/// <summary>
					/// 将符号输出到SLD字符串
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回SLD字符串</returns>
					virtual EVString toSLD() const;
					/// <summary>
					/// 复制符号
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回复制的符号</returns>
					virtual EarthView::World::Spatial::Display::ISymbol* clone() const;
					/// <summary>
					/// 获取符号颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回颜色</returns>
					virtual EarthView::World::Spatial::Display::IColor* getColor() const;
					/// <summary>
					/// 设置符号颜色
					/// </summary>
					/// <param name="color">颜色</param>
					/// <returns></returns>
					virtual ev_void setColor(const EarthView::World::Spatial::Display::IColor* color);
					/// <summary>
					/// 获取符号类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回类型</returns>
					virtual ev_int32 getSymbolType() const;
					/// <summary>
					/// 符号知否包含图像
					/// </summary>
					/// <param name=""></param>
					/// <returns>如果包含返回true；否则返回false</returns>
					virtual ev_bool hasImage() const;
					/// <summary>
					/// 获取包含图像数量
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回包含图像数量</returns>
					virtual ev_uint32 getImageCount() const;
					/// <summary>
					/// 获取指定索引处图像ID
					/// </summary>
					/// <param name="index">指定位置</param>
					/// <returns>返回图像ID</returns>
					virtual EVString getImageID(ev_uint32 index) const;
					/// <summary>
					/// 以内存流的形式获取指定索引处图像
					/// </summary>
					/// <param name="index">指定位置</param>
					/// <returns>返回图像流</returns>
					virtual EarthView::World::Core::MemoryDataStreamPtr getImage(_in ev_uint32 index) const;
					/// <summary>
					/// 设置指定索引的图像
					/// </summary>
					/// <param name="index">指定位置</param>
					/// <param name="imageID">输出，图像</param>
					/// <param name="stream">输入，流</param>
					/// <returns></returns>
					virtual ev_void setImage(ev_uint32 index,const EVString& imageID,EarthView::World::Core::MemoryDataStreamPtr stream);
					/// <summary>
					/// 是否等于指定的符号
					/// </summary>
					/// <param name="pSymbol">指定符号</param>
					/// <returns>如果相等返回true；否则返回false</returns>
					virtual ev_bool equal(const EarthView::World::Spatial::Display::ISymbol* pSymbol);
					/// <summary>
					/// 获取符号名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回符号名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 设置符号名称
					/// </summary>
					/// <param name="szName">符号名称</param>
					/// <returns></returns>
					virtual ev_void setName(const EVString& szName);
                ev_private:
					ISymbol( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ISymbol();
				ev_internal:
					/// <summary>
					/// 从SLD读取符号
					/// </summary>
					/// <param name="sld">SLD</param>
					/// <returns></returns>
					virtual ev_void fromSLD( EVString& sld );
					/// <summary>
					/// 从流读取符号
					/// </summary>
					/// <param name="stream">流</param>
					/// <returns></returns>
					virtual ev_void fromStream( EarthView::World::Core::CDataStream& stream );
				private:
					ISymbol(ISymbol & obj);
				};
				/// <summary>
				/// 符号工厂基类  
				/// </summary>
                class EV_INTERFACE_DLL ISymbolFactory : public EarthView::World::Core::CAllocatedObject
                {
                public:                 
                    
                    /// <summary>
                    /// 通过数据流恢复符号信息
                    /// </summary>
                    /// <param name="stream">数据流</param>
                    /// <returns>符号</returns>
                    virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromStream( EarthView::World::Core::CDataStream& stream );

                    /// <summary>
                    /// 是否为符号的xml文本头
                    /// </summary>
                    /// <param name="xmlNodeName">XML节点名字</param>
                    /// <returns></returns>
                    /// <memo>符号</memo>
                    virtual ev_bool isSymbolHeader(const EVString& xmlNodeName);

                    /// <summary>
                    /// 通过xmlElement恢复符号信息
                    /// </summary>
                    /// <param name="xmlText">xmlElement字符串</param>
                    /// <returns></returns>
                    /// <memo>符号</memo>
                    virtual  EarthView::World::Spatial::Display::ISymbol* createSymbolFromXmlElement(EarthView::World::Core::CXmlElement& element);

                    /// <summary>
                    /// 通过SLD恢复符号信息
                    /// </summary>
                    /// <param name="sldText">SLD字符串</param>
                    /// <returns></returns>
                    /// <memo>符号</memo>
                    virtual  EarthView::World::Spatial::Display::ISymbol* createSymbolFromSLD(const EVString& sldText);

                    /// <summary>
                    /// 销毁符号
                    /// </summary>
                    /// <param name="pSymbol">符号对象</param>
                    /// <returns></returns>
                    virtual  ev_void destroySymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol);

                    /// <summary>
                    /// 销毁所有符号
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns></returns>
                    virtual  ev_void destroySymbols();

                protected:
                    ISymbolFactory();
                ev_private:
                    ISymbolFactory(EarthView::World::Core::CNameValuePairList* pList);
                };
			}
		}
	}
}

#endif