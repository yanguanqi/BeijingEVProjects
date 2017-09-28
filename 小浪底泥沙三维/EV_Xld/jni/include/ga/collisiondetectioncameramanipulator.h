#ifndef COLLISIONDETECTIONCAMERAMANIPULATOR_H 
#define COLLISIONDETECTIONCAMERAMANIPULATOR_H

#define USE_NOT_USE_GROUND 0

#include "ga/evga_config.h"
#include "ga/cameramanipulator.h"

#include "mathengine/matrix4.h"
#include "mathengine/vector3.h"
#include "mathengine/ray.h"

class btCollisionDispatcher;
class btDynamicsWorld;
class btBroadphaseInterface;
class btCollisionConfiguration;
class btConstraintSolver;
class btCollisionShape;
class btRigidBody;
class btBroadphasePair;
class btDispatcherInfo;
class btTriangleIndexVertexArray;
class btPairCachingGhostObject;
class btKinematicCharacterController;
class btGhostPairCallback;

class CConvertMeshToCollisionObjectThread;

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CSceneNode;
			class CMesh;
		}
		namespace Spatial3D
		{
			class CGlobeCamera;
			class CGeoSceneManager;
			namespace Controls
			{
				class CCameraPose
				{
				public:
					CCameraPose()
						:mDistance(0.0)
						,mHeading(0.0)
						,mTilt(0.0)
						,mLatitude(0.0)
						,mLongitude(0.0)
						,mTargetHeight(0.0)
					{

					}
					ev_real64 mDistance;
					ev_real64 mHeading;
					ev_real64 mTilt;
					ev_real64 mLatitude;
					ev_real64 mLongitude;
					ev_real64 mTargetHeight;
				};

				class CollisionObjectStruct
				{
				public:
					CollisionObjectStruct()
						:mSceneNode(NULL)
						,mCollisionShape(NULL)
						,mMeshRigidBody(NULL)
						,mMeshTriangleIndexVertexArray(NULL)
						,mAddToCollisionWorld(false)
						,mLastFrameNumber(0)
					{

					}
					EVString mName;
					EarthView::World::Graphic::CSceneNode* mSceneNode;
					EarthView::World::Spatial::Math::CMatrix4 mLocalMatrix;
					EVString mSceneNodeName;
					ev_vector<unsigned char*> mMeshVertexBufferVector;
					ev_vector<unsigned char*> mMeshIndexBufferVector;
					btCollisionShape* mCollisionShape;
					btRigidBody* mMeshRigidBody;
					btTriangleIndexVertexArray* mMeshTriangleIndexVertexArray;
					ev_bool mAddToCollisionWorld;
					ev_uint32 mLastFrameNumber;

				};

				class EV_GA_DLL CCollisionDetectionCameraManipulator:public EarthView::World::Spatial3D::Controls::CCameraManipulator
				{
ev_private:
					CCollisionDetectionCameraManipulator(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					friend class CConvertMeshToCollisionObjectThread;
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_manager">场景管理器</param>
					/// <param name="camera">相机</param>
					/// <param name="viewport">视口</param>
					/// <returns></returns>
					CCollisionDetectionCameraManipulator(EarthView::World::Spatial3D::CGeoSceneManager* ref_manager,_in EarthView::World::Graphic::CCamera* ref_camera,_in EarthView::World::Graphic::CViewport* ref_viewport);
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CCollisionDetectionCameraManipulator();

					/// <summary>
					/// 鼠标事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>			
					virtual ev_bool handleMouseEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* mouseEvent);

					/// <summary>
					/// 帧事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>		
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* frameEvent);

					/// <summary>
					/// 键盘事件处理接口
					/// </summary>
					/// <param name="guiEvent">事件对象</param>
					/// <returns></returns>		
					virtual ev_bool handleKeyEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);

					ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);

					ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);

					/// <summary>
					/// 由屏幕上的点计算出对应的射线
					/// </summary>
					/// <param name="x">屏幕上的点Ｘ坐标</param>
					/// <param name="y">屏幕上的点Ｙ坐标</param>
					/// <returns></returns>
					EarthView::World::Spatial::Math::CRay screenToScene(_in ev_real32 x,_in ev_real32 y);

