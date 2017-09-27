#ifndef _GEOGRID_H_
#define _GEOGRID_H_

#include "spatial3dengineconfig.h"
#include "graphic/manualobject.h"


namespace EarthView
{
    namespace World
    {
        namespace Spatial3D
        {
            struct SphericalBoundingBox
            {
                ev_real64 North;
                ev_real64 South;
                ev_real64 West;
                ev_real64 East;
            };

            class EV_Spatial3DEngine_DLL CGeoGrid : public CManualObject
            {

            public:
                CGeoGrid(const String& name);
                virtual ~CGeoGrid();
                
            ev_private:
                CGeoGrid(CNameValuePairList* pList);

            public:

                String getMovableType() const;                

                /// <summary>
                /// 唤醒移动对象的摄像机线程用于下一次渲染操作
                /// 内部方法
                /// </summary>
                /// <param name="cam">摄像机</param>
                /// <returns></returns>
                virtual void _notifyCurrentCamera(CCamera *cam);       

            private:
                void ComputeInterval();
                static ev_real64 computeGridValue(ev_real64 interval);
                static void computeViewRange(ev_real64 lat, ev_real64 lon, SphericalBoundingBox boundingBox);

            protected:
                SphericalBoundingBox m_visibleViewRange;
                ev_real64 m_latInterval;
                ev_real64 m_lonInterval;
                ev_int32 m_vertexCount;
                bool m_containsPI;
            };

        }
    }
}

#endif