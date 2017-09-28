#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_IANALYSIS3DTOOL_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_IANALYSIS3DTOOL_H

#include "analysis3d_config.h"
#include "analysis3dlistener.h"
#include "altitudelistener.h"
#include "spatial3danalysisobject/math3dbaseobject.h"
#include "core/event.h"
#include "core/stringinterface.h"
#include "globecontrol/globecontrol.h"
#include "spatial3dengine/globecamera.h"
#include "graphic/scenenode.h"
#include "geometry3d/geometry3dextension/multipolyline3dextension.h"
#include "core/ev_logger.h"

#define DEBUG_Analysis3D 0

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class CAnalysisCameraListener;

				enum LengthUnit
				{
					LU_AutoMeterToKilometer,//达到一定数量级后，米会自动转成公里
					LU_Meter,//米
					LU_Kilometer,//公里
					LU_SeaMile//海里
				};

				enum AreaUnit
				{
					AU_AutoSquareMeterToSquareKilometer,//达到一定数量级后，平方米会自动转成平方公里
					AU_AutoMuToHectare,//达到一定数量级后，亩会自动转成公顷
					AU_SquareMeter,//平方米
					AU_SquareKilometer,//平方公里
					AU_Mu,//亩
					AU_Hectare//公顷
				};

				enum VolumeUnit
				{
					VU_AutoCubeMeterToCubeKilometer,//达到一定数量级后，立方米会自动转成立方公里
					VU_CubeMeter,//立方米
					VU_CubeKilometer//立方公里
				};

				/// <summary>
				/// 鼠标采点状态，结合不同情况适用不同组合
				/// </summary>
				enum MousePickState
				{
					/// <summary>
					/// 准备采第一个点
					/// </summary>
					MPS_ToFirst,
					/// <summary>
					/// 准备采第二个点
					/// </summary>
					MPS_ToSecond,
					/// <summary>
					/// 准备采第三个点
					/// </summary>
					MPS_ToThird,
					/// <summary>
					/// 连续采点中
					/// </summary>
					MPS_Picking,
					/// <summary>
					/// 采点结束
					/// </summary>
					MPS_Over
				};

				/// <summary>
				/// 三维分析渲染对象
				/// </summary>
				class EV_ANALYSIS3D_DLL CSpatial3DManualObject : public EarthView::World::Graphic::CMovableObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CSpatial3DManualObject(EarthView::World::Core::CNameValuePairList* pList);
				public:
					class EV_ANALYSIS3D_DLL CSubRenderable : public EarthView::World::Graphic::CRenderable
					{
ev_private:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="pList">构造函数参数键值对表</param>
						CSubRenderable(EarthView::World::Core::CNameValuePairList* pList);
					protected:
						/// <summary>
						/// 父对象
						/// </summary>
						EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* mpParent;
						/// <summary>
						/// 世界变换矩阵
						/// </summary>
						EarthView::World::Spatial::Math::CMatrix4 m_matWorldTransform;
						/// <summary>
						/// 渲染参数
						/// </summary>
						EarthView::World::Graphic::CRenderOperation mRenderOp;

						/// <summary>
						/// 资源组名
						/// </summary>
						EVString mGroupName;
						/// <summary>
						/// 材质名称
						/// </summary>
						EVString mMaterialName;
						/// <summary>
						/// 材质
						/// </summary>
						mutable EarthView::World::Graphic::CMaterialPtr mMaterial;

					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="ref_pParent">父对象</param>
						CSubRenderable(EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* ref_pParent);
						/// <summary>
						/// 析构函数
						/// </summary>
						/// <param name=""></param>
						~CSubRenderable();

						/// <summary>
						/// 渲染开始时向外通知的事件
						/// </summary>
						/// <param name="sm">渲染场景</param>
						/// <param name="rsys">渲染系统</param>
						/// <returns>如果自动执行渲染过程返回true,手动执行返回false</returns>
						virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
						/// <summary>
						/// 渲染完成时向外通知的事件
						/// </summary>
						/// <param name="sm">渲染场景</param>
						/// <param name="rsys">渲染系统</param>
						/// <returns></returns>
						virtual void postRender(EarthView::World::Graphic::CSceneManager *sm, EarthView::World::Graphic::CRenderSystem *rsys);
						/// <summary>
						/// 设置材质
						/// </summary>
						/// <param name="matName">材质名称</param>
						void setMaterial(const EVString& matName);
						/// <summary>
						/// 获取材质
						/// </summary>
						/// <returns>材质</returns>
						virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;

						/// <summary>
						/// 获取渲染参数
						/// </summary>
						/// <returns>渲染参数</returns>
						virtual EarthView::World::Graphic::CRenderOperation* getRenderOperation();

						/// <summary>
						/// 获取渲染参数
						/// </summary>
						/// <param name="op">渲染参数</param>
						void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
						/// <summary>
						/// 获取世界变换矩阵
						/// </summary>
						/// <param name="xform">世界变换矩阵</param>
						virtual void getWorldTransforms( EarthView::World::Spatial::Math::CMatrix4 *xform ) const;
						/// <summary>
						/// 获取光源列表
						/// </summary>
						/// <returns>光源列表</returns>
						const EarthView::World::Graphic::LightList& getLights(void) const;
						// Overridden from Renderable
						/// <summary>
						/// 返回渲染实体相对虚拟相机的直角深度
						/// </summary>
						/// <param name="cam">相机</param>
						/// <returns>直角深度</returns>
						virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera *cam) const;

						EarthView::World::Graphic::CMovableObject* getMovableObject()const{return mpParent;}
					private:
						EarthView::World::Spatial::Math::CMatrix4 mProjM;
					};

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="name">名称</param>
					CSpatial3DManualObject(const EVString& name);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CSpatial3DManualObject();
					/// <summary>
					/// 开始添加点
					/// </summary>
					/// <param name="materialName">材质名称</param>
					/// <param name="ro">渲染参数</param>
					void begin(const EVString& materialName, const EarthView::World::Graphic::CRenderOperation::OperationType& ro);
					/// <summary>
					/// 结束添加点
					/// </summary>
					void end();
					/// <summary>
					/// 添加点
					/// </summary>
					/// <param name="pos">点坐标</param>
					/// <param name="color">颜色</param>
					void addPoint(const EarthView::World::Spatial::Math::CVector3& pos, const EarthView::World::Graphic::CColourValue& color);
					/// <summary>
					/// 添加索引
					/// </summary>
					/// <param name="idx">索引值</param>
					void addIndex(const ev_uint32& idx);

					/// <summary>
					/// 唤醒移动对象的摄像机线程用于下一次渲染操作
					/// 内部方法
					/// </summary>
					/// <param name="cam">摄像机</param>
					/// <returns></returns>
					virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);

					/// <summary>
					/// 设置材质
					/// </summary>
					/// <param name="matName">材质名称</param>
					void setMaterial(const EVString& matName)
					{
						this->mpSection->setMaterial(matName);
					};

					/// <summary>
					/// 获取包围盒
					/// </summary>
					/// <returns>包围盒</returns>
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox(void) const
					{
						return this->mBox;
					};

					/// <summary>
					/// 获取包围盒半径
					/// </summary>
					/// <returns>包围盒半径</returns>
					Real getBoundingRadius() const
					{
						return mRadius;
					};


					virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue)
					{
						queue->addRenderable(this->mpSection, queue->getDefaultQueueGroup(), queue->getDefaultRenderablePriority()); 
					};

					void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor)
					{
						visitRenderables(visitor, false);
					};
					void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables)
					{
						visitor->visit(this->mpSection, 0, debugRenderables);
					};

					virtual EVString getMovableType() const
					{
						static EVString movType = "Spatial3DManualObject";
						return movType;
					};

				private:
					EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject::CSubRenderable* mpSection;
					ev_uint32 mVertexCountInBuffer;
					ev_uint32 mIndexCountInBuffer;
					ev_char* mpTempVertexBuffer;
					ev_size_t mTempVertexSize;
					ev_uint32* mpTempIndexBuffer;
					ev_size_t mTempIndexSize;
					ev_size_t mDeclSize;

					EarthView::World::Spatial::Math::CAxisAlignedBox mBox;
					Real mRadius;
					ev_bool mPrjMatrixChanged;
				};

				class EV_ANALYSIS3D_DLL CAnalysis3DEvent : public EarthView::World::Core::CEvent
				{
				public:
					CAnalysis3DEvent(ev_uint16 type);
					~CAnalysis3DEvent();
ev_private:
					CAnalysis3DEvent(EarthView::World::Core::CNameValuePairList *pList);
				public:			

					EarthView::World::Spatial::Atlas::IScene* getScene()const;
					ev_void setScene(EarthView::World::Spatial::Atlas::IScene* ref_scene);
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* getTool() const;
					ev_void setTool(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* ref_tool);

					ev_bool getResponseState()const;	
					ev_void setResponseState(ev_bool state);
					virtual _extfree EarthView::World::Core::CEvent* clone() const;

				protected:
					EarthView::World::Spatial::Atlas::IScene* mScene;
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* mpAnalysis3DTool;
					ev_bool mResponseState;
				};

				class EV_ANALYSIS3D_DLL CAnalysis3DEventObject : public EarthView::World::Core::CEventObject
				{
				public:
					CAnalysis3DEventObject(IAnalysis3DTool* ref_analysisTool);
					~CAnalysis3DEventObject();
ev_private:
					CAnalysis3DEventObject(EarthView::World::Core::CNameValuePairList *pList);

ev_internal:
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent *e);
				private:
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* mpAnalysis3DTool;
				};

				/// <summary>
				/// 三维空间分析的EarthView::World::Spatial::SystemUI::ITool
				/// </summary>
				class EV_ANALYSIS3D_DLL IAnalysis3DTool	: public EarthView::World::Spatial::SystemUI::ITool
				{
					friend class CAnalysis3DEventObject;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					IAnalysis3DTool(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					IAnalysis3DTool(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					IAnalysis3DTool(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					IAnalysis3DTool(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~IAnalysis3DTool();
					/// <summary>
					/// 重置
					/// </summary>
					ev_void reset();
					virtual ev_void reset_impl();
					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name=""></param>
					ev_void initialize();
					virtual ev_void initialize_impl();
					///<summary>
					///字体风格类的初始化
					///</summary>
					ev_void textStyleInit();
					/// <summary>
					/// 鼠标按键弹起事件
					/// </summary>
					/// <param name="button">鼠标键值</param>
					/// <param name="shift">Shift键值</param>
					/// <param name="x">横坐标</param>
					/// <param name="y">纵坐标</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标按键按下事件
					/// </summary>
					/// <param name="button">鼠标键值</param>
					/// <param name="shift">Shift键值</param>
					/// <param name="x">横坐标</param>
					/// <param name="y">纵坐标</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseDown(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标移动事件
					/// </summary>
					/// <param name="button">鼠标键值</param>
					/// <param name="shift">Shift键值</param>
					/// <param name="x">横坐标</param>
					/// <param name="y">纵坐标</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseMove(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 分析与测量的调用接口
					/// </summary>
					virtual ev_void renderAnalysis3D(){};

#pragma region Get/Set
					/// <summary>
					/// 获取工具类型
					/// </summary>
					/// <returns>类型</returns>
					virtual ev_uint32 getType() const;
					/// <summary>
					/// 获取抽象地球控件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					EarthView::World::Spatial3D::Controls::CGlobeControl* getGlobeControl();
					/// <summary>
					/// 获取三维计算对象
					/// </summary>
					/// <returns>三维计算对象</returns>
					virtual EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* getMath3D() const;
					/// <summary>
					/// 获取渲染字体风格
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回字体风格对象指针</returns>
					EarthView::World::Graphic::CTextureTextStyle* getTextureTextStyle() const;
					/// <summary>
					/// 设置是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>	
					virtual ev_void setVisible(ev_bool visible);
					/// <summary>
					/// 获取鼠标状态
					/// </summary>
					/// <returns>鼠标状态</returns>
					virtual const EarthView::World::Spatial3D::Analysis::MousePickState getMousePickState() const;
					/// <summary>
					/// 设置鼠标状态
					/// </summary>
					/// <param name="EarthView::World::Spatial3D::Analysis::MousePickState">鼠标状态</param>
					virtual ev_void setMousePickState(EarthView::World::Spatial3D::Analysis::MousePickState state);
					/// <summary>
					/// 获取当前地理坐标点
					/// </summary>
					/// <returns>当前地理坐标点</returns>
					EarthView::World::Spatial::Math::CVector3 getCurrentGeoPos() const;
					/// <summary>
					/// 设置当前地理坐标点
					/// </summary>
					/// <param name="value">当前地理坐标点</param>
					ev_void setCurrentGeoPos(EarthView::World::Spatial::Math::CVector3& value);
					/// <summary>
					/// 获取是否使用默认计算模式（相关参数采用推荐值）
					/// </summary>
					/// <returns></returns>
					ev_bool getDefaultCalcuMode();
					/// <summary>
					/// 设置是否使用默认计算模式（相关参数采用推荐值）
					/// </summary>
					/// <param name="value"></param>
					ev_void setDefaultCalcuMode(ev_bool value);
					/// <summary>
					/// 获取采样间隔距离
					/// </summary>
					/// <returns>采样间隔距离</returns>
					ev_real64 getSearchInterval() const;
					/// <summary>
					/// 设置采样间隔距离
					/// </summary>
					/// <param name="value">采样间隔距离</param>
					ev_void setSearchInterval(const ev_real64& value);
					/// <summary>
					/// 获取是否使用最高精度的DEM
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getUseHighestDem();
					/// <summary>
					/// 设置是否使用最高精度的DEM
					/// </summary>
					/// <param name="value"></param>
					ev_void setUseHighestDem(ev_bool value);
					/// <summary>
					/// 获取是否仅计算分析结果（不渲染）
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getIsCalculateOnly();
					/// <summary>
					/// 设置是否仅计算分析结果（不渲染）
					/// </summary>
					/// <param name="value"></param>
					ev_void setIsCalculateOnly(ev_bool value);
					/// <summary>
					/// 获取异步计算分析结果
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool getIsCalculateAsyn();
					/// <summary>
					/// 设置异步计算分析结果
					/// </summary>
					/// <param name="value"></param>
					ev_void setIsCalculateAsyn(ev_bool value);
					/// <summary>
					/// 获取是否在服务器端分析
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool getIsAnalysisInServer();
					/// <summary>
					/// 设置是否在服务器端分析
					/// </summary>
					/// <param name="bInServer">是否在服务器端分析</param>
					virtual ev_void setIsAnalysisInServer(ev_bool bInServer);
					/// <summary>
					/// 获取高程控件指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>高程控件</returns>
					virtual EarthView::World::Spatial3D::Analysis::CAltitudeListener* getAltitude3DListener();
					/// <summary>
					/// 设置高程控件指针
					/// </summary>
					/// <param name="listener">设置的指针</param>
					virtual ev_void setAltitude3DListener(EarthView::World::Spatial3D::Analysis::CAltitudeListener* ref_listener);
					/// <summary>
					/// 获取用户注册的监听
					/// </summary>
					/// <param name=""></param>
					/// <returns>用户注册的监听</returns>
					virtual const EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* getAnalysis3DListener() const;
					/// <summary>
					/// 设置注册的监听，用于处理界面的交互
					/// </summary>
					/// <param name="listener">注册的监听</param>
					virtual ev_void setAnalysis3DListener(EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* ref_listener);
					/// <summary>
					/// 获取分析工具的右侧属性框底层字符界面
					/// </summary>
					/// <returns>底层字符界面</returns>
					EarthView::World::Core::CStringInterface* getStringInterfacePtr();
					/// <summary>
					/// 设置分析工具的右侧属性框底层字符界面
					/// </summary>
					/// <param name="ref_pStringInterface">底层字符界面</param>
					ev_void setStringInterfacePtr(EarthView::World::Core::CStringInterface* ref_pStringInterface);
					/// <summary>
					/// 获取渲染点的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getRenderPointColor() const;
					/// <summary>
					/// 设置渲染点的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setRenderPointColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 获取渲染点的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>大小</returns>
					ev_uint8 getRenderPointSize();
					/// <summary>
					/// 设置渲染点的大小
					/// </summary>
					/// <param name="value">大小</param>
					/// <returns></returns>
					ev_void setRenderPointSize(ev_uint8 value);
					/// <summary>
					/// 获取渲染线的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getRenderLineColor() const;
					/// <summary>
					/// 设置渲染线的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setRenderLineColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 获取渲染线的宽度
					/// </summary>
					/// <param name=""></param>
					/// <returns>宽度</returns>
					ev_uint8 getRenderLineWidth();
					/// <summary>
					/// 设置渲染线的宽度
					/// </summary>
					/// <param name="value">宽度</param>
					/// <returns></returns>
					ev_void setRenderLineWidth(ev_uint8 value);
					/// <summary>
					/// 获取渲染多边形表面的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getRenderPolygonColor() const;
					/// <summary>
					/// 设置渲染多边形表面的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setRenderPolygonColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 获取渲染字体的颜色
					/// </summary>
					/// <param name=""></param>
					/// <returns>颜色</returns>
					const EarthView::World::Graphic::CColourValue& getRenderFontColor();
					/// <summary>
					/// 设置渲染字体的颜色
					/// </summary>
					/// <param name="value">颜色</param>
					/// <returns></returns>
					ev_void setRenderFontColor(const EarthView::World::Graphic::CColourValue& value);
					/// <summary>
					/// 获取渲染字体的大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>大小</returns>
					ev_uint8 getRenderFontSize();
					/// <summary>
					/// 设置渲染字体的大小
					/// </summary>
					/// <param name="value">大小</param>
					/// <returns></returns>
					ev_void setRenderFontSize(ev_uint8 value);
					/// <summary>
					/// 获取字体的可见性
					/// </summary>
					/// <param name=""></param>
					/// <returns>可见性</returns>
					ev_bool getFontVisible();
					/// <summary>
					/// 设置渲染字体是否可见
					/// </summary>
					/// <param name="visible">是否可见</param>
					ev_void setFontVisible(ev_bool visible);
#pragma endregion

				protected:
					/// <summary>
					/// 执行
					/// </summary>
					virtual ev_void run(){};
					/// <summary>
					/// 释放可渲染对象
					/// </summary>
					/// <param name="isAll">是否全部释放</param>
					virtual ev_void releaseManualObjects(ev_bool isAll);
					/// <summary>
					/// 释放可渲染对象
					/// </summary>
					/// <param name="isPart">是否仅释放本次分析中的对象</param>
					/// <param name="isAll">是否全部释放</param>
					virtual ev_void releaseManualObjects(ev_bool isPart,ev_bool isAll);
					/// <summary>
					/// 渲染顶点
					/// </summary>
					/// <param name="worldPoints">顶点列表（世界坐标）</param>
					/// <param name="materialName">材质名称</param>
					/// <param name="colorVal">顶点颜色</param>
					virtual EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* renderPoints(const EarthView::World::Spatial::Math::VertexList& worldPoints, const EVString& materialName, const EarthView::World::Graphic::CColourValue& colorVal);
					/// <summary>
					/// 渲染折线段
					/// </summary>
					/// <param name="worldPoints">世界坐标顶点列表</param>
					/// <param name="materialName">材质名称</param>
					/// <param name="colorVal">颜色</param>
					virtual EarthView::World::Spatial3D::Analysis::CSpatial3DManualObject* renderPolyline(const EarthView::World::Spatial::Math::VertexList& worldPoints,const EVString& materialName, const EarthView::World::Graphic::CColourValue& colorVal);
					/// <summary>
					/// 渲染折线段
					/// </summary>
					/// <param name="geoPoints">经纬度顶点列表</param>
					/// <param name="colorVal">颜色</param>
					/// <param name="widthVal">线宽</param>
					/// <param name="altMode">高度模式</param>
					virtual EarthView::World::Geometry3D::CMultiPolyline3DExtension* renderWidePolyline(const EarthView::World::Spatial::Math::VertexList& geoPoints,const EarthView::World::Graphic::CColourValue& colorVal,ev_uint32 widthVal,EarthView::World::Spatial::Utility::EVAltitudeMode altMode);
					/// <summary>
					/// 创建材质
					/// </summary>
					/// <param name="points">材质名称</param>
					/// <param name="materialName">是否为点</param>
					/// <param name="colorVal">点大小</param>
					virtual EarthView::World::Graphic::CMaterialPtr createMaterial(const EVString& materialName, const ev_bool& isPoint, const Real& pointSize);
					/// <summary>
					/// 创建字体对象
					/// </summary>
					/// <param name="str">字体对象所包含的字符串</param>
					/// <param name="textStyle">字体风格</param>
					EarthView::World::Graphic::CTextureMovableText* createTextFont(const EVString& str, EarthView::World::Graphic::CTextureTextStyle* textStyle);
					/// <summary>
					/// 渲染分析的结果(渲染放在主线程)
					/// </summary>
					virtual ev_void renderAnalysis3DInMainThread();
					/// <summary>
					/// 工具类型
					/// </summary>
					ev_uint32 mType;
					/// <summary>
					/// 数字地球控件
					/// </summary>
					EarthView::World::Spatial3D::Controls::CGlobeControl* mpGlobeControl;
					/// <summary>
					/// 场景管理器
					/// </summary>
					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					/// <summary>
					/// 地形图层或图层组
					/// </summary>
					EarthView::World::Spatial3D::Atlas::ITerrainLayer* mpTerrainLayer;
					/// <summary>
					/// 空间参考系统
					/// </summary>
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSpatialRef;
					/// <summary>
					/// 三维分析场景子节点
					/// </summary>
					EarthView::World::Graphic::CSceneNode* mpSceneAnalysisNode;
					/// <summary>
					/// 三维分析场景子节点的位置（世界坐标）
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mSceneAnalysisNodePosition;
					/// <summary>
					/// 三维分析场景子节点(挂接字体对象)
					/// </summary>
					EarthView::World::Graphic::CSceneNode* mpTextNode;
					/// <summary>
					/// 字体节点位置
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mTextNodePosition;
					/// <summary>
					/// 三维分析场景计算对象
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CMath3DBaseObject* mpAnalysisMathObj;
					/// <summary>
					/// 高程监听
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CAltitudeListener* mpAltitudeListener;
					/// <summary>
					/// 用户注册的界面监听
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CAnalysis3DListener* mpAnalysis3DListener;
					/// <summary>
					/// 相机监听对象
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CAnalysisCameraListener* mpCameraListener;
					/// <summary>
					/// 三维分析响应事件的对象
					/// </summary>
					EarthView::World::Spatial3D::Analysis::CAnalysis3DEventObject* mpAnalysisEventObject;
					/// <summary>
					/// 底层字符界面指针
					/// </summary>
					EarthView::World::Core::CStringInterface* mpStringInterface;

					/// <summary>
					/// 鼠标是否已按下
					/// </summary>
					ev_bool mIsMouseDown;
					/// <summary>
					/// 鼠标是否已双击
					/// </summary>
					ev_bool mIsDoubleClick;
					/// <summary>
					/// 鼠标是否在拖动
					/// </summary>
					ev_bool mIsDragging;
					/// <summary>
					/// 鼠标按键类型
					/// </summary>
					ev_int32 mButtonType;
					/// <summary>
					/// 鼠标状态
					/// </summary>
					EarthView::World::Spatial3D::Analysis::MousePickState mMouseState;
					/// <summary>
					/// 鼠标选中的经纬点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMouseUpGeoPt;
					/// <summary>
					/// 鼠标移动经过的经纬点
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMouseMoveGeoPt;
					/// <summary>
					/// 鼠标事件像素点坐标
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mMouseDownPosition;
					/// <summary>
					/// 分析工具中使用的经纬度点列表
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mSelectedGeoPts;
					/// <summary>
					/// 分析工具中使用的世界坐标点列表
					/// </summary>
					EarthView::World::Spatial::Math::VertexList mSelectedWorldPts;

					/// <summary>
					/// 字体可见性
					/// </summary>
					ev_bool mFontVisible;
					/// <summary>
					/// 渲染点颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mRenderPointColor;
					/// <summary>
					/// 渲染线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mRenderLineColor;
					/// <summary>
					/// 渲染多边形表面颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mRenderPolygonColor;
					/// <summary>
					/// 字体颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mRenderFontColor;
					/// <summary>
					/// 渲染点大小
					/// </summary>
					ev_uint8 mRenderPointSize;
					/// <summary>
					/// 渲染线宽度
					/// </summary>
					ev_uint8 mRenderLineWidth;		
					/// <summary>
					/// 字体名称
					/// </summary>
					EVString mRenderFontName;
					/// <summary>
					/// 字体大小
					/// </summary>
					ev_uint8 mRenderFontSize;
					/// <summary>
					/// 点材质名称
					/// </summary>
					EVString mMaterialPointName;
					/// <summary>
					/// 点材质指针
					/// </summary>
					EarthView::World::Graphic::CMaterialPtr mMaterialPointPtr;
					/// <summary>
					/// 线材质名称
					/// </summary>
					EVString mMaterialLineName;
					/// <summary>
					/// 线材质指针
					/// </summary>
					EarthView::World::Graphic::CMaterialPtr mMaterialLinePtr;
					/// <summary>
					/// 字体风格
					/// </summary>
					EarthView::World::Graphic::CTextureTextStyle* mpTextStyle;

					/// <summary>
					/// group The name of the resource group to attach this new resource to
					/// </summary>
					EVString mGroupName;
					/// <summary>
					/// 采样间隔距离
					/// </summary>
					ev_real64 mSearchInterval;
					/// <summary>
					/// 是否使用默认计算模式（相关参数采用推荐值）
					/// </summary>
					ev_bool mDefaultCalcuMode;
					/// <summary>
					/// 是否启用最高精度DEM
					/// </summary>
					ev_bool mIsUseHighestDem;
					/// <summary>
					/// 是否在服务器端分析
					/// </summary>
					ev_bool mAnalysisInServer;
					/// <summary>
					/// 本次分析或量测是否已初始化
					/// </summary>
					ev_bool mIsInit;
					///<summary>
					///本次分析或量测是否已经开始
					///</summary>
					ev_bool mIsStart;
					/// <summary>
					/// 上次分析或量测是否结束
					/// </summary>
					ev_bool mIsOver;
					/// <summary>
					/// 是否仅计算结果
					/// </summary>
					ev_bool mCalculateOnly;
					/// <summary>
					/// 是否异步计算分析结果
					/// </summary>
					ev_bool mCalculateAsyn;
					/// <summary>
					/// 上一个选中点是否为模型上的点
					/// </summary>
					ev_bool mIsLastIntersectModel;
					/// <summary>
					/// 上一个选中点是否为海面上的点
					/// </summary>
					ev_bool mIsLastIntersectSea;
					/// <summary>
					/// 上一个选中点是否为倾斜摄影模型上的点
					/// </summary>
					ev_bool mIsLastIntersectObqModel;

				private:
					C_DISABLE_COPY(IAnalysis3DTool);				

				public:
					/// <summary>
					/// 将数值转换为度分秒
					/// </summary>
					/// <param name="degree">数值</param>
					/// <returns>字符串</returns>
					static EVString toStringDms(ev_real64 degree);
					static EVString toStringDms(ev_real64 degree,ev_uint32 accuracy);
					/// static EVString toStringDms(ev_real64 degree,ev_uint8 accuracy=2);
					/// <summary>
					/// 数值转换为纬度
					/// </summary>
					/// <param name="degree">数值</param>
					/// <returns>字符串</returns>
					static EVString toStringDmsLon(ev_real64 degree);
					static EVString toStringDmsLon(ev_real64 degree,ev_uint32 accuracy);
					/// <summary>
					/// 数值转换为经度
					/// </summary>
					/// <param name="degree">数值</param>
					/// <returns>字符串</returns>
					static EVString toStringDmsLat(ev_real64 degree);
					static EVString toStringDmsLat(ev_real64 degree,ev_uint32 accuracy);
					/// <summary>
					/// 将长度格式化
					/// </summary>
					/// <param name="length">长度值</param>
					/// <returns>格式化后的字符串</returns>

					static EVString toFormatLength(ev_real64 length,LengthUnit unit=LU_AutoMeterToKilometer);
					/// <summary>
					/// 格式化面积
					/// </summary>
					/// <param name="area">面积值</param>
					/// <returns>格式化后的字符串</returns>
					static EVString toFormatArea(ev_real64 area,AreaUnit unit = AU_AutoSquareMeterToSquareKilometer);

// 					/// <summary>
// 					/// 格式化公顷面积
// 					/// </summary>
// 					/// <param name="area">面积值</param>
// 					/// <returns>格式化后的字符串</returns>
// 					static EVString toFormatAreaHektare(ev_real64 area);
// 					/// <summary>
// 					/// 将面积格式化为亩进制的字符串
// 					/// </summary>
// 					/// <param name="area">以平方米表示的面积</param>
// 					/// <returns>格式化后的字符串</returns>
// 					static EVString toFormatAreaMu(ev_real64 area);
					/// <summary>
					/// 将体积值格式化字符串
					/// </summary>
					/// <param name="area">体积以立方米为单位</param>
					/// <returns>格式化后的字符串</returns>
					static EVString toFormatVolume(ev_real64 volume,VolumeUnit unit = VU_AutoCubeMeterToCubeKilometer);
				};

				/// <summary>
				/// 三维分析相机监听类
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysisCameraListener :  public EarthView::World::Spatial3D::CGlobeCamera::CGlobeCameraListener
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysisCameraListener(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_tool">三维分析工具</param>
					CAnalysisCameraListener(EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* ref_tool);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysisCameraListener();
					/// <summary>
					/// 相机参数变化
					/// </summary>
					/// <param name="camera">相机对象</param>
					virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera);

				protected:
					/// <summary>
					/// 三维分析工具
					/// </summary>
					EarthView::World::Spatial3D::Analysis::IAnalysis3DTool* mpTool;
				};
			}
		}
	}
}
#endif
