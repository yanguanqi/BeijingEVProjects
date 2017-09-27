#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_GEOMETRYEDITOR_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_GEOMETRYEDITOR_H
#include "mapcontrol/mapcontrolconfig.h"
#include "spatialinterface/igeometry.h"
#include "mapcontrol/editingobject.h"
namespace EarthView{ namespace World{ namespace Spatial{ namespace Display{
	class ISymbol;
}}}}
using namespace EarthView::World::Spatial::Geometry;
using namespace EarthView::World::Spatial::Display;
namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CDataEditor;
class CEditingSketch;
class CGeometryEditorPrivate;
class COperation;
/// <summary>
/// 几何编辑器
/// </summary>
class EV_MAPCONTROL_DLL CGeometryEditor : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="editor">数据编辑器</param>
	/// <returns></returns>
	CGeometryEditor( CDataEditor *ref_editor );
	/// <summary>
	/// 默认析构函数
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	~CGeometryEditor();

public:
	/// <summary>
	/// 设置要时行编辑的几何类型(点/线/面)
	/// </summary>
	/// <param name="type">要编辑的几何体类型</param>
	/// <returns></returns>
	ev_void setGeometryType( _in EVGeometryType type );
	/// <summary>
	/// 获取要编辑的几何类型(点/线/面)
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回要编辑的几何体类型</returns>
	EVGeometryType getGeometryType() const;

	/// <summary>
	/// 加载一个几何要素
	/// </summary>
	/// <param name="id">要素的ID号</param>
	/// <returns></returns>
	ev_void loadGeometry( _in ev_int32 id );
	/// <summary>
	/// 获取正在编辑的几何ID号
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回正在编辑的几何ID号</returns>
	ev_int32 getGeometryID() const;
	/// <summary>
	/// 获取描绘几何的风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>风格</returns>
	ISymbol * getSketchSymbol() const;
	/// <summary>
	/// 设置描绘几何的风格
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void setSketchSymbol( _in const ISymbol *symbol );
	/// <summary>
	/// 获取绘制顶点的风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>风格</returns>
	ISymbol * getSketchVertexSymbol() const;
	/// <summary>
	/// 设置绘制顶点的风格
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void setSketchVertexSymbol( _in const ISymbol *symbol );
	/// <summary>
	/// 获取终点的显示风格
	/// </summary>
	/// <param name=""></param>
	/// <returns>风格</returns>
	ISymbol * getEndVertexSymbol() const;
	/// <summary>
	/// 设置终点的显示风格
	/// </summary>
	/// <param name="symbol">风格</param>
	/// <returns></returns>
	ev_void setEndVertexSymbol( _in const ISymbol *symbol );

	/// <summary>
	/// 获取正在编辑的几何
	/// </summary>
	/// <param name=""></param>
	/// <returns>几何要素</returns>
	const IGeometry * getGeometry() const;
	/// <summary>
	/// 设置当前正在操作的对象类型
	/// </summary>
	/// <param name="objectType">对象类型</param>
	/// <returns></returns>
	ev_void setActiveType( EditingObjectType objectType );
	/// <summary>
	/// 获取当前正在操作的对象类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>对象类型</returns>
	EditingObjectType getActiveType() const;
	/// <summary>
	/// 获取当前正在操作的对象
	/// </summary>
	/// <param name=""></param>
	/// <returns>正在操作的对象</returns>
	CEditingObject * getActiveObject() const;
	/// <summary>
	/// 获取当前正在操作的部分
	/// </summary>
	/// <param name=""></param>
	/// <returns>正在操作的部分</returns>
	CEditingObject * getActivePart() const;
	/// <summary>
	/// 获取编辑描绘器
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	CEditingSketch * getEditingSketch() const;
	/// <summary>
	/// 更新描绘几何的显示
	/// </summary>
	ev_void updateSketch();
	/// <summary>
	/// 清空正在描绘的几何(该方法会废弃宏操作)
	/// </summary>
	ev_void reset();
	/// <summary>
	/// 注册对象,用于外部扩展.如果用户在外部写了一个CEditingObject派生类,需要首先注册.
	///		注册之后,用户可以调用setActiveType()方法把自己的对象类型设置进行,那么编辑器会
	///		自动在内部创建一个用户的对象来编辑,其操作方式与内置类型一样.
	/// </summary>
	/// <param name="object"></param>
	/// <returns></returns>
	ev_void registerObject( _in CEditingObject *object );
	/// <summary>
	/// 根据指定类型新建一个编辑对象
	/// </summary>
	/// <param name="objectType">新建的类型</param>
	/// <returns></returns>
	CEditingObject * newObject( EditingObjectType objectType );
private:
	CGeometryEditorPrivate *d_ptr;
ev_private:
	CGeometryEditor( EarthView::World::Core::CNameValuePairList *pList );
	friend class CEditingObject;
	friend class CEditingSketch;
	friend class CDataEditor;
};
}
}
}
}
#endif