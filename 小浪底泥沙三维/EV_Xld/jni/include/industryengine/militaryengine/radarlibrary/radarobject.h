#ifndef CRADAROBJECT_H
#define CRADAROBJECT_H

#include "radarlibrary_cfg.h"
#include "radarcharacter.h"
#include "radartype.h"
#include "graphic/framelistener.h"
#include "graphic/movableobject.h"
#include "spatial3dengine/geoscenemanager.h"
#include "geometry3d/geometry3d/simplerenderableex.h"
#include "terrainshade.h"
#include "graphic/colourvalue.h"

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {
            class CSceneNode;
            class CCamera;
            class CRenderTarget;
            class CTexturePtr;
        }
        namespace Geometry3D
        {
            class CSimpleRenderableEx;
        }
    }
}


namespace EarthView
{
    namespace IndustryEngine
    {
        namespace MilitaryEngine
        {
            namespace RadarLibrary
            {
                class CRadarFrameListener;
                class CTerrainShade;
                class CRadarAlert;
                /// <summary>
                /// 雷达基类
                /// </summary>
                class EV_RADARLIBRARY_DLL CRadarObject : public EarthView::World::Core::CBaseObject
                {
                    friend class CRadarFrameListener;
                    friend class CRadarAlertListener;
                    friend class CRadarCharacter;
                    friend class CMSRadarCharacter;
                public:

                    class EV_RADARLIBRARY_DLL CRadarAlertListener : public EarthView::World::Core::CBaseObject
                    {
                        friend class CRadarObject;
ev_private:
                        CRadarAlertListener(EarthView::World::Core::CNameValuePairList* pList);
                    public:
                        CRadarAlertListener();
                        virtual ~CRadarAlertListener();
                        /// <summary>
                        /// 雷达告警监听方法，只有开启告警才有效
                        /// </summary>
                        /// <param name="pRadar">扫描雷达</param>
                        /// <param name="isInRadar">是否在雷达内</param>
                        /// <param name="isIntersected">扫描波瓣是否与目标相交</param>
                        virtual void actionPerFrame(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* pRadar, const bool& isInRadar, const bool& isIntersected);
                    };

ev_private:
                    /// <summary>
                    /// 构造函数
                    /// </summary>
                    /// <param name="pList">构造函数参数键值对表</param>
                    CRadarObject(EarthView::World::Core::CNameValuePairList* pList);

                protected:
                    /** Gpu program enum
                    @remarks Use in setGpuProgramParameter()
                    */
                    enum GpuProgram
                    {
                        // Vertex program
                        GPUP_VERTEX   = 0,
                        // Fragment program
                        GPUP_FRAGMENT = 1
                    };
                    /** Shader mode
                    */
                    enum ShaderMode
                    {
                        // HLSL
                        SM_HLSL = 0,
                        // Cg
                        SM_CG   = 1,
                        // GLSL
                        SM_GLSL = 2
                    };

                protected:
                    virtual void buildEnvelopSolid();
                    virtual void buildEnvelopFrame();
                    virtual void buildScannerSolid();
                    virtual void buildScannerFrame();
                    virtual void frameRenderingQueued(const EarthView::World::Graphic::FrameEvent &evt);
                    ev_void calTerrainShade(const EVString& nodeName);

                protected:
                    CRadarObject(const EVString& name, EarthView::World::Spatial3D::CGeoSceneManager* ref_pGSM, EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* pRadarCharacter);

