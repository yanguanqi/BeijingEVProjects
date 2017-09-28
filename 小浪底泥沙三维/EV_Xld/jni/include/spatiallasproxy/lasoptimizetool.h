#ifndef  EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASOPTIMIZETOOL_H
#define  EARTHVIEW_WORLD_SPATIALLASCONVERTPROXY_LASOPTIMIZETOOL_H

#include "spatiallasproxy/lasconvertproxy_config.h"
#include "core/memoryallocatedobject.h"
#include "core/xml.h"
#include "graphic/submesh.h"
#include "tileutility/meshstream.h"
#include "spatial3dengine/obliquedbutility.h"

#define READ_WRITE_POINT_COUNT 1000000
#define READ_WRITE_POINT_TIMES 40

namespace EarthView
{
	namespace World
	{
		namespace SpatialLASConvertProxy
		{
			class EV_LASCONVERTPROXY_DLL CTempVertex : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CTempVertex(EarthView::World::Core::CNameValuePairList *pList){}
			public:
				CTempVertex(){}
				~CTempVertex(){}
				ev_real32 x, y, z;
				ev_uint8 classification;
				ev_uint16 intensity;
				ev_uint16 returnNumber;
				ev_real32 elevation;
				ev_uint8 r,g,b;
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
				void insert(iterator _Where, iterator _First, iterator _Last);
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

			class CLasFileInfo
			{
			public:
				CLasFileInfo();
				~CLasFileInfo();

				ev_uint32 boxSize;
				EarthView::World::Spatial::Math::CAxisAlignedBox bounds;
				ev_real64 elevationMinZ;
				ev_real64 elevationMaxZ;
				EVString fileFullPath;
				EVString lasBaseName;
				ev_bool isSplited;
				ev_bool isReaded;
				ev_uint32 pointCount;
				Real minLat,minLon,maxLat,maxLon;
				ev_real64 ioCoefficient;
				ev_int8 level;
				ev_real64 maxSpan;
				ev_bool latSpanLarger;

				virtual ev_bool operator<(const CLasFileInfo& rhs) const;
			};

			class CLasMergedFileInfo
			{
			public:
				CLasMergedFileInfo();
				~CLasMergedFileInfo();
				
				EarthView::World::Spatial::Math::CAxisAlignedBox bounds;
				ev_real64 elevationMinZ;
				ev_real64 elevationMaxZ;
				EarthView::World::Core::StringVector lasFilePaths;
				EVString lasBaseName;
				ev_bool isSplited;
				ev_bool isReaded;
				ev_uint32 pointCount;
				Real minLat,minLon,maxLat,maxLon;
				ev_real64 ioCoefficient;
				ev_int8 level;
				ev_real64 maxSpan;
				ev_bool latSpanLarger;
			};

			class CLasSegmentInfo
			{
			public:
				CLasSegmentInfo();
				~CLasSegmentInfo();

				EVString lasBaseName;
				EVString lasIdBaseName;
				EVString tempFolder;
				ev_uint32 readCount;
				ev_uint32 writeFileTimes;
				CTempVertexVector ptVec;
				FILE* fp;
				EarthView::World::Core::StringVector dataFiles;
				EarthView::World::Spatial::Math::CAxisAlignedBox box;
				Real minLat,minLon,maxLat,maxLon;
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
				//源文件名
				EVString dstBaseName;
				//L级别_行号_列号
				EVString dstLevelName;
				//临时存储用顶点信息
				CTempVertexVector vertices;
				EarthView::World::Core::CXmlElement xmlElementNode;
				ev_bool isValidElement;
			};

			class CLodIndexPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<EarthView::World::Spatial3D::ModelManager::LodIndex>
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CLodIndexPtr();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="rep"></param>
				/// <returns></returns>
				explicit CLodIndexPtr(EarthView::World::Spatial3D::ModelManager::LodIndex *ref_rep);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="rep"></param>
				/// <param name="inFreeMethod"></param>
				/// <returns></returns>
				explicit CLodIndexPtr(EarthView::World::Spatial3D::ModelManager::LodIndex *ref_rep, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="r"></param>
				/// <returns></returns>
				CLodIndexPtr(const CLodIndexPtr &r);
				EarthView::World::Spatial3D::ModelManager::LodIndex *get() const;
				/// <summary>
				/// 
				/// </summary>
				/// <param name="r"></param>
				/// <returns></returns>
				CLodIndexPtr &operator=(const CLodIndexPtr &r);
			protected:
				//// 
				void destroy();
			};

