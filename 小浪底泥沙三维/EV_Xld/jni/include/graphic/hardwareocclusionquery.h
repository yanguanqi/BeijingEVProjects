#ifndef _HardwareOcclusionQuery__
#define _HardwareOcclusionQuery__
///// Precompiler options
#include <core/memoryallocatedobject.h>
#include "graphic_config.h"
namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            /*****
            * This is a abstract class that that provides the interface for the query class for
            * hardware occlusion.
            *
            * @author Lee Sandberg
            * Updated on 13/8/2005 by Tuan Kuranes email: tuan.kuranes@free.fr
            ****/
            class EV_GRAPHIC_DLL CHardwareOcclusionQuery : public EarthView::World::Core::CAllocatedObject
            {
                ///----------------------------------------------------------------------
                /// Public methods
                ///--
            public:
                /*****
                * Object public member functions
                ****/
                /*****
                * Default object constructor
                *
                ****/
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CHardwareOcclusionQuery();
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CHardwareOcclusionQuery(_in EarthView::World::Core::CNameValuePairList *pList);
                /*****
                * Object destructor
                ****/
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CHardwareOcclusionQuery();
                /*****
                * Starts the hardware occlusion query
                * @Remarks	Simple usage: Create one or more OcclusionQuery object one per outstanding query or one per tested object
                *				OcclusionQuery* m_pOcclusionQuery;
                *				createOcclusionQuery( &m_pOcclusionQuery );
                *				In the rendering loop:
                *				Draw all occluders
                *				m_pOcclusionQuery->startOcclusionQuery();
                *				Draw the polygons to be tested
                *				m_pOcclusionQuery->endOcclusionQuery();
                *
                *				UINT	m_uintNumberOfPixelsVisable;
                *				pullOcclusionQuery( &m_dwNumberOfPixelsVisable );
                *
                ****/
                /// <summary>
                /// 开始阻塞查询
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void beginOcclusionQuery();
                /*****
                * Ends the hardware occlusion test
                ****/
                /// <summary>
                /// 结束阻塞查询
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual void endOcclusionQuery();
                /*****
                * Pulls the hardware occlusion query.
                * @note Waits until the query result is available; use isStillOutstanding
                *		if just want to test if the result is available.
                * @retval NumOfFragments will get the resulting number of fragments.
                * @return True if success or false if not.
                ****/
                /// <summary>
                /// 是否拖入阻塞查询
                /// </summary>
                /// <param name="NumOfFragments">一小段的编号</param>
                /// <returns>拖入返回true，否则返回false</returns>
                virtual ev_bool pullOcclusionQuery(ev_uint32 &NumOfFragments);
                /*****
                * Let's you get the last pixel count with out doing the hardware occlusion test
                * @return The last fragment count from the last test.
                * Remarks This function won't give you new values, just the old value.
                ****/
                /// <summary>
                /// 获得最后查询像素总数
                /// </summary>
                /// <param name=""></param>
                /// <returns>像素总数</returns>
                ev_uint32 getLastQuerysPixelcount() const;

                /*****
                * Lets you know when query is done, or still be processed by the Hardware
                * @return true if query isn't finished.
                ****/
                /// <summary>
                /// 正在查询时，是否任然是显着的
                /// </summary>
                /// <param name=""></param>
                /// <returns>显着返回true，否则返回false</returns>
                virtual ev_bool isStillOutstanding();

                ////----------------------------------------------------------------------
                //// protected members
                ////--
            protected :
                //// numbers of visible pixels determined by last query
                ev_uint32 mPixelCount;
                //// is query hasn't yet returned a result.
                ev_bool		 mIsQueryResultStillOutstanding;
            };
        }
    }
}

#endif

