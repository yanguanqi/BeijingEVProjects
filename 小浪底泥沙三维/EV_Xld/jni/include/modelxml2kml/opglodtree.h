#ifndef OPG_LOD_TREE_H
#define OPG_LOD_TREE_H

#include "spatial3ddataset/spatial3ddatasetconfig.h"
#include "core/memoryallocatedobject.h"
#include "mathengine/vector3.h"
#include "mathengine/axisalignedbox.h"
#include "graphic/scenenode.h"
#include "core/xml.h"
#include "modelxml2kml/global.h"
namespace EarthView{
	namespace World{
		namespace Graphic
		{
			class CSceneNode;
		}
	}
}

class COPGMetaData;
class LODTreeExport;
class COPGLodTree;
class COPGTileManager;
class COPGDataParser;

struct OPGTileStats
{
	ev_uint32 mNumTiles;
	ev_uint32 mNumNodes;
	ev_uint32 mMaxLevel;
	ev_uint32 mMaxNumChildren;

	OPGTileStats()
	{
		mNumTiles = 0;
		mNumNodes = 0;
		mMaxLevel = 0;
		mMaxNumChildren = 0;
	}
};


/// <summary>
/// metadata.xml
/// </summary>
class EV_BUILD_MODEL_XML2KML_DLL COPGMetaData : public EarthView::World::Core::CAllocatedObject
{
public:
	COPGMetaData()
	{
	}

	~COPGMetaData()
	{

	}

	ev_void setSrid(ev_int32 srid)
	{
		mSrid = srid;
	}

	const ev_int32 getSrid() const
	{
		return mSrid;
	}

	void setCenterPt(const EarthView::World::Spatial::Math::CVector3& centPt)
	{
		mCenterPt = centPt;
	}

	const EarthView::World::Spatial::Math::CVector3 getCenterPt() const 
	{
		return mCenterPt;
	}
protected:

private:
	ev_int32 mSrid;
	EarthView::World::Spatial::Math::CVector3 mCenterPt;
};

/// <summary>
/// 
/// </summary>
class EV_BUILD_MODEL_XML2KML_DLL COPGLodTree : public EarthView::World::Core::CAllocatedObject
{
	friend class COPGTileManager;
public:
	COPGLodTree();

	COPGLodTree(COPGLodTree* pParent
		,ev_real64 minRange
		,ev_real64 radius
		,const EarthView::World::Spatial::Math::CVector3& centPt
		,const EVString& modelPath
		,const EarthView::World::Spatial::Math::CAxisAlignedBox& box);

	virtual ~COPGLodTree();

	void setParent(COPGLodTree* pParent);

	void addChild(COPGLodTree* pChild);

	ev_uint32 getNumChild();

	COPGLodTree* getChild(ev_uint32 index);

	EarthView::World::Spatial::Math::CAxisAlignedBox getBoundingBox();

	COPGLodTree* clone();

	ev_real64 getMinRange() const {return mMinRange;}
	ev_real64 getRadius() const {return mRadius;}
	EarthView::World::Spatial::Math::CVector3 getCenter() const {return mCenterPt;}
	const EVString& getModelPath() const {return mModelPath;}

protected:
	COPGLodTree* mpParent;
	typedef vector<COPGLodTree*> LodTreeVector;
	LodTreeVector mChildren;

	ev_real64 mMinRange;
	ev_real64 mRadius;
	EarthView::World::Spatial::Math::CVector3 mCenterPt;
	EVString mModelPath;
	EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingBox;
};

/// <summary>
/// 
/// </summary>
class EV_BUILD_MODEL_XML2KML_DLL COPGTile : public EarthView::World::Core::CAllocatedObject
{
	friend class COPGTileManager;
public:
	COPGTile();
	COPGTile(const EVString& name
		,const EVString& xmlPath
		,ev_real32 version
		,const EVString& modelPath
		,COPGLodTree* pLodTree
		,const OPGTileStats& stats);

	virtual ~COPGTile();

	COPGLodTree* getLodTree();

	OPGTileStats getTileStats();

	EVString getName();

	ev_real32 getVersion();

	EVString getModelPath();

	EVString getXmlPath();

	EarthView::World::Spatial::Math::CAxisAlignedBox getBoundingBox();

	COPGTile* clone();
private:
	COPGLodTree* mpLodTree;
	OPGTileStats mStats;
	EVString mName;
	EVString mXmlPath;
	ev_real32 mVersion;
	EVString mModelPath;

	EarthView::World::Spatial::Math::CAxisAlignedBox mBoundingBox;
};

/// <summary>
/// 
/// </summary>
class EV_BUILD_MODEL_XML2KML_DLL COPGTileManager : public EarthView::World::Core::CAllocatedObject
{
public:
	COPGTileManager(COPGDataParser* pOPGDataParser);

	ev_real32 getVersion();

	ev_uint32 getSrid();

	EarthView::World::Spatial::Math::CVector3 getCenterPt();

	EVString getOriginMode();

	ev_uint32 getNumTile();

	COPGTile* getTile(ev_uint32 index);

	COPGTileManager* clone();

protected:
	void _init();
	void _parseTileManager();
	void _parseTileObject();
	void _parseTileLod();
	ev_void _buildDaeLodTree(EVString& strXml,COPGLodTree* pOPGTree, EarthView::World::Spatial::Math::CAxisAlignedBox& maxBox);
	ev_void _buildDaeLodTree(EarthView::World::Core::CXmlElement& nodeElement,COPGLodTree* pOPGTree, EarthView::World::Spatial::Math::CAxisAlignedBox& maxBox);
protected:
	typedef vector<COPGTile*> OPGTileVector;
	OPGTileVector mTileVector;
	COPGDataParser* mpOPGDataParser;
	ev_real32 mVersion;
	ev_uint32 mSrid;
	EarthView::World::Spatial::Math::CVector3 mCenterPt;
	EVString mModelOriginMode;

};


/// <summary>
/// 
/// </summary>
class EV_BUILD_MODEL_XML2KML_DLL COPGDataParser :public EarthView::World::Core::CAllocatedObject
{
public:
	COPGDataParser(const EVString& folder);

	~COPGDataParser();

	const COPGMetaData* getMetaData() const
	{
		return mpOPGMetaData;
	}

	const COPGTileManager* getOPGTileManager() const
	{
		return mpOPGTileManager;
	}

	const EVString& getDataFolder() const 
	{
		return mFolder;
	}

protected:
	ev_void init();
private:
	EVString mFolder;
	COPGMetaData* mpOPGMetaData;
	COPGTileManager* mpOPGTileManager;
};

#endif