                public:
                    virtual ~CRadarObject();
                    /// <summary>
                    /// 获取雷达名称
                    /// </summary>
                    /// <returns>雷达名称</returns>
                    EVString getName() const
                    {
                        return this->mName;
                    };
                    /// <summary>
                    /// 获取雷达扫描波瓣名称
                    /// </summary>
                    /// <returns>雷达扫描波瓣名称</returns>
                    EVString getScannerName() const
                    {
                        return this->mSubName;
                    };
                    /// <summary>
                    /// 克隆
                    /// </summary>
					/// <param name="name">克隆对象的名称</param>
                    /// <returns>雷达对象</returns>
                    virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* clone(const EVString& name);
                    /// <summary>
                    /// 将对象挂接至节点，加入渲染队列
                    /// </summary>
                    /// <returns>挂接雷达的节点</returns>
                    virtual EarthView::World::Graphic::CSceneNode* appendToNode();
					/// <summary>
                    /// 根据指定位置将对象挂接至节点，加入渲染队列，加入偏北角
                    /// </summary>
                    /// <param name="Real">指定纬度（度数）</param>
					/// <param name="Real">指定经度（度数）</param>
					/// <param name="Real">指定高度（绝对高度）</param>
					/// <param name="EarthView::World::Spatial::Math::CVector3">局部缩放系数</param>
					/// <param name="EarthView::World::Spatial::Math::CDegree">偏北角（雷达跨度角的角平分线与正北方向夹角），默认为0.0</param>
					virtual void appendToNodeWithNorthAngle(const Real& lat, 
						const Real& lon, const Real& alt, 
						const EarthView::World::Spatial::Math::CVector3& localScale, const EarthView::World::Spatial::Math::CDegree& northAngle);
                    /// <summary>
                    /// 获取对象挂接至节点
                    /// </summary>
                    /// <returns>挂接雷达的节点</returns>
                    virtual EarthView::World::Graphic::CSceneNode* getParentNode();
                    /// <summary>
                    /// 从对象挂接至节点移除
                    /// </summary>
                    virtual ev_void detachFromParentNode();
                    /// <summary>
                    /// 对象是否已经挂接至节点
                    /// </summary>
                    /// <returns>是否已挂接至节点</returns>
                    ev_bool isAppended() const;
                    /// <summary>
                    /// 获取雷达类型
                    /// </summary>
                    /// <returns>雷达类型</returns>
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarType getType() const;
                    /// <summary>
                    /// 获取雷达包络实体数据
                    /// </summary>
                    /// <returns>雷达包络实体数据</returns>
                    EarthView::World::Geometry3D::CSimpleRenderableEx* getEnvelopSolid();
                    /// <summary>
                    /// 获取雷达包络网格数据
                    /// </summary>
                    /// <returns>雷达包络网格数据</returns>
                    EarthView::World::Geometry3D::CSimpleRenderableEx* getEnvelopFrame();
                    /// <summary>
                    /// 获取雷达扫描体实体数据
                    /// </summary>
                    /// <returns>雷达包络扫描体实体数据</returns>
                    EarthView::World::Geometry3D::CSimpleRenderableEx* getScannerSolid();
                    /// <summary>
                    /// 获取雷达扫描体网格数据
                    /// </summary>
                    /// <returns>雷达包络扫描体网格数据</returns>
                    EarthView::World::Geometry3D::CSimpleRenderableEx* getScannerFrame();
                    /// <summary>
                    /// 进行（A ∪ B）的操作
                    /// </summary>
                    /// <param name="name">分析结果对象的名称</param>
                    /// <param name="another">待操作雷达对象</param>
                    /// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
                    /// <returns>结果几何体 </returns>	
                    _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* envelopSolidUnions(_in const EVString& name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out EarthView::World::Spatial::Math::CVector3& translate);
                    /// <summary>
                    /// 进行（A ∩ B）的操作
                    /// </summary>
                    /// <param name="name">分析结果对象的名称</param>
                    /// <param name="another">待操作雷达对象</param>
                    /// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
                    /// <returns>结果几何体 </returns>	
                    _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* envelopSolidIntersect(_in const EVString& name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out EarthView::World::Spatial::Math::CVector3& translate);
                    /// <summary>
                    /// 进行（A - B）的操作
                    /// </summary>
                    /// <param name="name">分析结果对象的名称</param>
                    /// <param name="another">待操作雷达对象</param>
                    /// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
                    /// <returns>结果几何体 </returns>	
                    _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* envelopSolidMinus(_in const EVString& name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out EarthView::World::Spatial::Math::CVector3& translate);
                    /// <summary>
                    /// 进行（（A ∪ B) -（A ∩ B））的操作
                    /// </summary>
                    /// <param name="name">分析结果对象的名称</param>
                    /// <param name="another">待操作几何体</param>
                    /// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
                    /// <returns>结果几何体 </returns>	
                    _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* envelopSolidDifference(_in const EVString& name, _in EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another, _out EarthView::World::Spatial::Math::CVector3& translate);
                    /// <summary>
                    /// 用一个非封闭对象来切分雷达
                    /// </summary>
                    /// <param name="another">用来切分的面</param>
                    /// <param name="result">切分结果，通常或包含两个结果，内部的和外部的</param>
                    /// <param name="sharedEdges">两个对象相交的边缘点序列</param>
                    /// <param name="translate">世界坐标下两个对象计算之后与重新计算的相对原点的偏移量</param>
                    void envelopSolidSliceAndClassify(_in EarthView::World::Geometry3D::CSimpleRenderableEx* another, 
                        _out EarthView::World::Geometry3D::CFaceWithSimpleRenderableExSet& result,
                        _out EarthView::World::Spatial::Geometry::CCoordinateSequence& sharedEdges, 
                        _out EarthView::World::Spatial::Math::CVector3& translate);

