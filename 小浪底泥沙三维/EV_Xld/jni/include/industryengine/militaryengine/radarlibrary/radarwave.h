#ifndef RADARWARE_H
#define RADARWARE_H

#include "industryengine/militaryengine/radarlibrary/radarlibrary_cfg.h"
#include "spatial3dengine/geoscenemanager.h"
#include <map>
#include "geometry3d/geometry3d/vector_graphics.h"


namespace EarthView
{
    namespace IndustryEngine
    {
        namespace MilitaryEngine
        {
            namespace RadarLibrary
            {
                class EV_RADARLIBRARY_DLL  CRadarWave : public EarthView::World::Core::CBaseObject
                {
ev_private:
                    CRadarWave(EarthView::World::Core::CNameValuePairList* pList); 
                public:

                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="name">名称</param>
                    /// <param name="ref_sceneManager">地理场景管理器</param>
                    CRadarWave(const EVString& name, EarthView::World::Spatial3D::CGeoSceneManager* ref_sceneManager);
                    ~CRadarWave();
                    /// <summary>
                    ///创建雷达波
                    /// </summary>
                    /// <param name="texturePath">纹理路径及名称</param>
                    /// <param name="topPos">顶面点位置</param>
                    /// <param name="bottomPos">底面点位置</param>
                    /// <param name="raidus">半径</param>
                    void addRadarWave(const EVString& texturePath, const EarthView::World::Spatial::Math::CVector3& topPos, const EarthView::World::Spatial::Math::CVector3& bottomPos,const double raidus);
                    /// <summary>
                    ///设置雷达波材质
                    /// </summary>
                    /// <param name="texturePath">纹理路径及名称</param>
                    /// <param name="matName">材质名</param>
                    /// <param name="waveSpeed">纹理流动速度</param>
                    void setRadarWaveMaterial(const EVString& texturePath, const EVString& matName, const double waveSpeed);
                    /// <summary>
                    ///创建雷达波
                    /// </summary>
                    /// <param name="name">雷达波名称</param>
                    /// <param name="matName">材质名称</param>
                    /// <param name="topPos">顶面点位置</param>
                    /// <param name="bottomPos">底面点位置</param>
                    /// <param name="raidus">半径</param>
                    void addAssignRadarWave(const EVString& name, const EVString& matName , const EarthView::World::Spatial::Math::CVector3& topPos, const EarthView::World::Spatial::Math::CVector3& bottomPos, const double raidus);
                    /// <summary>
                    ///动态更新雷达波
                    /// </summary>
                    /// <param name="radarWaveName">雷达波名称</param>
                    /// <param name="radarWaveMatName">材质名称</param>
                   /// <param name="flag">隐藏还是更新雷达波（true:更新，false:隐藏）</param>
                    /// <param name="topPos">顶面点位置</param>
                    /// <param name="bottomPos">底面点位置</param>
                    /// <param name="raidus">半径</param>
                    void updateRadarWave(const EVString& radarWaveName, const EVString& radarWaveMatName, const bool flag, const EarthView::World::Spatial::Math::CVector3& topPos, const EarthView::World::Spatial::Math::CVector3& bottomPos, const double raidus);
                protected:
                    EVString mName;
                    EarthView::World::Geometry3D::CMovableCone* mpGeoCone;
                    EarthView::World::Spatial3D::CGeoSceneManager* mpGeoSceneMgr;
                    map<const EVString, EarthView::World::Geometry3D::CMovableCone*> radarWaveObjects;
                };
            }
        }
    }
}
#endif

