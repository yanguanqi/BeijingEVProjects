#ifndef _MESHOPTIMIZE_H
#define _MESHOPTIMIZE_H

#include "core/memoryallocatedobject.h"
#include "core/name_value_pair.h"
#include "meshoptimize/meshoptimizeconfig.h"
#include "mathengine/vector3.h"
#include "core/xml.h"

class MxQSlim;
class MxStdModel;
namespace EarthView
{
	namespace MeshOptimize
	{
		class EV_MESHOPTIMIZE_DLL CMeshOptimizeParams : public EarthView::World::Core::CBaseObject
		{
ev_private:
			CMeshOptimizeParams(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CMeshOptimizeParams();
			~CMeshOptimizeParams();

			 ev_void  operator=(CMeshOptimizeParams& params)
			 {
				 mTriangleOptimizeType = params.getTriangleOptimizeType();
				 mTriangleOptimzieMethod = params.getTriangleOptimizeMethod();
				 mDefaultOptimizePersent = params.getDefaultOptimizePersent();
				 mSubmeshTrangleCountLowerLimit = params.getSubmeshTrangleCountLowerLimit();
				 mTriangleRelationshipRebulid = params.getTriangleRelationshipRebulid();
				 mConvertToDDS = params.getConvertToDDS();
				 mBuildQuadtree = params.getBuildQuadtree();
				 mCombineSubMesh = params.getCombineSubMesh();
				 mUseDoubleSideLight = params.getUseDoubleSideLight();
				 mMaxVertexCombineNormalAngle = params.getMaxVertexCombineNormalAngle();
				 mEncodeTo7z   = params.getEncodeTo7z();
				 //mDiscardBoxSize = params.getDiscardBoxSize();
				 mSubmeshCountUpperLimit = params.getSubmeshCountUpperLimit();
				 mOptimizeParamLimit = params.getOptimizeParamLimit();
				 //mSmallSubmeshOptimizeParam = params.getSmallSubmeshOptimizeParam();
				 mTileVisibleMultiplier = params.getTileVisibleMultiplier();
				 mUseShareMaterial = params.getUseShareMaterial();
				 mDiscardTrangleCountLowerLimit = params.getDiscardTrangleCountLowerLimit();
				 mLineOptimizePersent = params.getLineOptimizePersent();
			 };

			enum EVTriangleOptimizeType
			{
				//暂时只开启边列表优化
				TOT_EdgeOptimize = 0,
				TOT_FaceOptimize
			};

			enum EVTriangleOptimizeMethod
			{
				//按百分比优化
				TOM_Proportion = 0,
				//按三角面数目优化
				TOM_TriangleNum 
			};
			//包围盒大小以及简化比例结构体
			struct BoxSizeWithProportion
			{
				////包围盒大小
				//ev_real32 boxSize;
				//三角面数目，如果triangleCountBoundary==0则取optimizePersentLimit值
				ev_real32 triangleCountBoundary;
				//大于等于三角面数目简化比例
				ev_real32 optimizePersentLimit;
				////小于三角面数目简化比例
				//ev_real32 simpleSubmeshOptimizePersent;
			};
			//设置三角面优化类型
			ev_void setTriangleOptimizeType(CMeshOptimizeParams::EVTriangleOptimizeType triOptimizeType);
			//获取三角面优化类型
			CMeshOptimizeParams::EVTriangleOptimizeType getTriangleOptimizeType();
			//设置三角面优化方式,目前只开启百分比优化
			ev_void setTriangleOptimizeMethod(CMeshOptimizeParams::EVTriangleOptimizeMethod triOptimizeMethod);
			//获取三角面优化方式
			CMeshOptimizeParams::EVTriangleOptimizeMethod getTriangleOptimizeMethod();
			//设置目标三角面简化比例
			ev_void setDefaultOptimizePersent(ev_real32 defaultOptimizePersent);
			//获取目标三角面简化比例
			ev_real32 getDefaultOptimizePersent();
			//设置目标线简化比例
			ev_void setLineOptimizePersent(ev_real32 lineOptimizePersent);
			//获取目标线简化比例
			ev_real32 getLineOptimizePersent();
			//设置剩余最少三角面数目，少于该数目按最小数目简化
			ev_void setSubmeshTrangleCountLowerLimit(ev_uint32 submeshTrangleCountLowerLimit);
			//获取剩余最少三角面数目
			ev_uint32 getSubmeshTrangleCountLowerLimit();
			//设置是否重建三角面拓补关系
			ev_void setTriangleRelationshipRebulid(ev_bool triRelationshipRebulid);
			//获取是是否重建三角面拓补关系
			ev_bool getTriangleRelationshipRebulid();
			//获取或设置是否转换图片为DDS
			ev_void setConvertToDDS(ev_bool toDDS);
			ev_bool getConvertToDDS();
			//获取或设置是否分块
			ev_void setBuildQuadtree(ev_bool buildQuadTree);
			ev_bool getBuildQuadtree();
			//获取或设置是否按块合并submesh
			ev_void setCombineSubMesh(ev_bool combineSubMesh);
			ev_bool getCombineSubMesh();
			//获取或设置是否使用双面光照
			ev_void setUseDoubleSideLight(ev_bool useDoubleSideLight);
			ev_bool getUseDoubleSideLight();
			//获取或设置三角面法线合并角度值，小于等于该值的合并
			ev_void setMaxVertexCombineNormalAngle(ev_real32 maxNormalAngle);
			ev_real32 getMaxVertexCombineNormalAngle();
			//序列化参数
			ev_void toXml(EarthView::World::Core::CXmlElement& paramElement);
			ev_void fromXml(EarthView::World::Core::CXmlElement element);
			//获取或设置压缩7z，数据发布必须设置为压缩，通过CModelLODGenerator可以设置
			ev_void setEncodeTo7z(ev_bool encodeTo7z);
			ev_bool getEncodeTo7z();
			////获取或设置包围盒丢弃大小，小于等于该值的会被丢弃
			//ev_void setDiscardBoxSize(ev_real32 discardBoxSize);
			//ev_real32 getDiscardBoxSize();
			//获取或设置最大拆分几何实例数目，小于等于该值的会被拆开合并
			ev_void setSubmeshCountUpperLimit(ev_uint32 submeshCountUpperLimit);
			ev_uint32 getSubmeshCountUpperLimit();
			//获取或设置最大拆分几何实例数目，小于等于该值的会被拆开合并
			ev_void setDiscardTrangleCountLowerLimit(ev_real32 discardTrangleCountLowerLimit);
			ev_real32 getDiscardTrangleCountLowerLimit();
			//获取或设置上限包围盒大小以及简化比例
			ev_void setOptimizeParamLimit(CMeshOptimizeParams::BoxSizeWithProportion bigSubmeshOptimizeParam);
			CMeshOptimizeParams::BoxSizeWithProportion getOptimizeParamLimit();
			////获取或设置下限包围盒大小以及简化比例
			//ev_void setSmallSubmeshOptimizeParam(CMeshOptimizeParams::BoxSizeWithProportion smallSubmeshOptimizeParam);
			//CMeshOptimizeParams::BoxSizeWithProportion getSmallSubmeshOptimizeParam();
			//获取或设置最小像素范围系数
			ev_void setTileVisibleMultiplier(ev_real32 multiplier);
			ev_real32 getTileVisibleMultiplier();
			//获取或设置是否使用公共材质，通过CModelLODGenerator可以直接设置
			ev_void setUseShareMaterial(ev_bool useShareMat);
			ev_bool getUseShareMaterial();
		private:
			//
			ev_void initVar();
			EVTriangleOptimizeType mTriangleOptimizeType;
			EVTriangleOptimizeMethod mTriangleOptimzieMethod;
			ev_real32 mDefaultOptimizePersent;
			ev_real32 mLineOptimizePersent;
			ev_uint32 mSubmeshTrangleCountLowerLimit;
			ev_real32 mDiscardTrangleCountLowerLimit;
			ev_bool   mTriangleRelationshipRebulid;
			ev_bool   mConvertToDDS;
			ev_bool   mBuildQuadtree;
			ev_bool mCombineSubMesh;
			ev_bool   mUseDoubleSideLight;
			ev_real32 mMaxVertexCombineNormalAngle;
			ev_bool   mEncodeTo7z;
			//ev_real32 mDiscardBoxSize;
			ev_uint32 mSubmeshCountUpperLimit;
			CMeshOptimizeParams::BoxSizeWithProportion mOptimizeParamLimit;
			//CMeshOptimizeParams::BoxSizeWithProportion mSmallSubmeshOptimizeParam;
			ev_real32 mTileVisibleMultiplier;
			ev_bool mUseShareMaterial;
		};

