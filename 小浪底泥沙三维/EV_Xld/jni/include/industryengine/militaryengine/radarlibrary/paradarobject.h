#ifndef CPARADAR_H
#define CPARADAR_H

#include "radarobject.h"
#include"paradarcharacter.h"
#include"spatialobject/geometry/revolvingvolume.h"


namespace EarthView
{
    namespace IndustryEngine
    {
        namespace MilitaryEngine
        {
            namespace RadarLibrary
            {
                class EV_RADARLIBRARY_DLL CPARadarObject : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject
                {
                public :
                    class EV_RADARLIBRARY_DLL CCell : public EarthView::World::Core::CBaseObject
                    {
ev_private:
                        CCell(EarthView::World::Core::CNameValuePairList* pList);
                    public :
                        /// <summary>
                        /// 构造函数
                        /// </summary>
                        /// <param name="center">细胞中心位置</param>
                        /// <param name="row">行</param>
                        /// <param name="col">列</param>
                        CCell(const EarthView::World::Spatial::Math::CVector3& center, const ev_int32& row, const ev_int32& col);
                        ~CCell();

                        /// <summary>
                        ///克隆
                        /// </summary>
                        /// <returns>细胞</returns>
                        _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* clone();
                        /// <summary>
                        /// 获取生命时间
                        /// </summary>
                        /// <returns>生命时间</returns>
                        ev_real64 getLifeTime() const
                        {
                            return mLifeTime;
                        }
                        /// <summary>
                        /// 设置生命时间
                        /// </summary>
                        /// <param name="time">时间</param>
                        ev_void setLifeTime(const ev_real64& time);
                        /// <summary>
                        /// 获取四元数
                        /// </summary>
                        /// <returns>四元数</returns>
                        inline EarthView::World::Spatial::Math::CQuaternion& getQuaternion()
                        {
                            return mQuaternion;
                        }
                        /// <summary>
                        /// 获取细胞中心点
                        /// </summary>
                        /// <returns> 中心点的坐标</returns>
                        inline EarthView::World::Spatial::Math::CVector3& getCenter()
                        {
                            return mCenter;
                        }
                        /// <summary>
                        /// 获取转到下一个细胞的角度
                        /// </summary>
                        /// <returns>角度</returns>
                        inline EarthView::World::Spatial::Math::CDegree& getToNextCellAngle()
                        {
                            return mToNextCellAngle;
                        }
                        /// <summary>
                        /// 获取转到下一个细胞的角度
                        /// </summary>
                        /// <param name="angle">角度</param>
                        ev_void setToNextCellAngle(const EarthView::World::Spatial::Math::CDegree& angle);
                        /// <summary>
                        /// 获取下一个细胞
                        /// </summary>
                        /// <returns>细胞</returns>
                        inline EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* getNextCell()const
                        {
                            return mNextCell;
                        }
                        /// <summary>
                        /// 设置下一个细胞
                        /// </summary>
                        /// <param name="ref_cell">细胞</param>
                        ev_void setNextCell(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* ref_cell);
                        ev_void initialize();
                        /// <summary>
                        /// 计算跨度角
                        /// </summary>
                        /// <param name="cell">细胞</param>
                        /// <returns>跨度角</returns>
                        EarthView::World::Spatial::Math::CDegree calculateSpanAngle(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* cell) const;
                        /// <summary>
                        /// 计算四元数
                        /// </summary>
                        /// <returns>四元数</returns>
                        EarthView::World::Spatial::Math::CQuaternion calculateQuaternion() const;

                    private:
                        ev_real64 mLifeTime;
                        EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* mNextCell;
                        EarthView::World::Spatial::Math::CVector3 mCenter;
                        EarthView::World::Spatial::Math::CQuaternion mQuaternion;
                        EarthView::World::Spatial::Math::CDegree mToNextCellAngle;
                        ev_int32 mRow;
                        ev_int32 mCol;

                    private:
                        C_DISABLE_COPY(CCell);
                    };

ev_private:
                    CPARadarObject(EarthView::World::Core::CNameValuePairList* pList);
                public:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="name">名称</param>
                    /// <param name="ref_pGSM">地理场景管理器</param>
                    /// <param name="ref_character">相控阵雷达特征（生命周期与RadarObject的生命周期一致）</param>
                    CPARadarObject(const EVString& name, EarthView::World::Spatial3D::CGeoSceneManager* ref_pGSM, EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter* pPARadarCharacter); 
                    virtual ~CPARadarObject(); 
                    /// <summary>
                    /// 复制
                    /// </summary>
                    /// <param name="name">名称</param>
                    /// <returns>雷达对象</returns>
                    virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* clone(const EVString& name);
                    /// <summary>
                    /// 获取雷达告警结果
                    /// </summary>
                    /// <returns>是否告警</returns>
                    virtual ev_bool getRadarAlertResult();
                    /// <summary>
                    /// 获取波束跟踪的CELL
                    /// </summary>
                    /// <returns>波束当前所在的CELL</returns>
                    _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* getRadarTrackCell();
                protected:
                    virtual void buildScannerSolid(); 
                    virtual void buildScannerFrame();
                    virtual void frameRenderingQueued(const EarthView::World::Graphic::FrameEvent &evt);
                    void toXml(EarthView::World::Core::CXmlElement& rootElement);
                    void parseXml(EarthView::World::Core::CXmlElement& rootElement);
                    EVString getTypeName() const;
                    ev_bool isInsidePARadar();
                    ev_bool isIntersectWithPAScanner();
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* isInWhichCell();
                     void nodeRotate(EarthView::World::Graphic::CSceneNode* pNode, const EarthView::World::Graphic::FrameEvent &evt);
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* mpCell;
                    ev_uint32 row;
                    ev_uint32 col;

                private :
                    typedef map<ev_int32,EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell*> CellRows;
                    typedef map<ev_int32,CellRows> CellArray;

                    CellArray mCells;
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* mStartCell;
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* mCurrentCell;
                    ev_int32 mRowNum;
                    ev_int32 mColNum;
                    ev_real64 calculateRadius();
                    EarthView::World::Spatial::Geometry::CRevolvingVolume* createRevolvingVolume();
                    ev_void createCells();
                    ev_void sortCells();
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarObject::CCell* getCell(const ev_int32& row, const ev_int32& col);

					std::vector<EarthView::World::Spatial::Geometry::CRevolvingVolume*> mNeedReleaseVector0;

                private:
                    C_DISABLE_COPY(CPARadarObject);
                };
            }
        }
    }
}
#endif
