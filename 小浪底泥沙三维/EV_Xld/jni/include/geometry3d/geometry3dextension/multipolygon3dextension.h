#ifndef EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIPOLYGON3DEXTERNSION_H
#define EARTHVIEW_WORLD_SPATIAL3D_GEOMETRY_CMULTIPOLYGON3DEXTERNSION_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <graphic/scenemanager.h>
#include <graphic/rendertargetlistener.h>
#include <symbol/symbol3d.h>
#include <spatialobject/geometry/curvering.h>
#include <spatialobject/geometry/linestring.h>

#include "geometry3d/geometry3d_config.h"
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
#include "geometry3d/igeometry3dfactory.h"
#include "graphic/framelistener.h"
#include "graphic/manualobject.h"
#include "graphic/highlevelgpuprogrammanager.h"

#define n_bits				5
#define n_size				(1<<(n_bits-1))
#define n_size_m1			(n_size - 1)
#define n_size_sq			(n_size*n_size)
#define n_size_sq_m1		(n_size_sq - 1)

#define n_packsize			4

#define np_bits				(n_bits+n_packsize-1)
#define np_size				(1<<(np_bits-1))
#define np_size_m1			(np_size-1)
#define np_size_sq			(np_size*np_size)
#define np_size_sq_m1		(np_size_sq-1)

#define n_dec_bits			12
#define n_dec_magn			4096
#define n_dec_magn_m1		4095

#define max_octaves			32

#define noise_frames		256
#define noise_frames_m1		(noise_frames-1)

#define noise_decimalbits	15
#define noise_magnitude		(1<<(noise_decimalbits-1))

#define scale_decimalbits	15
#define scale_magnitude		(1<<(scale_decimalbits-1))

namespace EarthView{
	namespace World{
		namespace Spatial
		{
			namespace Display
			{
				class CFresnelSurface3DSymbol;
			}

			namespace Geometry
			{
				class CPolygon;
			}
		}
	}
}

namespace EarthView{
	namespace World{
		namespace Graphic
		{
			class CSceneManager;
			class CCamera;
			class CRenderTarget;
			class RenderTargetEvent;
			class CEntity;
			class CSceneNode;
			class CMovablePlane;
			class CMovableObject;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			struct V3;
			struct V2;
			/// <summary>
			/// 面类型的地理对象扩展到三维类
			/// 管理面类型的地理对象扩展到三维类方法
			/// </summary>
			class EV_GEOMETRY3D_DLL CMultiPolygon3DExtension : public EarthView::World::Geometry3D::CMultiGeometry3DExtension
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiPolygon3DExtension(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="scenemanager">场景管理器</param>
				/// <param name="groupName">资源组名称</param>
				/// <returns></returns>
				CMultiPolygon3DExtension(EarthView::World::Graphic::CSceneManager* ref_scenemanager,const EVString& groupName);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CMultiPolygon3DExtension();

			public:					
				/// <summary>
				/// 从地理对象扩展创建三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void build();
				/// <summary>
				/// 从地理对象扩展创建三维模型
				/// </summary>
				/// <param name="subMeshData">返回submesh数据信息</param>
				/// <returns></returns>
				virtual ev_void build(EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas);
				/// <summary>
				/// 挂接三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void render();
				/// <summary>
				/// 反挂接三维模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void derender();

				/// <summary>
				///  挂接渲染，需要重写
				/// <param name="n">将要挂接的场景节点</param>
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

				/// <summary>
				///  反挂接，需要重写
				/// </summary>
				/// <returns>成功返回被反挂接的父节点，失败返回NULL</returns>
				virtual EarthView::World::Graphic::CNode* detachFromNode();
				virtual ev_bool attachToScene();
				virtual ev_bool detachFromScene();
				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);

				/// <summary>
				/// 设置用户数据
				/// </summary>
				/// <param name="userData">用户数据</param>
				/// <returns></returns>
				virtual ev_void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData);
				/// <summary>
				/// 更新注记
				/// </summary>
				/// <param name="resetTextStyle">是否更新字体属性</param>
				/// <param name="derenderTxt">是否反挂接</param>
				/// <param name="reCreate">是否重新构建</param>
				/// <param name="attachLabel">是否挂接</param>
				/// <returns></returns>
				ev_void updateLabel(ev_bool resetTextStyle,ev_bool derenderTxt,ev_bool reCreate,ev_bool attachLabel,EarthView::World::Graphic::CCamera* pCamera);
				/// <summary>
				/// 根据相机位置进行相应刷新
				/// </summary>
				/// <param name="vCamera">相机位置</param>
				/// <returns></returns>
				virtual ev_void updateByCamera(EarthView::World::Graphic::CCamera* pCamera);

				/// <summary>
				/// 设置注记可见距离
				/// </summary>
				/// <param name="dis">可见距离</param>
				virtual ev_void setLabelVisibleDistance(ev_real64 dis);

				/// <summary>
				/// 设置有效角度,针对偏移
				/// </summary>
				/// <param name="angle">有效角度</param>
				/// <returns></returns>
				virtual void setLabelProjOffsetMaxAngle(Real angle);
				/// <summary>
				/// 设置是否进行偏移，主要是点扩展和简单线扩展
				/// </summary>
				/// <param name="useProjOffset">是否进行偏移</param>
				/// <returns></returns>
				virtual void setLabelProjOffsetEnable(ev_bool useProjOffset);
				/// <summary>
				/// 设置偏移常量的倍数，偏移常量是经验值，倍数越大偏移效果越明显，但不呈线性关系
				/// </summary>
				/// <param name="multi">偏移常量的倍数</param>
				/// <returns></returns>
				virtual void setLabelProjOffset(Real offset);

				/// <summary>
				/// 更新扩展实体材质
				/// </summary>
				/// <param name=""></param>
				/// <returns>是否成功</returns>
				virtual ev_bool updateMaterial();
				/// <summary>
				/// 获取mesh
				/// </summary>
				/// <param name=""></param>
				/// <returns>mesh</returns>
				virtual EarthView::World::Graphic::CMeshPtr getMesh();

				void updateFresnelSurface(EarthView::World::Graphic::CCamera* pCamera);

