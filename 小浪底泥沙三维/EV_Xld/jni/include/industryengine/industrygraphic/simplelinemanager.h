#ifndef CPOLYLINEMANAGER_H
#define CPOLYLINEMANAGER_H

#include "graphic/scenemanager.h"
#include <map>
#include "industryengine/industrygraphic/simpleline.h"
#include "mathengine/vector3.h"
#include "core/core_common.h"
#include "mathengine/axisalignedbox.h"
#include "industryengine/industrygraphic/industrygraphic_cfg.h"
#include "core/name_value_pair.h"
#include "globecontrol/globecontrol.h"
#include "graphic/entity.h"
#include "graphic/subentity.h"
#include "geometry3d/geometry3d/wideline.h"

namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			class CVertexIndexInfo;
			class CInternalLineQueryListener;
			class CCustomEntityFactory;

			class EV_INDUSTRYGRAPHIC_DLL CRaySelectedListener : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CRaySelectedListener(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				
				CRaySelectedListener(CSimplelineManager* ref_pOperator);

				virtual ~CRaySelectedListener();

				virtual void onSelectedChanged(CSimpleline* pSelectedSimpleLine);

			public:
				CSimplelineManager* ref_mpOperator;
			};

			class EV_INDUSTRYGRAPHIC_DLL CCustomEntity : public EarthView::World::Graphic::CEntity
			{
ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CCustomEntity(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				~CCustomEntity();
				EarthView::World::Graphic::CSubEntity* getSelctedSubEntity();
				ev_uint32 getSelctedIndex1();
				ev_uint32 getSelctedIndex2();
				virtual ev_void clearSelection();
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
			protected:
				CCustomEntity( const EVString &name, const EarthView::World::Graphic::CMeshPtr &mesh) ;
				CCustomEntity( const EVString &name, const EarthView::World::Graphic::CMeshPtr &mesh,const EarthView::World::Core::IntVector& subentityIndics);
			protected:
				EarthView::World::Graphic::CSubEntity* mpSelctedSubEntity;
				ev_uint32 mSelctedIndex1;
				ev_uint32 mSelctedIndex2;
				friend class CCustomEntityFactory;
			};

			/// <summary>
            /// 实体类工厂
            /// 为实体创建实例
            /// </summary>
            class EV_INDUSTRYGRAPHIC_DLL CCustomEntityFactory : public EarthView::World::Graphic::CMovableObjectFactory
            {
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CCustomEntityFactory(_in EarthView::World::Core::CNameValuePairList *pList);
            ev_internal:
                /// <summary>
                /// 创建实例
                /// </summary>
                /// <param name="name">名称</param>
                /// <param name="params">名称键值列表</param>
                /// <returns>实例</returns>
                EarthView::World::Graphic::CMovableObject *createInstanceImpl( const EVString &name, const EarthView::World::Core::NameValuePairList *params);
            public:
                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CCustomEntityFactory();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CCustomEntityFactory();
                ///工厂类型名称
                static EVString CUSTOM_FACTORY_TYPE_NAME;
                /// <summary>
                /// 获得实体的类型
                /// </summary>
                /// <param name=""></param>
                /// <returns>实体的类型</returns>
                EVString getType() const;
                /// <summary>
                /// 销毁实例
                /// </summary>
                /// <param name="obj">移动对象</param>
                /// <returns></returns>
                void destroyInstance( EarthView::World::Graphic::CMovableObject *obj);
            };

			class EV_INDUSTRYGRAPHIC_DLL CSimplelineManager : public EarthView::World::Core::CBaseObject
			{
				typedef std::map<ev_int32,CSimpleline*> PolylineMap;
				typedef std::vector<EarthView::World::Spatial::Math::CVector3> PointVector;
				friend class CRaySelectedListener;
				friend class CInternalLineQueryListener;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对表</param>
				CSimplelineManager(EarthView::World::Core::CNameValuePairList * pList);
			public:

				CSimplelineManager(EarthView::World::Spatial3D::Controls::CGlobeControl* ref_pGlobeControl); 

				virtual ~CSimplelineManager(); 

				virtual CSimpleline* addSimpleline();

				virtual void getIdVector(EarthView::World::Core::IntVector& ids);

				virtual CSimpleline* getSimpleline(const ev_int32& id); 

				virtual void buildRenderData();

				virtual void renderToScene(); 

				virtual void derenderFromScene();

				virtual void removeAllPoints();

				virtual EarthView::World::Graphic::CColourValue& getHightlightColor();

				virtual void setHightlightColor(const ev_real32& red,const ev_real32& green,
					const ev_real32& blue,const ev_real32& alpha);

				virtual void setHightlightLineWidth(const ev_uint32& hightlightLineWidth);

				virtual ev_uint32 getHightlightLineWidth();

				virtual CSimpleline* getSelectedSimpleline();

				virtual void refresh();

				virtual void clearHightlightState();

				virtual void renderAsHightlightState();

				virtual void addRaySelectedListener(CRaySelectedListener* ref_pListener);

				virtual void removeRaySelectedListener(CRaySelectedListener* ref_pListener);

			protected:

				void initial();

				virtual CSimpleline* handleQuery(const ev_uint32& selectedVertexIndex);

				virtual void onSelectedChanged(CSimpleline* pSelectedSimpleLine);

				virtual void writeData2Memory(CSimpleline* pLine,EarthView::IndustryEngine::IndustryGraphic::CVertexIndexInfo*& pBufferDataInfo);

				virtual ev_int32 getTotalPointCount();

				virtual EarthView::World::Spatial::Math::CVector3 computeReferenceCenter();

				virtual CVertexIndexInfo* askForMemory(const ev_int32& pointCount);

				virtual ev_void writeData2Memory(EarthView::IndustryEngine::IndustryGraphic::CVertexIndexInfo*& pBufferDataInfo,
					PointVector& vertexList,EarthView::World::Graphic::RGBA& color,
					EarthView::World::Core::IntVector& indices);

				virtual ev_void createVertexData(CSubSimpleline* subLine,PointVector& vertexList);

				virtual ev_void createIndices(const ev_int32& pointCount,EarthView::World::Core::IntVector& indices);

				virtual ev_void createRenderBuffer(EarthView::IndustryEngine::IndustryGraphic::CVertexIndexInfo* pBufferDataInfo,
					EarthView::World::Graphic::CEntity*& pRenderEntity,EarthView::World::Graphic::CSceneNode*& pRenderNode);

				virtual ev_void createStaticEntity(const EVString& name ,EarthView::World::Graphic::CEntity*& entity);

				virtual ev_bool createRenderEntity(
					EarthView::World::Graphic::CEntity*& pEntity, 
					EarthView::World::Graphic::CSceneNode*& pNode);

				virtual ev_void computeBoundingBox(const ev_real32* vertexes ,
					const ev_int32& vertCount ,EarthView::World::Spatial::Math::CAxisAlignedBox*& boundingBox);

				virtual ev_void destroyRenderResource();
			private:

				PolylineMap mLines;

				EarthView::World::Graphic::CSceneManager* ref_mpSceneManager;

				EarthView::World::Spatial3D::Controls::CGlobeControl* ref_mpGlobeControl;

				EarthView::World::Graphic::CEntity* mpRenderEntity ;

				EarthView::World::Graphic::CSceneNode* mpRenderNode;

				EarthView::World::Spatial::Math::CVector3 mReferencePos;

				CInternalLineQueryListener* mpLineQueryListener;

				EarthView::World::Graphic::CColourValue mHightlightColor;

				ev_uint32 mHightlightLineWidth;

				CSimpleline* mpSelectedSimpleline;

				EarthView::World::Geometry3D::CWideLine* mpHightligthObject;

				std::vector<CRaySelectedListener*> mRayQueryListeners;
				
			};  //end class CSimplelineManager

		}
	}
}

#endif
