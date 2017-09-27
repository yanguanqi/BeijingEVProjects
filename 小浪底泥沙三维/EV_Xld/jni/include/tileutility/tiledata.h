#ifndef EARTHVIEW_WORLD_SPATIAL_TILEDATA_H
#define EARTHVIEW_WORLD_SPATIAL_TILEDATA_H
#include "tileutility/tileutilityexports.h"

#include <core/datastream.h>
#include "tileutility/tileinfo.h"
#include "tileutility/tileattachment.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 瓦片数据类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileData : public EarthView::World::Core::CAllocatedObject
			{
            ev_private:
				CTileData(_in EarthView::World::Core::CNameValuePairList* pList);
			public: 
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileData();

				/// <summary>
                /// 析构函数
                /// </summary>
				/// <returns></returns>
				~CTileData();

				/// <summary>
                /// 获取瓦片分块信息对象
                /// </summary>
                /// <returns>分块信息对象的指针，不需释放</returns>
				const EarthView::World::Spatial::CTileInfo* getTileInfo();

				/// <summary>
                /// 设置瓦片分块信息
                /// </summary>
				/// <param name="tileinfo">瓦片分块信息</param>
                /// <returns></returns>
				ev_void setTileInfo(_in const EarthView::World::Spatial::CTileInfo* ref_tileinfo);

				/// <summary>
                /// 设置瓦片信息
                /// </summary>
				/// <param name="strFileName">文件名称</param>
				/// <param name="stream">瓦片数据流的智能指针</param>
                /// <returns></returns>
				ev_void setData(_in const EVString& strFileName,_in EarthView::World::Core::DataStreamPtr stream);

				/// <summary>
                /// 设置瓦片数据流
                /// </summary>
				/// <param name="stream">瓦片数据的智能指针</param>
                /// <returns></returns>
				ev_void setData(_in EarthView::World::Core::DataStreamPtr stream);

				/// <summary>
                /// 获取瓦片数据流
                /// </summary>
                /// <returns>瓦片数据流的智能指针</returns>
				EarthView::World::Core::DataStreamPtr getData(); 

				/// <summary>
				/// 获取绘制瓦片时使用的专题图风格(针对矢量)
				/// </summary>
				/// <returns>序列化之后的专题图风格</returns>
				EarthView::World::Core::DataStreamPtr getThemeStream();

				/// <summary>
				/// 设置绘制瓦片时使用的专题图风格(针对矢量)
				/// </summary>
				/// <returns>序列化之后的专题图风格</returns>
				ev_void setThemeStream(_in EarthView::World::Core::DataStreamPtr theme);

				/// <summary>
                /// 设置瓦片文件名
                /// </summary>
				/// <param name="strFileName">瓦片标识</param>
                /// <returns></returns>
				ev_void setFileName(_in const EVString& strFileName);

				/// <summary>
                /// 获取瓦片文件名
                /// </summary>
                /// <returns>瓦片标识</returns>
				const EVString& getFileName(); 

				/// <summary>
				/// 设置瓦片数据所在的图层名
				/// </summary>
				/// <param name="strLayerName">图层名</param>
				/// <returns></returns>
				ev_void setLayerName(_in const EVString& strLayerName);

				/// <summary>
				/// 获取瓦片数据所在的图层名
				/// </summary>
				/// <returns>图层名</returns>
				const EVString& getLayerName(); 				

				/// <summary>
                /// 设置数据流类型
                /// </summary>
				/// <param name="strType">数据流类型</param>
                /// <returns></returns>
				ev_void setStreamType(_in const EVString& strType);

				/// <summary>
                /// 获取数据流类型
                /// </summary>
                /// <returns>数据流类型</returns>
				const EVString& getStreamType(); 

				/// <summary>
                /// 设置瓦片是否有缺陷(黑边或者残缺)
                /// </summary>
				/// <param name="defective"></param>
                /// <returns></returns>
                ev_void setDefective(ev_bool defective){ mDefective = defective; }

				/// <summary>
                /// 获取瓦片是否有缺陷(黑边或者残缺)
                /// </summary>
                /// <returns></returns>
                ev_bool getDefective(){return mDefective;}

				/// <summary> 添加瓦片附属物 </summary>
				ev_void addTileAttachment(const ITileAttachmentPtr& tileAttachment/*, const ev_void* parentLayer*/);

				/// <summary> 获取瓦片附属物数量 </summary>
				ev_size_t getTileAttachmentCount() const;

				/// <summary> 获取瓦片附属物 </summary>
				const ITileAttachmentPtr& getTileAttachment(ev_size_t index) const;

				ev_void mergeTileAttachmentList(const CTileData& other);
				//const ev_void* getTileAttachmentParentLayer() const {return mTileAttachmentParentLayer;}
			protected:
				const EarthView::World::Spatial::CTileInfo* mTileInfo;
				EarthView::World::Core::DataStreamPtr mDataStream;
				EarthView::World::Core::DataStreamPtr mThemeStream;

				EVString mLayerName;
				EVString mFileName;
				EVString mStreamType;
				vector<ITileAttachmentPtr> mTileAttachments;
				//const  ev_void* mTileAttachmentParentLayer;
                ev_bool mDefective;
			};
		}
	}
}

#endif