		class EV_MESHOPTIMIZE_DLL CMeshOptimize : public EarthView::World::Core::CBaseObject
		{
ev_private:
			CMeshOptimize(EarthView::World::Core::CNameValuePairList *pList);
		public:
			CMeshOptimize(CMeshOptimizeParams params);
			~CMeshOptimize();
			//
			struct CNormAndVertexInfo
			{
				EarthView::World::Spatial::Math::CVector3 faceNormal;
				ev_uint32 dstVertexIndex;
				ev_set<ev_uint32> splitVertexSet;
			};
			//
			struct CNormalInfo 
			{
				EarthView::World::Spatial::Math::CVector3 faceNormal;
				EarthView::World::Spatial::Math::CVector3 vertexNormal[3];
			};
			//填数据接口
			ev_void addVertex(float x,float y,float z);
			ev_void addNormal(float x,float y,float z);
			ev_void addTex(float u,float v);
			ev_void addColor(float r,float g,float b,float a);
			ev_void addFace(ev_uint32 v0,ev_uint32 v1,ev_uint32 v2);
			//优化接口
			ev_bool optimize();
			//返回数据接口
			ev_bool vertex_is_valid(ev_uint32 vertexID);

			ev_uint32 vertexCount();
			ev_void vertex(ev_uint32 i,float& x,float& y,float& z);

			ev_uint32 normalCount();
			ev_void normal(ev_uint32 i,float& x,float& y,float& z);

			ev_uint32 texCount();
			ev_void tex(ev_uint32 i,float& u,float& v);

			ev_bool face_is_valid(ev_uint32 faceID);
			ev_uint32 faceCount();
			ev_void face(ev_uint32 i,ev_uint32& v0,ev_uint32& v1,ev_uint32& v2);

			ev_uint32 colorCount();
			ev_void color(ev_uint32 i,float& r,float& g,float& b,float& a);
			//销毁释放内存
			ev_void dispose();
			//
			ev_void createStdModel();
			//
			ev_void initializeQSlim();
			//
			ev_void computeFaceNormal(ev_uint32 f, float& x,float& y,float& z, bool will_unitize);
			//
			ev_void computeVertexNormal(ev_uint32 v,float& x,float& y,float& z);
		private:
			MxQSlim* m_pQSlim;
			MxStdModel* m_pStdModel;
			CMeshOptimizeParams mParams;
		};
	}
}
#endif 