				/// <summary>
				/// 设置条件可见性
				/// </summary>
				/// <param name="visible">指定的ids是否可见</param>
				/// <param name="ids">指定的ids</param>
				/// <returns></returns>
				virtual ev_bool setVisibilityFilter(ev_bool visible,  const EarthView::World::Core::IntVector& ids);
				/// <summary>
				///  是否完成加载，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isLoaded();

				/// <summary>
				///  是否完成挂接，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool isAttached();

				/// <summary>
				///  加载资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool load();

				/// <summary>
				///  卸载模型资源，需要重写
				/// </summary>
				/// <returns>true成功，false失败</returns>
				virtual ev_bool unload();

				/// <summary>
				///  设置影像网格密度的最大边长，超过最大边长继续分割,默认为0时表示无穷大
				///  注意设置的最大边长的单位是和geometry的坐标参考系下单位一致
				/// <summary>
				ev_void setGranularity(Real maxSideLength);
				/// <summary>
				/// build时是否计算注记和统计专题图位置信息，如果需要开启注记或统计专题图设置为true
				/// </summary>
				/// <returns></returns>
				ev_void setNeedCalLabelPosition(ev_bool value);
			ev_internal:
				/// <summary>
				/// 获取内存流形式的注记位置信息，便于图层缓存
				/// </summary>
				/// <param name=""></param>
				/// <returns>内存流</returns>
				EarthView::World::Core::MemoryDataStreamPtr getLabelAndStatisticsPositionStream() const;
				/// <summary>
				/// 设置内存流形式的注记和统计专题图的位置信息
				/// </summary>
				/// <param name="labelPositions">内存流</param>
				/// <returns>是否成功</returns>
				ev_bool setLabelAndStatisticsPositionStream( EarthView::World::Core::MemoryDataStreamPtr& labelPositions );
				private:
					ev_bool m_bIsLoaded;
					ev_bool m_bIsAttached;
					ev_int8 mPolygonTesseMethod;
					Real mMaxSideLength;
					ev_bool mbIsWater;
			protected:
				class CFresnelSurfaceListener : public EarthView::World::Graphic::CSceneManager::CSceneManagerListener
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CFresnelSurfaceListener(EarthView::World::Graphic::CMaterialPtr& water,EarthView::World::Graphic::CSceneManager* mpSceneMgr);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~CFresnelSurfaceListener();

					virtual ev_void preUpdateSceneGraph(EarthView::World::Graphic::CSceneManager *source, EarthView::World::Graphic::CCamera *camera);

				private:
					EarthView::World::Graphic::CMaterialPtr mWaterMaterialPtr;
					EarthView::World::Graphic::CSceneManager* mpSceneMgr;

					ev_bool getCompositorEnable(EarthView::World::Graphic::CViewport* viewport);
				};

			ev_private:
				class CFresnelSurface : public EarthView::World::Graphic::CRenderTargetListener
				{
				ev_private:
					struct Triangle
					{
						EarthView::World::Spatial::Math::CVector3 p0;
						EarthView::World::Spatial::Math::CVector3 p1;
						EarthView::World::Spatial::Math::CVector3 p2;

						Triangle()
						{

						}

