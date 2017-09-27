#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEDBPATHRULE_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEDBPATHRULE_H
#include "tileutility/tilepathrule.h"
#include "core/stdheaders.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 瓦片分块信息类
            /// </summary>
			class CTileBlockInfo;

			/// <summary>
            /// 数据库格式瓦片的路径规则类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileDBPathRule
				:public EarthView::World::Spatial::CTilePathRule
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CTileDBPathRule();
				
				/// <summary>
                /// 获取指定参数的路径
                /// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="format">数据格式，如“db”</param>
                /// <returns>相应路径</returns>
				virtual const EVString getPath(_in ev_int32 level,_in ev_uint32 row,_in ev_uint32 col,_in const EVString& format)const;
				
				/// <summary>
                /// 获取路径类型
                /// </summary>
                /// <returns>路径类型：库文件</returns>
				virtual EarthView::World::Spatial::EVTilePathType getType()const;
				
				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象的指针</returns>
				virtual _extfree EarthView::World::Spatial::CTilePathRule* clone();
				//ev_void setFirstFoldername(_in const EVString& name);
				//ev_void setSecondFolderName(_in const EVString& name);
				//const EVString getFirstFolderName()const;
				//const EVString getSecondFolderName()const;
				//ev_void setBlockInfo(_in const CTileBlockInfo* info);
				//ev_uint32 getBlockInfoNum()const;
				//const CTileBlockInfo* getBlockInfoRef(_in ev_uint32 index)const;
				//ev_void clearBlockInfo();
			ev_private:
				CTileDBPathRule(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="dataType">数据类型，影像、矢量、DEM</param>
				/// <param name="tileModeType">模式，WGS84、Mercator还是古唐</param>
                /// <returns></returns>
				CTileDBPathRule(_in EVTileDataType dataType,_in EVTileModeType tileModeType);

				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="rule">拷贝对象</param>
                /// <returns></returns>
				CTileDBPathRule(_in const CTileDBPathRule& rule);

				EVString mstrFirstFolderName;
				EVString mstrSecondFolderName;
				ev_int32 mnValid;
				ev_vector<CTileBlockInfo*> mlistBlockInfo;
				ev_uint32 mnBlockInfoNum;
				friend class CTilePathRuleFactory;
			};
		}
	}
}
#endif
