#ifndef CMSRADAR_H
#define CMSRADAR_H

#include "radarobject.h"
#include "msradarcharacter.h"


namespace EarthView
{
    namespace IndustryEngine
    {
        namespace MilitaryEngine
        {
            namespace RadarLibrary
            {
                /// <summary>
                /// 机械扫描形雷达
                /// </summary>
                class EV_RADARLIBRARY_DLL CMSRadarObject : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject
                {
                    friend class CRadarCharacter;
ev_private:
                    CMSRadarObject(EarthView::World::Core::CNameValuePairList* pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="name">名称</param>
                    /// <param name="ref_pGSM">地理场景管理器</param>
                    /// <param name="pMSRadarCharacter">机械式雷达特征（生命周期与RadarObject的生命周期一致）</param>
                    CMSRadarObject(const EVString& name, EarthView::World::Spatial3D::CGeoSceneManager* ref_pGSM, EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter* pMSRadarCharacter); 
                    virtual ~CMSRadarObject(); 
                    /// <summary>
                    /// 雷达复制
                    /// </summary>
                    /// <param name="name">名称</param>
                    /// <returns>新的雷达对象</returns>
                    virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* clone(const EVString& name);
                    /// <summary>
                    /// 获取雷达告警结果
                    /// </summary>
                    /// <returns>是否告警</returns>
                    virtual ev_bool getRadarAlertResult();
                    /// <summary>
                    /// 计算雷达遮蔽
                    /// </summary>
                    /// <param name="name">雷达对象名</param>
                    /// <param name="nodeName">需要计算遮蔽的位置的结点名称</param>
                    /// <returns>遮蔽计算后生成的雷达对象</returns>
                    virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* computeTerrainShade(const EVString& name, const EVString& nodeName);
                
				protected:
                    virtual void buildScannerSolid();
                    virtual void buildScannerFrame();
                    virtual void frameRenderingQueued(const EarthView::World::Graphic::FrameEvent &evt);
                    ev_bool isInsideMSRadar();
                    ev_bool isIntersectWithMSScanner();
                    void toXml(EarthView::World::Core::CXmlElement& rootElement);
                    void parseXml(EarthView::World::Core::CXmlElement& rootElement);
                    EVString getTypeName() const;
                    ev_void modifyScanner(EarthView::World::Graphic::CSceneNode* pNode);
                    ev_int32 isInWhichRadarSection();
                    ev_uint32 getNearestAngleIndex(Real modelAngle) ;
                    ev_uint32 getNearestPointIndex(ev_uint32 nearestAngleIndex);
                    void nodeRotate(EarthView::World::Graphic::CSceneNode* pNode, const EarthView::World::Graphic::FrameEvent &evt);

                protected:
                    Real mTotalTime;
                    EarthView::World::Spatial::Math::CDegree mCurrentDegree;
                    ev_bool mIsMax;
                    ev_bool mIsMin;
                    ev_uint32 mNearestPointIndex;
                private:
                    C_DISABLE_COPY(CMSRadarObject);
                };
            }
        }
    }
}
#endif

