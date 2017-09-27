#ifndef _VECTOR_SPATIALINDEXPARAM_H_H_
#define _VECTOR_SPATIALINDEXPARAM_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/ifeatureclass2.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

				/// <summary>
				/// 默认空间索引参数类
				/// </summary>
				class EV_2DGEODATABSE_DLL CRTreeSpatialIndexParam
									:public EarthView::World::Spatial::GeoDataset::ISpatialIndexParam
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CRTreeSpatialIndexParam();
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CRTreeSpatialIndexParam();
					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;
					ev_internal:
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
ev_private:
					CRTreeSpatialIndexParam(EarthView::World::Core::CNameValuePairList *pList);
				};

				class EV_2DGEODATABSE_DLL CSpatialGridIndexParam
									: public EarthView::World::Spatial::GeoDataset::ISpatialIndexParam
				{
				public:
					CSpatialGridIndexParam();
					CSpatialGridIndexParam(const ev_real64 gridOneSize,
															const ev_real64 gridTwoSize,
															const ev_real64 gridThreeSize);
					~CSpatialGridIndexParam() {}
					void setGridOneSize(const ev_real64 gridSize);
					void setGridTwoSize(const ev_real64 gridSize);
					void setGridThreeSize(const ev_real64 gridSize);
					void getGridSize(ev_real64& gridOneSize, ev_real64& gridTwoSize, ev_real64& gridThreeSize) const;
					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					ev_void toStream( _out EarthView::World::Core::CDataStream & stream ) const;
					ev_internal:
					ev_void fromStream( EarthView::World::Core::CDataStream& stream );
					ev_private:
					CSpatialGridIndexParam(EarthView::World::Core::CNameValuePairList *pList);
				private:
					ev_real64 m_gridOneSize;
					ev_real64 m_gridTwoSize;
					ev_real64 m_gridThreeSize;
				};
				class EV_2DGEODATABSE_DLL CSpatialIndexParamFactory
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CSpatialIndexParamFactory();
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CSpatialIndexParamFactory();
					/// <summary>
					/// 将参数输出到流
					/// </summary>
					/// <param name="stream">输出参数，流</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* createSpatialIndexParam( EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum type );
					/// <summary>
					/// 从流创建空间索引参数对象
					/// </summary>
					/// <param name="stream">输入参数，流</param>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* createSpatialIndexParam( EarthView::World::Core::CDataStream& stream );
ev_private:
					CSpatialIndexParamFactory(EarthView::World::Core::CNameValuePairList *pList);
				};
			} //GeoDataset
		} //Spatial
	} //World
} //EarthView

#endif //_VECTOR_SPATIALINDEXPARAM_H_H_

