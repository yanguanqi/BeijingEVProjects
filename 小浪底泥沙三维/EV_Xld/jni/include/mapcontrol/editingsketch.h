#ifndef _ENTIRE_GEOMETRY_EDIT_H
#define _ENTIRE_GEOMETRY_EDIT_H
#include "mapcontrol/mapcontrolconfig.h"
#include "spatialinterface/igeometry.h"
#include "spatialobject/geometry/point.h"
using namespace EarthView::World::Spatial::Geometry;
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
/// <summary>
/// 编辑描绘器.该对象包含了对一个geometry的所有操作(包括添加和删除"部分"等).用户可以通过该类修改几何图形
/// </summary>
class CEditingObject;
class CGeometryEditor;
class EV_MAPCONTROL_DLL CEditingSketch : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 析构函数
	/// </summary>
	~CEditingSketch();
	/// <summary>
	/// 获取编辑描绘器的类型(有且仅有三种 GT_MULTIPOINT,GT_POLYLINE,GT_POLYGON )
	/// </summary>
	/// <returns>类型</returns>
	virtual EVGeometryType getType() const;
	/// <summary>
	/// 返回正在描绘的几何图形(内存由内部维护)
	/// </summary>
	/// <returns>几何图形</returns>
	virtual const IGeometry * getGeometry() const;
	/// <summary>
	/// 结束当前正在绘制的部分,开启新的一部分
	/// </summary>
	/// <returns></returns>
	virtual ev_void finishPart();
	/// <summary>
	/// 平移对象
	/// </summary>
	/// <param name="dx">平移在X轴上的偏移量</param>
	/// <param name="cy">平移在Y轴上的偏移量</param>
	/// <returns></returns>
	virtual ev_bool translate( _in ev_real64 dx, _in ev_real64 dy );
	/// <summary>
	/// 旋转对象
	/// </summary>
	/// <param name="ref_x">旋转参考点的X坐标</param>
	/// <param name="ref_y">旋转参考点的Y坐标</param>
	/// <param name="angle">旋转角度</param>
	/// <returns></returns>
	virtual ev_bool rotate( _in ev_real64 x, _in ev_real64 y, _in ev_real64 angle );
	/// <summary>
	/// 对象中包含的顶点数量
	/// </summary>
	/// <returns>顶点数量</returns>
	ev_int32 getPointCount() const;
	/// <summary>
	/// 对象中包含部分个数
	/// </summary>
	/// <returns></returns>
	ev_int32 getPartCount() const;
	/// <summary>
	/// 获取指定部分的索引
	/// </summary>
	/// <param name="part">部分</param>
	/// <returns>部分的索引</returns>
	ev_int32 indexForPart( CEditingObject *part ) const;
	/// <summary>
	/// 获取指定索引处的部分
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns>部分</returns>
	CEditingObject * getPart( _in ev_int32 index ) const;
	/// <summary>
	/// 获取最后一个部分
	/// </summary>
	/// <returns>部分</returns>
	CEditingObject * getLastPart() const;
	/// <summary>
	/// 将新的一个部分插入到指定索引处
	/// </summary>
	/// <param name="part">待插入的部分</param>
	/// <param name="index">索引</param>
	/// <returns>返回是否插入成功</returns>
	ev_bool insertPart( _in CEditingObject *part,_in ev_int32 index );
	/// <summary>
	/// 移除指定的部分
	/// </summary>
	/// <param name="part">待移除的部分</param>
	/// <returns>返回是否移除成功</returns>
	ev_bool removePart( _in CEditingObject *part );
	/// <summary>
	/// 清空
	/// </summary>
	/// <returns>返回是否插入成功</returns>
	ev_void clear();
	/// <summary>
	/// 添加点.该方法在执行插入时,会检查当前是否有可用的部分,如果没有,则新建一个新的部分.
	/// </summary>
	/// <param name="part">待添加的点</param>
	/// <returns></returns>
	virtual ev_void addPoint( _in CPoint &pnt );
protected:
	ev_bool execTranslate( _in ev_real64 dx, _in ev_real64 dy );
	ev_bool execRotate( _in ev_real64 x, _in ev_real64 y, _in ev_real64 angle );
	ev_bool execInsertPart( _in CEditingObject *part,_in ev_int32 index );
	ev_bool execRemovePart( _in CEditingObject *part );
	virtual ev_bool loadGeometry( _in const IGeometry *geometry );
	//不可回退
	ev_void reset();

	ev_void update();
	CEditingSketch( _in CGeometryEditor* ref_editor ) : mpEditor( ref_editor ){}
	CGeometryEditor *mpEditor;
	ev_vector<CEditingObject*> mPartList,mFreeList;
ev_private:
	CEditingSketch( EarthView::World::Core::CNameValuePairList *pList );
	friend class CSketchOperationProxy;
};
			}
		}
	}
}
#endif
