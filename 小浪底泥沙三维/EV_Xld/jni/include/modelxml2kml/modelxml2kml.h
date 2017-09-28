#ifndef MODEL_XML_2_KML_H
#define MODEL_XML_2_KML_H

#include "modelxml2kml/global.h"
#include "core/stringdefines.h"
#include "core/thread.h"
#include "mathengine/vector3.h"
#include "mathengine/axisalignedbox.h"
#include "kmlserializer/geoobjectextension.h"
#include "core/ev_translator.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
				class CKmlNetworkLink;
			}
		}
	}
}

ev_void EV_BUILD_MODEL_XML2KML_DLL setModelXml2KmlError(const EVString& errormsg);
EVString EV_BUILD_MODEL_XML2KML_DLL getModelXml2KmlError();
ev_void EV_BUILD_MODEL_XML2KML_DLL clearModelXml2KmlError();

class EV_BUILD_MODEL_XML2KML_DLL UIInformationListener
{
public:
	UIInformationListener(){}
	virtual ~UIInformationListener(){}
	virtual ev_void onUIInformation(const EVString& information){}
	virtual ev_void onUIErrorInformation(const EVString& information){}
	virtual ev_void completePercent(ev_int32 percent){}
	virtual ev_void complete(){};
protected:
private:
};


class EV_BUILD_MODEL_XML2KML_DLL EV_ModelXml2Kml
{
public:
	EV_ModelXml2Kml();

	~EV_ModelXml2Kml();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setParam(const EVString& srcFolder, const EVString& desFolder, ev_bool copyFile, ev_bool convertModelFile,ev_bool convertKmz,const EVString& netLinkPath);
	
	/// <summary>
	/// 1、检测输入文件完整性
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool checkSrcFiles();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool initSrcFile();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void saveToKmz(EVString kmlPath);
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool getSrcFileMetadata();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool getModelTileFileInfo();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_int32 getModelTileFileCount();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool initDesFiles();	

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool parseSrcFile(ev_int32 modelTileFileIndex);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool createDesMemoryObjects();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool saveDesMemoryObjects(const EVString& kmlFile);	

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool copySrcFile2DesFolder();

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool treatWithModelFiles();	

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setUIInformationListener(UIInformationListener* p)
	{
		mListenerLock.lock();
		mpUIInformationListener = p;
		mListenerLock.unlock();
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void isKmz(ev_bool isKmz);
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_bool getIsKmz();
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void isNetLinkPath(ev_bool isNetLinkPath);
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	ev_void setNetLinkPath(EVString netLinkPath);
	void onInformation(const EVString& information)
	{
		mListenerLock.lock();
		if (NULL != mpUIInformationListener)
		{
			mpUIInformationListener->onUIInformation(information);
		}
		mListenerLock.unlock();
	}

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	void completePercent(ev_int32 percent)
	{
		mListenerLock.lock();
		if (NULL != mpUIInformationListener)
		{
			mpUIInformationListener->completePercent(percent);
		}
		mListenerLock.unlock();
	}

	void stop()
	{
		mbStop = true;
	}
private:
	EVString mSrcFolder;
	EVString mDesFolder;
	EVString mFullModelPath;
	ev_bool mIsNetLinkPath;
	EVString mNetLinkPath;
	ev_bool mIsKmz;
	ev_bool mbCopyModelFile;
	ev_bool mbConvertModelFile;
	ev_bool m2OneKmlFile;
	UIInformationListener* mpUIInformationListener;
	EarthView::World::Core::CMutex mListenerLock;
	ev_bool mbStop;

	//////////////////////////////////////////////////////////////////////////
	//xml文件中间格式
	typedef struct
	{
		ev_int32 mSrid;
		EarthView::World::Spatial::Math::CVector3 mCenterPt;
	}XMLModelMetadata;
	XMLModelMetadata mXMLModelMetadata; ///

	typedef struct
	{
		EVString name;
		EVString path;
	}ModelTileFile;

	typedef struct
	{
		ev_int32 mSrid;
		EarthView::World::Spatial::Math::CVector3 mLoal;
		vector<ModelTileFile> mModelTileFiles;
	}XMLModelTileFiles;
	XMLModelTileFiles mXMLModelTileFiles;	///

	typedef struct struXMLModelNode
	{
		ev_real64 minRange;
		ev_real64 radius;
		EarthView::World::Spatial::Math::CVector3 center;
		EVString modelPath;
		EarthView::World::Spatial::Math::CAxisAlignedBox box;
		//vector<EVString> subNodeLinks;

		ev_real64 parentMinRange;
		ev_real64 parentRadius;

		vector<struXMLModelNode*> subNodes;

		struXMLModelNode* parent;

		struXMLModelNode()
		{
			parent = NULL;
		}

	}XMLModelNode;

	typedef struct
	{
		EVString nName;

		list<XMLModelNode*> mXmlModelNodes;

		void clear();
	}XMLModelTileData;

	typedef struct
	{
		ev_uint32 mNumTiles;
		ev_uint32 mNumNodes;
		ev_uint32 mMaxLevel;
		ev_uint32 mMaxNumChildren;
		list<XMLModelTileData> mXMLModelTileFileDatas;

		ev_int32 mPercentTag;

		void clear();
	}XMLModelTileFileData;
	//
	//////////////////////////////////////////////////////////////////////////
	EVString mCurrentXMLModelTileFile;
	XMLModelTileFileData mXMLModelTileFileData;

	friend struct EV_ModelXml2KmlInner;
	struct EV_ModelXml2KmlInner* mpModelXml2KmlInner;

	protected:
		EVString getXMLModelTileFile(const EVString& xmlModelTileName);
		ev_void parseSrcNode(XMLModelTileData& xmlModelTileData, ev_void* pNode, EarthView::World::Spatial::Math::CVector3& parentCentor, XMLModelNode* parentNode);
		ev_void xmlModelNode2kmlModel(const XMLModelNode* xmlModelNode, EarthView::World::Spatial::Kml::CGeoObjectExtension& kmlModel, ev_bool changeCenter);
		ev_void addLinkLod(EarthView::World::Spatial::Kml::CKmlNetworkLink* pLink, XMLModelNode* m);
		EarthView::World::Spatial::Kml::CGeoObjectExtension *initGeoObject( EVString name );
	public:
			ev_bool treatWithModelFiles(const EV_ModelXml2Kml::XMLModelNode&Node);
};

#define CHECK_STOP_COMMAND do {if(mbStop){onInformation(EVTR("已停止。")); return false;}} while (0);

class EV_BUILD_MODEL_XML2KML_DLL EV_ModelXml2KmlDirector
{
public:
	EV_ModelXml2KmlDirector()
	{
		mpEV_ModelXml2Kml = new EV_ModelXml2Kml;
		mpWorker = new Worker(this);
		mbStop = false;
		mpUIInformationListener = NULL;
	}

