#ifndef EV_SPATIAL3DLAYER_BILBUILDER_H
#define EV_SPATIAL3DLAYER_BILBUILDER_H

#include "spatial3dlayer/3dlayerconfig.h"
#include "core/memoryallocatedobject.h"
#include "spatialinterface/irasterdataset.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class CDemCutRule;

			class EV_3DLAYER_DLL CBilBuilder:public EarthView::World::Core::CAllocatedObject
			{
			public:
				CBilBuilder();
				virtual ~CBilBuilder();
ev_private:
				CBilBuilder(EarthView::World::Core::CNameValuePairList* pList);
			private:
				CBilBuilder& operator= (const CBilBuilder&);
				CBilBuilder(const CBilBuilder&);
			public:
				/// <summary>
				/// 设置切割dem的源RasterDataset，数据集波段数必须为1
				/// </summary>
				/// <param name="pRasterDataset">源数据集</param>
				/// <return></return>
				ev_void setRasterDataset(EarthView::World::Spatial::GeoDataset::IRasterDataset* ref_pRasterDataset);
				/// <summary>
				/// 获取源栅格数据集在指定级别所覆盖的行列号范围
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="minRow">最小行号</param>
				/// <param name="maxRow">最大行号</param>
				/// <param name="minCol">最小列号</param>
				/// <param name="maxCol">最大列号</param>
				/// <return></return>
				ev_void getRowColRange(ev_int32 level, ev_int32& minRow, ev_int32& maxRow,
					ev_int32& minCol, ev_int32& maxCol);
				/// <summary>
				/// 获取指定级别行列号的dem瓦片的数据
				/// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="pBuffer">数据缓冲区（大小为瓦片宽度×高度×像素占字节数）</param>
				/// <return></return>
				ev_void getTile(ev_int32 level, ev_int32 row, ev_int32 col, 
					ev_byte* pBuffer);
				/// <summary>
				/// 获取dem瓦片宽度
				/// </summary>
				/// <param name=""></param>
				/// <return>瓦片宽度</return>
				ev_int32 getTileWidth();
				/// <summary>
				/// 获取dem瓦片高度
				/// </summary>
				/// <param name=""></param>
				/// <return>瓦片高度</return>
				ev_int32 getTileHeight();
				/// <summary>
				/// 获取瓦片数据长度(瓦片数据类型与源数据集类型一致，
				/// 因此设置新的源数据集后瓦片数据长度可能改变)
				/// </summary>
				/// <param name=""></param>
				/// <return>瓦片数据长度</return>
				ev_int32 getTileDataLength();
				/// <summary>
				/// 获取dem瓦片的坐标系，用WKT字符串描述
				/// </summary>
				/// <param name=""></param>
				/// <return>坐标系字符串</return>
				const EVString& getSpatialRef();
				/// <summary>
				/// 获取最低级别号（分辨率最低）
				/// </summary>
				/// <param name=""></param>
				/// <return>级别号</return>
				ev_int32 getLowestLevel();
				/// <summary>
				/// 获取最高级别号（分辨率最高）
				/// </summary>
				/// <param name=""></param>
				/// <return>级别号</return>
				ev_int32 getHighestLevel();
				/// <summary>
				/// 获取指定级别的瓦片的地理宽度
				/// </summary>
				/// <param name="level">级别</param>
				/// <return>地理宽度</return>
				ev_real64 getLevelSpan(ev_int32 level);
				/// <summary>
				/// 获取指定坐标（必须是dem瓦片的坐标系下的坐标）在某一级别所属的瓦片的行列号
				/// </summary>
				/// <param name="level">指定级别号</param>
				/// <param name="X">X坐标</param>
				/// <param name="Y">Y坐标</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <return></return>
				ev_void getRowColByCoord(ev_int32 level, ev_real64 X, ev_real64 Y, ev_int32& row, 
					                     ev_int32& col);
				/// <summary>
				/// 获取指定级别行列号的瓦片的地理范围
				/// </summary>
				/// <param name="level">级别号</param>
				/// <param name="row">行号</param>
				/// <param name="col">列号</param>
				/// <param name="minX">最小X</param>
				/// <param name="maxX">最大X</param>
				/// <param name="minY">最小Y</param>
				/// <param name="maxY">最大Y</param>
				/// <return></return>
				ev_void getTileCoordRange(ev_int32 level, ev_int32 row, ev_int32 col, ev_real64 & minX, 
					                      ev_real64 & maxX, ev_real64 & minY, ev_real64 & maxY);
			private:
				EarthView::World::Spatial::GeoDataset::IRasterDataset* m_pRasterDataset;
				EarthView::World::Spatial3D::CDemCutRule* m_pDemCutRule;
			private:
				EarthView::World::Spatial3D::CDemCutRule* createDefaultCutRule();
			};
		}
	}
}

#endif
