#ifndef CLAMPLINE_H
#define CLAMPLINE_H


#include"spatial3dengine/spatial3dengineconfig.h"
#include "geometry3d/geometry3dextension/multipolyline3dextension.h"
#include "core/memoryallocatedobject.h"
#include "spatial3dengine/globecamera.h"
#include "core/object.h"
#include "spatial3dengine/geoscenemanager.h"
#include "core/thread.h"
#include "spatialobject/geoobject.h"
#include "geometry3d/visibleobject.h"
#include <queue>
#include "core/mutex.h"
#include <vector>
#include "core/event.h"
#include "core/object.h"
using namespace std;


namespace EarthView{
	namespace World{
		namespace Spatial3D{
class EV_Spatial3DEngine_DLL CClampLineExtension : public EarthView::World::Core::CAllocatedObject
{
ev_private:
	/// <summary>
	/// 构造函数
	/// </summary>
	/// <param name="pList">构造函数参数键值对表</param>
	/// <returns></returns>
	CClampLineExtension(_in EarthView::World::Core::CNameValuePairList *pList);

public:
	CClampLineExtension(EarthView::World::Graphic::CSceneManager* sceneMgr,const EVString group);
	~CClampLineExtension();
public:
	void load();
	void appendGeoObject(EarthView::World::Spatial::CGeoObject* ref_geoObject);
	void setVisible(ev_bool visible)
	{
		if(mRefreshRequest > 0)
		{
			isInVisible = true;	
		}
		else
		{
			if(mpFrontExtension)
			{
				mpFrontExtension->setVisible(visible);
			}
			
		}

		isVisible = visible;

	}
	ev_bool getVisible(){return isVisible;}
	void destroy();
	void setRenderingMinDistance(ev_real32  min){mMinDis = min;}
	void setRenderingMaxDistance(ev_real32 max){mMaxDis = max;}
	ev_real32 getRenderingMinDistance(){return mMinDis;}
	ev_real32 getRenderingMaxDistance(){return mMaxDis;}
	EarthView::World::Geometry3D::CMultiGeometry3DExtension* getRealExtension(){return mpFrontExtension;}
	void setSelectionColor(EarthView::World::Graphic::CColourValue color){mSelectionColor = color;}


protected:
	EarthView::World::Geometry3D::CMultiPolyline3DExtension* mpBackExtension;
	EarthView::World::Geometry3D::CMultiPolyline3DExtension* mpFrontExtension; 
	vector<EarthView::World::Spatial::CGeoObject* > mGeoObjects; 
	EVString mGroup;
	EarthView::World::Graphic::CSceneManager* mpSceneMgr;
	ev_int32 mRefreshRequest;

	class CCameraListenerInternal : public CGlobeCamera::CGlobeCameraListener
	{
	public:
		CCameraListenerInternal(CClampLineExtension* parent)
		{
			mParent = parent;
			mCamera = NULL;
		}
		~CCameraListenerInternal()
		{
			endListen();
		}
	public:
		virtual void cameraParamChanged(_in EarthView::World::Graphic::CCamera* camera)
		{
			if(mParent->getVisible() && mCamera == camera && mParent)
			{						
				//mParent->isNeedRefresh = true;
				if(mParent->mRefreshRequest < 2)
				{
					mParent->mMutex.lock();
					(mParent->mRefreshRequest)++;
					mParent->mMutex.unlock();
				}
				
			}		
		}
		virtual void cameraDestroyed( _in EarthView::World::Graphic::CCamera *cam)
		{
			if (mCamera == cam)
			{
				mCamera = NULL;
			}
		}
		void beginListen(EarthView::World::Graphic::CCamera *camera)
		{
			if(mCamera == NULL)
			{
				mCamera = camera;
				camera->addListener(this);
			}
		}
		void endListen()
		{
			if(mCamera != NULL)
			{
				mCamera->removeListener(this);
				mCamera = NULL;
			}
		}
		EarthView::World::Graphic::CCamera* getCamera()
		{
			return mCamera;
		}
	protected:
		CClampLineExtension* mParent;
		EarthView::World::Graphic::CCamera* mCamera;
	};
	friend class CCameraListenerInternal;
	CCameraListenerInternal* mpCameraListener;
	class CClampLineExtensionUpdator : public EarthView::World::Core::CEventObject
	{					
	public:
		CClampLineExtensionUpdator(CClampLineExtension* line)
			: EarthView::World::Core::CEventObject(false)
			, mpLine(line)
			, mTimerID(-1)
			, mInterval(800)//1.5秒刷新一次
		{

		}
			~CClampLineExtensionUpdator()
		{
			stop();
		}

		void refresh()
		{
			//onTimerEvent(NULL);
			if (-1 == mTimerID)
			{
				mTimerID = startTimer(mInterval);
			}
		}

		void stop()
		{		
			if (mTimerID != -1)
			{
				killTimer(mTimerID);
				mTimerID = -1;
			}
		}
	protected:
		virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent *e);
		
	private:
		CClampLineExtension* mpLine;
		ev_int32 mTimerID;
		ev_int32 mInterval;
	};
	friend class CClampLineExtensionUpdator;
	CClampLineExtensionUpdator *mpUpdator;

	class CClampLineExtensionRenderListener : public EarthView::World::Geometry3D::CVisibleObjectListener
	{
	public:
		CClampLineExtensionRenderListener(CClampLineExtension *line){mpLine = line;}
		virtual void notifyAttachedToScene(EarthView::World::Geometry3D::CVisibleObject* pObj);
	protected:
		CClampLineExtension *mpLine;
	};

	friend class CClampLineExtensionRenderListener;
	CClampLineExtensionRenderListener *mpRenderListener;
	class ClearSelectionListener:public EarthView::World::Core::CEventObject
	{
	public:
		ClearSelectionListener(CClampLineExtension *line){mpLine = line;};
		~ClearSelectionListener(){}
		ev_bool onEvent(_in EarthView::World::Core::CEvent *e );
	protected:
		CClampLineExtension* mpLine;

	};
	friend class ClearSelectionListener;
	ClearSelectionListener *mpClearSelectionListener;

	EarthView::World::Core::CMutex mMutex;
	ev_int32 isNeedAborted;
	ev_bool isInVisible;
	ev_bool isVisible;
	ev_real32 mMinDis;
	ev_real32 mMaxDis;
	EarthView::World::Graphic::CColourValue  mSelectionColor;

	

private:


};



		}
	}
}


#endif