					/// <summary>
					/// 判断指定雷达与该雷达是否相交
					/// <param name="another">待操作雷达</param>
					/// </summary>
					/// <returns>是否相交的布尔值</returns>	
					virtual bool isIntersected(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* another);

					/// <summary>
					/// 判断线与雷达是否相交
					/// <param name="curve">线对象</param>
					/// </summary>
					/// <returns>返回是否相交的布尔值</returns>
					virtual bool isIntersected(EarthView::World::Spatial::Geometry::CCurve* curve);

					/// <summary>
					/// 判断点与雷达的关系
					/// <param name="point">点的x坐标</param>
					/// </summary>
					/// <returns>返回关系枚举</returns>
					virtual EarthView::World::Geometry3D::EVPointWithinType containsVertex(const EarthView::World::Spatial::Geometry::CPoint& point);

                    /// <summary>
                    /// 创建可渲染数据
                    /// </summary>
                    virtual void build(); 
                    /// <summary>
                    /// 设置雷达是否显示
                    /// </summary>
                    /// <param name="value">是否显示</param>
                    virtual void setVisible(const ev_bool& value);
					/// <summary>
                    /// 获取雷达是否显示
                    /// </summary>
                    /// <returns>雷达是否显示，只有当雷达所有部分都不现实是才返回false</returns>
					virtual ev_bool getVisible() const;
                    /// <summary>
                    /// 设置包络实体是否显示
                    /// </summary>
                    /// <param name="value">是否显示</param>
                    virtual void setEnvelopSolidVisible(const ev_bool& value);
					/// <summary>
                    /// 获取雷达包络实体是否显示
                    /// </summary>
                    /// <returns>是否显示</returns>
					virtual ev_bool getEnvelopSolidVisible() const;
                    /// <summary>
                    /// 设置包络网格是否显示
                    /// </summary>
                    /// <param name="value">是否显示</param>
                    virtual void setEnvelopFrameVisible(const ev_bool& value);
					/// <summary>
                    /// 获取雷达包络实体是否显示
                    /// </summary>
                    /// <returns>是否显示</returns>
					virtual ev_bool getEnvelopFrameVisible() const;
                    /// <summary>
                    /// 设置扫描实体是否显示
                    /// </summary>
                    /// <param name="value">是否显示</param>
                    virtual void setScannerSolidVisible(const ev_bool& value);
					/// <summary>
                    /// 获取雷达扫描实体是否显示
                    /// </summary>
                    /// <returns>是否显示</returns>
					virtual ev_bool getScannerSolidVisible() const;
                    /// <summary>
                    /// 设置扫描实体网格是否显示
                    /// </summary>
                    /// <param name="value">是否显示</param>
                    virtual void setScannerFrameVisible(const ev_bool& value);
					/// <summary>
                    /// 获取雷达扫描实体网格是否显示
                    /// </summary>
                    /// <returns>是否显示</returns>
					virtual ev_bool getScannerFrameVisible() const;
                    /// <summary>
                    /// 加载XML文件
                    /// </summary>
                    /// <param name="fileName">文件名</param>
                    virtual void fromFile(const EVString& fileName);
                    /// <summary>
                    /// 生成XML文件
                    /// </summary>
                    /// <param name="fileName">文件名</param>
                    virtual void toFile(const EVString& fileName);
                    /// <summary>
                    /// 得到雷达告警结果
                    /// </summary>
                    /// <returns>雷达告警结果 </returns>	
                    virtual ev_bool getRadarAlertResult();
                    /// <summary>
                    /// 设置雷达包络实体材质名
                    /// </summary>
                    /// <param name="materialName">材质名称</param>
                    virtual void setEnvelopSolidMaterial(const EVString& materialName, const EVString& groupName);
                    /// <summary>
                    /// 设置雷达包络网格材质名称
                    /// </summary>
                    /// <param name="materialName">材质名称</param>
                    virtual void setEnvelopFrameMaterial(const EVString& materialName, const EVString& groupName);
                    /// <summary>
                    /// 设置雷达扫描实体材质名称
                    /// </summary>
                    /// <param name="materialName">材质名称</param>
                    virtual void setScannerSolidMaterial(const EVString& materialName, const EVString& groupName);
                    /// <summary>
                    /// 设置雷达扫描网格材质名称
                    /// </summary>
                    /// <param name="materialName">材质名称</param>
                    virtual void setScannerFrameMaterial(const EVString& materialName, const EVString& groupName);
                    /// <summary>
                    /// 获取雷达材质资源组名称
                    /// </summary>
                    /// <returns>雷达材质资源组名称 </returns>	
                    virtual EVString getRadarMaterialResourceGroup() const;
                    /// <summary>
                    /// 获取雷达包络实体材质名称
                    /// </summary>
                    /// <returns>雷达包络实体材质名称</returns>
                    virtual EVString getEnvelopSolidMaterial() const;
                    /// <summary>
                    /// 获取雷达包络网格材质名称
                    /// </summary>
                    /// <returns>雷达包络网格材质名称</returns>
                    virtual EVString getEnvelopFrameMaterial() const;
                    /// <summary>
                    /// 获取雷达扫描实体材质名称
                    /// </summary>
                    /// <returns>雷达扫描实体材质名称</returns>
                    virtual EVString getScannerSolidMaterial() const;
                    /// <summary>
                    /// 获取雷达扫描网格材质名称
                    /// </summary>
                    /// <returns>雷达扫描网格材质名称</returns>
                    virtual EVString getScannerFrameMaterial() const;
                    /// <summary>
                    /// 设置雷达告警监听
                    /// </summary>
                    /// <param name="ref_pListener">雷达告警监听</param>
                    void setRadarAlertListener(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener* ref_pListener);
                    /// <summary>
                    /// 获取雷达告警监听对象
                    /// </summary>
                    /// <returns>雷达告警监听对象</returns>
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener* getRadarAlertListener();
                    /// <summary>
                    /// 获取是否进行雷达告警
                    /// </summary>
                    void setNeedAlert(const bool& value);
                    /// <summary>
                    /// 获取是否进行雷达告警
                    /// </summary>
                    /// <returns>是否告警</returns>
                    bool getNeedAlert() const;
                    /// <summary>
                    /// 开启雷达告警情况下，扫描体是否锁定目标
                    /// </summary>
                    /// <returns>是否锁定</returns>
                    bool getLockScannerToTarget() const;
                    /// <summary>
                    /// 开启雷达告警情况下，扫描体是否锁定目标
                    /// </summary>
                    void setLockScannerToTarget(const bool& value);
                    /// <summary>
                    /// 设置模型位置
                    /// </summary>
                    void setModelObjectPosition(const EarthView::World::Spatial::Math::CVector3& pos);
                    /// <summary>
                    /// 获取雷达特征对象
                    /// </summary>
                    /// <returns>雷达特征对象</returns>
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* getRadarCharacter();
                    /// <summary>
                    /// 计算雷达遮蔽
                    /// </summary>
                    /// <param name="name">雷达对象名</param>
                    /// <param name="nodeName">需要计算遮蔽的位置的结点名称</param>
                    /// <returns>遮蔽计算后生成的雷达对象</returns>
                    virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* computeTerrainShade(const EVString& name, const EVString& nodeName);
					/// <summary>
                    /// 重新设置EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter后更新雷达
                    /// </summary>
					void refresh();

