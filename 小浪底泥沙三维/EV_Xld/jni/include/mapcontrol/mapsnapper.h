#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MAPSNAPPER_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_MAPSNAPPER_H


#include "mapcontrol/mapcontrolconfig.h"
#include "spatialobject/geometry/point.h"
#include "spatialinterface/ilayer.h"
namespace EarthView{ namespace World{ namespace Spatial{ namespace Display{
	class ISymbol;
}}}}
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
/// <summary>
/// 捕捉属性类
/// </summary>
class EV_MAPCONTROL_DLL CSnapAttributes : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="mnTolerance">捕捉容差</param>
	/// <param name="mbSnapVertex">是否捕捉结点</param>
	/// <param name="mbSnapEdge">是否捕捉边</param>
	/// <returns></returns>
	CSnapAttributes() : mnTolerance( 10 ), mbSnapVertex( true ), mbSnapEdge( true )
	{}
	/// <summary>
	/// 析构函数
	/// </summary>
	~CSnapAttributes() {}

	ev_uint32 mnTolerance;
	ev_bool mbSnapVertex;
	ev_bool mbSnapEdge;
ev_private:
	CSnapAttributes( EarthView::World::Core::CNameValuePairList *pList ) : mnTolerance( 10 ), mbSnapVertex( true ), mbSnapEdge( true ){}
};
class CEditingObject;
class CMapSnapperPrivate;
/// <summary>
/// 捕捉结果类
/// </summary>
class EV_MAPCONTROL_DLL CSnappedResult : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 析构函数
	/// </summary>
	~CSnappedResult();

public:
	/// <summary>
	/// 获取捕捉到的点
	/// </summary>
	/// <param name=""></param>
	/// <returns>点坐标指针</returns>
	const EarthView::World::Spatial::Geometry::CPoint & getSnappedPoint() const{ return mSnapped; }
	/// <summary>
	/// 获取捕捉到的点的前一个点
	/// </summary>
	/// <param name=""></param>
	/// <returns>点坐标指针</returns>
	const EarthView::World::Spatial::Geometry::CPoint & getBeforePoint() const{ return mBefore; }
	/// <summary>
	/// 获取捕捉到的点的后一个点
	/// </summary>
	/// <param name=""></param>
	/// <returns>点坐标指针</returns>
	const EarthView::World::Spatial::Geometry::CPoint & getAfterPoint() const{ return mAfter; }
	/// <summary>
	/// 判断是否捕捉到顶点
	/// </summary>
	/// <param name=""></param>
	/// <returns>捕捉到顶点返回true,反之false</returns>
	ev_bool isVertex() const{ return mbVertex; }
	/// <summary>
	/// 判断点是否在边缘上
	/// </summary>
	/// <param name=""></param>
	/// <returns>捕捉到的点在线上,则返回true, 反之返回false</returns>
	ev_bool isOnEdge() const{ return mbOnEdge; }
	/// <summary>
	/// 判断点是否在几何内部
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果在几何对象内部则返回true,反之返回false</returns>
	ev_bool isAbove() const { return mbAbove; }
	/// <summary>
	/// 获取捕捉到的几何要素的id号
	/// </summary>
	/// <param name=""></param>
	/// <returns>要素ID号</returns>
	ev_int32 getFeatureId() const{ return mnFID; }
	/// 获取捕捉到的图层
	/// </summary>
	/// <param name=""></param>
	/// <returns>要素ID号</returns>
	EarthView::World::Spatial::Atlas::ILayer* getLayer() const{ return mpLayer; }
	/// <summary>
	/// <summary>
	/// 判断是否当前正在描述的几何是否被捕捉到
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果捕捉到正在描述的几何返回true,反之则否</returns>
	ev_bool isSketchSnapped() const { return mbSketchSnapped; }
	/// <summary>
	/// 获取捕捉到几何中部分的索引
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回几何部分的索引</returns>
	CEditingObject * getSnappedPart() const{ return mpPart; }
	CEditingObject * getSnappedEditingObject() const { return mpEditingObject; }