			class CLasData
			{
			public:
				CLasData();
				~CLasData();
				EarthView::World::Spatial::Math::CAxisAlignedBox bounds;
				EVString filePath;
				EarthView::World::Spatial::Math::CMatrix4 localTrans;
				ev_list<CLodIndexPtr> lodIndexVec;
			};

			class CLasDataCollection
			{
			public:
				CLasDataCollection()
				{
					canDisposed = true;
				}

				~CLasDataCollection()
				{
					lasDataList.clear();
					canDisposed = false;
				}

				EarthView::World::Spatial::Math::CAxisAlignedBox bounds;
				ev_list<CLasData> lasDataList;
				ev_bool canDisposed;
			};

			class CLasTileInfo
			{
			public:
				CLasTileInfo()
				{
					dstFilePath = "";
				}

				~CLasTileInfo()
				{
					lodIndexVec.clear();
				}

				EVString dstFilePath;
				EarthView::World::Spatial::Math::CAxisAlignedBox bounds;
				ev_list<CLodIndexPtr> lodIndexVec;
			};

			class CLasMergeQuadTree
			{
			public:
				CLasMergeQuadTree();
				~CLasMergeQuadTree();

				CLasMergeQuadTree* parent;
				//四个叶子节点
				CLasMergeQuadTree* child0;
				CLasMergeQuadTree* child1;
				CLasMergeQuadTree* child2;
				CLasMergeQuadTree* child3;

				//原始数据集分割给该块的包围盒
				EarthView::World::Spatial::Math::CAxisAlignedBox treeBounds;
				//最终该块的实际包围盒
				EarthView::World::Spatial::Math::CAxisAlignedBox dstTreeBounds;
				EarthView::World::Spatial::Math::CVector3 lv0Center;
				//级别
				ev_int16 level;
				//行列号
				ev_uint32 row;
				ev_uint32 col;
				//目标文件夹
				EVString dstFolder;
				//源文件夹
				EVString dstBaseName;
				CLasDataCollection* collection;
			};

			class EV_LASCONVERTPROXY_DLL LasRecordInfo : public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				LasRecordInfo(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				LasRecordInfo();
				~LasRecordInfo();
				ev_uint32 EVID;
				EVString LasFullFilePath;
				ev_real64 Lon;
				ev_real64 Lat;
				ev_real64 Alt;
				ev_real64 ScaleX;
				ev_real64 ScaleY;
				ev_real64 ScaleZ;
				ev_real64 OrientationW;
				ev_real64 OrientationX;
				ev_real64 OrientationY;
				ev_real64 OrientationZ;
				ev_real64 ElevationMinZ;
				ev_real64 ElevationMaxZ;
				EarthView::World::Spatial::Math::CAxisAlignedBox WorldBounds;
			};

			class EV_LASCONVERTPROXY_DLL LasRecordInfoList : public EarthView::World::Core::CAllocatedObject         		
			{
ev_private:
				typedef list<LasRecordInfo> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::reference reference;
				typedef InternalList::const_reference const_reference;
				typedef InternalList::value_type value_type;
				RESERVE_CONTAINER_FUNCTION(mList);///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">位置迭代器</param>
				/// <param name="t">元素值</param>
				/// <returns>插入元素后元素迭代器</returns>
				iterator insert(_in iterator pos, _in LasRecordInfo const &t);
			private:
				InternalList mList;

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				LasRecordInfoList(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				LasRecordInfoList();
				/// <summary>
				/// 在容器最后添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in LasRecordInfo const &t);
				/// <summary>
				/// 删除容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back();
				/// <summary>
				/// 在容器最前面添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_front(_in LasRecordInfo const &t);
				/// <summary>
				/// 删除容器最前面元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_front();
				/// <summary>
				/// 返回容器首个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器首个元素</returns>
				LasRecordInfo &front();
				/// <summary>
				/// 返回容器最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器最后元素</returns>
				LasRecordInfo &back();
				/// <summary>
				/// 返回某位置的元素值
				/// </summary>
				/// <param name="n">位置</param>
				/// <returns>返回位置对应的值</returns>
				LasRecordInfo &at(ev_uint32 pos);
				/// <summary>
				/// 容器中间位置插入元素
				/// </summary>
				/// <param name="pos">位置</param>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void insert(_in ev_uint32 pos, _in LasRecordInfo const &t);
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
				/// 清空所有元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
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
				/// <summary>
				/// 赋值操作符重载
				/// </summary>
				/// <returns></returns>
				ev_void  operator=(CLasOptimizeParams& params)
				{
					mLasOptimizePersent = params.getLasOptimizePersent();
					mLasCountLowerLimit = params.getLasCountLowerLimit();
					mTileVisibleMultiplier = params.getTileVisibleMultiplier();
				};
				/// <summary>
				/// 设置点云简化比例
				/// </summary>
				/// <returns></returns>
				ev_void setLasOptimizePersent(ev_real32 lasOptimizePersent);
				/// <summary>
				/// 获取点云简化比例
				/// </summary>
				/// <returns></returns>
				ev_real32 getLasOptimizePersent();
				/// <summary>
				/// 设置剩余点数目的下限，少于该数目按最小数目简化
				/// </summary>
				/// <returns></returns>
				ev_void setLasCountLowerLimit(ev_uint32 lasCountLowerLimit);
				/// <summary>
				/// 获取剩余点数目的下限
				/// </summary>
				/// <returns></returns>
				ev_uint32 getLasCountLowerLimit();
				/// <summary>
				/// 设置最小像素范围系数
				/// </summary>
				/// <returns></returns>
				ev_void setTileVisibleMultiplier(ev_real32 multiplier);
				/// <summary>
				/// 获取最小像素范围系数
				/// </summary>
				/// <returns></returns>
				ev_real32 getTileVisibleMultiplier();
				/// <summary>
				/// 序列化参数
				/// </summary>
				/// <returns></returns>
				ev_void toXml(EarthView::World::Core::CXmlElement& element);
				/// <summary>
				/// 反序列化参数
				/// </summary>
				/// <returns></returns>
				ev_void fromXml(EarthView::World::Core::CXmlElement element);

			private:
				ev_real32 mLasOptimizePersent;
				ev_uint32 mLasCountLowerLimit;
				ev_real32 mTileVisibleMultiplier;
			};

