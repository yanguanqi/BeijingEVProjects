#ifndef EARTHVIEW_WORLD_SPATIALDATABASE_DATAMETAINFO_H
#define EARTHVIEW_WORLD_SPATIALDATABASE_DATAMETAINFO_H

#include "spatialdatabase/spatialdatabaseconfig.h"
#include "spatialinterface/idatametainfo.h"
#include "spatialinterface/altitudemode.h"

namespace EarthView{
    namespace World{
        namespace Spatial{
			namespace GeoDataset{
				/// <summary>
				/// 数据集元信息类
				///记录数据集的相关信息
				/// </summary>
            class EV_SPATIALDATABASE_DLL CDataMetaInfo : public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
			{
			private:
				EarthView::World::Spatial::GeoDataset::EVDatasetType mType;
				EVString mName;
				EarthView::World::Spatial::Geometry::IEnvelope* mpEnvelop;
				mutable EarthView::World::Spatial::Geometry::ISpatialReference* mSR;
				ev_uint32 mID;
				ev_int32 mSRID;
				ev_int32 mTypeID;
				ev_uint32 mVersion;
				EarthView::World::Spatial::Utility::EVAltitudeMode mAltitudeMode;
				ev_real64 mAltitudeValue;
ev_private:
				/// <summary>
				/// 用于封装的构造函数
				/// </summary>
				/// <param name="pList">参数健值对</param>
				/// <returns></returns>
				CDataMetaInfo(_in EarthView::World::Core::CNameValuePairList *pList);
            public:	
				///<summary>
				///构造函数
				///</summary>
				///<param name=""></param>
				///<returns></returns>
				CDataMetaInfo();
				///<summary>
				///析构函数
				///</summary>
				///<param name=""></param>
				///<returns></returns>
                virtual ~CDataMetaInfo();
            public:
				///<summary>
				///获取数据集类型
				///</summary>
				///<param name=""></param>
				///<returns>数据集类型</returns>
                virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				///<summary>
				///设置数据集类型
				///</summary>
				///<param name="type">数据集类型</param>
				///<returns></returns>
				virtual ev_void setDatasetType(EarthView::World::Spatial::GeoDataset::EVDatasetType type) ;
				/// <summary>
				/// 获取数据集的名称
				/// </summary>
				/// <returns>数据集的名称</returns>
                virtual EVString getName() const;
				///<summary>
				///设置数据集名
				///</summary>
				///<param name="name">数据集名</param>
				///<returns></returns>
				virtual ev_void setName(const EVString& name) ;
				/// <summary>
				/// 获取数据集的范围
				/// </summary>
				/// <returns>内部对象引用，无需释放</returns>
                virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
				/// <summary>
				/// 设置数据集的范围
				/// </summary>
				/// <param name="pEnv">范围对象</param>
				/// <returns></returns>
				virtual ev_void setEnvelope(EarthView::World::Spatial::Geometry::IEnvelope* pEnv) ;
				/// <summary>
				/// 获取数据集的坐标系统
				/// </summary>
				/// <returns>坐标系统对象</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				/// <summary>
				/// 获取数据集的坐标系统
				/// </summary>
				/// <returns>坐标系统对象</returns>
				virtual ev_void setSpatialReference(EarthView::World::Spatial::Geometry::ISpatialReference* sr);
				/// <summary>
				/// 设置空间参考的id
				/// </summary>
				///<param name="srid">空间参考的id<param>
				/// <returns></returns>
				virtual ev_void setSRID(ev_int32 srid);
				/// <summary>
				/// 获取空间参考的id
				/// </summary>
				/// <returns>空间参考的id</returns>
				virtual ev_int32 getSRID();
				/// <summary>
				/// 设置数据集类型
				/// </summary>
				/// <returns>数据集类型的id号</returns>
				virtual ev_void setTypeID(ev_int32 id);
				/// <summary>
				/// 获取数据集类型
				/// </summary>
				/// <returns>数据集类型的id号</returns>
				virtual ev_int32 getTypeID();
				/// <summary>
				/// 设置版本号
				/// </summary>
				///<param name="version">版本号</param>
				/// <returns></returns>
				virtual ev_void setVersion(ev_uint32 version);
				/// <summary>
				/// 获取版本号
				/// </summary>
				/// <returns>版本号</returns>
				virtual ev_uint32 getVersion();
				/// <summary>
				/// 获取数据集id
				/// </summary>
				/// <returns>数据集的id</returns>
				virtual ev_uint32 getID();
				/// <summary>
				/// 设置数据集的id
				/// </summary>
				/// <param name="id">id</param>
				/// <returns></returns>
				virtual void setID(ev_uint32 id);
				/// <summary>
				/// 获取高度模式
				/// </summary>
				/// <param name=""></param>
				/// <returns>高度模式</returns>
				virtual EarthView::World::Spatial::Utility::EVAltitudeMode getAltitudeMode();
			   /// <summary>
			   /// 设置高度模式
			   /// </summary>
			   /// <param name="mode">高度模式</param>
			   /// <returns></returns>
				virtual void setAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode mode);
				/// <summary>
				/// 获取高度值
				/// </summary>
				/// <param name=""></param>
				/// <returns>高度值</returns>
				virtual ev_real64 getAltitudeValue();
				/// <summary>
				/// 设置高度值
				/// </summary>
				/// <param name="value">高度值</param>
				/// <returns></returns>
				virtual void setAltitudeValue(ev_real64 value);

            };			
        }//end namespace
    }
	}
}
#endif