protected:
	ev_void reset();
	EarthView::World::Spatial::Atlas::ILayer *mpLayer;
	EarthView::World::Spatial::Geometry::CPoint mSnapped;
	EarthView::World::Spatial::Geometry::CPoint mBefore;
	EarthView::World::Spatial::Geometry::CPoint mAfter;
	ev_bool mbVertex;
	ev_bool mbOnEdge;
	ev_bool mbAbove;
	ev_int32 mnFID;
	//ILayer* mpLayer;
	ev_bool mbSketchSnapped;
	CEditingObject *mpPart,*mpEditingObject;
ev_private:
	CSnappedResult( EarthView::World::Core::CNameValuePairList *pList );
protected:
	CSnappedResult();
	friend class CMapSnapperPrivate;
	friend class CMapSnapper;
};

class CMapControl;
/// <summary>
///地图捕捉器
/// </summary>
class EV_MAPCONTROL_DLL CMapSnapper : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	///构造函数
	/// </summary>
	/// <param name="editor">编辑器</param>
	/// <returns></returns>
	CMapSnapper( _in CMapControl* ctrl );
	/// <summary>
	///默认析构函数
	/// </summary>
	~CMapSnapper();

public:
	/// <summary>
	/// 打开捕捉器
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void open();
	/// <summary>
	/// 检测捕捉器是否已经打开
	/// </summary>
	/// <param name=""></param>
	/// <returns>打开返回true,反之返回false</returns>
	ev_bool isOpen() const;
	/// <summary>
	/// 关闭捕捉器
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void close();
	/// <summary>
	/// 添加捕捉的图层
	/// </summary>
	/// <param name="layer">参与捕捉的图层</param>
	/// <returns></returns>
	ev_void addLayer( _in EarthView::World::Spatial::Atlas::ILayer *ref_layer );
	/// <summary>
	/// 移除不参与捕捉的图层索引
	/// </summary>
	/// <param name="index">图层的索引</param>
	/// <returns></returns>
	ev_void removeLayer( _in ev_uint32 index );
	/// <summary>
	/// 插入需要参与捕捉的图层
	/// </summary>
	/// <param name="index">插入的索引位置</param>
	/// <param name = "layer">图层指针</param>
	/// <returns></returns>
	ev_void insertLayer( _in ev_uint32 index, _in EarthView::World::Spatial::Atlas::ILayer *layer );
	/// <summary>
	/// 获取参与捕捉的图层个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层个数</returns>
	ev_uint32 getSnapLayerCount() const;

	/// <summary>
	/// 获取获取指定索引处的图层的捕捉属性
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层的捕捉属性</returns>
	CSnapAttributes* getLayerSnapAttributes( _in ev_uint32 index ) const;
	/// <summary>
	/// 获取描绘几何的捕捉属性
	/// </summary>
	/// <param name=""></param>
	/// <returns>捕捉属性</returns>
	CSnapAttributes* getSketchSnapAttributes() const;
					
	/// <summary>
	/// 执行捕捉
	/// </summary>
	/// <param name="x">X坐标(单位:像素)</param>
	/// <param name="y">Y坐标(单位:像素)</param>
	/// <returns>如果有捕捉结果则返回true,反之则返回false</returns>
	ev_bool snap( _in ev_real64 dx, _in ev_real64 dy );

	/// <summary>
	/// 获取捕捉的结果
	/// </summary>
	/// <param name=""></param>
	/// <returns>捕捉结果指针</returns>
	CSnappedResult * getSnappedResult() const;

	/// <summary>
	/// 获取捕捉标志的风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>风格</returns>
	const EarthView::World::Spatial::Display::ISymbol * getSnapSymbol() const;
	/// <summary>
	/// 设置捕捉标志的风格
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void setSnapSymbol( _in const EarthView::World::Spatial::Display::ISymbol *symbol );

	/// <summary>
	/// 清空
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void clear();

protected:
	CMapSnapperPrivate *d_ptr;
ev_private:
	CMapSnapper( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif