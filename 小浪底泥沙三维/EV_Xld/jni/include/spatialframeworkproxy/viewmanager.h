#ifndef FRAMEWORKVIEWMANAGER_H
#define FRAMEWORKVIEWMANAGER_H


#include "frameworkproxy_config.h"
#include "core/stdheaders.h"
#include "core/global.h"
#include "spatialgui/ispatialcontrol.h"
#include "spatialgui/layoutactiveevent.h"
#include "layoutcontrol/layoutcontrol.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Controls{
				class CMapControl;
			}
		}
		namespace Spatial3D{
			namespace Controls{
				class CGlobeControl;
			}
		}
	}
}

// using namespace EarthView::World::Spatial::Atlas;
class CControlSpace;

class EV_FRAMEWORKPROXY_DLL CViewManager : public EarthView::World::Core::CBaseObject
{
ev_private:
	CViewManager(_in EarthView::World::Core::CNameValuePairList *pList);
public:
	enum ViewType
	{
		Globe,
		Map,
		None
	};
	/// <summary>
	/// 析构函数。
	/// </summary>
	/// <returns></returns>
	virtual ~CViewManager();

	/// <summary>
	/// 打开场景。如果该名称的场景已经存在，则返回已存在的场景对象。
	/// </summary>
	/// <param name="name">场景名称。</param>
	/// <param name="windowHandle">
	/// 创建场景对象需要的window句柄。
	/// 对于Windows，windowHandle的值只有一个，即WId，
	/// 对于Linux，windowHandle的值为"display:screen:WId"
	/// </param>
	/// <returns>创建的CGlobeControl对象。</returns>
	CControlSpace* openGlobe( const EVString& name, const EVString& windowHandle );

	CControlSpace* openGlobe( const EVString& name,_in ev_uint32 winWidth,_in ev_uint32 winHeight, const EVString& windowHandle );

	/// <summary>
	/// 打开场景。如果该名称的场景已经存在，则返回已存在的场景对象。
	/// </summary>
	/// <param name="name">场景名称。</param>
	/// <param name="windowHandle">
	/// 创建场景对象需要的window句柄。
	/// 对于Windows，windowHandle的值只有一个，即WId，
	/// 对于Linux，windowHandle的值为"display:screen:WId"
	/// </param>
	/// <param name="toolbarEnabled">指定要创建的工具栏的枚举(EV_ToolBarType)。</param>
	/// <returns>创建的CGlobeControl对象。</returns>
	CControlSpace* openGlobe( const EVString& name, const EVString& windowHandle, ev_uint32 toolbarEnabled );

	/// <summary>
	/// 获取指定名称的窗口的类型。
	/// </summary>
	/// <param name="name">窗口名称</param>
	/// <returns>CViewManager::ViewType</returns>
	CViewManager::ViewType getViewType(const EVString& name) const;

	/// <summary>
	/// 获取当前激活的窗口的类型。
	/// </summary>
	/// <returns>CViewManager::ViewType</returns>
	CViewManager::ViewType getActiveViewType() const;

	/// <summary>
	/// 关闭球。
	/// </summary>
	/// <param name="name">球名。</param>
	/// <returns></returns>
	ev_void closeGlobe(const EVString& name);

	/// <summary>
	/// 打开地图。如果该名称的地图已经存在，则返回已存在的地图对象。
	/// </summary>
	/// <param name="name">地图名称。</param>
	/// <returns>创建的CControlSpace对象。</returns>
	CControlSpace* openMap( const EVString& name );

	/// <summary>
	/// 打开地图。如果该名称的地图已经存在，则返回已存在的地图对象。
	/// </summary>
	/// <param name="name">地图名称。</param>
	/// <param name="toolbarEnabled">指定要创建的工具栏的枚举(EV_ToolBarType)。</param>
	/// <returns>创建的CControlSpace对象。</returns>
	CControlSpace* openMap( const EVString& name, ev_uint32 toolbarEnabled );

	/// <summary>
	/// 关闭地图。
	/// </summary>
	/// <param name="name">地图名。</param>
	/// <returns></returns>
	ev_void closeMap(const EVString& name);

	/// <summary>
	/// 打开布局
	/// </summary>
	/// <param name="name">布局名称</param>
	/// <returns></returns>
	CControlSpace* openLayout(const EVString& name);

	/// <summary>
	/// 关闭布局
	/// </summary>
	/// <param name="name">布局名称</param>
	/// <returns></returns>
	ev_void closeLayout(const EVString& name);

	/// <summary>

	/// <summary>
	/// 获取当前激活的CControlSpace对象。
	/// </summary>
	/// <returns>CControlSpace对象指针。</returns>
	CControlSpace* getActiveControlSpace() const;

