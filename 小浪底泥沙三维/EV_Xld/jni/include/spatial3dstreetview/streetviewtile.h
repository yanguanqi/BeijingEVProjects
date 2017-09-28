#ifndef EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWSPHERE_H
#define EARTHVIEW_WORLD_SPATIAL3D_STREETVIEWSPHERE_H

#include "spatial3dstreetview/spatial3dstreetviewconfig.h"
#include "graphic/simplerenderable.h"
#include "graphic/camera.h"
#include "geometry3d/vertex.h"
#include "graphic/renderoperation.h"
#include "graphic/texture.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			class CStreeViewArrowIndicator;			
			class CStreetViewRoam;

			class EV_Spatial3DStreetView_DLL CStreetViewTileInfo
			{
ev_private:
			CStreetViewTileInfo(_in EarthView::World::Core::CNameValuePairList * pList);

			public:
				enum StreetViewChildTileType {
					StreetViewTile_Root = 0,
					StreetViewTile_NorthWest,  // 00
					StreetViewTile_NorthEast,  // 01
					StreetViewTile_SouthWest,  // 10
					StreetViewTile_SouthEast,  // 11
					StreetViewTile_None
				};
			public:
				CStreetViewTileInfo();
				CStreetViewTileInfo(ev_real32 radius, ev_int32 level, ev_int32 row, ev_int32 col
					, ev_real32 north, ev_real32 south, ev_real32 east, ev_real32 west
					, ev_int32 maxLevel, ev_int32 mLowestVertexCount);
				CStreetViewTileInfo(ev_real32 radius, ev_int32 maxLevel, ev_int32 mLowestVertexCount);
				~CStreetViewTileInfo();

				static ev_uint16 calcRow(ev_real32 latitude,  ev_real32 tileSize);
				static ev_uint16 calcCol(ev_real32 longitude, ev_real32 tileSize);

				EVString getName() const;
				CStreetViewTileInfo calcChildTileInfo(const CStreetViewTileInfo::StreetViewChildTileType childType);
				CStreetViewTileInfo& operator=(const CStreetViewTileInfo& other);

			public:
				ev_real32 mRadius;
				ev_int32  mLevel;
				ev_int32  mRow;
				ev_int32  mCol;
				ev_real32 mNorth;
				ev_real32 mSouth;
				ev_real32 mEast;
				ev_real32 mWest;
				ev_int32  mVertexCount;
				ev_int32  mMaxLevel;
				ev_int32  mLowestVertexCount;
				StreetViewChildTileType mType;
			};

			class EV_Spatial3DStreetView_DLL CStreetViewSphere : public EarthView::World::Graphic::CSimpleRenderable
			{			
			public:
				class CStreetViewSphereTileTexture
				{
				public:
					CStreetViewSphereTileTexture();
					CStreetViewSphereTileTexture(EarthView::World::Graphic::CTexturePtr texture);
					CStreetViewSphereTileTexture(EarthView::World::Graphic::CTexturePtr texture, ev_int16 uNum, ev_int16 vNum, ev_int16 row, ev_int16 col
						, const EarthView::World::Spatial::Math::CMatrix4& matrix);

				public:
					EarthView::World::Graphic::CTexturePtr mTexture;               
					EarthView::World::Spatial::Math::CMatrix4 mMatrix; 
				};
ev_private:
				CStreetViewSphere(_in EarthView::World::Core::CNameValuePairList * pList);

			public:
				CStreetViewSphere(const EVString& name, EarthView::World::Graphic::CSceneManager* sceneMgr
					, EarthView::World::Graphic::CCamera* camera
					, const CStreetViewTileInfo& tileInfo
					, EarthView::World::Spatial3D::CStreetViewRoam* pRoam);
				virtual ~CStreetViewSphere();

				virtual ev_void build();
				virtual ev_void render();
				virtual ev_void deRender();

				const EVString& getImagePath() const;
				ev_void setImagePath(const EVString& dir);
				ev_void setPosition(const EarthView::World::Spatial::Math::CVector3& position);				
				const EarthView::World::Spatial::Math::CVector3& getPosition() const; 
				virtual const EarthView::World::Graphic::CMaterialPtr &getMaterial() const;
				virtual EVString getMovableType() const;
				EarthView::World::Graphic::CSceneManager* getSceneManager();
				EarthView::World::Graphic::CCamera* getCamera();
				const CStreetViewTileInfo::StreetViewChildTileType getTileType() const;
				const ev_int16 getMaxLevel() const;
				const ev_int32 getLevel() const;
				const ev_real32 getRadius() const;
				const CStreetViewTileInfo& getTileInfo() const;
				
				ev_void requestUpdateTexture(const EVString& imageDir);
				ev_void updateTexture(EarthView::World::Graphic::CTexturePtr texture); 

				ev_void requestCreateChild(const CStreetViewTileInfo::StreetViewChildTileType childType);
				ev_void setParentTile(CStreetViewSphere* pParent);
				ev_void setChildTile(CStreetViewSphere* pChild);
				CStreetViewSphere* getChild(const CStreetViewTileInfo::StreetViewChildTileType childType);
				ev_void removeAndDestroyAllChildren();
				EarthView::World::Spatial3D::CStreetViewRoam* getRoam() { return mpRoam; };
				static EVString& getResourceGroupName();

			protected:
				virtual ev_void createMaterial();
				virtual ev_void createMesh();
				CStreetViewSphere::CStreetViewSphereTileTexture getUpLevelTileTexture() const; 
				EarthView::World::Graphic::CTexturePtr getTileTexture() const;
				ev_void setTileTexture(EarthView::World::Graphic::CTexturePtr texture);
				const EarthView::World::Graphic::CTexturePtr getBlankTexture();				
				ev_void hideChildren();
				ev_void needUpdateTexture(const CStreetViewTileInfo::StreetViewChildTileType childType);
				ev_int32* getUpdateTextureCount(CStreetViewSphere* pStreetViewSphere, const CStreetViewTileInfo::StreetViewChildTileType childType);

			public:
				ev_bool mbCreatingChildNorthWest;
				ev_bool mbCreatingChildNorthEast;
				ev_bool mbCreatingChildSouthWest;
				ev_bool mbCreatingChildSouthEast;
				ev_int32 mbUpdateTextureNorthWestCount;
				ev_int32 mbUpdateTextureNorthEastCount;
				ev_int32 mbUpdateTextureSouthWestCount;
				ev_int32 mbUpdateTextureSouthEastCount;
				ev_int32 mNeedUpdateChildNumber;

			protected:
				ev_bool mbInit;
				EVString mStreetImagePath;
				EarthView::World::Graphic::CSceneManager* mpSceneMgr;
				EarthView::World::Graphic::CCamera* mpCamera;
				EarthView::World::Spatial::Math::CVector3 mPosition; 
				CStreetViewTileInfo mTileInfo;
				static EVString mResGroupName;
				CStreetViewSphere* mParentTile;
				CStreetViewSphere* mChildren[4];
				EarthView::World::Graphic::CTexturePtr mBlanklTexture;
				EarthView::World::Graphic::CTexturePtr mStreetViewTexture;
				EarthView::World::Spatial3D::CStreetViewRoam* mpRoam;
				EVString mNodeName;
			};

			class EV_Spatial3DStreetView_DLL CStreeViewArrowMovable : public EarthView::World::Graphic::CMovableObject
			{
			ev_private:
				CStreeViewArrowMovable(_in EarthView::World::Core::CNameValuePairList * pList);

			public:
				class CStreeViewArrowRenderable : public EarthView::World::Graphic::CRenderable
				{
				ev_private:
					CStreeViewArrowRenderable(_in EarthView::World::Core::CNameValuePairList * pList);
				public:
					CStreeViewArrowRenderable(CStreeViewArrowMovable* parent);
					virtual ~CStreeViewArrowRenderable();


#pragma region 必须重载的函数
					virtual ev_void getWorldTransforms(EarthView::World::Spatial::Math::CMatrix4 *xform) const;
					virtual Real getSquaredViewDepth(const EarthView::World::Graphic::CCamera* cam) const;
					const EarthView::World::Graphic::LightList& getLights() const;
					virtual const EarthView::World::Graphic::CMaterialPtr& getMaterial() const;
					ev_void getRenderOperation(_inout EarthView::World::Graphic::CRenderOperation &op);
#pragma endregion
					ev_void setMaterial(const EVString& matName);
					EarthView::World::Graphic::CRenderOperation* getRenderOperation();

				protected:
					EVString mMaterialName;
					mutable EarthView::World::Graphic::CMaterialPtr mpMaterial;
					EarthView::World::Graphic::CRenderOperation mRenderOp;
					CStreeViewArrowMovable* mpParent;
				};

			public:
				CStreeViewArrowMovable(const EVString& name, const EVString& group, const EVString& imgName);
				CStreeViewArrowMovable(const EVString& name, const EVString& group, const EVString& imgName, const ev_real32 scale);
				~CStreeViewArrowMovable();

#pragma region 必须重载的函数
				virtual EVString getMovableType() const;
				virtual ev_void _notifyCurrentCamera(EarthView::World::Graphic::CCamera* cam);
				virtual ev_void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue);
				virtual ev_void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables);
				virtual ev_void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor);
				inline const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox(ev_void) const { return mBox; };
				virtual Real getBoundingRadius() const { return mRadius; };