			class EV_LASCONVERTPROXY_DLL CLasLODParam : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLasLODParam(EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLasLODParam();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLasLODParam();
				/// <summary>
				/// 设置是否压缩7z
				/// </summary>
				/// <returns></returns>
				ev_void setEncode7z(ev_bool encode7z);
				/// <summary>
				/// 获取是否压缩7z
				/// </summary>
				/// <returns></returns>
				ev_bool getEncode7z();
				/// <summary>
				/// 添加指定级别LOD参数
				/// </summary>
				/// <returns></returns>
				ev_void addLODParam(ev_uint8 level,CLasOptimizeParams param);
				/// <summary>
				/// 移除指定级别LOD参数
				/// </summary>
				/// <returns></returns>
				ev_void removeLODParam(ev_uint8 level);
				/// <summary>
				/// 更新指定级别LODC参数
				/// </summary>
				/// <returns></returns>
				ev_void updateLODParam(ev_uint8 level,CLasOptimizeParams param);
				/// <summary>
				/// 获取是否存在指定级别LOD参数
				/// </summary>
				/// <returns></returns>
				ev_bool existLODParam(ev_uint8 level);
				/// <summary>
				/// 获取指定级别LOD参数
				/// </summary>
				/// <returns></returns>
				CLasOptimizeParams getLODParam(ev_uint8 level);
				/// <summary>
				/// 获取LOD级别总数
				/// </summary>
				/// <returns></returns>
				ev_int32 getLODParamSize();
				/// <summary>
				/// 清空参数容器
				/// </summary>
				/// <returns></returns>
				ev_void clearLODParam();
				/// <summary>
				/// 设置目标定位点
				/// </summary>
				/// <returns></returns>
				ev_void setLocation(ev_real64 lat,ev_real64 lon,ev_real64 alt);
				/// <summary>
				/// 获取目标定位点
				/// </summary>
				/// <returns></returns>
				ev_void getLocation(ev_real64& lat,ev_real64& lon,ev_real64& alt);
				/// <summary>
				/// 设置目标缩放分量
				/// </summary>
				/// <returns></returns>
				ev_void setScale(ev_real64 scaleX,ev_real64 scaleY,ev_real64 scaleZ);
				/// <summary>
				/// 获取目标缩放分量
				/// </summary>
				/// <returns></returns>
				ev_void getScale(ev_real64& scaleX,ev_real64& scaleY,ev_real64& scaleZ);
				/// <summary>
				/// 设置目标旋转分量
				/// </summary>
				/// <returns></returns>
				ev_void setRotation(ev_real64 rotW,ev_real64 rotX,ev_real64 rotY,ev_real64 rotZ);
				/// <summary>
				/// 获取目标旋转分量
				/// </summary>
				/// <returns></returns>
				ev_void getRotation(ev_real64& rotW,ev_real64& rotX,ev_real64& rotY,ev_real64& rotZ);
				/// <summary>
				/// 设置目标局部变换参数,平移,缩放，旋转(角度值)
				/// </summary>
				/// <returns></returns>
				ev_void setLocalTranform(EarthView::World::Spatial::Math::CVector3 translate,EarthView::World::Spatial::Math::CVector3 scale,EarthView::World::Spatial::Math::CVector3 rotate);
				/// <summary>
				/// 获取目标局部变换参数,平移,缩放，旋转(角度值)
				/// </summary>
				/// <returns></returns>
				ev_void getLocalTransform(EarthView::World::Spatial::Math::CVector3& translate,EarthView::World::Spatial::Math::CVector3& scale,EarthView::World::Spatial::Math::CVector3& rotate);
				/// <summary>
				/// 设置目标最小最大高程
				/// </summary>
				/// <returns></returns>
				ev_void setElevationMinMaxZ(ev_real64 elevationMinZ,ev_real64 elevationMaxZ);
				/// <summary>
				/// 获取目标最小最大高程
				/// </summary>
				/// <returns></returns>
				ev_void getElevationMinMaxZ(ev_real64& elevationMinZ,ev_real64& elevationMaxZ);
				/// <summary>
				/// 从xml文档解析参数
				/// </summary>
				/// <returns></returns>
				ev_void fromXml(const EVString filePath);
				/// <summary>
				/// 保存参数到xml文档
				/// </summary>
				/// <returns></returns>
				ev_void toXml(const EVString filePath);

			private:
				ev_map<ev_uint8,CLasOptimizeParams> lasOptimizeParamsMap;

				ev_real64 mLat;
				ev_real64 mLon;
				ev_real64 mAlt;
				ev_real64 mWScaleX;
				ev_real64 mWScaleY;
				ev_real64 mWScaleZ;
				ev_real64 mWRotW;
				ev_real64 mWRotX;
				ev_real64 mWRotY;
				ev_real64 mWRotZ;

				ev_real64 mTranslationX;
				ev_real64 mTranslationY;
				ev_real64 mTranslationZ;
				ev_real64 mScaleX;
				ev_real64 mScaleY;
				ev_real64 mScaleZ;
				ev_real64 mRotateX;
				ev_real64 mRotateY;
				ev_real64 mRotateZ;

				ev_real64 mElevationMinZ;
				ev_real64 mElevationMaxZ;

				ev_bool mbEncode7z;
			};

