#ifndef  _LASOPTIMIZETOOL_H
#define  _LASOPTIMIZETOOL_H

#include "spatiallasproxy/lasconvertproxy_config.h"
#include "core/memoryallocatedobject.h"
#include "core/xml.h"
#include "mathengine/vector3.h"
#include "graphic/mesh.h"
#include "graphic/submesh.h"
#include "tileutility/meshstream.h"
#include "spatial3dengine/obliquedbutility.h"

namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			class EV_LASCONVERTPROXY_DLL CTempVertex : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTempVertex(EarthView::World::Core::CNameValuePairList *pList){}
			public:
				CTempVertex(){}
				~CTempVertex(){}
				EarthView::World::Spatial::Math::CVector3 pos;
				EarthView::World::Spatial::Math::CVector4 tex;
				EarthView::World::Graphic::CColourValue color;
			};

			class EV_LASCONVERTPROXY_DLL CTempVertexVector : public EarthView::World::Core::CBaseObject
			{
ev_private:
				typedef vector<CTempVertex> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList);
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				iterator insert(_in iterator pos, _in CTempVertex const &t);
			private:
				InternalList mList;

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CTempVertexVector(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CTempVertexVector();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in CTempVertex const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				CTempVertex &front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				CTempVertex &back();
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in CTempVertex const &t);
				/// <summary>
				/// 容器中间位置插入列表
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="other">列表</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in CTempVertexVector other);
				/// <summary>
				/// 删除容器中间位置元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <returns></returns>
				void remove(_in ev_size_t pos);
				/// <summary>
				/// 返回容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				CTempVertex &operator[](_in ev_size_t n);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="n">下标位置</param>
				/// <returns>返回下标对应的值</returns>
				CTempVertex const &operator[](_in ev_size_t n) const;
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				CTempVertex &at(_in ev_size_t n);
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				CTempVertex const &at(_in ev_size_t n) const;
				/// <summary>
				/// 返回元素的数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回元素的数量大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 改变容器中元素数量大小
				/// </summary>
				/// <param name="newSize">改变的容器中元素数量大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize);
				/// <summary>
				/// 改变容器中最小的元素容纳数量
				/// </summary>
				/// <param name="count">最小的元素容纳数量</param>
				/// <returns></returns>
				void reserve(_in ev_size_t count);
				/// <summary>
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
				/// <summary>
				/// 交换vector
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void swap(_in CTempVertexVector& rhs);
			};

			class CLasQuadTree
			{
			public:
				CLasQuadTree();
				~CLasQuadTree();

				CLasQuadTree* parent;
				//四个叶子节点
				CLasQuadTree* child0;
				CLasQuadTree* child1;
				CLasQuadTree* child2;
				CLasQuadTree* child3;
				//该块最终的mesh对象
				EarthView::World::Graphic::CMeshPtr mesh;
				//原始数据集分割给该块的包围盒
				EarthView::World::Spatial::Math::CAxisAlignedBox treeBounds;
				//最终该块的实际包围盒
				EarthView::World::Spatial::Math::CAxisAlignedBox dstTreeBounds;
				EarthView::World::Spatial::Math::CVector3 lv0Center;
				//级别行列号
				ev_int16 level;
				ev_uint32 row;
				ev_uint32 col;
				//目标文件夹
				EVString dstFolder;
				//源文件
				EVString dstBaseName;
				//临时存储用顶点信息
				list<CTempVertex> vertices;
				EarthView::World::Core::CXmlElement xmlElementNode;
				ev_bool isValidElement;
			};

			class CTurple
			{
			public:
				CTurple(){};
				~CTurple(){};
				CTempVertexVector pts;
				CTempVertex center;
			};

			class EV_LASCONVERTPROXY_DLL CLasOptimizeParams : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLasOptimizeParams(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLasOptimizeParams();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLasOptimizeParams();

				ev_void  operator=(CLasOptimizeParams& params)
				{
					mLasOptimzieMethod = params.getLasOptimizeMethod();
					mLasOptimizePersent = params.getLasOptimizePersent();
					mLasCountLowerLimit = params.getLasCountLowerLimit();
					mTileVisibleMultiplier = params.getTileVisibleMultiplier();
					mConvertToDDS = params.getConvertToDDS();
					mBuildQuadtree = params.getBuildQuadtree();
					mCombineSubMesh = params.getCombineSubMesh();
					mUseDoubleSideLight = params.getUseDoubleSideLight();
					mEncodeTo7z = params.getEncodeTo7z();
					mUseShareMaterial = params.getUseShareMaterial();
				};

				enum EVLasOptimizeMethod
				{
					//按百分比优化
					LOM_Proportion = 0,
					//按点数目优化
					LOM_PointNum
				};

				//设置点云优化方式,目前只开启百分比优化
				ev_void setLasOptimizeMethod(CLasOptimizeParams::EVLasOptimizeMethod lasOptimizeMethod);
				//获取点云优化方式
				CLasOptimizeParams::EVLasOptimizeMethod getLasOptimizeMethod();
				//设置点云简化比例
				ev_void setLasOptimizePersent(ev_real32 lasOptimizePersent);
				//获取点云简化比例
				ev_real32 getLasOptimizePersent();
				//设置剩余点数目的下限，少于该数目按最小数目简化
				ev_void setLasCountLowerLimit(ev_uint32 lasCountLowerLimit);
				//获取剩余点数目的下限
				ev_uint32 getLasCountLowerLimit();
				//设置最小像素范围系数
				ev_void setTileVisibleMultiplier(ev_real32 multiplier);
				//获取最小像素范围系数
				ev_real32 getTileVisibleMultiplier();
				//设置是否转换图片为DDS
				ev_void setConvertToDDS(ev_bool convertToDDS);
				//获取是否转换图片为DDS
				ev_bool getConvertToDDS();
				//设置是否分块
				ev_void setBuildQuadtree(ev_bool buildQuadTree);
				//获取是否分块
				ev_bool getBuildQuadtree();
				//设置是否按块合并submesh
				ev_void setCombineSubMesh(ev_bool combineSubMesh);
				//获取是否按块合并submesh
				ev_bool getCombineSubMesh();
				//设置是否使用双面光照
				ev_void setUseDoubleSideLight(ev_bool useDoubleSideLight);
				//获取是否使用双面光照
				ev_bool getUseDoubleSideLight();
				//设置是否压缩7z，数据发布必须设置为压缩，通过CLasLODGenerator可以设置
				ev_void setEncodeTo7z(ev_bool encodeTo7z);
				//获取是否压缩7z
				ev_bool getEncodeTo7z();
				//设置是否使用公共材质，通过CLasLODGenerator可以直接设置
				ev_void setUseShareMaterial(ev_bool useShareMat);
				//获取是否使用公共材质
				ev_bool getUseShareMaterial();
				//序列化参数
				ev_void toXml(EarthView::World::Core::CXmlElement& paramElement);
				//序列化参数
				ev_void fromXml(EarthView::World::Core::CXmlElement element);

			private:
				ev_void initVar();
				EVLasOptimizeMethod mLasOptimzieMethod;
				ev_real32 mLasOptimizePersent;
				ev_uint32 mLasCountLowerLimit;
				ev_real32 mTileVisibleMultiplier;
				ev_bool mConvertToDDS;
				ev_bool mBuildQuadtree;
				ev_bool mCombineSubMesh;
				ev_bool mUseDoubleSideLight;
				ev_bool mEncodeTo7z;				
				ev_bool mUseShareMaterial;
			};

			class EV_LASCONVERTPROXY_DLL CLasOptimizeTool :  public EarthView::World::Core::CBaseObject
			{
				friend class CLasLODGenerator;
				friend class CLasQuadTree;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLasOptimizeTool(EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLasOptimizeTool();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLasOptimizeTool();
				static CLasOptimizeTool* getSingleton();
				static void destorySingleton();
				ev_void optimizeLas(EarthView::World::Core::StringVector& dataFiles,EarthView::World::Spatial::Math::CAxisAlignedBox& box,CLasOptimizeParams& params);
				ev_void writeVertsToFile(const EVString& dataFile,const CTempVertexVector& vertsList);
				ev_void translateSubMesh(EarthView::World::Spatial::Math::CMatrix4 translateM,EarthView::World::Graphic::CSubMesh* subMesh);
				ev_bool createLasMetaInfoDB(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility);
				ev_bool writeLasMetaInfo2DB(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,EVString name,ev_real32 value,ev_uint32 type);

			private:
				ev_void destoryMesh(EarthView::World::Graphic::CMeshPtr& mesh,ev_bool isDestoryResourceGroup);
				ev_void readVertsFromFile(const EVString& dataFile,CTempVertexVector& vertsMap);
				ev_void fillSubMesh(EarthView::World::Graphic::CSubMesh* pSubMesh,list<CTempVertex>& vertices,
					EarthView::World::Spatial::Math::CVector3& minPoint,EarthView::World::Spatial::Math::CVector3& maxPoint,EarthView::World::Spatial::Math::CMatrix4 localM);
				ev_bool saveMeshToFile(EarthView::World::Graphic::CMeshPtr mesh,const EVString& dstFilePath,ev_bool saveMaterial,
					CLasOptimizeParams& params,EarthView::World::Spatial::MeshStream& meshStream,EVString tileName);				
				ev_void kmeansCluster(CTempVertexVector &srcPts,CTempVertexVector &dstPts,ev_uint32 retSize);
				ev_void gridCluster(CTempVertexVector &srcPts,CTempVertexVector &dstPts,ev_real32 persent,EarthView::World::Spatial::Math::CAxisAlignedBox box);
			
			private:
				static CLasOptimizeTool* m_pSinglton;
			};
		}
	}
}

#endif