#pragma endregion

			protected:		
				EVString mMatName;
				EVString mGrpName;
				EVString mImgName;
				ev_real32 mScale;
				CStreeViewArrowRenderable* mpArrowRenderable;
				EarthView::World::Graphic::CCamera *mCurrentCamera;
				EarthView::World::Spatial::Math::CAxisAlignedBox mBox;
				ev_real32 mRadius;
				static ev_int32 mRenderQueueGroupID;

			private:
				ev_void initialize();
				ev_void buildBuffer(const EarthView::World::Geometry3D::CVertexVector& vertexVector, const EarthView::World::Geometry3D::CIndexVector& indexVector);
			};

			class EV_Spatial3DStreetView_DLL CStreeViewArrowIndicator : public EarthView::World::Core::CBaseObject
			{
			ev_private:
				CStreeViewArrowIndicator(_in EarthView::World::Core::CNameValuePairList * pList);

			public:
				enum ArrowDirection
				{
					Arr_None      = 0,
					Arr_North     = 1 << 0,
					Arr_NorthEast = 1 << 1,
					Arr_East      = 1 << 2,
					Arr_SouthEast = 1 << 3,
					Arr_South     = 1 << 4,
					Arr_SouthWest = 1 << 5,
					Arr_West      = 1 << 6,
					Arr_NorthWest = 1 << 7,
					Arr_All       = Arr_North | Arr_NorthEast | Arr_East | Arr_SouthEast | Arr_South | Arr_SouthWest | Arr_West | Arr_NorthWest
				}; 

				CStreeViewArrowIndicator(EarthView::World::Graphic::CSceneManager* pSceneMgr);
				CStreeViewArrowIndicator(EarthView::World::Graphic::CSceneManager* pSceneMgr, const ev_real32 scale);
				~CStreeViewArrowIndicator();
				ev_void setSelectable(ev_uint16 direction, ev_bool selectable);
				ev_void updateArrow(ev_uint16 direction);
				EarthView::World::Graphic::CNode* getNode();
				ev_void render();
				ev_void deRender();				

			private:
				ev_void initialize();

			private:
				EVString mGrpName;
				ev_uint16 mArrowDirection;
				ev_real32 mScale;
				CStreeViewArrowMovable* mArrows[8];
				EarthView::World::Graphic::CSceneManager* mpSceneMgr;
				EarthView::World::Graphic::CNode* mpNode;
			};
		}
	}
}

#endif