			/*typedef map<EVString,CLasLODParam*> CLasLODParamMap;*/
			class EV_LASCONVERTPROXY_DLL CLasLODParamMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CLasLODParamMap(_in EarthView::World::Core::CNameValuePairList *pList) {}
			public:
				CLasLODParamMap() {}
				ev_bool push(const EVString &key, CLasLODParam*& val)
				{
					if(mList.find(key) == mList.end())
					{
						mList[key] = val;
						return true;
					}
					else
					{
						return false;
					}
				}
				ev_bool exist(const EVString &key)
				{
					return mList.find(key) != mList.end();
				}
				CLasLODParam*& operator[](const EVString &key)
				{
					return get(key);
				}
				CLasLODParam*& get(const EVString &key)
				{
					return mList[key];
				}
				void erase(const EVString &key)
				{
					if(exist(key))
						mList.erase(key);
				}
				ev_size_t size() const
				{
					return mList.size();
				}
				void clear()
				{
					mList.clear();
				}
				ev_bool empty() const
				{
					return mList.empty();
				}
ev_private:
				typedef map<EVString,CLasLODParam*> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::reverse_iterator reverse_iterator;
				typedef InternalList::const_reverse_iterator const_reverse_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<iterator,bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_MAP(mList);
				_Pairib insert(const value_type &val)
				{
					return mList.insert(val);
				}
				iterator find(const EVString &key)
				{
					return mList.find(key);
				}
				const_iterator find(const EVString &key) const
				{
					return mList.find(key);
				}
			private:
				InternalList mList;
			};

