#ifndef WATERCONSERVANCYDATAENGINE_H_
#define WATERCONSERVANCYDATAENGINE_H_

#include "xld\xldmanager_cfg.h"
#include "core\memoryallocatedobject.h"
#include "geometry3d\vertex.h"

namespace EarthView
{
	namespace Xld
	{
		class CWaterConservancyDataEngine //: public EarthView::World::Core::CBaseObject
		{
		ev_private:

		/*	/// <summary>
			/// 默认构造函数
			/// </summary>
			/// <param name="pList">键值对</param>
			WaterConservancyDataEngine(EarthView::World::Core::CNameValuePairList* pList);*/

		public:
			/// <summary>
			/// 将水下地形模板写入本底缓存
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static void WrtiteTerrainModelStencil(vector<EarthView::World::Spatial::Math::CVector2*>* bounds);
			/// <summary>
			/// 生产水下地形模板
			/// </summary>
			/// <param name="fileName">文件名</param>
			/// <param name="materialName">纹理名称</param>
			/// <param name="vertexVector">顶点缓存</param>
			/// <param name="indexVector">索引缓存</param>
			static void GenerateTerrainModelStencil();
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
		};
	}
}

#endif