	/// <summary>
	/// 获取上一个激活的CControlSpace对象。
	/// </summary>
	/// <returns>CControlSpace对象指针。</returns>
	CControlSpace* getLastActiveControlSpace() const;

	/// <summary>
	/// 获取当前激活的EarthView::World::Spatial::Atlas::ISpatialControl名称。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象名称。</returns>
	EVString getActiveControlName() const;

	/// <summary>
	/// 获取上一个激活的EarthView::World::Spatial::Atlas::ISpatialControl名称。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象名称。</returns>
	EVString getLastActiveControlName() const;

	/// <summary>
	/// 获取当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	EarthView::World::Spatial::Atlas::ISpatialControl* getActiveSpatialControl() const;

	/// <summary>
	/// 获取上一个激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	EarthView::World::Spatial::Atlas::ISpatialControl* getLastActiveSpatialControl() const;

	/// <summary>
	/// 获取指定名称的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="spatialControlName">名称。</param>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	EarthView::World::Spatial::Atlas::ISpatialControl* getSpatialControlByName(const EVString& spatialControlName) const;

	/// <summary>
	/// 获取指定名称的CControlSpace对象。
	/// </summary>
	/// <param name="spatialControlName">名称。</param>
	/// <returns>CControlSpace对象指针。</returns>
	CControlSpace* getControlSpaceByName(const EVString& spatialControlName) const;

	/// <summary>
	/// 获取指定EarthView::World::Spatial::Atlas::ISpatialControl的CControlSpace对象。
	/// </summary>
	/// <param name="ctrl">EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</param>
	/// <returns>CControlSpace对象指针。</returns>
	CControlSpace* getControlSpaceByControl(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl) const;

	/// <summary>
	/// 设置当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="spatialControl">EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</param>
	/// <returns>设置是否成功。</returns>
	ev_bool setActiveSpatialControl(EarthView::World::Spatial::Atlas::ISpatialControl* spatialControl);

	/// <summary>
	/// 设置当前激活的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="spatialControlName">名称。</param>
	/// <returns>设置是否成功。</returns>
	ev_bool setActiveSpatialControl(const EVString& spatialControlName);

	/// <summary>
	/// 获取EarthView::World::Spatial::Atlas::ISpatialControl个数。
	/// </summary>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl个数。</returns>
	ev_int32 getControlCount() const;

	/// <summary>
	/// 获取地图的个数。
	/// </summary>
	/// <returns>地图的个数。</returns>
	ev_int32 getMapControlCount() const;

	/// <summary>
	/// 获取球的个数。
	/// </summary>
	/// <returns>球的个数。</returns>
	ev_int32 getGlobeControlCount() const;

	/// <summary>
	/// 获取纸张布局的个数
	/// </summary>
	/// <returns>纸张布局的个数</returns>
	ev_int32 getLayoutControlCount() const;

	/// <summary>
	/// 获取指定index的EarthView::World::Spatial::Atlas::ISpatialControl对象。
	/// </summary>
	/// <param name="index">index。</param>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</returns>
	EarthView::World::Spatial::Atlas::ISpatialControl* getControl(int index) const;

	/// <summary>
	/// 判断某EarthView::World::Spatial::Atlas::ISpatialControl是否存在，如果不在就不要弄它。
	/// </summary>
	/// <param name="ctrl">EarthView::World::Spatial::Atlas::ISpatialControl对象指针。</param>
	/// <returns>EarthView::World::Spatial::Atlas::ISpatialControl是否存在。</returns>
	ev_bool isSpatialExists(EarthView::World::Spatial::Atlas::ISpatialControl* ctrl) const;

	/// <summary>
	/// 获取单例对象引用。
	/// </summary>
	/// <returns></returns>
	static CViewManager& getSingleton();

	/// <summary>
	/// 获取单例对象指针。
	/// </summary>
	/// <returns></returns>
	static CViewManager* getSingletonPtr();

private:

	EarthView::World::Spatial2D::Controls::CMapControl* createMap(const EVString& name);

	EarthView::World::Spatial3D::Controls::CGlobeControl* createGlobe(const EVString& name, const EVString& windowHandle);
	EarthView::World::Spatial3D::Controls::CGlobeControl* createGlobe(const EVString& name,_in ev_uint32 winWidth,_in ev_uint32 winHeight, const EVString& windowHandle);

	EarthView::World::Layout::Controls::CLayoutControl* createLayout(const EVString& name);

	ev_bool setActiveControlSpace(CControlSpace* spc);

	void removeControl(const EVString& name);

	CControlSpace* lastActiveControlSpace;

	CControlSpace* activeControlSpace;

	ev_vector<CControlSpace*> vectorControlSpace;

	CViewManager();

	bool closing;

	int  mapCount;
	int  globeCount;
	int  mLayputCount;

	// 单例对象。
	static CViewManager* mSingletonPtr;
};

#endif


