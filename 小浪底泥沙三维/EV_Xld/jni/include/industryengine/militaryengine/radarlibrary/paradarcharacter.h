#ifndef CPARADARCHARACTER_H
#define CPARADARCHARACTER_H

#include "radarcharacter.h"

namespace EarthView
{
    namespace IndustryEngine
    {
        namespace MilitaryEngine
        {
            namespace RadarLibrary
            {
                /// <summary>
                /// 相控阵雷达特征
                /// </summary>
                class EV_RADARLIBRARY_DLL CPARadarCharacter : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter
                {
                    friend class CPARadarObject;
ev_private:
                    /// <summary>
                    /// 自动封装构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    CPARadarCharacter(EarthView::World::Core::CNameValuePairList* pList);

                public:
                    CPARadarCharacter(); 
                    virtual ~CPARadarCharacter(); 
                    /// <summary>
                    /// 创建相控阵雷达垂直威力面
                    /// </summary>
                    /// <param name="verticalSpan">垂直方向跨度</param>
                    /// <param name="verticalNum">垂直方向威力数据分布</param>
                    /// <param name="overaweDistance">雷达威力范围</param>
                    /// <returns>相控阵雷达垂直威力面</returns>
                    static _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* createRadarSection(const EarthView::World::Spatial::Math::CDegree& verticalAngleSpan,
                        const ev_int32& verticalNum, const ev_real64& overaweDistance);
                    /// <summary>
                    /// 创建相控阵雷达垂直威力面
                    /// </summary>
                    /// <param name="verticalSpan">垂直方向跨度</param>
                    /// <param name="verticalAngleDelta">垂直方向威力数据角度分布</param>
                    /// <param name="overaweDistance">雷达威力范围</param>
                    /// <returns>相控阵雷达垂直威力面</returns>
                    static _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* createRadarSection(const EarthView::World::Spatial::Math::CDegree& verticalAngleSpan,
                        const EarthView::World::Spatial::Math::CDegree& verticalAngleDelta, const ev_real64& overaweDistance);
                    /// <summary>
                    /// 获取相控阵雷达垂直方向分布数目
                    /// </summary>
                    /// <returns>相控阵雷达垂直方向分布数目</returns>
                    ev_int32 getVerticalNum() const;
                    /// <summary>
                    /// 设置相控阵雷达垂直方向分布数目
                    /// </summary>
                    /// <param name="value">相控阵雷达垂直方向分布数目</param>
                    void setVerticalNum(const ev_int32& verticalNum);
                    /// <summary>
                    /// 获取相控阵雷达垂直方向威力范围
                    /// </summary>
                    /// <returns>相控阵雷达垂直方向威力范围（角度值）</returns>
                    EarthView::World::Spatial::Math::CDegree getVerticalAngleSpan() const;
                    /// <summary>
                    /// 设置相控阵雷达垂直方向威力范围
                    /// </summary>
                    /// <param name="value">相控阵雷达垂直方向威力范围（角度值）</param>
                    void setVerticalAngleSpan(const EarthView::World::Spatial::Math::CDegree& value);
                    /// <summary>
                    /// 获取相控阵雷达垂直方向威力间隔
                    /// </summary>
                    /// <returns>相控阵雷达垂直方向威力间隔（角度值）</returns>
                    EarthView::World::Spatial::Math::CDegree getVerticalAngleDelta() const;
                    /// <summary>
                    /// 设置相控阵雷达垂直方向威力间隔，只有设置了垂直威力范围后才有效
                    /// </summary>
                    /// <param name="value">相控阵雷达垂直方向威力间隔（角度值）</param>
                    void setVerticalAngleDelta(const EarthView::World::Spatial::Math::CDegree& value);
                    /// <summary>
                    /// 获取相控阵雷达威力范围
                    /// </summary>
                    /// <returns>相控阵雷达威力范围</returns>
                    ev_real64 getOveraweDistance() const;
                    /// <summary>
                    /// 设置相控阵雷达威力范围
                    /// </summary>
                    /// <param name="value">相控阵雷达威力范围</param>
                    void setOveraweDistance(const ev_real64& overaweDistance);
                    /// <summary>
                    /// 复制
                    /// </summary>
                    /// <returns>相控阵雷达特征</returns>
                    virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* clone();

                protected:
                    virtual void toXmlRootElement(EarthView::World::Core::CXmlElement& rootElement);
                    virtual void parseRootElement(EarthView::World::Core::CXmlElement& rootElement);
                    virtual EVString getTypeName() const;

                protected:
                    //ev_int32 mHorizontalNum ;
                    ev_int32 mVerticalNum ;//垂直方向上，将覆盖范围等分mVerticalNum份
                    EarthView::World::Spatial::Math::CDegree mVerticalAngleDelta;
                    ev_real64 mOveraweDistance;
                    EarthView::World::Spatial::Math::CDegree mScannerVerticalSpan;//垂直方向上的俯仰角

                private:
                    C_DISABLE_COPY(CPARadarCharacter);
                };
            }
        }
    }
}
#endif

