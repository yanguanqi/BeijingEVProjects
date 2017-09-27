#ifndef EARTHVIEW_WORLD_SPATIAL_CWFSLAYERINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CWFSLAYERINFO_H
#include "spatialserverclient/serverlayerinfo.h"
#include "spatialserverclient/wfsserverinfo.h"

// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// OGC WMS 数据集元数据类
			///注意：IDataMetaInfo获取的DataMetaInfo可能为目录层或数据层;				
			///		通过isCategoryLayer()函数判断该对象是否目录层，目录层对象的		
			///		getName()返回的值为空，不能被openDataset()打开,即返回NULL;			
			///		目录图层应包含数据层，数据层可打开为数据集。						
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWFSLayerInfo
				:public EarthView::World::Spatial::CServerLayerInfo
			{
				friend class CWFSServerInfo;
				friend class CWFSServer;
			public:
				/*--------------------------继承自IDataMetaInfo---------------------*/
				/// <summary>
                /// 获取范围
                /// </summary>
                /// <returns>经纬度范围(wgs84或相似坐标系)</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;

				/// <summary>
                /// 参考坐标系
                /// </summary>
                /// <returns>NULL（所支持的坐标系不定）</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
				/// <summary>
				/// 获取投影GML
				/// </summary>
				/// <returns>GML投影</returns>
				virtual const EVString getSRS() const;
				/// <summary>
				/// 获取投影名称
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns>指定投影名称</returns>
				virtual const EVString getOutputFormmat() const;
				/// <summary>
                /// 获取元数据地址数目
                /// </summary>
                /// <returns>元数据地址数目</returns>
				ev_uint32 getMetaDataURLCount();

				/// <summary>
                /// 获取指定元数据地址
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定元数据地址</returns>
				const EarthView::World::Spatial::COGCMetaDataURLInfo* getMetaDataURL(_in ev_uint32 index) const;
				
				/// <summary>
                /// 获取要素列表地址数目
                /// </summary>
                /// <returns>要素列表地址数目</returns>
				ev_uint32 getFeatureListURLCount();

				/// <summary>
                /// 获取指定要素列表地址
                /// </summary>
				/// <param name="index">索引</param>
                /// <returns>指定要素列表地址</returns>
				const EarthView::World::Spatial::COGCMetaDataURLInfo* getFeatureListURL(_in ev_uint32 index) const;
				/// <summary>
                /// 获取84坐标系的数据范围
                /// </summary>
                /// <returns>维度信息数目</returns>
				const EarthView::World::Spatial::Geometry::IEnvelope* getLatLongBoundingBoxRef() const;
				
				/// <summary>
                /// 获取数据地址
                /// </summary>
                /// <returns>数据地址</returns>
				const EarthView::World::Spatial::COGCMetaDataURLInfo* getDataURLRef() const;
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CWFSLayerInfo();
			protected:
				///默认构造函数
				CWFSLayerInfo();
				///拷贝构造函数
				CWFSLayerInfo(_in const CWFSLayerInfo& wmslayerinfo);

				ev_bool getSRS(ev_uint32& index,EVString& srs);
			ev_private:
				/// <summary>
                /// 转换字符编码到指定格式
                /// </summary>
				/// <param name="convertor">编码转换工具对象</param>
                /// <returns>指定的服务描述，不需释放</returns>
				virtual void convertInfoStringFormat(CStringFormatConvertor* convertor);
			ev_private:
				CWFSLayerInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				/////////?????改成ServerInfo的引用？
				///父结点指针
				EarthView::World::Spatial::CWFSServerInfo* mpParentServer;
				///srs
				EVString msSrs;
				///formmat
				EVString msOutputFormat;
				//////////map server
				EarthView::World::Spatial::COGCMetaDataURLInfo* mpDataURL;
				vector<EarthView::World::Spatial::COGCMetaDataURLInfo*> mlistMetaDataURL;
				vector<EarthView::World::Spatial::COGCMetaDataURLInfo*> mlistFeatureListURL;

			};
		}
	}
}
#endif


