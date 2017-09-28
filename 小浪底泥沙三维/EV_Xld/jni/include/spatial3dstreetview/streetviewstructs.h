#ifndef EV_LAYER_STREET_VIEW_POINT_H
#define EV_LAYER_STREET_VIEW_POINT_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "core/memoryallocatedobject.h"
#include "download/streetviewserviceconnection.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{

			class CLayerStreetPoint;
			class CLayerStreetBlock;

			class EV_Spatial3DStreetView_DLL CLayerStreetPointDirection : public EarthView::World::Core::CBaseObject
			{
			public:
				CLayerStreetPointDirection(ev_uint32 evid, EVString mapCode, ev_uint32 topoID);
				CLayerStreetPointDirection();
				ev_uint32 mEVID;
				EVString mMapCode;
				ev_uint32 mTopoID;
ev_private:
				CLayerStreetPointDirection( EarthView::World::Core::CNameValuePairList *pList );
			};

			class EV_Spatial3DStreetView_DLL CLayerStreetPoint : public EarthView::World::Core::CAllocatedObject
			{
			public:
				CLayerStreetPoint();
				virtual ~CLayerStreetPoint();
				ev_uint32 mEVID;
				ev_uint32 mNearEVID;
				ev_uint32 mID;
				ev_uint32 mTopoID;
				ev_real64 mLon;
				ev_real64 mLat;
				ev_real64 mNearLon;
				ev_real64 mNearLat;
				ev_bool mIsEdge;
				EVString mMapCode;
				EVString mNearMapCode;
				EVString mPhotoFile;
				CLayerStreetPointDirection mNorth;
				CLayerStreetPointDirection mSouth;
				CLayerStreetPointDirection mEast;
				CLayerStreetPointDirection mWest;
				CLayerStreetPointDirection mNorthEast;
				CLayerStreetPointDirection mNorthWest;
				CLayerStreetPointDirection mSouthEast;
				CLayerStreetPointDirection mSouthWest;
				CLayerStreetPoint& operator=(_in const EarthView::World::Spatial::Download::CStreetPoint& point);
			ev_private:
				CLayerStreetPoint( EarthView::World::Core::CNameValuePairList *pList );
				CLayerStreetPoint( EarthView::World::Spatial::Download::CStreetPoint& point);
			};

			/// <summary>
			/// 街景点对象的集合
			/// </summary>
			class  EV_Spatial3DStreetView_DLL CStreetPointVector : public EarthView::World::Core::CAllocatedObject
			{
			ev_private:
				typedef vector<EarthView::World::Spatial::Download::CStreetPoint> InternalVector;
				typedef InternalVector::iterator iterator;
				typedef InternalVector::const_iterator const_iterator;
				typedef InternalVector::reverse_iterator reverse_iterator;
				typedef InternalVector::const_reverse_iterator const_reverse_iterator;
				typedef InternalVector::reference reference;
				typedef InternalVector::const_reference const_reference;
				typedef InternalVector::value_type value_type;
				RESERVE_CONTAINER_FUNCTION_VECTOR(mVector); 			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				/// <summary>
				/// 集合插入元素
				/// </summary>
				/// <param name="pos">迭代器</param>
				/// <param name="t">Handle标识</param>
				/// <returns>插入后的键值对</returns>
				iterator insert(_in iterator pos, _in EarthView::World::Spatial::Download::CStreetPoint& t)
				{
					return mVector.insert(pos, t);
				}

			private:
				InternalVector mVector;
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CStreetPointVector(_in EarthView::World::Core::CNameValuePairList *pList)
				{
				}
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CStreetPointVector()
				{
				}
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStreetPointVector();
				/// <summary>
				/// 在容器末尾添加元素
				/// </summary>
				/// <param name="t">元素值</param>
				/// <returns></returns>
				void push_back(_in EarthView::World::Spatial::Download::CStreetPoint& t)
				{
					mVector.push_back(t);
				}

				/// <summary>
				/// 删除最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void pop_back()
				{
					mVector.pop_back();
				}

				/// <summary>
				/// 返回第一个元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>第一个元素值</returns>
				EarthView::World::Spatial::Download::CStreetPoint& front()
				{
					return mVector.front();
				}

				/// <summary>
				/// 返回最后元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>最后元素值</returns>
				EarthView::World::Spatial::Download::CStreetPoint& back()
				{
					return mVector.back();
				}

				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial::Download::CStreetPoint& at(_in ev_uint32 pos)
				{
					return mVector[pos];
				}

				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const
				{
					return mVector.empty();
				}

				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const
				{
					return mVector.size();
				}

				/// <summary>
				/// 改变容器大小
				/// </summary>
				/// <param name="newSize">容器大小</param>
				/// <returns></returns>
				void resize(_in ev_size_t newSize)
				{
					mVector.resize(newSize);
				}

				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			};

			/// <summary>
			/// 街景线对象
			/// </summary>
			class  EV_Spatial3DStreetView_DLL CStreetLine : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CStreetLine();
				/// <summary>
				///析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStreetLine();
				/// <summary>
				///添加点
				/// </summary>
				/// <param name="point">点</param>
				/// <returns></returns>
				void add(EarthView::World::Spatial::Download::CStreetPoint& point)
				{
					mPoints.push_back(point);
				}
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name=""></param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial::Download::CStreetPoint& at(_in ev_uint32 pos)
				{
					return mPoints.at(pos);
				}
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const
				{
					return mPoints.empty();
				}
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const
				{
					return mPoints.size();
				}
				/// <summary>
				/// 清空线对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CStreetLine(_in EarthView::World::Core::CNameValuePairList *pList);
			private:
				CStreetPointVector mPoints;
			};

			/// <summary>
			/// 街景块对象
			/// </summary>
			class  EV_Spatial3DStreetView_DLL CStreetBlock : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="blockCode">块编号</param>
				/// <returns></returns>
				CStreetBlock(EVString blockCode);
				/// <summary>
				///析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CStreetBlock();
				/// <summary>
				///添加线
				/// </summary>
				/// <param name="line">线</param>
				/// <returns></returns>
				void add(EarthView::World::Spatial3D::CStreetLine& line);
				/// <summary>
				///添加孤立线
				/// </summary>
				/// <param name="line">线</param>
				/// <returns></returns>
				void addIsolateLine(EarthView::World::Spatial3D::CStreetLine& line);
				/// <summary>
				/// 清空块对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name="pos">索引</param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial3D::CStreetLine& at(_in ev_uint32 pos)
				{
					return mLines[pos];
				}
				/// <summary>
				/// 返回中间某元素
				/// </summary>
				/// <param name="pos">索引</param>
				/// <returns>元素值</returns>
				EarthView::World::Spatial3D::CStreetLine& getIsolateLine(_in ev_uint32 pos)
				{
					return mIsolateLines[pos];
				}
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool empty() const
				{
					return mLines.empty();
				}
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>为空返回true，否则false</returns>
				ev_bool isolateLineEmpty() const
				{
					return mIsolateLines.empty();
				}
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t size() const
				{
					return mLines.size();
				}
				/// <summary>
				/// 返回容器中元素数量大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回容器中元素数量大小</returns>
				ev_size_t isolateLineSize() const
				{
					return mIsolateLines.size();
				}
				/// <summary>
				/// 获取块编码
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getBlockCode()
				{
					return mCode;
				}
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CStreetBlock(_in EarthView::World::Core::CNameValuePairList *pList);
			private:
				EVString mCode;
				vector<CStreetLine> mLines;
				vector<CStreetLine> mIsolateLines;

				friend class CStreetLine;
			};

		}
	}
}

#endif