						Triangle(const EarthView::World::Spatial::Math::CVector3& v0,const EarthView::World::Spatial::Math::CVector3& v1,const EarthView::World::Spatial::Math::CVector3& v2)
						{
							p0 = v0;
							p1 = v1;
							p2 = v2;
						}
					};
				public:
					CFresnelSurface(const EVString& name,EarthView::World::Graphic::CSceneManager* pMgr,EarthView::World::Graphic::CEntity*& ent,EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* symbol);
					~CFresnelSurface(void);

				
				protected:
					virtual void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);
					virtual void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent &evt);

				private:
					void caculateState();
					void getObjByDistance(const EarthView::World::Graphic::CSceneNode* pNode, const EarthView::World::Spatial::Math::CVector3& pos);
					void setupSurface();

				private:
					//CFresnelSurfaceListener* mListener;
					EarthView::World::Graphic::CRenderTarget *mReflectionTarget;
					EarthView::World::Spatial::Math::CPlane mWaterPlane;
					EarthView::World::Graphic::CEntity *mpWater;
					EVString mPlaneName;
					//EVString mMaterialName;					

					Real mAltitudeBias;

					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* mpSymbol;

					EarthView::World::Spatial::Math::CVector3 mReflectPos, mReflectScale;
					EarthView::World::Spatial::Math::CQuaternion mReflectQ;

					EarthView::World::Spatial::Math::CVector3 mWaterPos;

					ev_bool mbShowImage;
					ev_bool mbShowOcean;

					EarthView::World::Graphic::CMovablePlane* mpReflectPlane;						
					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					EarthView::World::Graphic::CSceneNode* mpSubNode;
					vector<EarthView::World::Graphic::CMovableObject*> mInvisibleObjects;
					vector<EarthView::World::Graphic::CMovableObject*> mVisibleObjects;
					vector<EarthView::World::Graphic::CMovableObject*> mNeedReflectObjects;

					list<Triangle> mTriangles;

					friend class CMultiPolygon3DExtension;

				};
			class EV_GEOMETRY3D_DLL CWaterSurface : public EarthView::World::Core::CAllocatedObject
				{			
				public:
					struct Triangle
					{
						EarthView::World::Spatial::Math::CVector3 p0;
						EarthView::World::Spatial::Math::CVector3 p1;
						EarthView::World::Spatial::Math::CVector3 p2;

						EarthView::World::Spatial::Math::CVector3 sphereP0;
						EarthView::World::Spatial::Math::CVector3 sphereP1;
						EarthView::World::Spatial::Math::CVector3 sphereP2;

						Triangle()
						{
							/*trangleBoundBox.x =  EarthView::World::Spatial::Math::CMath::PI;
							trangleBoundBox.y = -EarthView::World::Spatial::Math::CMath::PI;
							trangleBoundBox.z = -EarthView::World::Spatial::Math::CMath::PI/2.0;
							trangleBoundBox.w =  EarthView::World::Spatial::Math::CMath::PI/2.0;*/
						}

						Triangle(const EarthView::World::Spatial::Math::CVector3& v0,const EarthView::World::Spatial::Math::CVector3& v1,const EarthView::World::Spatial::Math::CVector3& v2)
						{
							p0 = v0;
							p1 = v1;
							p2 = v2;

							/*trangleBoundBox.x =  EarthView::World::Spatial::Math::CMath::PI;
							trangleBoundBox.y = -EarthView::World::Spatial::Math::CMath::PI;
							trangleBoundBox.z = -EarthView::World::Spatial::Math::CMath::PI/2.0;
							trangleBoundBox.w =  EarthView::World::Spatial::Math::CMath::PI/2.0;*/
						}

						//EarthView::World::Spatial::Math::CVector4 trangleBoundBox;
					};
					 private:
					class CLakeFrameListener : public EarthView::World::Graphic::CFrameListener
					{
					public:
						CLakeFrameListener(CWaterSurface* pSurface);
						~CLakeFrameListener();

						virtual ev_bool frameStarted(const EarthView::World::Graphic::FrameEvent &evt);
						virtual ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);

					private:
						CWaterSurface* mSurface;
					};
					class CLakeDepthListener : public EarthView::World::Graphic::CRenderTargetListener
					{
					public:					
						CLakeDepthListener(CWaterSurface* pSurface);
						~CLakeDepthListener();
									
						void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
						void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
					private:
						CWaterSurface* mSurface;
						EarthView::World::Spatial::Math::CMatrix4 getTransformMatrix();
					};
					class CLakeRefractionListener : public EarthView::World::Graphic::CRenderTargetListener
					{
					public:					
						CLakeRefractionListener(CWaterSurface* pSurface);
						~CLakeRefractionListener();

						void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
						void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
					private:
						CWaterSurface* mSurface;
						ev_bool mShowImage;
						ev_bool mShowOcean;
						ev_bool mShowWater;
						EarthView::World::Spatial::Math::CMatrix4 mOldViewMatrix;
					};
					class CLakeReflectListener : public EarthView::World::Graphic::CRenderTargetListener
					{
					public:					
						CLakeReflectListener(CWaterSurface* pSurface);
						~CLakeReflectListener();

						void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
						void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
					private:
						CWaterSurface* mSurface;
						ev_bool mShowImage;
						ev_bool mShowOcean;
						ev_bool mShowWater;
						EarthView::World::Spatial::Math::CVector3 mOldWaterCenter;
						EarthView::World::Spatial::Math::CVector3 mOldIntersectPoint;
					};
					class CLakeMarkListener : public EarthView::World::Graphic::CRenderTargetListener
					{
					public:					
						CLakeMarkListener(CWaterSurface* pSurface);
						~CLakeMarkListener();

						void preRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
						void postRenderTargetUpdate(const EarthView::World::Graphic::RenderTargetEvent& evt);
					private:
						ev_bool mShowImage;
						ev_bool mShowOcean;
						ev_bool mShowWater;
						CWaterSurface* mSurface;
					};
					class CLakeGodRaysManager
					{
					public:
					
						enum MaterialType
						{					
							MAT_GODRAYS = 0,						
							MAT_DEPTH   = 1
						};
						enum ShaderMode
						{
							// HLSL
							SM_HLSL = 0,
							// Cg
							SM_CG   = 1,
							// GLSL
							SM_GLSL = 2
						};
						enum GpuProgram
						{
							// Vertex program
							GPUP_VERTEX   = 0,
							// Fragment program
							GPUP_FRAGMENT = 1
						};

						CLakeGodRaysManager(CWaterSurface* pSurface);
						~CLakeGodRaysManager();

						
						void update(const Real& timeSinceLastFrame);

						inline const bool& isCreated() const
						{
							return mCreated;
						}
						inline void setSimulationSpeed(const Real& Speed)
						{
							mSimulationSpeed = Speed;
						}
						inline const Real& getSimulationSpeed() const
						{
							return mSimulationSpeed;
						}

						void setNumberOfRays(const int& NumberOfRays);

						inline const int& getNumberOfRays() const
						{
							return mNumberOfRays;
						}
						inline void setRaysSize(const Real& Size)
						{
							mRaysSize = Size;
						}
						inline const Real& getRaysSize() const
						{
							return mRaysSize;
						}
						inline EarthView::World::Graphic::CSceneNode* getSceneNode()
						{
							return mProjectorSN;
						}
						inline void setVisible(const bool& Visible)
						{
							if (mCreated)
							{
								mManualGodRays->setVisible(Visible);
							}
						}
						inline const bool isVisible() const
						{
							if (!mCreated)
							{
								return false;
							}

							return mManualGodRays->isVisible();
						}
						inline EarthView::World::Graphic::CManualObject* getManualGodRays()
						{
							return mManualGodRays;
						}
						inline const EarthView::World::Spatial::Math::CVector4 getNoiseParameters() const
						{
							return EarthView::World::Spatial::Math::CVector4(mNoiseDerivation,
												 mNoisePositionMultiplier,
												 mNoiseYNormalMultiplier,
												 mNoiseNormalMultiplier);
						}
						inline void setNoiseParameters(EarthView::World::Spatial::Math::CVector4 Params)
						{
							mNoiseDerivation         = Params.x;
							mNoisePositionMultiplier = Params.y;
							mNoiseYNormalMultiplier  = Params.z;
							mNoiseNormalMultiplier   = Params.w;
						}

					private:
						void create();
						void createMaterials();
						void createGodRays();
						void remove();
						void updateRays();
						void updateProjector();
						EarthView::World::Spatial::Math::CVector2 calculateRayPosition(const int& RayNumber);
						bool fillGpuProgramsToPass(EarthView::World::Graphic::CPass* Pass,
							const EVString GpuProgramNames[2],
							const ShaderMode& SM,
							const EVString EntryPoints[2], 
							const EVString Data[2]);
						bool createGpuProgram(const EVString &Name,
							const ShaderMode& SM, 
							const GpuProgram& GPUP, 
							const EVString& EntryPoint, 
							const EVString& Data);

						EarthView::World::Graphic::CCamera *mProjectorCamera;
						EarthView::World::Graphic::CSceneNode *mProjectorSN;
						typedef map<EVString,EarthView::World::Graphic::ResourceHandle> ResourceHandleMap;
						EarthView::World::Graphic::CHighLevelGpuProgramPtr m_gpuProgramVSPtr;
						EarthView::World::Graphic::CHighLevelGpuProgramPtr m_gpuProgramPSPtr;
						EarthView::World::Graphic::CManualObject* mManualGodRays;
						EarthView::World::Graphic::CMaterialPtr mMaterials[2];
						CWaterSurface* mSurface;
						EVString mGodRaysMatName;
						EVString mGodRaysShaderNameVS;
						EVString mGodRaysShaderNamePS;
						bool mCreated;		
						Real mNoiseDerivation;				
						Real mNoisePositionMultiplier;					
						Real mNoiseYNormalMultiplier;						
						Real mNoiseNormalMultiplier;			
						Real mSimulationSpeed;
						int mNumberOfRays;
						Real mRaysSize;
					
								
					};
					class CLakeNoiseManager
					{
						public:
					
						struct Options
						{		
							int Octaves;			
							float Scale;
							float Falloff;
							float Animspeed;
							float Timemulti;
							float GPU_Strength;							
							EarthView::World::Spatial::Math::CVector3 GPU_LODParameters;
							Options()
								: Octaves(8)
								, Scale(0.085f)
								, Falloff(0.49f)
								, Animspeed(0.8f)
								, Timemulti(1.4f)
								, GPU_Strength(2.0f)
								, GPU_LODParameters(EarthView::World::Spatial::Math::CVector3(0.5f, 50, 150000))
							{
							}
							Options(const int   &_Octaves,
									const float &_Scale,
									const float &_Falloff,
									const float &_Animspeed,
									const float &_Timemulti)
								: Octaves(_Octaves)
								, Scale(_Scale)
								, Falloff(_Falloff)
								, Animspeed(_Animspeed)
								, Timemulti(_Timemulti)
								, GPU_Strength(2.0f)
								, GPU_LODParameters(EarthView::World::Spatial::Math::CVector3(0.5f, 50, 150000))
							{
							}
							Options(const int   &_Octaves,
									const float &_Scale,
									const float &_Falloff,
									const float &_Animspeed,
									const float &_Timemulti,
									const float &_GPU_Strength,
									const EarthView::World::Spatial::Math::CVector3 &_GPU_LODParameters)
								: Octaves(_Octaves)
								, Scale(_Scale)
								, Falloff(_Falloff)
								, Animspeed(_Animspeed)
								, Timemulti(_Timemulti)
								, GPU_Strength(_GPU_Strength)
								, GPU_LODParameters(_GPU_LODParameters)
							{
							}
						};

						CLakeNoiseManager();
						CLakeNoiseManager(const Options &Options);
						~CLakeNoiseManager();

						void update(const Real &timeSinceLastFrame);
						float getValue(const float &x, const float &y);

					private:
						
						/*static const ev_int32 n_bits = 5;
						static const ev_int32 n_size = (1<<(n_bits-1));
						static const ev_int32 n_size_m1 = (n_size - 1);
						static const ev_int32 n_size_sq	= (n_size*n_size);
						static const ev_int32 n_size_sq_m1 = (n_size_sq - 1);
						static const ev_int32 n_packsize = 4;
						static const ev_int32 np_bits = (n_bits+n_packsize-1);
						static const ev_int32 np_size = (1<<(np_bits-1));
						static const ev_int32 np_size_m1 = (np_size-1);
						static const ev_int32 np_size_sq = (np_size*np_size);
						static const ev_int32 np_size_sq_m1	= (np_size_sq-1);
						static const ev_int32 n_dec_bits = 12;
						static const ev_int32 n_dec_magn = 4096;
						static const ev_int32 n_dec_magn_m1	= 4095;
						static const ev_int32 max_octaves =	32;
						static const ev_int32 noise_frames = 256;
						static const ev_int32 noise_frames_m1 = (noise_frames-1);
						static const ev_int32 noise_decimalbits	= 15;
						static const ev_int32 noise_magnitude = (1<<(noise_decimalbits-1));
						static const ev_int32 scale_decimalbits	= 15;
						static const ev_int32 scale_magnitude = (1<<(scale_decimalbits-1));*/

						void _initNoise();
						void _calculeNoise();
						int _mapSample(const int &u, const int &v, const int &upsamplepower, const int &octave);
						float _getHeigthDual(float u, float v);
						int _readTexelLinearDual(const int &u, const int &v, const int &o);

						int noise[n_size_sq*noise_frames];
						int o_noise[n_size_sq*max_octaves];
						int p_noise[np_size_sq*(max_octaves>>(n_packsize-1))];	
						int *r_noise;
						float magnitude;

						double time;
						Options mOptions;
					};

					class CTriangleTree
					{
					public:
						CTriangleTree();
						~CTriangleTree();

						void addTriangle(const EarthView::World::Spatial::Math::CVector3& p0,
							             const EarthView::World::Spatial::Math::CVector3& p1,
							             const EarthView::World::Spatial::Math::CVector3& p2,
										 ev_bool isMergeBox);
						void initializeTree();
						ev_bool isTriangleInside(const Triangle& t);
						ev_bool isPointInside(Real lat,Real lon);
						void getCurTrangles(Real lat,Real lon,list<Triangle> &triangles);
						void getCurTrangles(EarthView::World::Graphic::CCamera* cam,const EarthView::World::Spatial::Math::CAxisAlignedBox &bound,list<Triangle> &outTriangles);
						ev_void getAllTriangles(list<Triangle*>& outTriangleList);
						void devideBox(EarthView::World::Spatial::Math::CVector4 (&box)[4]);
						inline ev_bool IsInitialized()
						{
							return mInitialize;
						}

						EarthView::World::Spatial::Math::CVector4 BoundingBox;
						list<Triangle> Triangles;
						CTriangleTree *ChildTreeArr[4];

					private:
						void mergeBox(const Triangle& t);
						void calculateTree(CTriangleTree *tree);
						
						void searchTriangles(Real lat,Real lon,CTriangleTree* curTree,list<Triangle> &triangles);
						void searchTriangles(CTriangleTree* curTree,list<Triangle*> &triangles);
						void searchTriangles(EarthView::World::Graphic::CCamera* cam,const EarthView::World::Spatial::Math::CAxisAlignedBox &bound,CTriangleTree* curTree,list<Triangle> &outTriangles);

						static const ev_uint32 mMaxCount = 1000;
						ev_bool mInitialize;
					};
					class CInitTrangleTreeThreadFunc : public EarthView::World::Core::CThreadFunc
					{
					public:
						CInitTrangleTreeThreadFunc(CWaterSurface* watersurface);
						virtual ~CInitTrangleTreeThreadFunc();
						ev_void operator()();
						ev_void run();
						ev_void setRunable(ev_bool runable);
					private:
						ev_bool mRunable;
						CWaterSurface* mWatersurface;
					};
					/*friend class CLakerFrameListener;
					friend class CLakerDepthListener;
					friend class CLakerRefractionListener;
					friend class CLakerReflectListener;
					friend class CLakerMarkListener;
					friend class CLakeGodRaysManager;
					friend class CLakeNoiseManager;*/