			class EV_LASCONVERTPROXY_DLL CLasMergeQuadTreeParam : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CLasMergeQuadTreeParam(EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				CLasMergeQuadTreeParam();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~CLasMergeQuadTreeParam();
				/// <summary>
				/// 设置合并后名字
				/// </summary>
				/// <returns></returns>
				ev_void setMergeName(EVString mergeName);
				/// <summary>
				/// 获取合并后名字
				/// </summary>
				/// <returns></returns>
				EVString getMergeName();
				/// <summary>
				/// 设置四叉树分裂条件，分块包围盒大小大于当前值时继续分裂(仅x,z平面对角线长度)
				/// </summary>
				/// <returns></returns>
				ev_void setMinDivideBoundsSize(ev_real32 minDivideSize);
				/// <summary>
				/// 获取四叉树分裂条件，分块包围盒大小大于当前值时继续分裂(仅x,z平面对角线长度)
				/// </summary>
				/// <returns></returns>
				ev_real32 getMinDivideBoundsSize();
				/// <summary>
				/// 设置四叉树单个块中las数目下限,大于当前值时继续分裂
				/// </summary>
				/// <returns></returns>
				ev_void setLasCountLowerLimit(ev_uint32 lasCountLowerLimit);
				/// <summary>
				/// 获取四叉树单个块中las数目下限,大于当前值时继续分裂
				/// </summary>
				/// <returns></returns>
				ev_uint32 getLasCountLowerLimit();
				/// <summary>
				/// 
				/// </summary>
				/// <returns></returns>
				ev_void setTileVisibleMultiplier(ev_real32 multiplier);
				/// <summary>
				/// 
				/// </summary>
				/// <returns></returns>
				ev_real32 getTileVisibleMultiplier();

			private:
				EVString mMergeName;
				ev_real32 mMinDivideBoundsSize;
				ev_uint32 mLasCountLowerLimit;
				ev_real32 mTileVisibleMultiplier;
			};

			class CTurple
			{
			public:
				CTurple(){};
				~CTurple(){};
				CTempVertexVector pts;
				CTempVertex center;
			};

			class GridIndex
			{
			public:
				GridIndex(int x,int y,int z)
				{
					xindex = x;
					yindex = y;
					zindex = z;
				}

				friend bool operator<(const GridIndex &left,const GridIndex &right)
				{
					bool result=false;
					if(left.xindex!=right.xindex)
					{
						result = left.xindex<right.xindex;
					}
					else if(left.yindex!=right.yindex)
					{
						result = left.yindex<right.yindex;
					}
					else if(left.zindex!=right.zindex)
					{
						result = left.zindex<right.zindex;
					}
					return result;
				}

				int xindex;//x方向索引号
				int yindex;//y方向索引号
				int zindex;//z方向索引号
			};

			class EV_LASCONVERTPROXY_DLL CLasOptimizeTool :  public EarthView::World::Core::CBaseObject
			{
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
				ev_void readVertsFromMemoryDataStream(EarthView::World::Core::MemoryDataStreamPtr& totalStream,CTempVertexVector& vertsList);
				EarthView::World::Core::MemoryDataStreamPtr writeVertsToMemoryDataStream(CTempVertexVector& vertsList);
				ev_void fillSubMesh(EarthView::World::Graphic::CSubMesh* pSubMesh,CTempVertexVector& vertices,EarthView::World::Spatial::Math::CVector3& minPoint,EarthView::World::Spatial::Math::CVector3& maxPoint);				
				ev_void translateSubMesh(EarthView::World::Spatial::Math::CMatrix4 translateM,EarthView::World::Graphic::CSubMesh* subMesh);
				ev_void saveMeshToMeshStream(EarthView::World::Graphic::CMeshPtr mesh,const EVString& dstFilePath,EVString tileName,EarthView::World::Spatial::MeshStream& meshStream);
				ev_void destoryMesh(EarthView::World::Graphic::CMeshPtr& mesh);
				ev_bool createLasMetaInfoDB(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility);
				ev_bool writeLasMetaInfo2DB(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility,EVString name,ev_real32 value,ev_uint32 type);												
				ev_void convertTileLodToPackage7z(EarthView::World::Spatial3D::ModelManager::CObliqueDBUtility* dbUtility, const EVString& tileName, const EVString& tileFolder,const EVString& fileTmp7z);
				ev_void spliteFilePath(const EVString& modelfile, _out EVString& path, _out EVString& filename);
				EarthView::World::Core::MemoryDataStreamPtr readStreamFromFile(const EVString& filename);
				ev_void writeStreamToFile(EarthView::World::Core::CMemoryDataStream* stream, const EVString& filename);
				ev_void kmeansCluster(CTempVertexVector &srcPts,CTempVertexVector &dstPts,ev_uint32 retSize);
				ev_void gridCluster(CTempVertexVector &srcPts,CTempVertexVector &dstPts,EarthView::World::Spatial::Math::CVector3 minPoint,ev_int8 level,ev_real32 lasOptimizePersent,ev_uint32 lasCountLowerLimit);

			private:
				static CLasOptimizeTool* m_pSinglton;
			};
		}
	}
}
#endif
