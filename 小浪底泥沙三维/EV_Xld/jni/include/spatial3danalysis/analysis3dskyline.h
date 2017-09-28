#ifndef EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CSKYLINE_H
#define EARTHVIEW_WORLD_SPATIAL3D_ANALYSIS_CSKYLINE_H

#include "ianalysis3dtool.h"
#include "geometry3d/geometry3d/wideline.h"
#include "graphic/rendertargetlistener.h"
#include "vector"
#include "globecontrol/globecontrol.h"
#include "graphic/simplerenderable.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Analysis
			{
				class ImageIndex
				{
				public:
					ImageIndex(){x=0;y=0;}
					ImageIndex(int tx,int ty){x=tx;y=ty;}
				public:
					int x;
					int y;
				};
				/// <summary>
				/// 天际线质量分类
				/// </summary>
				enum Analysis3DLineQuality
				{
					A3DLQ_High,  // 高
					A3DLQ_Medium,   // 中
					A3DLQ_Common,   // 普通
				};
				enum Analysis3dCameraType
				{
					A3DCamT_Global,//主相机
					A3DCamT_Define,//自定义相机
				};
				//定义表示相机的视椎体
				class CameraPyramid :public EarthView::World::Graphic::CSimpleRenderable
				{
				public:
					CameraPyramid(ev_real32 bottomW,ev_real32 bottonH,ev_real32 height);
					~CameraPyramid();
					ev_void create();
					EarthView::World::Spatial::Math::CMatrix4 mModelMatrix;  
				protected:
				private:
					ev_real32 mBottomWidth; 
					ev_real32 mBottomHeight;
					ev_real32 mHeight;
				};
				class CDepthAccessor;
				class EV_ANALYSIS3D_DLL CDepthMap
				{
					friend class CDepthAccessor;
ev_private:
					CDepthMap(EarthView::World::Core::CNameValuePairList* pList);
				public:
					CDepthMap();
					~CDepthMap();
					/// <summary>
					///获取位置(x,y)对应的深度值
					/// </summary>
					/// <param name="x">横坐标</param>
					/// <param name="y">纵坐标</param>
					///<return>深度值</return>
					ev_real32 getDepthAt(int x,int y);
					/// <summary>
					///获取渲染该深度图时使用的相机对应的视图投影矩阵
					/// </summary>
					///<return>视图投影矩阵</return>
					EarthView::World::Spatial::Math::CMatrix4 getViewProjMatrix();
					/// <summary>
					///获取深度图宽度
					/// </summary>
					///<return>宽度</return>
					int getWidth();
					/// <summary>
					///获取深度图高度
					/// </summary>
					///<return>高度</return>
					int getHeight();
				private:
					EarthView::World::Graphic::CPixelBox* mpDepthBox;
					EarthView::World::Spatial::Math::CMatrix4 mViewProjMatrix;
					EarthView::World::Graphic::CTexturePtr mpRttTexture;
				};
				///<summary>
				///获取深度值
				///</summary>
				class EV_ANALYSIS3D_DLL CDepthAccessor:public EarthView::World::Graphic::CRenderTargetListener
				{					
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CDepthAccessor(EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					///<param name="globeControl">globeControl</param>
					CDepthAccessor(EarthView::World::Graphic::CSceneManager* sceneMgr,EarthView::World::Spatial3D::Controls::CGlobeControl *globeControl);
					~CDepthAccessor();
					/// <summary>
					/// 获取自定义相机渲染到纹理后的深度图
					/// </summary>
					/// <param name="camera">相机</param>
					///<return>深度图</return>
					CDepthMap* getDepthMap(EarthView::World::Graphic::CCamera *camera);
					/// <summary>
					/// 获取主相机当前渲染到屏幕的深度图
					/// </summary>
					/// <param name="camera">相机</param>
					///<return>深度图</return>
					CDepthMap* getDepthMap();
					/// <summary>
					/// 计算屏幕上点(x,y)对应的世界坐标
					/// </summary>
					/// <param name="screenX">横坐标值</param>
					///<parem name="screenY">纵坐标值</param>
					///<return>深度图</return>
					EarthView::World::Spatial::Math::CVector3 calculateWorldPos(ev_real64 screenX,ev_real64 screenY);
				protected:
					/// <summary>
					/// 在渲染目标被渲染之前调用
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
					/// <summary>
					/// 在渲染目标被渲染之后调用
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
					/// <summary>
					/// 场景管理器
					/// </summary>
					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					EarthView::World::Spatial3D::Controls::CGlobeControl *mGlobeControl;
					ev_void createRsGroup();
					ev_void destroyRsGroup();
				
				private:
					EVString mRSName;
				};
				/// <summary>
				/// 天际线分析类
				/// 定义了天际线分析的所有操作
				/// </summary>
				class EV_ANALYSIS3D_DLL CAnalysis3DSkyLine : public EarthView::World::Spatial3D::Analysis::IAnalysis3DTool
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CAnalysis3DSkyLine(EarthView::World::Core::CNameValuePairList* pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pGlobeControl">地球控件</param>
					CAnalysis3DSkyLine(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pSceneMgr">场景管理器</param>
					CAnalysis3DSkyLine(EarthView::World::Graphic::CSceneManager* ref_pSceneMgr);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_pTerrainLayer"> 地形图层或图层组CTerrainLayer、CLocalTerrainLayer、CTerrainGroupLayer</param>
					CAnalysis3DSkyLine(EarthView::World::Spatial3D::Atlas::ITerrainLayer* ref_pTerrainLayer);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					~CAnalysis3DSkyLine();
					/// <summary>
					/// 不使用Tool
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void deactivate();
					/// <summary>
					/// 销毁所有渲染对象及结果
					/// </summary>
					/// <param name=""></param>
					virtual ev_void reset_impl();
					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name=""></param>
					virtual ev_void initialize_impl();
					/// <summary>
					/// 分析与测量的调用接口
					/// </summary>
					virtual ev_void renderAnalysis3D();
					/// <summary>
					/// 添加帧监听
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					/// <summary>
					/// 鼠标弹起事件触发
					/// </summary>
					/// <param name="button">键的标识(1代表左键，2代表右键，4代表中键)</param>
					/// <param name="shift">shift键是否同时被释放</param>
					/// <param name="x">光标位置x</param>
					/// <param name="y">光标位置y</param>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onMouseUp(ev_int32 button,ev_int32 shift,ev_int32 x,ev_int32 y);
					/// <summary>
					/// 鼠标双击事件触发
					/// </summary>
					/// <returns>是否继续向父控件发送该事件</returns>
					virtual ev_bool onDoubleClick(); 
					/// <summary>
					/// 获取观察点位置(经纬度和高程)
					/// </summary>
					/// <returns>位置坐标</returns>
					EarthView::World::Spatial::Math::CVector3 getViewPoint()const;
					/// <summary>
					/// 获取观察点离地面高度
					/// </summary>
					/// <returns>高度值</returns>
					ev_real64 getViewPointHei()const;
					/// <summary>
					/// 获取相机水平方向旋转角
					/// </summary>
					/// <returns>角度值</returns>
					ev_real64 getCameraRotation() const;
					/// <summary>
					/// 获取相机俯仰角
					/// </summary>
					/// <returns>角度值</returns>
					ev_real64 getCameraPitch()const;
					/// <summary>
					/// 获取相机类型(主相机还是自定义相机)
					/// </summary>
					/// <returns>类型</returns>
					Analysis3dCameraType getCameraType();
					/// <summary>
					/// 获取天际线质量
					/// </summary>
					/// <returns>类型</returns>
					Analysis3DLineQuality getLineQuality()const;
					/// <summary>
					/// 获取天际线颜色
					/// </summary>
					/// <returns>颜色值</returns>
					EarthView::World::Graphic::CColourValue getLineColor()const;
					/// <summary>
					/// 设置观察点位置
					/// </summary>
					///<param name="point">经度、维度、高程</param>
					void setViewPoint(EarthView::World::Spatial::Math::CVector3& point);
					//// <summary>
					/// 设置观察点离地高度
					/// </summary>
					///<param name="height">离地高度</param>
					void setViewPointHei(ev_real64 height);
					/// <summary>
					/// 设置相机水平方向旋转角
					/// </summary>
					///<param name="cameraRotaion">角度值</param>
					void setCameraRotation(ev_real64 cameraRotation);
					/// <summary>
					/// 设置相机俯仰角
					/// </summary>
					///<param name="cameraPitch">角度值</param>
					void setCameraPitch(ev_real64 cameraPitch);
					/// <summary>
					/// 设置天机线质量级别(高、中、低)
					/// </summary>
					///<param name="cameraRotaion">角度值</param>
					void setLineQuality(Analysis3DLineQuality lienQuality);
					/// <summary>
					/// 设置相机相机类型(主相机或自定义相机)
					/// </summary>
					///<param name="cameraRotaion">角度值</param>
					void setCameraType(Analysis3dCameraType camType);
					/// <summary>
					/// 设置天际线颜色
					/// </summary>
					///<param name="cameraRotaion">颜色值</param>
					void setLineColor(EarthView::World::Graphic::CColourValue lineColor);

				protected:
					//初始化
					ev_void skylineInit();
					//计算一些屏幕上的关键点的世界坐标
					ev_bool calculatePos(int screenPosX,int screenPosY);
					//根据鼠标点击位置计算相机参数并创建相机节点
					ev_void createCameraNode();
					//获取深度图
					ev_void getDepthMap();
					//渲染表示相机的视椎体
					ev_void renderPyramid();
					//渲染天际线
					ev_void renderSkyline();
					/// <summary>
					/// 计算分析结果，根据渲染效果，可以将渲染添加到此位置
					/// 如果需要与界面交互，在界面处重写analysis3dlistener方法
					/// </summary>
					virtual ev_void run();
					/// <summary>
					/// 释放可渲染对象
					/// </summary>
					/// <param name="isPart">是否仅释放本次分析中的对象</param>
					/// <param name="isAll">是否全部释放</param>
					virtual ev_void releaseManualObjects(ev_bool isPart,ev_bool isAll);
					/// <summary>
					/// 渲染分析的结果
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void addFrameListener(); 
					ev_void removeFrameListener();
					
				private:
					C_DISABLE_COPY(CAnalysis3DSkyLine);

					/// <summary>
					/// 观察点(经纬度和高程)
					/// </summary>
					EarthView::World::Spatial::Math::CVector3 mViewPoint;

					ev_real64 mViewPointHei;
					///相机方位角
					ev_real64 mCameraRotation;
					///相机俯仰角
					ev_real64 mCameraPitch;
					///天际线质量
					Analysis3DLineQuality mLineQuality;
					/// <summary>
					/// 目标线颜色
					/// </summary>
					EarthView::World::Graphic::CColourValue mLineColor;
					Analysis3dCameraType  mCameraType;
					
					///渲染出来的纹理中天际线上的点
					std::vector<ImageIndex> mLinePoints2D;
					EarthView::World::Spatial::Math::VertexList mLinePoints3D;
					/// <summary>
					/// 渲染线
					/// </summary>
					EarthView::World::Geometry3D::CWideLine* mpSkyLine;
					CDepthAccessor *mDepthAccessor;
					EarthView::World::Spatial::Math::CVector2 mselectScreenPos;
					CameraPyramid *mPyramid;
					//EarthView::World::Graphic::CCamera *mCamera;
					CDepthMap *mpDepthMap;
					EarthView::World::Spatial::Math::CVector3 mCameraPos;
					EarthView::World::Spatial::Math::CVector3 mCameraDirPos;
					EarthView::World::Graphic::CSceneNode* mCameraNode;
				};
			}
		}
	}
}

#endif