ev_private:
					struct Triangle1;
					struct TrianglesForDistance;
					TrianglesForDistance* mpTrianglesForDistance;
					
				public:
					CWaterSurface(const EVString& name,EarthView::World::Graphic::CSceneManager* pMgr,EarthView::World::Graphic::CEntity*& ent,EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* symbol = NULL,ev_bool needTree = true);
					
					~CWaterSurface();

					void init();

					void setVisible(ev_bool flag);
					inline ev_bool getVisible()
					{
						return mVisible;
					}
					list<Triangle>& getTriangles();
					ev_void getAllTriangles(list<Triangle*>& outTriangleList);
					void initTrangleTree();
					const EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* getSymbol();

					static ev_bool  depthTexUpdated;
					static ev_bool  reflectTexUpdated;
					static ev_bool  refRactTexUpdated;
					static ev_bool  markTexUpdated;
										
					inline ev_bool getReflectionEnable()
					{
						return mIsReflectionEnable;
					}
					inline void setReflectionEnable(ev_bool flag)
					{
						mIsReflectionEnable = flag;
					}

					inline ev_bool getReflectWithoutSky()
					{
						return mIsReflectWithoutSky;
					}
					inline void setReflectWithoutSky(ev_bool flag)
					{
						mIsReflectWithoutSky = flag;
					}

					inline ev_bool getRefractionEnable()
					{
						return mIsRefractionEnable;
					}
					inline void setRefractionEnable(ev_bool flag)
					{
						mIsRefractionEnable = flag;
					}

					inline ev_bool getUnderWaterEnable()
					{
						return mUnderWaterEnable;
					}
					inline ev_void setUnderWaterEnable(ev_bool flag)
					{
						mUnderWaterEnable = flag;
					}

					inline float getWaterDeep()
					{
						return mWaterDeep;
					}
					inline void setWaterDeep(float deep)
					{
						mWaterDeep = deep;
					}
					
					inline float getWavePower()
					{
						return mWavePower;
					}
					inline ev_void setWavePower(float power)
					{
						mWavePower = power;
					}

					inline float getLightPower()
					{
						return mLightPower;
					}
					inline ev_void setLightPower(float power)
					{
						mLightPower = power;
					}

					inline const EarthView::World::Graphic::CColourValue& getWaterColor()
					{
						return mWaterColor;
					}
					inline ev_void setWaterColor(const EarthView::World::Graphic::CColourValue& color)
					{
						mWaterColor = color;
					}

					inline float getFlowSpeed()
					{
						return mFlowSpeed;
					}
					inline ev_void setFlowSpeed(float speed)
					{
						mFlowSpeed = speed;
					}

					inline float getWaveDensity()
					{
						return mWaveDensity;
					}
					inline ev_void setWaveDensity(float density)
					{
						mWaveDensity = density;
					}

					inline float getUnderWaterLightPow()
					{
						return mUnderWaterLightPow;
					}
					inline ev_void setUnderWaterLightPow(float pow)
					{
						mUnderWaterLightPow = pow;
					}

					inline list<CMultiGeometry3DExtension*>& getExtensionList()
					{
						return mExtensionList;
					}

					/*inline list<Triangle>& getAllTriangles()
					{
						return mAllTriangles;
					}*/

                private:					
					void setLakeGpuParameters(const EarthView::World::Graphic::FrameEvent &evt);
					void setMovableObjectVisible(const EarthView::World::Graphic::CSceneNode* pNode, ev_bool checkReflectable,ev_bool checkRefractable,ev_bool checkWater,ev_bool checkGod,ev_bool setMatetial);
					void restoreMovableObjectVisible();
					void setMovableObjectMaterial(const EarthView::World::Graphic::CSceneNode* pNode,EarthView::World::Graphic::CMaterialPtr pMaterial);
					void restoreMovableObjectMaterial();
					ev_bool getIntersectPoint(EarthView::World::Spatial::Math::CRay &ray,
						                      EarthView::World::Spatial::Math::CVector3 &intersectPoint,
											  EarthView::World::Spatial::Math::CVector3 &outNormal);

					
					inline ev_bool getInitialize()
					{
						return mIsInitialize;
					}
					inline EarthView::World::Graphic::CSceneManager* getSceneManager()
					{
						return mpSceneMgr;
					}
					inline float getCausticsStart()
					{
						return mCausticsStart;
					}
					inline float getCausticsEnd()
					{
						return mCausticsEnd;
					}
					inline float getCausticsScale()
					{
						return mCausticsScale;
					}
					inline float getDepthLimit()
					{
						return mDepthLimit;
					}
					inline float getCausticsPower()
					{
						return mCausticsPower;
					}
					inline float getIsUnderWater()
					{
						return mIsUnderWater;
					}
					inline CLakeGodRaysManager *getGodRaysManager()
					{
						return mGodRaysManager;
					}
					inline EarthView::World::Graphic::CMaterialPtr getLakeMaterial()
					{
						return mLakeMaterial;
					}
					inline EarthView::World::Graphic::CEntity* getWater()
					{
						return mpWater;
					}
					inline EarthView::World::Spatial::Math::CVector3 getGodRaysExposure()
					{
						return mGodRaysExposure;
					}
					inline EarthView::World::Spatial::Math::CVector3 getGodRaysIntensity()
					{
						return mGodRaysIntensity;
					}
					inline EarthView::World::Spatial::Math::CVector3 getSunColor()
					{
						return mSunColor;
					}
					inline CLakeNoiseManager *getNoiseManager()
					{
						return mNoiseManager;
					}
					inline EarthView::World::Graphic::CMovablePlane* getReflectPlane()
					{
						return mpReflectPlane;
					}
					inline EarthView::World::Graphic::CSceneNode* getSubNode()
					{
						return mpSubNode;
					}
					
					inline EarthView::World::Graphic::CMaterialPtr getCompositorMaterial()
					{
						return mCompositorMaterial;
					}
					inline EarthView::World::Graphic::CMaterialPtr getDepthMaterial()
					{
						return mDepthMaterial;
					}
					inline EarthView::World::Graphic::CMaterialPtr getRedMaterial()
					{
						return mRedMaterial;
					}
					inline EarthView::World::Graphic::CMaterialPtr getMarkMaterial()
					{
						return mMarkMaterial;
					}
					inline ev_bool getCurIntersectWithWater()
					{
						return mCurIntersectWithWater;
					}
					inline EarthView::World::Spatial::Math::CVector3 getCurIntersectPoint()
					{
						return mCurIntersectPoint;
					}
					inline EarthView::World::Spatial::Math::CVector3 getCurIntersectNormal()
					{
						return mCurIntersectNormal;
					}
					inline ev_void setTriangleTreeInitialized(ev_bool flag)
					{
						mTriangleTreeInitialized = flag;
					}
						  

				private:
					EarthView::World::Graphic::CEntity *mpWater;
					EarthView::World::Graphic::CSceneManager* mpSceneMgr;
					EarthView::World::Spatial::Display::CFresnelSurface3DSymbol* mpSymbol;
					EVString mSurfaceName;
					CLakeFrameListener *mFrameListener;
					CLakeDepthListener *mDepthListener;
					CLakeRefractionListener *mRefractionListener;
					CLakeReflectListener *mReflectListener;
					CLakeMarkListener  *mMarkListener;

					list<Triangle> mCurTriangles;
					//list<Triangle> mAllTriangles;
					CTriangleTree mTriangleTree;
					ev_bool mTriangleTreeInitialized;
					CInitTrangleTreeThreadFunc *mThreadFunc;
					EarthView::World::Core::CThread *mThread;

					ev_bool mVisible;
					ev_bool mIsInitialize;
					EVString mCompositorName;
					EarthView::World::Graphic::CViewport *mViewPort;
					ev_bool mIsUnderWater;
					ev_bool mIsUnderPlane;
					EarthView::World::Graphic::CTexturePtr mDepthTex;
					EarthView::World::Graphic::CTexturePtr mRefractionTex;
					EarthView::World::Graphic::CTexturePtr mReflectTex;
					EarthView::World::Graphic::CTexturePtr mMarkTex;
					CLakeGodRaysManager *mGodRaysManager;
					EarthView::World::Core::CRecursiveMutex mLock;
					map<EarthView::World::Graphic::CMovableObject*, ev_uint32 > mVisibleObjects;
					map<EarthView::World::Graphic::CSubEntity*, EarthView::World::Graphic::CMaterialPtr > mEntityMaterialMap;
					map<EarthView::World::Graphic::CParticleSystem*, EVString > mParticleMaterialMap;
					EarthView::World::Graphic::CMaterialPtr mLakeMaterial;
					EarthView::World::Graphic::CMaterialPtr mCompositorMaterial;
					EarthView::World::Graphic::CMaterialPtr mDepthMaterial;
					EarthView::World::Graphic::CMaterialPtr mRedMaterial;
					EarthView::World::Graphic::CMaterialPtr mMarkMaterial;
					CLakeNoiseManager *mNoiseManager;
					EarthView::World::Graphic::CMovablePlane* mpReflectPlane;						
					EarthView::World::Graphic::CSceneNode* mpSubNode;
					EarthView::World::Spatial::Math::CVector3 mOldWaterCenter;
					EarthView::World::Spatial::Math::CVector3 mOldIntersectPoint;
					EarthView::World::Spatial::Math::CVector3 mCurIntersectPoint;
					EarthView::World::Spatial::Math::CVector3 mCurIntersectNormal;
					ev_bool mNeedIniTrangleTree;
					ev_bool mCurIntersectWithWater;
					static EVString depthTexName;
					static EVString reflectTexName;
					static EVString refRactTexName;
					static EVString markTexName;
					typedef map<EVString, ev_bool > ReflectionMap;
					static ReflectionMap reflectionMap;		
					static ReflectionMap markMap;	
					list<CMultiGeometry3DExtension*> mExtensionList;
					EVString mReflectTextureName;
					EVString mMarkTextureName;
					ev_bool mTriangleTreeInitializing;


					EarthView::World::Spatial::Math::CVector3 mWaveToward1;
					EarthView::World::Spatial::Math::CVector3 mWaveToward2;
					EarthView::World::Graphic::CColourValue	  mWaterColor;		
					EarthView::World::Spatial::Math::CVector3 mGodRaysExposure;
				    EarthView::World::Spatial::Math::CVector3 mGodRaysIntensity;
				    EarthView::World::Spatial::Math::CVector3 mSunColor;
					float mModelWave;
					float mEnviromentWave;
					float mBottomWave;  
					float mWaterDeep;   
					float mWavePower;
					float mLightPower;
				    Real  mWaterTime;
					float mCausticsStart;
					float mCausticsEnd;
					float mCausticsScale;
					float mDepthLimit;
					float mCausticsPower;
					float mFlowSpeed;
					float mWaveDensity;
					float mUnderWaterLightPow;
					float mWaveDir;

					ev_bool mIsReflectionEnable;
					ev_bool mIsRefractionEnable;
					ev_bool mUnderWaterEnable;
					ev_bool mCurReflectionEnable;
					ev_bool mCurRefractionEnable;
					ev_bool mCurCompositorEnable;
					ev_bool mIsReflectWithoutSky;

					void calculateTexCoord();
					float getWaterAltitude();
					void createCompositor();
					void checkUnderWater();
					void setupSurface();
					EVString getAltitudeString();
					void initializeReflectRTT();
					void initializeRTT(EVString name,EarthView::World::Graphic::CTexturePtr& tex,EarthView::World::Graphic::PixelFormat pFormat = EarthView::World::Graphic::PF_B8G8R8);
					void beginUpdateRTT(EarthView::World::Graphic::CTexturePtr tex,EarthView::World::Graphic::CRenderTargetListener* listener,
						                EarthView::World::Graphic::CColourValue colorValue,ev_bool autoUpdate = false);
					void updateRTT(EarthView::World::Graphic::CTexturePtr tex,EarthView::World::Graphic::CRenderTargetListener* listener,
						            EarthView::World::Graphic::CColourValue colorValue = EarthView::World::Graphic::CColourValue(0,0,0,1));
					void endUpdateRTT(EarthView::World::Graphic::CTexturePtr tex);
					void updateComGpuParameters();
					void updateReflectPlane();
					void updateLakeGpuParameters();
					void updateStatus();
					void getSurfaceTriangles();
					/*void getMeshTriangles(EarthView::World::Graphic::CSubMesh* subMesh,
						                  const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,
										  list<CMultiPolygon3DExtension::CFresnelSurface::Triangle>& triangles,
										  const CTriangleTree& tree);*/
					void getMeshTriangles(EarthView::World::Graphic::CSubMesh* subMesh,
						                  const EarthView::World::Spatial::Math::CMatrix4& worldMatrix);
					void updateCurTriangles();
					void updateReflectionMap();
					void clearReflectionMap();
					ev_bool needUpdateReflectionTex();
					ev_bool needUpdateMarkTex();
				};

				CWaterSurface* mpFresnelSurface;
				//CFresnelSurface* mpFresnelSurface;

				static EarthView::World::Core::CRecursiveMutex msRenderListenersLock;
				static map<EarthView::World::Graphic::CSceneManager*, CRenderQueueGeometryExtensionListener*> msRenderListeners;

				EarthView::World::Core::CReadWriteLock mLabelPosLock;
				map<ev_uint32,EarthView::World::Geometry3D::CMultiGeometry3DExtension::pos_movable> mLabelPositions;
				//map<ev_uint32,CMovableObject*> mLabels;
				ev_bool mLabelCreated;
				ev_bool mLabelAttached;
				ev_bool mGeoEntityAttached;
				ev_bool mbNeedCalLabelPosition;
			protected:
				/// <summary>
				/// 重置geoentity
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void resetGeoEntity();
				ev_bool updateTextStyle();
			private:		

				virtual ev_void build(EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas,ev_bool isVoid);

				ev_void ComputeNormals(list<EarthView::World::Geometry3D::CVertex>& vertices, list<ev_uint32>& indices,list<EarthView::World::Spatial::Math::CVector3>& normals);

				ev_void getPolygons(list<Spatial::Geometry::CPolygon*>& polygons, list<EarthView::World::Spatial::Display::ISymbol*>& symbols);

				void beginPolygonTessellation (EarthView::World::Spatial::Geometry::CPolygon* polygon, list<ev_uint32>& triangleIndexs, list<V3>& triangleVerts,ev_uint32 beginIndex) ;
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CMultiPolygon3DExtension(const CMultiPolygon3DExtension& obj);

				ev_void getCurveRingPoints(const EarthView::World::Spatial::Geometry::CCurveRing* curvering , list<EarthView::World::Spatial::Math::CVector3>& listCurveRingPoints);
				ev_void getRelativeCartesians(EarthView::World::Spatial::Geometry::CPolygon* polygon,list<EarthView::World::Spatial::Math::CVector3>& boxCoordset ,ev_uint32& beginIndex,list<ev_uint32>& boxIndices,ev_real32 altitude,ev_uint32 altiMode);
				ev_void getTessedRelativeCartesians(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,list<list<EarthView::World::Spatial::Math::CVector3> >& Points,list<list<EarthView::World::Spatial::Math::CVector3> >& coordset);
				ev_void getTopPolygonUV(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Display::CTextureInfo& textureInfo,list<V3>& verts,list<V2>& uvs);
				ev_void getTopPolygonUV(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,list<V3>& verts,list<V2>& uvs);
				ev_void getTopBuf(list<EarthView::World::Spatial::Geometry::CPolygon*>& polygons,list<EarthView::World::Spatial::Display::ISymbol*>& symbols,list<FillVert>& fillVerts,list<ev_uint32>& fillIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);
				ev_void getTopBuf(list<EarthView::World::Spatial::Geometry::CPolygon*>& polygons,list<EarthView::World::Spatial::Display::ISymbol*>& symbols,list<FillVert>& fillVerts,list<ev_uint32>& fillIndices);

				ev_void getTopBottomBuf(list<EarthView::World::Spatial::Geometry::CPolygon*>& polygons,list<EarthView::World::Spatial::Display::ISymbol*>& symbols,list<FillVert>& topVerts,list<ev_uint32>& topIndices,list<FillVert>& bottomVerts,list<ev_uint32>& bottomIndices,list<FillVert>& sideVerts,list<ev_uint32>& sideIndices,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);

				ev_void setEntityMaterial(EarthView::World::Graphic::CEntity* ent,EarthView::World::Spatial::Display::ISymbol* symbol,EarthView::World::Geometry3D::CSubMeshDataVector& subMeshDatas, ev_bool isVoid);
				ev_void createIndices(ev_uint32 fillIndex,ev_uint32 lineIndex,ev_uint32& fillIndexPos,ev_uint32& lineIndexPos,ev_uint32 count,list<ev_uint32>& fillIndices,list<ev_uint32>& lineIndices,ev_bool bClockWise);
				ev_bool createBuf(EarthView::World::Spatial::Geometry::CLineString* line,ev_bool isTextureSymbol,ev_int32 drawMode,ev_real32 top,ev_real32 bottom,ev_int32 altiMode,ev_real32 altitude,const EarthView::World::Spatial::Geometry::ISpatialReference* sr,ev_real32 unitX,ev_real32 texMaxX,ev_real32 texMinX,
					ev_uint32& sideColor,ev_uint32& lineColor,ev_real32 v,ev_real32 vv,list<FillVert>& exteriorVerts,list<LineVert>& lineVerts,ev_uint32& exteriorIndex,ev_uint32& lineIndex,ev_uint32& count);
				ev_void createBufImpl(const EarthView::World::Spatial::Math::CVector3& fp,const EarthView::World::Spatial::Math::CVector3& sp,Real minDevideLength,Real fu,Real su,ev_bool bSrNull,ev_int32 drawMode,ev_real32 top,ev_real32 bottom,ev_int32 altiMode,ev_real32 altitude,const EarthView::World::Spatial::Geometry::ISpatialReference* sr, 
					ev_uint32& sideColor,ev_uint32& lineColor,ev_real32 v,ev_real32 vv,list<FillVert>& exteriorVerts,list<LineVert>& lineVerts,ev_uint32& exteriorIndex,ev_uint32& lineIndex,ev_uint32& count);
				ev_void createLineBuf(EarthView::World::Spatial::Geometry::CLineString* line,ev_int32 altiMode,ev_real32 altitude,const EarthView::World::Spatial::Geometry::ISpatialReference* sr,ev_uint32& lineColor,ev_uint32& lineIndex,ev_uint32& lineIndexPos,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);
				ev_void createLineBufImpl(const EarthView::World::Spatial::Math::CVector3& fp,const EarthView::World::Spatial::Math::CVector3& sp,Real minDevideLength,ev_int32 altiMode,ev_real32 altitude,const EarthView::World::Spatial::Geometry::ISpatialReference* sr,ev_uint32& lineColor,ev_uint32& lineIndex,ev_uint32& lineIndexPos,list<LineVert>& lineVerts,list<ev_uint32>& lineIndices);
				ev_bool calculatorU(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,ev_real64 length,ev_real32 unitX,ev_real32 texMaxX,ev_real32 texMinX,ev_real32& u); 
				ev_bool processUnitXY(const EarthView::World::Spatial::Geometry::ISpatialReference* sr,const EarthView::World::Spatial::Geometry::CLineString* line,ev_real32 thickness,ev_real32 unitSizeX,ev_real32 unitSizeY,ev_real32& unitX,ev_real32& unitY);

				ev_void setTopGeoIndex(ev_int32 drawMode,ev_uint32 geometryIndex,ev_uint32 oldtop,ev_uint32 oldLine,ev_uint32 top,ev_uint32 line);
				ev_void setTopBottomGeoIndex(ev_int32 drawMode,ev_bool hasSide,ev_int32 extensionType,ev_uint32 geometryIndex,ev_uint32 oldTop,ev_uint32 oldBottom,ev_uint32 oldSide,ev_uint32 oldLine,ev_uint32 top,ev_uint32 bottom,ev_uint32 side,ev_uint32 line);

				ev_bool getColor(EarthView::World::Spatial::Display::ISymbol* symbol,ev_bool isTop,ev_uint32& fillColor,ev_uint32& lineColor);

				ev_void renderLabels();					
				ev_void createLabels();	
				ev_void derenderLabels();
				ev_void destroyLabels();

				ev_void renderLabel(ev_uint32 id);
				ev_void derenderLabel(ev_uint32 id);

				ev_void createFresnelSurface();
				ev_void processFilterVisibility();

				ev_void calTopBottom(Real h,Real top,Real bottom,Real altitude,Real& topz,Real& bottomz);
								
				ev_void devideTriangle(Real minSideLength,ev_uint32& beginIndex,ev_bool bSrNull,const V3& fP,const V3& sP,const V3& tP,list<V3>& triangleVerts,list<ev_uint32>& triangleIndexs);
				
			};

			class EV_GEOMETRY3D_DLL CMultiPolygon3DExtensionFactory : public EarthView::World::Spatial3D::Atlas::IGeometry3DFactory
			{
ev_private: 
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CMultiPolygon3DExtensionFactory(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param></param>
				/// <returns></returns>
				CMultiPolygon3DExtensionFactory();
				~CMultiPolygon3DExtensionFactory();
				/// <summary>
				/// 获取工厂类型
				/// </summary>
				/// <returns>工厂类型</returns>
				virtual ev_uint16       getFactoryType();
				virtual EarthView::World::Geometry3D::VisibleObjects createRenderable(EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj,EarthView::World::Graphic::CSceneManager* scenemanager);
				virtual void            destoryRenderable(EarthView::World::Geometry3D::CVisibleObject* visitObj);
				/// <summary>
				/// 添加一个要素
				/// </summary>
				/// <param name="layer">二维图层</param>
				/// <returns></returns>
				virtual ev_bool appendGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* ref_geoObject);
				/// <summary>
				/// 删除二维图形
				/// </summary>
				/// <param name="geometry">二维图形</param>
				/// <returns></returns>
				virtual ev_bool removeGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,EarthView::World::Spatial::CGeoObject* geoObject);
				/// <summary>
				/// 删除所有二维图形
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void removeAllGeoObjects(EarthView::World::Geometry3D::CVisibleObject* visibleObj);
				/// <summary>
				/// 获得二维图形指针
				/// </summary>
				/// <param name="index">二维图形索引</param>
				/// <returns>二维图形</returns>
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(EarthView::World::Geometry3D::CVisibleObject* visibleObj,ev_uint32 index) const;
				/// <summary>
				/// 获得三维实体数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>二维图形数量</returns>
				virtual ev_uint64 getGeoObjectCount(EarthView::World::Geometry3D::CVisibleObject* visibleObj) const;
			private:
				ev_uint16 mFactoryType;
			};

		}
	}
}
#endif
