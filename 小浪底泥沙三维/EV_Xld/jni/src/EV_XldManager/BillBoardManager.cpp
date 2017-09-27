
#include "BillboardManager.h"
#include "xld\WaterConservancyManager.h"
#include "spatialobject\geoobject.h"
#include "geometry3d\geometry3dextension\multipoint3dextension.h"
#include "core\datastream.h"
#include "graphic\image.h"
#include "symbol\billboard3dsymbol.h"
#include "spatialinterface\altitudemode.h"
#include "spatialobject\coordinatesystem\coordinatefactory.h"
#include "graphic\resourcegroupmanager.h"

using namespace EarthView::World::Spatial::Display;
using namespace EarthView::World::Core;
using namespace EarthView::World::Spatial;
using namespace EarthView::World::Spatial::Utility;
using namespace EarthView::World::Geometry3D;

EarthView::Xld::RenderLib::CBilloardManager*  EarthView::Xld::RenderLib::CBilloardManager::mpSingleton = NULL;

EarthView::Xld::RenderLib::CBilloardManager::CBilloardManager()
{
	this->mpGlobeControl = EarthView::XldManager::CWaterConservancyManager::GetSingletonPtr()->mpGlobeControl;
	mpSR = CCoordinateSystemFactory::createCoordSys(GEO_WGS84);
	this->mIsInitialised = false;
	this->mpSymbol = NULL;
}

EarthView::Xld::RenderLib::CBilloardManager::~CBilloardManager()
{
	this->mpGlobeControl = NULL;
	if (this->mpSymbol)
	{
		delete this->mpSymbol;
	}
	if (this->mpSR)
	{
		delete this->mpSR;
	}
	for (size_t i=0;i<mGeoObjectList.size();i++)
	{
		delete mGeoObjectList.at(i);
	}
	mGeoObjectList.clear();
	ev_map<EVString, EarthView::World::Geometry3D::CMultiGeometry3DExtension*>::iterator ite = mExtentionList.begin();
	for (; ite != mExtentionList.end(); ite++)
	{
		delete ite->second;
	}
	mExtentionList.clear();
}

EarthView::Xld::RenderLib::CBilloardManager&  EarthView::Xld::RenderLib::CBilloardManager::getSingleton()
{
	if (!EarthView::Xld::RenderLib::CBilloardManager::mpSingleton)
	{
		EarthView::Xld::RenderLib::CBilloardManager::mpSingleton = new  EarthView::Xld::RenderLib::CBilloardManager();
	}
	return *EarthView::Xld::RenderLib::CBilloardManager::mpSingleton;
}

EarthView::Xld::RenderLib::CBilloardManager *  EarthView::Xld::RenderLib::CBilloardManager::getSingletonPtr()
{
	if (!EarthView::Xld::RenderLib::CBilloardManager::mpSingleton)
	{
		EarthView::Xld::RenderLib::CBilloardManager::mpSingleton = new  EarthView::Xld::RenderLib::CBilloardManager();
	}
	return  EarthView::Xld::RenderLib::CBilloardManager::mpSingleton;
}

void  EarthView::Xld::RenderLib::CBilloardManager::CreateBillBoard(const EVString & billboardName, const EVString & imgFileName, const EVString & content, ev_real64 & longi, ev_real64 & lati, ev_real64 & alti)
{
	this->InitialiseSymbol();

	EarthView::World::Graphic::CImage image;
	image.load(imgFileName, "Resource");
	vector<EVString> strs;
	imgFileName.tokenize('.', strs);
	EVString ext = strs[1];
	DataStreamPtr streamptr = image.encode(ext);
	MemoryDataStreamPtr memoryStreamPtr(streamptr);
	mpSymbol->setImage(0, imgFileName, memoryStreamPtr);

	EarthView::World::Spatial::Geometry::CPoint* p = EV_NEW EarthView::World::Spatial::Geometry::CPoint(longi, lati, alti);
	p->setSpatialReferenceRef(mpSR);
	p->update();

	CGeoObject* obj1 = new CGeoObject();
	obj1->setGeometry(p, false, true);//第三个参数为true，说明setGeometry时clone了一下,外面可以释放p了;
	obj1->setSymbol(mpSymbol, false, true);//第三个参数为true，说明setSymbol时clone了一下，外面可以释放symbol了;
	obj1->addProperty("Tooltip", content);

	CMultiPoint3DExtension* tmpExtension = new CMultiPoint3DExtension(this->mpGlobeControl->getSceneManager(), billboardName);
	tmpExtension->appendGeoObject(obj1);
	tmpExtension->build();
	tmpExtension->render();
	mExtentionList[billboardName] = tmpExtension;
	mGeoObjectList.push_back(obj1);

	delete p;
}

EarthView::World::Spatial::Display::CBillboard3DSymbol * EarthView::Xld::RenderLib::CBilloardManager::GetBillboardSymbol()
{
	return this->mpSymbol;
}

void EarthView::Xld::RenderLib::CBilloardManager::InitialiseSymbol()
{
	if (!this->mIsInitialised) 
	{
		

		mpSymbol = new CBillboard3DSymbol();
		mpSymbol->setName("BillBoardMarker");
		mpSymbol->setAltitudeMode(EarthView::World::Spatial::Utility::AM_Absolute);
		mpSymbol->setHightenValue(0);
		mpSymbol->setShowPicture(true);
		mpSymbol->setPictureScale(1.0);
		mpSymbol->setBillboardWidth(25.0);
		mpSymbol->setBillboardHeight(25.0);
		mpSymbol->setShowText(true);
		mpSymbol->setPropertyName("Tooltip");
		mpSymbol->setFontName("宋体");
		mpSymbol->setFontSize(20);

		this->mIsInitialised = true;
	}
}


