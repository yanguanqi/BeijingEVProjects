#ifndef EV_PVR_IMAGETILE_IMPORT_H__
#define EV_PVR_IMAGETILE_IMPORT_H__
#include "core/datastream.h"
#include "core/file.h"
#include "cachemanager/cachemanagerglobal.h"


class EV_CACHEMANAGER_DLL CreateCacheTool
{
private:
	struct LogData
	{
		int level;
		int row;
		int col;

		bool operator ==(const LogData& other)
		{
			return level == other.level && row == other.row && col == other.col;
		}
	};
public:
	CreateCacheTool();
	~CreateCacheTool();

	class EV_CACHEMANAGER_DLL CreateCacheToolListener
	{
	public:
		CreateCacheToolListener();
		virtual ~CreateCacheToolListener();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		virtual ev_void onProcess(ev_int32 percent);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		virtual ev_void onWorkInfo(const String& info);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		virtual MemoryDataStreamPtr jpg2pvr(MemoryDataStreamPtr jpgstream);
	protected:
	private:
	};

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void setToolListener(CreateCacheToolListener* toolListener);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void setOutLotFile(const String& logfile);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void setInLogFile(const String& logfile);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void createPvrImageTileCache(const String& prvFileRootPath, const String& layerName);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void createDemTileCache(const String& demTileRootPath, const String& datasetName);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void stop();
protected:
	ev_bool mbRunable;
private:
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void onProcess(ev_int32 percent);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void onWorkInfo(const String& info);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void createImageTilehelpFunc(String& level, String&tile, ev_int32& iLevel, ev_int32& iRow, ev_int32& iCol);
	ev_void createDemTilehelpFunc(String& level, String&tile, ev_int32& iLevel, ev_int32& iRow, ev_int32& iCol);
	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_bool writeImageTileCache(ev_int32& iLevel, ev_int32& irow, ev_int32& iCol, MemoryDataStreamPtr& pfile);
	ev_bool writeDemTileCache(ev_int32& iLevel, ev_int32& irow, ev_int32& iCol, MemoryDataStreamPtr& pfile);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void readLogData(const String& datatype);

	/// <summary>
	/// 
	/// </summary>
	/// <param name=""></param>
	/// <returns></returns>
	/// <memo></memo>
	ev_void initLogFile(const String& datatype);
	ev_void writeLogData(LogData logdata);

private:
	CreateCacheToolListener* mpToolListener;
	String mPvrImageTileRootPath;
	String mImageTileLayerName;

	String mDEMTileRootPath;
	String mDEMTileDataSetName;

	
	CFile mOutLogFileHandle;
	String mOutLogFile;
	String mInLogFile;

	vector<LogData> mInLogData;

};




#endif

