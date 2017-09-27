#ifndef CMSRADARCHARACTER_H
#define CMSRADARCHARACTER_H

#include "industryengine/militaryengine/radarlibrary/radarcharacter.h"
#include "mathengine/ev_math.h"

namespace EarthView
{
    namespace IndustryEngine
    {
        namespace MilitaryEngine
        {
            namespace RadarLibrary
            {
                /// <summary>
                /// 机械扫描形雷达特征
                /// </summary>
                class EV_RADARLIBRARY_DLL CMSRadarCharacter : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter
                {
                    friend class CMSRadarObject;
ev_private:
                    /// <summary>
                    /// 自动封装构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    CMSRadarCharacter(EarthView::World::Core::CNameValuePairList* pList);

                protected:
                    virtual void toXmlRootElement(EarthView::World::Core::CXmlElement& rootElement);
                    virtual void parseRootElement(EarthView::World::Core::CXmlElement& rootElement);
                    virtual EVString getTypeName() const;

                public:
                    CMSRadarCharacter();
                    virtual ~CMSRadarCharacter(); 
                    /// <summary>
                    /// 获取扫描体跨度
                    /// </summary>
                    /// <returns>扫描体跨度（角度值）</returns>
                    EarthView::World::Spatial::Math::CDegree getScannerHorizontalAngleSpan() const;
                    /// <summary>
                    /// 设置扫描体跨度
                    /// </summary>
                    /// <param name="degree">扫描体跨度（角度值）</param>
                    void setScannerHorizontalAngleSpan(const EarthView::World::Spatial::Math::CDegree& degree);
                    /// <summary>
                    /// 复制
                    /// </summary>
                    /// <returns>新的雷达对象</returns>
                    virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* clone(); 

				protected:
					EarthView::World::Spatial::Math::CDegree mScannerAngle;

                private:
                    C_DISABLE_COPY(CMSRadarCharacter);
                };
            }
        }
    }
}
#endif

