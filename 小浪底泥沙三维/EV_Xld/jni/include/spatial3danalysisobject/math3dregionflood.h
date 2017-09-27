#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DREGIONFLOOD_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CMATH3DREGIONFLOOD_H

#include "math3dbaseobject.h"
#include "mathengine/vector2.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{			
				/// <summary>
				/// 临时顶点结构
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CPositionColorTextured : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CPositionColorTextured(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CPositionColorTextured();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CPositionColorTextured();
					/// <summary>
					/// 顶点坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mPosition;
					/// <summary>
					/// 透明度分量
					/// </summary>
					ev_real32 mA;
					/// <summary>
					/// 纹理坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector2 mTextureUV;
				};

				class EV_ANALYSIS3DOBJECT_DLL CPositionColorTexturedSharedPtr : public EarthView::World::Core::CBaseObject, public EarthView::World::Core::CSharedPtr<CPositionColorTextured>
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CPositionColorTexturedSharedPtr(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPositionColorTexturedSharedPtr();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pctPoint"></param>
					/// <returns></returns>
					explicit CPositionColorTexturedSharedPtr( CPositionColorTextured *ref_pctPoint);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pctPoint"></param>
					/// <param name="inFreeMethod">共享方法</param>
					/// <returns></returns>
					explicit CPositionColorTexturedSharedPtr( CPositionColorTextured *ref_pctPoint, EarthView::World::Core::SharedPtrFreeMethod inFreeMethod);
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CPositionColorTextured *get() const;
				};

				class EV_ANALYSIS3DOBJECT_DLL FloodPointVector : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					FloodPointVector(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					FloodPointVector();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					void push_back(_in EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
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
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& operator[](_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr const &operator[](_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr& at(_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::CPositionColorTexturedSharedPtr const &at(_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
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
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					void clear();

					/// 交换vector数据
					/// </summary>
					/// <param name=""></param>
					void swap(FloodPointVector& rhs);
				};

				/// <summary>
				/// 洪水网格点结构
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CFloodMeshPoint : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CFloodMeshPoint(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CFloodMeshPoint();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="rowIndex">行索引</param>
					/// <param name="columnIndex">列索引</param>
					/// <param name="altitude">海拔高度</param>
					CFloodMeshPoint(ev_int32 rowIndex,ev_int32 columnIndex,ev_real64 altitude);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CFloodMeshPoint();
					/// <summary>
					/// 点的行号
					/// </summary>
					ev_int32 mRowIndex;
					/// <summary>
					/// 点的列号
					/// </summary>
					ev_int32 mColumnIndex;
					/// <summary>
					/// 点高程
					/// </summary>
					ev_real64 mAltitude;
				};

				/// <summary>
				/// 渲染用的淹没区块数据
				/// </summary>
				class EV_ANALYSIS3DOBJECT_DLL CFloodRenderBlock : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CFloodRenderBlock(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CFloodRenderBlock();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CFloodRenderBlock();
					/// <summary>
					/// 顶点数组
					/// 包含世界坐标位置、顶点颜色和纹理的顶点格式
					/// </summary>
					EarthView::World::Spatial3D::Analysis::FloodPointVector mVertices;
					/// <summary>
					/// 索引数组
					/// </summary>
					EarthView::World::Core::IntVector mIndices;
					/// <summary>
					/// 包围盒
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox mBoundingBox;
					/// <summary>
					/// 块内顶点行数
					/// </summary>
					ev_real64 mRowCount;
					/// <summary>
					/// 块内顶点列数
					/// </summary>
					ev_real64 mColumnCount;
					/// <summary>
					/// 块中心点地理坐标(经度，纬度，淹没高度)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCenterGeoPosition;
					/// <summary>
					/// 块中心点世界坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mCenterWorldPosition;
				};

				class EV_ANALYSIS3DOBJECT_DLL CFRenderBlockSet : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::Spatial3D::Analysis::CFloodRenderBlock> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				private:
					InternalList mList;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CFRenderBlockSet(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					CFRenderBlockSet();
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					void push_back(_in EarthView::World::Spatial3D::Analysis::CFloodRenderBlock const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					void insert(_in ev_uint32 pos, _in EarthView::World::Spatial3D::Analysis::CFloodRenderBlock const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
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
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& operator[](_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock const &operator[](_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock& at(_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::Spatial3D::Analysis::CFloodRenderBlock const &at(_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
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
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					void clear();

					/// 交换vector数据
					/// </summary>
					/// <param name=""></param>
					void swap(CFRenderBlockSet& rhs);
				};

				class EV_ANALYSIS3DOBJECT_DLL CMath3DRegionFlood : public EarthView::World::Spatial3D::Analysis::CMath3DBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CMath3DRegionFlood(_in EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pAltitudeListener">高程控件</param>
					CMath3DRegionFlood(EarthView::World::Spatial3D::Analysis::CAltitude3DListener* ref_pAltitudeListener);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CMath3DRegionFlood();
					/// <summary>
					/// 获取搜索半径
					/// </summary>
					ev_real64 getSearchRadius() const;
					/// <summary>
					/// 设置搜索半径
					/// </summary>
					/// <param name="value">搜索半径</param>
					ev_void setSearchRadius(const ev_real64& value);
					/// <summary>
					/// 获取搜索间隔距离
					/// </summary>
					/// <param name=""></param>
					/// <returns>搜索间隔距离</returns>
					ev_real64 getInterval() const;
					/// <summary>
					/// 设置搜索间隔距离
					/// </summary>
					/// <param name="value">搜索间隔距离</param>
					ev_void setInterval(const ev_real64& value);
					/// <summary>
					/// 获取是否停止计算
					/// </summary>
					/// <param name=""></param>
					/// <returns>是否停止计算</returns>
					ev_bool getNeedStop() const;
					/// <summary>
					/// 设置是否停止计算
					/// </summary>
					/// <param name="value">是否停止计算</param>
					ev_void setNeedStop(const ev_bool& value);
					/// <summary>
					/// 获取透明度被除系数
					/// </summary>
					/// <param name=""></param>
					/// <returns>透明度被除系数</returns>
					ev_real64 getAlphaDivision() const;
					/// <summary>
					/// 设置透明度被除系数
					/// </summary>
					/// <param name="value">透明度被除系数</param>
					ev_void setAlphaDivision(const ev_real64& value);
					/// <summary>
					/// 获取长度
					/// </summary>
					/// <param name=""></param>
					/// <returns>长度</returns>
					ev_int32 getSignLength() const;
					/// <summary>
					/// 设置长度
					/// </summary>
					/// <param name="value">长度</param>
					ev_void setSignLength(const ev_int32& value);
					/// <summary>
					/// 获取计算进度值
					/// </summary>
					/// <returns>计算进度值</returns>
					ev_int32 getProgressV();
					/// <summary>
					/// 获取淹没水面面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>水面面积</returns>
					ev_real64 getFloodSurfaceArea() const;
					/// <summary>
					/// 获取淹没贴地面积
					/// </summary>
					/// <param name=""></param>
					/// <returns>贴地面积</returns>
					ev_real64 getFloodGroundArea() const;
					/// <summary>
					/// 获取淹没体积
					/// </summary>
					/// <param name=""></param>
					/// <returns>淹没体积</returns>
					ev_real64 getFloodVolume() const;
					/// <summary>
					/// 计算淹没参数
					/// </summary>
					/// <param name="center">淹没中心</param>
					/// <param name="altitude">淹没高度</param>
					/// <returns></returns>
					ev_void calcuFloodParam(EarthView::World::Spatial::Math::CVector3 center,ev_real64 altitude);					
					/// <summary>
					/// 计算渲染参数
					/// </summary>
					/// <param name="renderBlockList">淹没区块数据池</param>
					ev_void calcuRenderData(_out CFRenderBlockSet& renderBlockList);
					/// <summary>
					/// 计算淹没高度
					/// </summary>
					/// <param name="center">淹没中心</param>
					/// <param name="floodVolume">淹没体积</param>
					/// <param name="error">容错率</param>
					/// <returns>淹没高度</returns>
					ev_real64 calcuFloodAltitude(EarthView::World::Spatial::Math::CVector3 center,ev_real64 floodVolume,ev_real64 error);					
					/// <summary>
					/// 服务器端计算
					/// </summary>
					/// <param name="center">淹没中心</param>
					/// <param name="altitude">淹没高度</param>
					/// <param name="floodArea">淹没水面面积</param>
					/// <param name="groundArea">淹没贴地面积</param>
					/// <param name="floodVolume">淹没体积</param>
					ev_void calculateOnServer(_in const EarthView::World::Spatial::Math::CVector3& center, _in const ev_real64& altitude, 
						_out ev_real64& floodArea, _out ev_real64& groundArea, _out ev_real64& floodVolume);

				protected:
					/// <summary>
					/// 初始化
					/// </summary>
					ev_void initialize();
					/// <summary>
					/// 重置标志数组
					/// </summary>
					/// <param name="sign">默认为false</param>
					ev_void resetSignArray(ev_bool sign);
					/// <summary>
					/// 查找开始淹没点（第一个比给定高程低的点）
					/// </summary>
					/// <param name="altitude">给定高程</param>
					/// <returns>开始淹没点</returns>
					CFloodMeshPoint searchStartPoint(ev_real64 altitude);
					/// <summary>
					/// 执行搜索，从边界点向四周扩散搜索
					/// </summary>
					/// <param name="borderTable">边界点列表</param>
					/// <param name="floodTable">淹没点列表</param>
					/// <param name="altitude">淹没高度</param>
					/// <returns>此次搜索新增淹点没列表</returns>
					vector<EarthView::World::Spatial3D::Analysis::CFloodMeshPoint> doSearch(_inout EarthView::World::Core::hashmap<EVString,ev_real64>& borderTable, 
						_inout EarthView::World::Core::hashmap<EVString,ev_real64>& floodTable,ev_real64 altitude);
					/// <summary>
					/// 计算经纬度包围盒
					/// </summary>
					/// <param name="borderTable">边界点列表</param>
					ev_void calcuBoundingBox(_in EarthView::World::Core::hashmap<EVString,ev_real64>& borderTable);
					/// <summary>
					/// 将当前淹没的边界点和淹没点克隆到输出列表中
					/// </summary>
					/// <param name="borderTable">边界点列表</param>
					/// <param name="floodTable">淹没点列表</param>
					ev_void cloneCurrentTable(_out EarthView::World::Core::hashmap<EVString,ev_real64>& borderTable, 
						_out EarthView::World::Core::hashmap<EVString,ev_real64>& floodTable);
					/// <summary>
					/// 计算两点间插值需要的每段矢量
					/// </summary>
					/// <param name="point0">起点</param>
					/// <param name="point1">终点</param>
					/// <param name="center">中心点</param>
					/// <param name="count">拆分的段数</param>
					/// <returns>中间每段矢量</returns>
					static EarthView::World::Spatial::Math::VertexList getDirections(EarthView::World::Spatial::Math::CVector3 point0,EarthView::World::Spatial::Math::CVector3 point1,EarthView::World::Spatial::Math::CVector3 center,int count);

				private:
					/// <summary>
					/// 上次淹没源地理坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mOldCenter;
					/// <summary>
					/// 上次水面海拔
					/// </summary>
					ev_real64 mOldAltitude;
					/// <summary>
					/// 最大淹没半径
					/// </summary>
					ev_real64 mSearchRadius;
					/// <summary>
					/// 搜索间隔距离
					/// </summary>
					ev_real64 mInterval;
					/// <summary>
					/// 透明度被除系数
					/// </summary>
					ev_real64 mAlphaDivision;
					/// <summary>
					/// 每个渲染数据块边界点个数
					/// </summary>
					ev_int32 mEdgePointNum;

					/// <summary>
					/// 淹没区网格纬度跨度
					/// </summary>
					ev_real64 mSpanLat;
					/// <summary>
					/// 淹没区网格经度跨度
					/// </summary>
					ev_real64 mSpanLon;
					/// <summary>
					/// 实际网格宽度
					/// </summary>
					ev_real64 mMeshWidth;
					/// <summary>
					/// 实际网格高度
					/// </summary>
					ev_real64 mMeshHeight;
					/// <summary>
					/// 最大行索引
					/// </summary>
					ev_int32 mMaxRowIndex;
					/// <summary>
					/// 最小行索引
					/// </summary>
					ev_int32 mMinRowIndex;
					/// <summary>
					/// 最大列索引
					/// </summary>
					ev_int32 mMaxColumnIndex;
					/// <summary>
					/// 最小列索引
					/// </summary>
					ev_int32 mMinColumnIndex;
					/// <summary>
					/// 淹没区经纬度包围盒
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CGeoBoundingBox mBoundingBox;
					/// <summary>
					/// 上次是否淹没过
					/// </summary>
					ev_bool mHasExpanded;
					/// <summary>
					/// 是否停止计算
					/// </summary>
					ev_bool mNeedStop;
					/// <summary>
					/// 计算进度值
					/// </summary>
					ev_int32 mProgressV;
					/// <summary>
					/// 水面面积
					/// </summary>
					ev_real64 mSurfaceArea;
					/// <summary>
					/// 贴地面积
					/// </summary>
					ev_real64 mGroundArea;
					/// <summary>
					/// 淹没体积
					/// </summary>
					ev_real64 mFloodVolume;

					/// <summary>
					/// 标志数组大小（查找起始淹没点）
					/// </summary>
					ev_int32 mSignLength;
					/// <summary>
					/// 标志数组
					/// </summary>
					vector< vector<ev_bool> > mSearchSign;
					/// <summary>
					/// 扩散点列表
					/// </summary>
					vector<EarthView::World::Spatial3D::Analysis::CFloodMeshPoint> mBorderPts;
					/// <summary>
					/// 淹没边界点列表
					/// </summary>
					EarthView::World::Core::hashmap<EVString,ev_real64> mBorderTable;
					/// <summary>
					/// 淹没区点列表
					/// </summary>
					EarthView::World::Core::hashmap<EVString,ev_real64> mFloodTable;
					/// <summary>
					/// 键值对：<行_列,高程>
					/// </summary>
					typedef std::pair<EVString,ev_real64> MyPair;
				};
			}
		}
	}
}
#endif