	~EV_ModelXml2KmlDirector()
	{
		EV_SAFE_DELETE_NULL(mpWorker)
		EV_SAFE_DELETE_NULL(mpEV_ModelXml2Kml)			
	}

	static EV_ModelXml2KmlDirector* getSharedDirector()
	{
		static EV_ModelXml2KmlDirector* p = NULL;
		if (NULL == p)
		{
			p = new EV_ModelXml2KmlDirector;
		}
		return p;
	}

	ev_void setParam(const EVString& srcFolder, const EVString& desFolder, ev_bool copyFile, ev_bool convertModelFile, ev_bool convertKmz,const EVString& netLinkPath)
	{
		mpEV_ModelXml2Kml->setParam(srcFolder, desFolder, copyFile, convertModelFile,convertKmz,netLinkPath);
	}

	ev_void start()
	{
		mbStop = false;
		if (!mpWorker->isRunning())
		{
			mpEV_ModelXml2Kml->setUIInformationListener(mpUIInformationListener);
			mWorkThread.work(mpWorker);
		}
		else
		{
			onInformation(EVTR("转换正在进行，请稍后再试......"));
		}
	}

	ev_void stop()
	{
		mpEV_ModelXml2Kml->stop();
		mpEV_ModelXml2Kml->setUIInformationListener(NULL);
		onInformation(EVTR("正在停止......"));		
		mbStop = true;
	}

	ev_bool isRunning()
	{
		return mpWorker->isRunning();
	}

	ev_void setUIInformationListener(UIInformationListener* p)
	{		
		mpUIInformationListener = p;
	}
protected:
	class Worker : public EarthView::World::Core::CThreadFunc
	{
	public:
		Worker(EV_ModelXml2KmlDirector* p):mpEV_ModelXml2KmlDirector(p)
		{
			mIsRunning = false;
		}

		~Worker()
		{

		}

		void run()
		{
			mIsRunning = true;
			if (!mpEV_ModelXml2KmlDirector->run())
			{
				EVString errorInfo = getModelXml2KmlError();
				mpEV_ModelXml2KmlDirector->onUIErrorInformation(errorInfo);
			}
			mIsRunning = false;
		}

