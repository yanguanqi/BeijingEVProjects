/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称：workcommanddata.h
* 摘    要：工作命令数据
*
* 当前版本：1.0
* 作    者：李翔
* 完成日期：2012年12月04日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者]	[修改内容]
*    1		  2012-12-04	  李翔      1.0.0版本的内容声明
* 
**/

#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_WORKCOMMANDDATA_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_WORKCOMMANDDATA_H

#include "mapcontrol/mapcontrolconfig.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ifeature.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class CViewportChangeEntry : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CViewportChangeEntry();
					~CViewportChangeEntry();

				public:
					ev_real64 mdCenterX_orig, mdCenterY_orig;
					ev_real64 mdCenterX_targ, mdCenterY_targ;
					ev_real64 mdRotaion_orig, mdRotaion_targ;
					ev_real64 mdScale_orig, mdScale_targ;

				protected:
					C_DISABLE_COPY( CViewportChangeEntry )
				};
				//编辑操作枚举
				enum EVEditingOperationType
				{
					EOT_Unknown				,
					EOT_AddPoint			,
					EOT_MoveVertex			,
					EOT_MoveGeometryPart	,
					EOT_MoveGeometry		,
					EOT_InsertVertex		,
					EOT_DeleteVertex		,
					EOT_DeletePart			,
					EOT_ChangeGeometry		,
					EOT_ChangeAttribute		,
					EOT_AddFeature			,
					EOT_DeleteFeature		,
					EOT_MultiOperation
				};

				//编辑操作的基类
				class CEditingOperation : public EarthView::World::Core::CAllocatedObject
				{
				public:
					virtual ~CEditingOperation(){}
ev_private:
					CEditingOperation( EarthView::World::Core::CNameValuePairList* list ){}

				public:
					virtual EVEditingOperationType getOperationType() const{ return EOT_Unknown; }

				protected:
					CEditingOperation(){}
				};
				//编辑临时geometry的基类
				class CEditGeometry : public CEditingOperation
				{
				public:
					~CEditGeometry();
					ev_int32 getPartId() const { return mnPartId; }

					ev_void setOriginalGeometry( _in const EarthView::World::Spatial::Geometry::IGeometry* orig );
					ev_void setTargetGeometry( _in const EarthView::World::Spatial::Geometry::IGeometry* target );

					EarthView::World::Spatial::Geometry::IGeometry* mpOriginal, *mpTarget;

				protected:
					CEditGeometry( _in ev_int32 partId );
					ev_int32 mnPartId;
				};
				//添加点
				class CAddPoint : public CEditGeometry
				{
				public:
					CAddPoint( _in ev_int32 partId ): CEditGeometry( partId ){}
					EVEditingOperationType getOperationType() const { return EOT_AddPoint; }
				};
				//移动顶点
				class CMoveVertex : public CEditGeometry
				{
				public:
					CMoveVertex( _in ev_int32 partId ): CEditGeometry( partId ){}
					EVEditingOperationType getOperationType() const { return EOT_MoveVertex; }
				};
				//移动几何的部分
				class CMoveGeometryPart : public CEditGeometry
				{
				public:
					CMoveGeometryPart( ev_int32 partId ) : CEditGeometry( partId ){}
					EVEditingOperationType getOperationType() const { return EOT_MoveGeometryPart; }
				};
				//移动geometry
				class CMoveGeometry : public CEditingOperation
				{
				public:
					CMoveGeometry( _in ev_real64 xLen, _in ev_real64 yLen ): mdLenX( xLen ), mdLenY( yLen ){}

				public:
					EVEditingOperationType getOperationType() const { return EOT_MoveGeometry; }
					ev_real64 getOffsetX() const
					{
						return mdLenX;
					}
					ev_real64 getOffsetY() const
					{
						return mdLenY;
					}
				protected:
					ev_real64 mdLenX, mdLenY;
				};
				//插入顶点
				class CInsertVertex : public CEditGeometry
				{
				public:
					CInsertVertex( _in ev_int32 partId )
						: CEditGeometry( partId )
					{}
					~CInsertVertex(){}

				public:
					EVEditingOperationType getOperationType() const { return EOT_InsertVertex; }
				};
				//删除顶点
				class CDeleteVertex : public CEditGeometry
				{
				public:
					CDeleteVertex( _in ev_int32 partId )
						: CEditGeometry( partId )
					{}
					~CDeleteVertex(){}

				public:
					EVEditingOperationType getOperationType() const { return EOT_DeleteVertex; }
				};
				//删除部分
				class CDeletePart : public CEditGeometry
				{
				public:
					CDeletePart( _in ev_int32 partId ) : CEditGeometry( partId ){}
					~CDeletePart(){}
				public:
					EVEditingOperationType getOperationType() const { return EOT_DeletePart; }
				};

				//修改至少一个geometry
				class CChangeGeometry : public CEditingOperation
				{
				public:
					class CGeometryEntry : public EarthView::World::Core::CAllocatedObject
					{
					public:
						CGeometryEntry()
							: mpOriginal( NULL ), mpTarget( NULL )
						{}
						~CGeometryEntry();

						ev_void setOriginalGeometry( _in const EarthView::World::Spatial::Geometry::IGeometry* orig );
						ev_void setTargetGeometry( _in const EarthView::World::Spatial::Geometry::IGeometry* target );

						EarthView::World::Spatial::Geometry::IGeometry* mpOriginal, *mpTarget;
					};

				public: 
					CChangeGeometry(){}
					~CChangeGeometry();
				
					EVEditingOperationType getOperationType() const { return EOT_ChangeGeometry; }
					ev_void storeGeometryChanged( _in ev_uint32 id, _in const EarthView::World::Spatial::Geometry::IGeometry *original,
						_in const EarthView::World::Spatial::Geometry::IGeometry *target );

					ev_map<ev_uint32,CGeometryEntry*> mGeometryList;
				};
				//修改至少一个属性
				class CChangeAttribute : public CEditingOperation
				{
				public:
					class CAttributeEntry : public EarthView::World::Core::CAllocatedObject
					{
					public:
						CAttributeEntry(){}
						~CAttributeEntry() {}
						EarthView::World::Core::CVariant mOriginal, mTarget;
					};
				public:
					CChangeAttribute() {}
					~CChangeAttribute();

					EVEditingOperationType getOperationType() const { return EOT_ChangeAttribute; }
					ev_void storeAttributeChanged( _in ev_uint32 id, _in EarthView::World::Core::CVariant original, _in EarthView::World::Core::CVariant target );

					ev_map<ev_uint32,CAttributeEntry*> mAttributeList;
				};
				//至少添加一个要素
				class CAddFeature : public CEditingOperation
				{
				public:
					CAddFeature()
					{}
					~CAddFeature() {}

					EVEditingOperationType getOperationType() const { return EOT_AddFeature; }
					ev_void storeFeatureAdd( _in EarthView::World::Spatial::GeoDataset::IFeature *feature )
					{
						mFeatureList.push_back( feature );
					}

					ev_list<EarthView::World::Spatial::GeoDataset::IFeature*> mFeatureList;
				};
				//至少删除一个要素
				class CDeleteFeature : public CEditingOperation
				{
				public:
					CDeleteFeature() {}
					~CDeleteFeature() {}

					EVEditingOperationType getOperationType() const { return EOT_DeleteFeature; }
					ev_void storeFeatureDelete( _in ev_uint32 id )
					{
						mIdList.insert( id );
					}

					ev_set<ev_uint32> mIdList;
				};
				//多个操作的集合
				class CMultiOperation : public CEditingOperation
				{
				public:
					CMultiOperation() {}
					~CMultiOperation() {}

					EVEditingOperationType getOperationType() const { return EOT_MultiOperation; }
					ev_void addOperation( _in CEditingOperation* operation )
					{
						mOperationList.push_back( operation );
					}
					ev_uint32 getCount() const
					{
						return mOperationList.size();
					}
					CEditingOperation* getOperation( _in ev_uint32 index ) const
					{
						return mOperationList[index];
					}
				private:
					ev_vector<CEditingOperation*> mOperationList;
				};
				//用于保存feature
				class CFeatureHouse : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CFeatureHouse();
					~CFeatureHouse();

				public:
					ev_void addFeature( EarthView::World::Spatial::GeoDataset::IFeature* feature );
					ev_void deleteFeature( ev_uint32 id );
					ev_void clear();
					EarthView::World::Spatial::GeoDataset::IFeature* getFeature( ev_uint32 id ) const;
				protected:
					ev_map<ev_uint32, EarthView::World::Spatial::GeoDataset::IFeature*> mMapFeatures;
				};
			}
		}
	}
}
#endif
