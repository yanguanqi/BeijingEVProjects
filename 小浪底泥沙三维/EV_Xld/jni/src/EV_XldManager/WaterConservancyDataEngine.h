#ifndef WATERCONSERVANCYDATAENGINE_H_
#define WATERCONSERVANCYDATAENGINE_H_

#include "xld\xldmanager_cfg.h"
#include "core\memoryallocatedobject.h"
#include "geometry3d\vertex.h"
#include "mathengine\vector3.h"
#include "spatialobject\coordinatesystem\spatialreference.h"
#include "spatialobject\geometry\curvering.h"
#include "globecontrol\globecontrol.h"
#include "GISDataType.h"

namespace EarthView
{
	namespace Xld
	{
		class CWaterConservancyDataEngine //: public EarthView::World::Core::CBaseObject
		{
			friend class CWaterConservancyManager;
		ev_private:

		/*	/// <summary>
			/// 默认构造函数
			/// </summary>
			/// <param name="pList">键值对</param>
			WaterConservancyDataEngine(EarthView::World::Core::CNameValuePairList* pList);*/

		public:
			/// <summary>
			/// 依据矢量线创建水面边界的点链表
			/// </summary>
			/// <param name="globecontrol">EV 5.0控件</param>
			/// <param name="layerName">图层名称</param>
			/// <returns>有序的点列表</returns>
			static EarthView::World::Spatial::Math::VertexList* CreateWaterSurfaceBounds(EVString layerName);
			/// <summary>
			/// 依据矢量范围创建水面最小外接矩形范围
			/// </summary>
			/// <param name="globecontrol">EV 5.0控件</param>
			/// <returns>最小外接矩形</returns>
			static EarthView::World::Spatial::Geometry::CEnvelope* GetWaterSurfaceEnvelope();
			/// <summary>
			/// 将水下地形模板写入本底缓存
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static EarthView::World::Spatial::Geometry::ISpatialReference* mpGlobalSR;
			/// <summary>
			/// 将水下地形模板写入本底缓存
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static void ReadTerrainModelStencil(EarthView::World::Spatial::Math::VertexList* verLst);
			/// <summary>
			/// 生产水下地形模板
			/// </summary>
			/// <param name="globecontrol">EV 5.0 控件</param>
			static void GenerateTerrainModelStencil();

			static EarthView::World::Spatial::Geometry::CPolygon* GetRiverRange();


			static void CreateStardardTerrain(_in EarthView::GISDataType::CGrdData * pData, _out EarthView::World::Geometry3D::CVertexVector* vertexVector, _out EarthView::World::Geometry3D::CIndexVector* indexVector);
			/// <summary>
			/// 将水下地形模型以二进制的形式写入缓存文件
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static void WriteTerrainCache(const EVString& fileName,const EVString& materialName,_in EarthView::World::Geometry3D::CVertexVector* vertexVector,_in EarthView::World::Geometry3D::CIndexVector* indexVector);

			/// <summary>
			/// 读取水下地形缓存文件的内容
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static void ReadTerrainCache(const EVString& fileName, _out EVString materialName, _out EarthView::World::Geometry3D::CVertexVector* vertexVector,_out EarthView::World::Geometry3D::CIndexVector* indexVector);
		
			struct CFloodPoint
			{
				bool IsFlooded;
				double Longi;
				double Lati;
				double Alit;
				int X;
				int Y;
				int Index;
			};
		};

		
	}
}

#endif
