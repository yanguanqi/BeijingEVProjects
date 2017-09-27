#ifndef MODELINFOPANELPARAMTEM_LIB__
#define MODELINFOPANELPARAMTEM_LIB__

#include "spatial3dproxy_config.h"
#include "core/stringinterface.h"
#include "mathengine/vector3.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				class ILayer;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{
			namespace ModelDB{

				class EV_SPATIAL3DPROXY_DLL CModelInfoPanelParam : public EarthView::World::Core::CStringInterface
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CModelInfoPanelParam(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					///  构造函数
					/// </summary>
					/// <returns></returns>
					/// <memo></memo>
					CModelInfoPanelParam();

					/// <summary>
					///  析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <memo></memo>
					~CModelInfoPanelParam();
				public:
					/// <summary>
					///  设置名称
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setName(EVString name);

					/// <summary>
					///  获取名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回名称</returns>
					/// <memo></memo>
					EVString getName();

					/// <summary>
					///  设置经度
					/// </summary>
					/// <param name="longdegree">经度</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setModelLongitude(ev_real64 longdegree);

					/// <summary>
					///  获取经度
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回经度</returns>
					/// <memo></memo>
					ev_real64 getModelLongitude();

					/// <summary>
					///  设置纬度
					/// </summary>
					/// <param name="ladegree">纬度</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setModelLatitude(ev_real64 ladegree);

					/// <summary>
					///  获取纬度
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回纬度</returns>
					/// <memo></memo>
					ev_real64 getModelLatitude();

					/// <summary>
					///  设置高程
					/// </summary>
					/// <param name="altitude">高程</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setAltitude(ev_real64 altitude);

					/// <summary>
					///  获取高程
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回高程</returns>
					/// <memo></memo>
					ev_real64 getAltitude();

					/// <summary>
					///  设置高度模式
					/// </summary>
					/// <param name="mode">高度模式</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setAltitudeMode(ev_int32 mode);

					/// <summary>
					///  获取高度模式
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回高度模式</returns>
					/// <memo></memo>
					ev_int32 getAltitudeMode();

					/// <summary>
					///  设置高度模式值
					/// </summary>
					/// <param name="alvalue">高度模式值</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setAltitudeValue(ev_real64 alvalue);

					/// <summary>
					///  获取高度模式值
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回高度模式值</returns>
					/// <memo></memo>
					ev_real64 getAltitudeValue();

					/// <summary>
					///  设置X轴旋转角度
					/// </summary>
					/// <param name="angleX">X轴旋转角度</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setAngleX(ev_real64 angleX);

					/// <summary>
					///  获取X轴旋转角度
					/// </summary>
					/// <returns>返回X轴旋转角度</returns>
					/// <memo></memo>
					ev_real64 getAngleX();

					/// <summary>
					///  设置Y轴旋转角度
					/// </summary>
					/// <param name="angleY">Y轴旋转角度</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setAngleY(ev_real64 angleY);

					/// <summary>
					///  获取Y轴旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回Y轴旋转角度</returns>
					/// <memo></memo>
					ev_real64 getAngleY();

					/// <summary>
					///  设置Z轴旋转角度
					/// </summary>
					/// <param name="angleZ">Z轴旋转角度</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setAngleZ(ev_real64 angleZ);

					/// <summary>
					///  获取Z轴旋转角度
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回Z轴旋转角度</returns>
					/// <memo></memo>
					ev_real64 getAngleZ();

					/// <summary>
					///  设置向X轴缩放
					/// </summary>
					/// <param name="zoomX">向X轴缩放比例</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setZoomX(ev_real64 zoomX);

					/// <summary>
					///  获取向X轴缩放
					/// </summary>
					/// <returns>返回向X轴缩放比例</returns>
					/// <memo></memo>
					ev_real64 getZoomX();

					/// <summary>
					///  设置向X轴缩放
					/// </summary>
					/// <param name="zoomY">向Y轴缩放比例</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setZoomY(ev_real64 zoomY);

					/// <summary>
					///  获取向Y轴缩放
					/// </summary>
					/// <returns>返回向Y轴缩放比例</returns>
					/// <memo></memo>
					ev_real64 getZoomY();

					/// <summary>
					///  设置向Z轴缩放
					/// </summary>
					/// <param name="zoomZ">向Z轴缩放比例</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setZoomZ(ev_real64 zoomZ);

					/// <summary>
					///  获取向Z轴缩放
					/// </summary>
					/// <returns>返回向Z轴缩放比例</returns>
					/// <memo></memo>
					ev_real64 getZoomZ();

					/// <summary>
					///  设置id
					/// </summary>
					/// <param name="id">ID</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setID(ev_uint32 id){mID = id;}

					/// <summary>
					///  获取id
					/// </summary>
					/// <returns>返回ID</returns>
					/// <memo></memo>
					ev_uint32 getID(){return mID;}

					/// <summary>
					///  设置选中部件id(名称+id)
					/// </summary>
					/// <param name="id">ID</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setComponentID(const EVString& id){mComponentID = id;}

					/// <summary>
					///  获取选中部件id(名称+id)
					/// </summary>
					/// <returns>返回ID</returns>
					/// <memo></memo>
					EVString getComponentID(){return mComponentID;}

					/// <summary>
					///  设置图层对象
					/// </summary>
					/// <param name="ref_layer">图层指针</param>
					/// <returns></returns>
					/// <memo></memo>
					ev_void setLayer(EarthView::World::Spatial::Atlas::ILayer* ref_layer){mpLayer=ref_layer;}

					/// <summary>
					///  获取图层对象
					/// </summary>
					/// <returns>返回图层指针</returns>
					/// <memo></memo>
					EarthView::World::Spatial::Atlas::ILayer* getLayer(){return mpLayer;}

ev_private:

					class  CCmdObjectID : public EarthView::World::Core::CParamCommand  //对象ID
					{
					public:
						CCmdObjectID();
						EVString doGet(const void *target) const;
						void doSet(void *target,  const EVString& val);
					};
					class  CCmdComponentID : public EarthView::World::Core::CParamCommand  //对象ID
					{
					public:
						CCmdComponentID();
						EVString doGet(const void *target) const;
						void doSet(void *target,  const EVString& val);
					};
					class  CCmdName : public EarthView::World::Core::CParamCommand //实体名称
					{
					public:
						CCmdName();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdLongitude :public EarthView::World::Core::CParamCommand  //经度
					{
					public:
						CCmdLongitude();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdLatitude : public EarthView::World::Core::CParamCommand  //纬度
					{
					public:
						CCmdLatitude();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdAltitude : public EarthView::World::Core::CParamCommand //高度模式
					{
					public:
						CCmdAltitude();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdAltitudeMode : public EarthView::World::Core::CParamCommand //高度模式
					{
					public:
						CCmdAltitudeMode();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdAltitudeValue : public EarthView::World::Core::CParamCommand //高度值
					{
					public:
						CCmdAltitudeValue();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdAngleX : public EarthView::World::Core::CParamCommand //X旋转
					{
					public:
						CCmdAngleX();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdAngleY : public EarthView::World::Core::CParamCommand //Y旋转
					{
					public:
						CCmdAngleY();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdAngleZ : public EarthView::World::Core::CParamCommand //Z旋转
					{
					public:
						CCmdAngleZ();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdZoomX : public EarthView::World::Core::CParamCommand // X轴缩放
					{
					public:
						CCmdZoomX();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdZoomY : public EarthView::World::Core::CParamCommand //Y轴缩放
					{
					public:
						CCmdZoomY();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					class  CCmdZoomZ : public EarthView::World::Core::CParamCommand //Z轴缩放
					{
					public:
						CCmdZoomZ();
						EVString doGet(const void *target) const;
						void doSet(void *target, const EVString &val);
					};
					
					static CCmdObjectID msModelID;
					static CCmdComponentID msComponentID;
					static CCmdName msNameCmd;
					static CCmdLongitude msLongitudeCmd;
					static CCmdLatitude msLatitudeCmd;
					static CCmdAltitude msAltitude;
					static CCmdAltitudeMode msAltitudeModeCmd;
					static CCmdAltitudeValue msAltitudeValueCmd;
					static CCmdAngleX msAngleXCmd;
					static CCmdAngleY msAngleYCmd;
					static CCmdAngleZ msAngleZCmd;
					static CCmdZoomX msZoomXCmd;
					static CCmdZoomY msZoomYCmd;
					static CCmdZoomZ msZoomZCmd;

				private:
					EVString mModelName;
					ev_int32 mAltitudeMode;
					EarthView::World::Spatial::Math::CVector3 mAngle;
					EarthView::World::Spatial::Math::CVector3 mPosition;
					EarthView::World::Spatial::Math::CVector3 mScale;
					ev_uint32 mID;
					EVString mComponentID;
					EarthView::World::Spatial::Atlas::ILayer* mpLayer;
				};
			}
		}
	}
}

#endif
