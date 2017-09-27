#ifndef EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_DATAEDITOR_H
#define EARTHVIEW_WORLD_SPATIAL2D_CONTROLS_DATAEDITOR_H


#include "mapcontrol/mapcontrolconfig.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/isymbol.h"
#include "spatialinterface/igeometry.h"
#include "spatialdatabase/workcommandmanager.h"
using namespace EarthView::World::Spatial::Atlas;
using namespace EarthView::World::Spatial::Display;
using namespace EarthView::World::Spatial::GeoDataset;
using namespace EarthView::World::Spatial::Geometry;
namespace EarthView{ namespace World { namespace Spatial { namespace GeoDataset { class IFeatureClass; }}}}
namespace EarthView{ namespace World{ namespace Spatial{ namespace Atlas{ class IVectorLayer; }}}}


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
class CMapControl;
class CMapSnapper;
class CEditTask;
class CGeometryEditor;
class COperationManager;
class CFeatureHouse;
class CDataEditorPrivate;
/// <summary>
///数据编辑器
/// </summary>
class EV_MAPCONTROL_DLL CDataEditor : public EarthView::World::Core::CAllocatedObject
{
public:
	/// <summary>
	///数据编辑器构造函数
	/// </summary>
	/// <param name="ctrl">mapcontrol指针</param>
	/// <returns></returns>
	CDataEditor( CMapControl* ref_ctrl );
	/// <summary>
	///默认析构函数
	/// </summary>
	~CDataEditor();

public:
	/// <summary>
	/// 获取与之关联的控件
	/// </summary>
	/// <param name=""></param>
	/// <returns>mapcontrol指针</returns>
	CMapControl *parent() const;
	/// <summary>
	/// 开始编辑
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果开始编辑成功则返回true,反之则否</returns>
	ev_bool startEditing();
	/// <summary>
	/// 检测是否正在编辑
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果正在编辑则返回true,反之则否</returns>
	ev_bool isEditing() const;
	/// <summary>
	/// 停止编辑
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void stopEditing();
	/// <summary>
	/// 检测是否有过编辑操作
	/// </summary>
	/// <param name=""></param>
	/// <returns>如果有编辑操作则返回true,反之则否</returns>
	ev_bool hasEdits() const;
	/// <summary>
	/// 保存所有的编辑修改
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void saveEdits();
	/// <summary>
	/// 获取地图捕捉器
	/// </summary>
	/// <param name=""></param>
	/// <returns>地图捕捉器</returns>
	CMapSnapper * getMapSnapper() const;
	/// <summary>
	/// 获取正在编辑的图层
	/// </summary>
	/// <param name=""></param>
	/// <returns>图层</returns>
	ILayer * getEditingLayer() const;
	/// <summary>
	/// 获取正在编辑的图层的矢量类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>矢量类型图层</returns>
	IVectorLayer* getVectorLayer() const;
	/// <summary>
	/// 获取正在编辑的图层的数据集
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据集</returns>
	IFeatureClass* getFeatureClass() const;
	/// <summary>
	/// 设置新的编辑图层
	/// </summary>
	/// <param name="layer">待编辑的图层</param>
	/// <returns></returns>
	ev_void setEditingLayer( _in ILayer *ref_layer );
	/// <summary>
	/// 获取数据类型
	/// </summary>
	/// <param name=""></param>
	/// <returns>数据类型</returns>
	EVGeometryType getDataType() const;
	/// <summary>
	/// 获取当前的编辑任务
	/// </summary>
	/// <param name=""></param>
	/// <returns>编辑任务</returns>
	CEditTask * getCurrentTask() const;
	/// <summary>
	/// 设置当前的编辑任务
	/// </summary>
	/// <param name="task">编辑任务</param>
	/// <returns></returns>
	ev_void setCurrentTask( _in CEditTask *ref_task );
	/// <summary>
	/// 获取编辑的任务个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>任务个数</returns>
	ev_uint32 getTaskCount() const;
	/// <summary>
	/// 获取指定索引处的编辑任务
	/// </summary>
	/// <param name="index">索引</param>
	/// <returns></returns>
	CEditTask *getTask( ev_uint32 index ) const;
	/// <summary>
	/// 获取几何编辑器
	/// </summary>
	/// <param name=""></param>
	/// <returns>几何编辑器</returns>
	CGeometryEditor *getGeometryEditor() const;
	/// <summary>
	/// 获取正在编辑的图层中选中要素个数
	/// </summary>
	/// <param name=""></param>
	/// <returns>返回选中的要素个数</returns>
	ev_int32 getSelectedCount() const;		
	/// <summary>
	/// 删除选中所有要素
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void deleteSelected();
	COperationManager * getOperationManager() const;
	virtual ev_bool onKeyDown( _in ev_int32 keyCode, _in ev_int32 shift );
	virtual ev_bool onKeyUp( _in ev_int32 keyCode, _in ev_int32 shift );
private:
	ev_void dirtyLayerCache();
	ev_void refresh();
	CDataEditorPrivate *d_ptr;
	ev_bool m_bKey_Ctrl_Press;
ev_private:
	CDataEditor( EarthView::World::Core::CNameValuePairList *pList );
};
			}
		}
	}
}
#endif