					_extfree EarthView::World::Graphic::CMeshPtr convertToMesh(const EVString& meshName, const EVString& groupName);

                protected:
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* mpRadarCharacter;
                    EarthView::World::Geometry3D::CSimpleRenderableEx* mpEnvelopSolid;
                    EarthView::World::Geometry3D::CSimpleRenderableEx* mpEnvelopFrame;
                    EarthView::World::Geometry3D::CSimpleRenderableEx* mpScannerSolid;
                    EarthView::World::Geometry3D::CSimpleRenderableEx* mpScannerFrame;
                    EarthView::World::Graphic::CSceneNode* mpParentNode;
                    EarthView::World::Graphic::CSceneNode* mpSubNode;
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarFrameListener* mpRadarFrameListener;
                    ev_uint32 mRadarType;
                    EVString mName;
                    EVString mSubName;
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CTerrainShade* mpTerrainShade;
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::CRadarAlertListener* mpAlertListener;
                    bool mNeedAlert;
                    bool mLockScannerToTarget;
                    EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* mpVerticalVector;
                    Real mMaxDistance;
                    EarthView::World::Spatial::Math::CVector3 mModelPosition;

                    /// <summary>
                    /// 解析完xml文件后，创建雷达
                    /// </summary>
                    ev_void createRadarFromXml();

                    ev_void setMaterialColour(const EVString& matName, const EarthView::World::Graphic::CColourValue& color);

