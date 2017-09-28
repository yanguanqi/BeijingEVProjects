#ifndef EARTHVIEW_WORLD_SPATIAL_VECTORCACHE_VECTORCACHEINFO_H
#define EARTHVIEW_WORLD_SPATIAL_VECTORCACHE_VECTORCACHEINFO_H
#include "vectorcache/evvectorcache_api.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorCache
			{
				/// <summary>
				/// 切割模板枚举
				/// </summary>
				enum EVVectorCacheTemplateType
				{
					/// <summary>
					/// 未知
					/// </summary>
					VectorCacheTemplateType_Unknown		=	0,
					/// <summary>
					/// WGS84
					/// </summary>
					VectorCacheTemplateType_WGS84		=	1,
					/// <summary>
					/// 墨卡托
					/// </summary>
					VectorCacheTemplateType_Mercator	=	2,
					/// <summary>
					/// 自定义
					/// </summary>
					VectorCacheTemplateType_UserDefined = 100
				};

				/// <summary>
				/// 分块信息
				/// </summary>
				struct  DivisionInfo
				{
					/// <summary>
					/// 起始级别
					/// </summary>
					ev_int32 nStartLevel;
					/// <summary>
					/// 终止级别
					/// </summary>
					ev_int32 nEndLevel;
					/// <summary>
					/// 基础级别
					/// </summary>
					ev_int32 nBaseLevel;
				};


				/// <summary>
				/// 切割基础参数信息类
				/// </summary>
				class EVVECTORCACHE_API CVectorCacheBasicParam
					:public EarthView::World::Core::CAllocatedObject
				{
				private:
					ev_char* mszFirstFolderName;
					ev_char* mszSecondFolderName;
					ev_char* mszFolderPath;
					ev_char* mszFileName;
					EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat mnCacheType;
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode mnMode;
				public:
					/// <summary>
					/// 设置首文件夹的名称
					/// </summary>
					/// <param name="value">文件夹名称</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool setFirstFolderName(_in const EVString& value);
					
					/// <summary>
					/// 设置次文件夹名称
					/// </summary>
					/// <param name="value">文件夹名称</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool setSecondFolderName(_in const EVString& value);
					
					/// <summary>
					/// 设置切割结果名称
					/// </summary>
					/// <param name="value">切割结果名称</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool setResultName(_in const EVString& value);
					
					/// <summary>
					/// 设置切割结果所在绝对路径
					/// </summary>
					/// <param name="value">路径</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool setSavePath(_in const EVString& value);
					
					/// <summary>
					/// 设置切割结果的存储格式
					/// </summary>
					/// <param name="type">切割结果存储格式</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool setCacheType(_in EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat type);
					
					/// <summary>
					/// 设置切割模式
					/// </summary>
					/// <param name="mode">切割模式</param>
					/// <returns>成功返回true，否则返回false</returns>
					ev_bool setTemplateMode(_in EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode mode);
					
					/// <summary>
					/// 获取首文件夹名称
					/// </summary>
					/// <returns>首文件夹名称</returns>
					const ev_char* getFirstFolderName()const;
					
					/// <summary>
					/// 获取次文件夹名称
					/// </summary>
					/// <returns>次文件夹名称</returns>
					const ev_char* getSecondFolderName()const;
					
					/// <summary>
					/// 获取切割结果名称
					/// </summary>
					/// <returns>切割结果名称</returns>
					const ev_char* getResultName()const;
					
					/// <summary>
					/// 获取切割结果所在路径
					/// </summary>
					/// <returns>切割结果所在路径</returns>
					const ev_char* getSavePath()const;
					
					/// <summary>
					/// 设置切割结果的存储格式
					/// </summary>
					/// <returns>存储格式</returns>
					EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat getCacheType();
					
					/// <summary>
					/// 获取切割模式
					/// </summary>
					/// <returns>切割模式</returns>
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateMode getTemplateMode();
				ev_private:
					CVectorCacheBasicParam(_in EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CVectorCacheBasicParam();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CVectorCacheBasicParam();
				};

			
				/// <summary>
				/// 字段定义
				/// </summary>
				class EVVECTORCACHE_API CCacheFieldInfo
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 字段名
					/// </summary>
					EVString strFieldName;
					/// <summary>
					/// 字段类型
					/// </summary>
					EarthView::World::Spatial::VectorCache::EVVectorCacheFieldType nValueType; 
					/// <summary>
					/// 字段长度
					/// </summary>
					ev_int32 nSize;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CCacheFieldInfo();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CCacheFieldInfo();
				ev_private:
					CCacheFieldInfo(_in EarthView::World::Core::CNameValuePairList* pList );
				};

				/// <summary>
				/// 缓存模板；WGS84 OR Mercator	
				/// </summary>
				class EVVECTORCACHE_API CCacheTemplate
					:public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					CCacheTemplate(_in EarthView::World::Core::CNameValuePairList* pList );
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="mode">切割模式</param>
					/// <returns></returns>
					CCacheTemplate(_in EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateType mode);
					
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CCacheTemplate();
	
					/// <summary>
					/// 获取设置缓存模式
					/// </summary>
					/// <returns>缓存模式</returns>
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateType getTemplateMode() const;

					/// <summary>
					/// 获取分块级别数
					/// </summary>
					/// <returns>分块层级数目</returns>
					ev_uint32 getDivisionLevel();

					/// <summary>
					/// 获取制定层级的分块信息
					/// </summary>
					/// <param name="index">指定层级</param>
					/// <returns>分块信息</returns>
					EarthView::World::Spatial::VectorCache::DivisionInfo* getDivesionInfoRef(_in ev_uint32 index);
									
					/// <summary>
					/// 获取瓦片起始点
					/// </summary>
					/// <returns>瓦片起始点</returns>
					EarthView::World::Spatial::VectorCache::EVVectorCacheOrientPosition getOrientPosition();
					
					/// <summary>
					/// 获取初级瓦片对应实际大小
					/// </summary>
					/// <returns>初级瓦片对应范围的大小</returns>
					ev_real64 getFirstTileSize();
					
					/// <summary>
					/// 获取描述瓦片大小的单位
					/// </summary>
					/// <returns>瓦片大小的单位</returns>
					EarthView::World::Spatial::VectorCache::EVVectorCacheUnitType getTileSizeType();

					/// <summary>
					/// 获取当前模板囊括的真实地理范围
					/// </summary>
					/// <returns>地理范围，不需释放</returns>
					EarthView::World::Spatial::VectorCache::GeoRect* getTemplateClipRect();
					
					
					/// <summary>
					/// 获取模板起始级别
					/// </summary>
					/// <returns>开始级别</returns>
					ev_int32 getFirstLevel();

					/// <summary>
					/// 获取模板终止级别
					/// </summary>
					/// <returns>终止级别</returns>
					ev_int32 getEndLevel();

					/// <summary>
					/// 获取当前级别瓦片在下一级能被分割的数目
					/// </summary>
					/// <returns>当前级别瓦片在下一级能被分割的数目</returns>
					ev_int32 getSubTileNum();
					/// <summary>
					/// 是否默认模板
					/// </summary>
					/// <returns>true默认模板/false自定义</returns>
					ev_bool getDefaultTemplate();
					
					/// <summary>
					/// 获取行列的起始序号
					/// </summary>
					/// <returns>起始行列号</returns>
					ev_int32 getStartTileNumber();

					/// <summary>
					/// 克隆模板
					/// </summary>
					/// <returns>克隆结果对象的指针</returns>
					_extfree EarthView::World::Spatial::VectorCache::CCacheTemplate* clone();
				protected:
					CCacheTemplate();
					ev_void setTileSizeType(EarthView::World::Spatial::VectorCache::EVVectorCacheUnitType type);
					ev_void setTemplateClipRect(_in EarthView::World::Spatial::VectorCache::GeoRect& rect);
					ev_void setFirstLevel(_in ev_int32 firstRank);
					ev_void setEndLevel(_in ev_int32 endRank);
					ev_void setStartTileNumber(_in ev_int32 value);
					ev_int32 setTemplateMode(_in EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateType mode);
					ev_void setSubTileNum(_in ev_int32 value);
					ev_void addDivisionInfo(_in DivisionInfo& division);
					ev_void setOrientPosition(_in EarthView::World::Spatial::VectorCache::EVVectorCacheOrientPosition type);
					ev_void setTileSize(_in ev_real64 value);
				protected:
					ev_bool bHasDefaultTemplate;                              //////当前模式是否为默认切割模式
					ev_int32 nFirstLevel;                                       //////该切割方法切割的首级别
					ev_int32 nEndLevel;                                         //////该切割方法切割的末级别
					EarthView::World::Spatial::VectorCache::EVVectorCacheTemplateType nTemplateMode;                  //////切割模式，1为WGS84，2为墨卡托
					ev_int32 nSubTileNum;                                       //////本级瓦片分为下级瓦片的个数。
					EarthView::World::Spatial::VectorCache::EVVectorCacheUnitType	 nSpaceType;                       //////角度还是弧度    值见宏定义
					ev_int32 nNumberForFirstRowOrCol;                           //////起始行列号
					ev_real64 nFirstSpace;                                    //////首级瓦片的边长范围
					EarthView::World::Spatial::VectorCache::GeoRect rect;                                          ///////////分割瓦片时总的地理范围
					EarthView::World::Spatial::VectorCache::EVVectorCacheOrientPosition nOrientPosition;           ///////////原点所在位置
					vector<EarthView::World::Spatial::VectorCache::DivisionInfo> vDBDivision;                        ///////////存储分层信息
				};

				/// <summary>
				/// 处理进程
				/// </summary>
				class EVVECTORCACHE_API CVectorCacheProcessMessage
					:public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					CVectorCacheProcessMessage(_in EarthView::World::Core::CNameValuePairList* pList )
					{
						nDone = 0;
						nTotal = 0;
						nProcess = VectorCacheProcess_Process_Ready;
						nCurrentDatasetIndex = -1;
						nTotalDatasetNum = 0;
					}
				public:
					ev_int32 nDone;
					ev_int32 nTotal;
					ev_int32 nCurrentDatasetIndex;
					ev_uint32 nTotalDatasetNum;
					EarthView::World::Spatial::VectorCache::EVVectorCacheProcess nProcess;

					/// <summary>
					/// 完成数目加1
					/// </summary>
					/// <returns></returns>
					ev_void setSavedProcessNum()
					{
						nDone++;
					}

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CVectorCacheProcessMessage()
					{
						nCurrentDatasetIndex = -1;
						nTotalDatasetNum = 0;
						nDone = 0;
						nTotal = 0;
						nProcess = VectorCacheProcess_Process_Ready;
					}

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CVectorCacheProcessMessage(){}
				};
				
				/// <summary>
				/// 缓存信息
				/// </summary>
				class EVVECTORCACHE_API CCacheProcessInfo
					:public EarthView::World::Core::CAllocatedObject
				{
				ev_private:
					CCacheProcessInfo(_in EarthView::World::Core::CNameValuePairList* pList );
				private:
					////////////基本环境变量///////////
					//const ev_char* szFileName;           /////////文件名
					//const ev_char* szSavedPath;          /////////结果路径
					const ev_char* szTableNameInDB;      /////////结果库中的表名
					//const ev_char* szFirstFolder;        /////////0-6级文件夹名
					//const ev_char* szSecondFolder;       /////////7-16级文件夹名
					const ev_char* szDataTime;           /////////数据时间，格式为年月日时共10字节，中间某位为空时以0补足
					////////////切割参数///////////
					ev_bool bCreate;                     /////////新建时为true,更新时为false
					ev_int32 nTotalProcessNum;             /////////需要处理的要素数目
					//EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat	 nCacheType;                   /////////输出格式
					ev_int32 nMinRange;                    ////////nStartLevel;/////////起始切割级别
					ev_int32 nMaxRange;                    /////////nEndLevel; /////////终止切割级别	
					EVVectorCachePauseType nStop;                        /////////停止程序
					EarthView::World::Spatial::VectorCache::GeoRect rect;                     /////////切割范围

					//CVectorCacheProcessMessage* msg;               /////////进度消息

					ev_int32 nAttributeMinLevel;		///属性最小切割级别
					ev_int32 nAttributeMaxLevel;		///属性最大切割级别

					ev_vector<EarthView::World::Spatial::VectorCache::CCacheFieldInfo> vAllFields;	///全部属性字段
					ev_vector<EarthView::World::Spatial::VectorCache::CCacheFieldInfo> vFiledInfos;	///要切割的属性字段
					ev_uint32 nFieldTotalNum;
					ev_uint32 nFieldClipNum;
					vector<ev_void*> vAttributes;
					vector<ev_int32> vClipAtrriIndex;
					//ev_int32 nAttributeTotalLenOfByte;

					ev_bool bOutGeometry;				///输出属性
					ev_bool bOutAttribute;				///输出几何信息
						
					ev_char* szClipTime;
					ev_char* szRemark;
					ev_real64 mnPrecession;

					EVVectorCacheGeometryType mnGeometryType;
				public:
					/// <summary>
					/// 克隆
					/// </summary>
					/// <returns>克隆对象指针</returns>
					_extfree EarthView::World::Spatial::VectorCache::CCacheProcessInfo* clone();

					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CCacheProcessInfo();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CCacheProcessInfo();

					
					/// <summary>
					/// 获取某数据集总要素数
					/// </summary>
					/// <returns>总要素数</returns>
					ev_int32 getTotalProcessNum();

					/// <summary>
					/// 设置图层精度
					/// </summary>
					/// <param name="value">图层精度</param>
					/// <returns></returns>
					ev_void setPrecession(_in ev_real64 value);
					/// <summary>
					/// 获取数图层精度
					/// </summary>
					/// <returns>图层精度</returns>
					ev_real64 getPrecession();

					/// <summary>
					/// 获取备注信息
					/// </summary>
					/// <returns>备注信息</returns>
					const ev_char* getRemarkInfo() const;
					/// <summary>
					/// 设置备注信息
					/// </summary>
					/// <param name="value">备注信息</param>
					/// <returns>成功返回ture,失败返回false</returns>
					ev_bool setRemartkInfo(_in const ev_char* value);
						
					/// <summary>
					/// 设置是否输出属性
					/// </summary>
					/// <param name="value">是否输出属性</param>
					/// <returns></returns>
					ev_void setOutAttribute(_in ev_bool value);
					/// <summary>
					/// 获取是否输出属性
					/// </summary>
					/// <returns>是否输出属性</returns>
					ev_bool getOutAttribute();
	
						
					/// <summary>
					/// 设置属性最小切割级别
					/// </summary>
					/// <param name="level">属性最小切割级别</param>
					/// <returns></returns>
					ev_void setAttributeMinLevel(_in ev_int32 level);
					/// <summary>
					/// 设置属性最大切割级别
					/// </summary>
					/// <param name="level">属性最大切割级别</param>
					/// <returns></returns>
					ev_void setAttributeMaxLevel(_in ev_int32 level);
					/// <summary>
					/// 获取属性最小切割级别
					/// </summary>
					/// <returns>属性最小切割级别</returns>
					ev_int32 getAttributeMinLevel();
					/// <summary>
					/// 获取属性最大切割级别
					/// </summary>
					/// <returns>属性最大切割级别</returns>
					ev_int32 getAttributeMaxLevel();

					/// <summary>
					/// 为数据集添加属性定义
					/// </summary>
					/// <param name="info">属性定义</param>
					/// <returns></returns>
					ev_void addFieldInfo(_in EarthView::World::Spatial::VectorCache::CCacheFieldInfo* info);

					/// <summary>
					/// 设置索要输出的属性在总属性定义中的索引
					/// </summary>
					/// <param name="index">索引指针</param>
					/// <param name="count">索引数目</param>
					/// <returns></returns>
					ev_void setClipAttriIndex(_in ev_uint32* index,_in ev_uint32 count);
					
					/// <summary>
					/// 获取所输入的字段定义
					/// </summary>
					/// <param name="index">所在索引</param>
					/// <returns>指定的字段定义</returns>
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* getFieldInfo(_in ev_uint32 index);

					/// <summary>
					/// 获取要输出的字段数目
					/// </summary>
					/// <returns>要输出的字段数目</returns>
					ev_uint32 getClipFieldNum();

					/// <summary>
					/// 获取输出字段在总字段定义中的索引
					/// </summary>
					/// <param name="index">输出字段的索引</param>
					/// <returns>输出字段在总字段定义中的索引</returns>
					ev_uint32 getClipAttributeIndex(_in ev_uint32 index);

					/// <summary>
					/// 获取总字段数目
					/// </summary>
					/// <returns>总字段数目</returns>
					ev_uint32 getTotalFieldNum();

					/// <summary>
					/// 设置数据时间
					/// </summary>
					/// <param name="szValue">数据时间，10字节，YYYYMMDDHH</param>
					/// <returns>时间格式正确返回true</returns>
					ev_bool setDataTime(_in const ev_char* szValue);

					/// <summary>
					/// 获取数据时间
					/// </summary>
					/// <returns>数据时间</returns>
					const ev_char* getDataTime();

					/// <summary>
					/// 设置数据集名称
					/// </summary>
					/// <param name="szValue">数据集名称，50字节之内</param>
					/// <returns>成功返回true</returns>
					ev_bool setDatasetName(_in const ev_char* szValue);

					/// <summary>
					/// 获取数据集名称
					/// </summary>
					/// <returns>数据集名称</returns>
					const ev_char* getDatasetName();

					/// <summary>
					/// 清除添加的字段定义,同时清除添加的切割字段索引
					/// </summary>
					/// <returns></returns>
					ev_void clearFieldInfos();

					/// <summary>
					/// 清除所设置的字段索引
					/// </summary>
					/// <returns></returns>
					ev_void clearClipAttriIndex();

					/// <summary>
					/// 设置最小切割级别
					/// </summary>
					/// <param name="nStartLevel">最小切割级别</param>
					/// <returns></returns>
					ev_void setMinRange(_in ev_int32 nStartLevel); 

					/// <summary>
					/// 设置最大切割级别
					/// </summary>
					/// <param name="nEndLevel">最大切割级别</param>
					/// <returns></returns>
					ev_void setMaxRange(_in ev_int32 nEndLevel);

					/// <summary>
					/// 获取最小切割级别
					/// </summary>
					/// <returns></returns>
					ev_int32 getMinRange();

					/// <summary>
					/// 获取最大切割级别
					/// </summary>
					/// <returns></returns>
					ev_int32 getMaxRange(); 

					/// <summary>
					/// 设置切割范围
					/// </summary>
					/// <returns></returns>
					ev_void setCacheRect(_in EarthView::World::Spatial::VectorCache::GeoRect& rect);

					/// <summary>
					/// 获取切割范围
					/// </summary>
					/// <returns>获取切割范围</returns>
					EarthView::World::Spatial::VectorCache::GeoRect* getCacheRect(); 
				protected:
					/// <summary>
					/// 设置某数据集总feature数目
					/// </summary>
					/// <param name="value">要素数目</param>
					/// <returns></returns>
					ev_void setTotalProcessNum(_in ev_int32 value);
					ev_bool setClipTime(const ev_char* value);
					const ev_char* getClipTime();

					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* getClipFieldInfo(_in ev_uint32 index);
					EarthView::World::Spatial::VectorCache::CCacheFieldInfo* getAllFieldInfo(_in ev_uint32 index);

					ev_void* getAttribute(_in ev_uint32 index);
					///为每条要素添加属性
					ev_void addAttribute(_in ev_uint32 index,_in ev_void* value);
					ev_void clearAttributes();
					//输出几何信息
					ev_void setOutGeometry(_in ev_bool value);
					ev_bool getOutGeometry();
					///设置是新建还是更新
					ev_void setIsCreate(ev_bool value);
					ev_bool isCreate();

					/*ev_void setFirstFolderName(const ev_char* firstFolderName);
					const ev_char* getFirstFolderName();

					ev_void setSecondFolderName(const ev_char* secondFolderName);
					const ev_char* getSecondFolderName();
					///设置目标文件名称
					ev_void setFileName(const ev_char* fileName);
					const ev_char* getFileName();*/
					///设置目标路径
					/*ev_void setResultSavedPath(const ev_char* savedPath);
					const ev_char* getResultSavedPath();*/
					///输出格式
					//ev_void setCacheType(_in EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat value);
					//EarthView::World::Spatial::VectorCache::EVVectorCacheDataFormat getCacheType();  // 输出格式 (二进制流,7z)
					///需要处理的要素数目                      
						

					//ev_void setSavedProcessNum();
						
						
					///设置停止状态///////设置断点消息，打断还是从启
					ev_void setStop(EVVectorCachePauseType type);  
					EVVectorCachePauseType getStop();
		
						
					//ev_int32 getMessageDoneNum();
					//ev_int32 getMessageTotalNum();
					//EarthView::World::Spatial::VectorCache::EVVectorCacheProcess getMessageProcess();
					//ev_void setMessageDoneNum(_in ev_int32 value);
					//ev_void setMessageTotalNum(_in ev_int32 value);
					//ev_void setMessageProcess(EarthView::World::Spatial::VectorCache::EVVectorCacheProcess value);

					friend class CVectorCache;
					friend class CCacheCreate;
					friend class CClipGeom;
					friend class CClipPoint;
					friend class CClipPolyline;
					friend class CClipPolygon;
					friend class CVectorCacheCreator;
				};
				
				
			}
		}
	}
}
#endif