		ev_bool isRunning() const
		{
			return mIsRunning;
		}
	protected:
		EV_ModelXml2KmlDirector* mpEV_ModelXml2KmlDirector;
		ev_bool mIsRunning;
	private:
	};

	ev_bool run()
	{
		ev_int32 allStep = 5;
		ev_int32 currentStep = 1;
		EVString info;

		info.format(EVTR("第 %d/%d 步  检查源数据文件......").getString(), currentStep++, allStep);
		completePercent(0);
		onInformation(info);
		if (!mpEV_ModelXml2Kml->checkSrcFiles())
		{
			return false;
		}
		CHECK_STOP_COMMAND
		completePercent(100);

		info.format(EVTR("第 %d/%d 步  初始化源数据文件......").getString(), currentStep++, allStep);
		completePercent(0);
		onInformation(info);
		if (!mpEV_ModelXml2Kml->initSrcFile())
		{
			return false;
		}
		CHECK_STOP_COMMAND
		completePercent(100);

		info.format(EVTR("第 %d/%d 步  获取数据信息......").getString(), currentStep++, allStep);
		completePercent(0);
		onInformation(info);
		if (!mpEV_ModelXml2Kml->getSrcFileMetadata())
		{
			return false;
		}
		CHECK_STOP_COMMAND
		completePercent(50);
		if (!mpEV_ModelXml2Kml->getModelTileFileInfo())
		{
			return false;
		}
		CHECK_STOP_COMMAND
		completePercent(100);

		info.format(EVTR("第 %d/%d 步  初始化输出目录......").getString(), currentStep++, allStep);
		completePercent(0);
		onInformation(info);
		if (!mpEV_ModelXml2Kml->parseSrcFile(0))
		{
			return false;
		}
		if (!mpEV_ModelXml2Kml->initDesFiles())
		{
			return false;
		}
		CHECK_STOP_COMMAND
		completePercent(100);
		
		ev_int32 tileFileCount = mpEV_ModelXml2Kml->getModelTileFileCount();
		for (ev_int32 i = 0; i < tileFileCount; ++i)
		{			
			CHECK_STOP_COMMAND
			info.format(EVTR("第 %d/%d 步  解析第 %d 个文件，共 %d 个文件......").getString(), currentStep, allStep, i+1, tileFileCount);
			completePercent(0);
			onInformation(info);
			if (!mpEV_ModelXml2Kml->parseSrcFile(i))
			{
				continue;
			}
			
			CHECK_STOP_COMMAND
			info.format(EVTR("第 %d/%d 步  转换第 %d 个文件，共 %d 个文件......").getString(), currentStep, allStep, i+1, tileFileCount);
			completePercent(0);
			onInformation(info);
			if (!mpEV_ModelXml2Kml->createDesMemoryObjects())
			{
				continue;
			}

			CHECK_STOP_COMMAND
			info.format(EVTR("第 %d/%d 步  拷贝第 %d 个文件夹内的模型和资源，共 %d 个文件夹......").getString(), currentStep, allStep, i+1, tileFileCount);
			completePercent(0);
			onInformation(info);
			if (!mpEV_ModelXml2Kml->getIsKmz())
			{
				mpEV_ModelXml2Kml->copySrcFile2DesFolder();
			}

			//CHECK_STOP_COMMAND
			//info.format("第 %d/%d 步  处理第 %d 个文件关联的模型，共 %d 个文件......", currentStep, allStep, i+1, tileFileCount);
			//completePercent(0);
			//onInformation(info);
			//if (!mpEV_ModelXml2Kml->treatWithModelFiles())
			//{
			//}

		}
		completePercent(100);
		onInformation(EVTR("已完成。"));
		if (NULL != mpUIInformationListener)
		{
			mpUIInformationListener->complete();
		}
		return true;
	}

	void onInformation(const EVString& information)
	{
		if (NULL != mpUIInformationListener)
		{
			mpUIInformationListener->onUIInformation(information);
		}
	}

	ev_void onUIErrorInformation(const EVString& information)
	{
		if (NULL != mpUIInformationListener)
		{
			mpUIInformationListener->onUIErrorInformation(information);
		}
	}

	void completePercent(ev_int32 percent)
	{
		if (NULL != mpUIInformationListener)
		{
			mpUIInformationListener->completePercent(percent);
		}
	}
private:
	EV_ModelXml2Kml* mpEV_ModelXml2Kml;
	EarthView::World::Core::CThread mWorkThread;
	Worker* mpWorker;
	UIInformationListener* mpUIInformationListener;
	ev_bool mbStop;
};

#endif