                    ev_bool mIsAppended;
                    ev_bool mMatHasCreated;
                    EVString mRadarMaterialResourceGN;
                    EVString mEnvelopSolidMaterialName;
                    EVString mEnvelopFrameMaterialName;
                    EVString mScannerSolidMaterialName;
                    EVString mScannerFrameMaterialName;

                    EVString mEnvelopSolidMatVP;
                    EVString mEnvelopSolidMatFP;
                    EVString mScannerSolidMatVP;

                    EarthView::World::Spatial3D::CGeoSceneManager* mpGeoSceneMgr;

                    /// <summary>
                    /// 是否在雷达内
                    /// </summary>
                    ev_bool mInsideRadar;
                    /// <summary>
                    /// 是否被扫描体扫中
                    /// </summary>
                    ev_bool mIntersectWithScanner;
                    /// <summary>
                    /// 模型雷达与中心点的距离
                    /// </summary>
                    Real mModelDistance;
                    EarthView::World::Spatial::Math::CVector3 mModelPos;
					ev_bool mRefresh;

                    EarthView::World::Geometry3D::CVertexVector	mVBEnvelopSolid;
                    EarthView::World::Geometry3D::CIndexVector	mIBEnvelopSolid;
                    EarthView::World::Geometry3D::CVertexVector	mVBEnvelopFrame;
                    EarthView::World::Geometry3D::CIndexVector	mIBEnvelopFrame;
                    EarthView::World::Geometry3D::CVertexVector	mVBScannerEnvelop;
                    EarthView::World::Geometry3D::CIndexVector	mIBScannerEnvelop;
                    EarthView::World::Geometry3D::CVertexVector	mVBScannerFrame;
                    EarthView::World::Geometry3D::CIndexVector	mIBScannerFrame;

                    virtual void toXml(EarthView::World::Core::CXmlElement& rootElement);
                    virtual void parseXml(EarthView::World::Core::CXmlElement& rootElement);
                    EarthView::World::Core::CXmlElement createVertexXmlElement(EarthView::World::Spatial::Math::CVector3& vec,   EarthView::World::Spatial::Math::CVector3& normal);
                    EarthView::World::Geometry3D::CVertex parseVertexXmlElement(EarthView::World::Core::CXmlElement& element,EarthView::World::Core::CXmlElement& childElement);
                    EarthView::World::Core::CXmlElement createVeticesAndIndicesXmlElement(EarthView::World::Geometry3D::CSimpleRenderableEx* ex, const EVString& name);
                    void parseVeticesAndIndicesXmlElement(EarthView::World::Core::CXmlElement& element, EarthView::World::Geometry3D::CVertexVector& vertexBuffer, EarthView::World::Geometry3D::CIndexVector& indexBuffer );
                    EarthView::World::Geometry3D::CSimpleRenderableEx* createRadarGeometry(const EVString& name, EarthView::World::Geometry3D::CVertexVector& vertexBuffer,EarthView::World::Geometry3D::CIndexVector&  indexBuffer);
                    virtual EVString getTypeName() const;
                    void computeNormals(const EarthView::World::Geometry3D::CVertexVector& verts, const EarthView::World::Geometry3D::CIndexVector& indices, ev_vector<EarthView::World::Spatial::Math::CVector3>& normals);
                    void createOrGetDefaultMaterial();
                    void setDefaultMaterial();
                    ev_void convertToWorldPosition(EarthView::World::Spatial::Math::CVector3&  mpvector);
                    ev_void getVerticalVectors();
                    ev_void getMaxAngleAndminAngle(Real& maxAngle, Real& minAngle);
                    virtual ev_bool isInsideRadar() const;
                    virtual ev_bool isIntersectWithScanner() const;
                    void createVertexVectorAndIndexVector(EarthView::World::Geometry3D::CSimpleRenderableEx* ex, EarthView::World::Geometry3D::CVertexVector& vertexVector, EarthView::World::Geometry3D::CIndexVector& indexVector);
                    void createRadarFromBuffer(const EVString& nodeName);
					void destroyRadarObject();

                private:
                    EVString createEnvelopVert() const;
                    EVString createEnvelopFrag() const;
                    EVString createScannerVert() const;

                    /** Create GPU program
                    @param Name HighLevelGpuProgram name
                    @param SM Shader mode
                    @param GPUP GpuProgram type
                    @param EntryPoint Entry point
                    @param Data
                    */
                    bool createGpuProgram(const EVString &Name,
                        const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::ShaderMode& SM, 
                        const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject::GpuProgram& GPUP, 
                        const EVString& EntryPoint, 
                        const EVString& Data);

                private:
                    C_DISABLE_COPY(CRadarObject);
                };
            }
        }
    }
}
#endif

