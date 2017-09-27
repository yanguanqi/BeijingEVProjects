/**
* Copyright (C) 2004-2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
* 
* 文件名称: atlasmanager.h
* 摘    要：
*
* 版    本：1.0.0
* 创建日期：[2/11/2015]
* 作    者：许保瑞
*
* 修改历史：
* [修改序列]    [修改日期]       [修改者]   [修改内容]
*  1			2/11/2015		许保瑞     1.0.0版本的内容声明
**/

#ifndef _LASCONVERT_H_
#define _LASCONVERT_H_

#include "spatiallasproxy/lasconvertproxy_config.h"
#include "spatiallasproxy/laslodgenerator.h"
#include "core/memoryallocatedobject.h"
#include "mathengine/ev_math.h"
#include "spatialobject/coordinatesystem/spatialreference.h"

namespace EarthView{
	namespace World{
		namespace Graphic
		{
			class CMeshPtr;
			class CHardwareVertexBufferSharedPtr;
		}
		namespace SpatialLASConvertProxy
		{
			class CLASConverterListener;
			class LASQuadTree;
			/// <summary>				
			/// 管理点云对象类
			/// </summary>
			class EV_LASCONVERTPROXY_DLL CLASConverter : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLASConverter(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLASConverter();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLASConverter();
				/// <summary>
				/// 设置las点云文件路径
				/// </summary>
				/// <param name="lasPaths">点云文件路径</param>
				/// <returns></returns>
				void setLASPaths(const EarthView::World::Core::StringVector& lasPaths);
				/// <summary>
				/// 设置转换进度的监听
				/// </summary>
				/// <param name="listener">监听</param>
				/// <returns></returns>
				void setConvertListener(CLASConverterListener* listener);
				/// <summary>
				/// 静态函数：获取点云数据文件的源参考系
				/// </summary>
				/// <param name="lasPath">点云数据文件</param>
				/// <returns>点云文件的源参考系</returns>
				_extfree static EarthView::World::Spatial::Utility::CSpatialReference* getSpatialReference(const EVString& lasPath);
				/// <summary>
				/// 终止转换
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void stopConvert();
				/// <summary>
				/// 把点云数据转换并输出
				/// </summary>
				/// <param name="srcSr">源数据参考系</param>
				/// <param name="outPath">mesh输出路径</param>
				/// <param name="isMerge">多个点云数据转换时是否合并</param>
				/// <param name="name">合并时输出的mesh前缀名称(仅在isMerge为true时有效)</param>
				/// <param name="isLod">输出的mesh是否生成LOD</param>
				/// <param name="param">生成LOD时的参数(仅在isLod为true时有效)</param>
				/// <returns>是否成功</returns>
				ev_bool convertLas(EarthView::World::Spatial::Utility::CSpatialReference* srcSr,const EVString& outPath,ev_bool isMerge,const EVString& name,ev_bool isLod,CLasLODParam& param);

			protected:
				ev_bool convert(EarthView::World::Spatial::Utility::CSpatialReference* srcSr,const EarthView::World::Core::StringVector& lasPaths,
					const EVString& outPath,const EVString& name,ev_bool isLod,CLasLODParam& param,EVString& totalInfo,ev_int32 totalPercent,ev_int32 nextTotalPercent);
				ev_bool isNeedSplit(ev_uint32 level,ev_uint32 pointCount,Real minLat,Real minLon,Real maxLat,Real maxLon);
				void coordinateConvert(
					EarthView::World::Spatial::Utility::CSpatialReference* srcSr,
					EarthView::World::Spatial::Utility::CSpatialReference* destSr,
					ev_real64 in_x,ev_real64 in_y,ev_real64 in_z,
					ev_real64& latitude,ev_real64& longitude,ev_real64& radius);
				EarthView::World::Graphic::CMeshPtr createNewMesh(ev_uint32 pointCount,EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& vertexBuf);				
				void recursCreateMesh(LASQuadTree* parentTree,const EVString& outputPath,const EVString& name,EarthView::World::Core::CXmlElement& sceneXMLFileRoot,const EarthView::World::Spatial::Math::CVector3& nodePos,const EarthView::World::Spatial::Math::CVector3& geoNodePos,EarthView::World::Spatial::Math::CQuaternion& rotation);
				void recursCreateQuadeTree(LASQuadTree* parentTree,const EVString& filePath);
				EarthView::World::Spatial::Math::CAxisAlignedBox recursGenerateDataFiles(LASQuadTree* parentTree,const EVString& outputPath,const EVString& name,const EarthView::World::Spatial::Math::CVector3& nodePos,CLasLODParam& param,EarthView::World::Core::StringVector& dataFiles);
				void addSceneXmlNode(EarthView::World::Core::CXmlElement& xmlNode,const EVString& filePath,const EVString& fileName,const EarthView::World::Spatial::Math::CVector3& nodePos,const EarthView::World::Spatial::Math::CQuaternion& rotation,const EarthView::World::Spatial::Math::CVector3& scale);
				void createMaterial();

				EarthView::World::Core::StringVector mLasPaths;
				CLASConverterListener* mListener;
				ev_bool mbStopConvert;
				ev_vector<CLasLODGenerator*> mLasLODGenerators;

				EVString mGroupName;
				EVString mMaterialName;
				EarthView::World::Graphic::CMaterialPtr mpMaterial;
			};

			/// <summary>
			/// 点云数据转换进度监听类
			/// </summary>
			class EV_LASCONVERTPROXY_DLL CLASConverterListener : public CLasLODGenerateListener
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLASConverterListener(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLASConverterListener();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CLASConverterListener();
				/// <summary>
				/// 消息传出
				/// </summary>
				/// <param name=totalInfo"">总体消息内容</param>
				/// <param name=totalPercent"">总体进程</param>
				/// <param name=lasInfo"">单个消息内容</param>
				/// <param name=lasPercent"">单个进程</param>
				/// <returns></returns>
				virtual ev_void setInformation(const EVString& totalInfo,ev_int32 totalPercent,const EVString& lasInfo,ev_int32 lasPercent);
				/// <summary>
				/// 消息接收
				/// </summary>
				/// <param name=totalInfo"">总体消息内容</param>
				/// <param name=totalPercent"">总体进程</param>
				/// <param name=lasInfo"">单个消息内容</param>
				/// <param name=lasPercent"">单个进程</param>
				/// <returns></returns>
				virtual ev_void getInformation(_inout EVString& totalInfo,_inout ev_int32& totalPercent,_inout EVString& lasInfo,_inout ev_int32& lasPercent);
			};
		}
	}
}

#endif