ev_private:
					void setCollisioned(bool isCollisioned);
				protected:
					/// <summary>
					///计算缩放比率
					/// </summary>
					/// <param name="mouseWheelDelta">滚轮变化量</param>
					/// <returns></returns>
					ev_real64 calculateZoomFactor(_in ev_real32 mouseWheelDelta);

					ev_void reset();

					ev_bool calculateMoveable(_in EarthView::World::Spatial::SystemUI::CGUIEvent* const firstEvent,_in EarthView::World::Spatial::SystemUI::CGUIEvent* const secondEvent);

					ev_void prepareForMoveToTarget(_in EarthView::World::Spatial::SystemUI::CGUIEvent* keyEvent);

					ev_void moveToTarget(ev_real64 time);

				private:
					void initBullet();
					void destroyBullet();

					void initCameraShape();
					void destoryCameraShape();

					ev_void performLeftMouseMove(ev_real64 rotateAngle);
					ev_void performLeftMouseMove(ev_real64 rotateAngle,bool needSetLinearVelocity);

					ev_void performRightMouseMove(ev_real64 rotateAngle);


					EarthView::World::Spatial::Math::CMatrix3 computeAxisMatrix(const EarthView::World::Spatial::Math::CVector3& position);

					void clearCollisionObjects();

					void performMouseWheel();

					void performMouseWheel(ev_bool isWheelAheaded,ev_real64 moveDistance);

					void setCollisionObjects();

					ev_bool intersect(const EarthView::World::Spatial::Math::CRay& ray,EarthView::World::Spatial::Math::CVector3& intersectPoint);

					ev_bool mEnable;
					EarthView::World::Spatial3D::CGeoSceneManager* mGeosceneManager;
					EarthView::World::Spatial3D::CGlobeCamera* mGlobeCamera;
					btCollisionConfiguration* mCollisionConfiguration;
					btCollisionDispatcher* mDispatcher;
					btBroadphaseInterface* mBroadphase;
					btConstraintSolver* mConstraintSolver;
					btDynamicsWorld* mDynamicsWorld;

					btCollisionShape* mCameraCollisionShape;

					btPairCachingGhostObject* mCameraGhostObject;
					btGhostPairCallback* mCameraGhostPairCallback;
					btKinematicCharacterController* mCameraCharacterController;
					EarthView::World::Spatial::Math::CVector3 mCameraVelocity;
					ev_real64 mLastFrameTime;
					EarthView::World::Spatial::Math::CMatrix4 mLocalToWorldMatrix;

					ev_vector<btCollisionShape*> mCollisionShapes;
					ev_vector<btRigidBody*>	mRigidBodys;
					ev_vector<btTriangleIndexVertexArray*> mTriangleIndexVertexArrays;

#if USE_NOT_USE_GROUND
					void initTileCache();
					void destroyTileCache();
					ev_uint16* mIndexCache;
					ev_vector<ev_real32*> mVertexBufferCache;
#else
					void createGroundCollisionObject(const EarthView::World::Spatial::Math::CVector3& latlon);
					ev_int32 mGroundPointNumber;
					ev_uint16* mGroundIndex;
					ev_real32* mGroundVertexBuffer;
#endif
					ev_int32 mLastStepZoomTickCount;
					ev_bool mIsCollisioned;
					ev_real64 mlastMouseWheelEventTime;
					ev_bool mHasHandledMouseWheelEvent;
					ev_bool mIsWheelAheaded;
					ev_int32 mLastFrameNumber;
					ev_real64 mZoomFactor;
					ev_bool mIsLeftMouseButtonMoving;

					CCameraPose mOriginationCameraPose;
					CCameraPose mAimCameraPose;
					ev_bool mStartMoveToAim;
					ev_real64 mRotationAcceleration;
					ev_real64 mRotationDistance;
					ev_real64 mDistanceDetla;
					ev_real64 mDistanceAcceleration;
					ev_real64 mTileDetla;
					ev_real64 mTileAcceleration;
					ev_real64 mStartTime;
					CConvertMeshToCollisionObjectThread* mConvertMeshToCollisionObjectThread;

					ev_bool collisionObjectIsExist(const EVString& name,ev_uint32 currentFrameNumber);

					ev_void releaseCollisionObjectStructResource(CollisionObjectStruct& collisionObjectStruct);

					ev_void releaseAllCollisionObjectStructs();

					EV_MUTEX(mCollisionObjectMutex)
						ev_list<CollisionObjectStruct> mCollisionObjectStructList;
				};
			}
		}
	}
}



#endif

