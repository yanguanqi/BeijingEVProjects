#ifndef _PROJECT_MANAGER_H
#define _PROJECT_MANAGER_H

#include <core/memoryallocatedobject.h>
#include <core/file.h>

#include <spatialinterface/isymbol.h>
#include <spatialinterface/idatasource.h>
#include <spatialinterface/idatasourcefactory.h>
#include <spatialinterface/imap.h>
#include <spatialinterface/iscene.h>
#include <spatialinterface/imapfactory.h>
#include <spatialinterface/iscenefactory.h>

#include "config.h"
#include "isymbollistener.h"
#include "spatialinterface/ipagelayout.h"

namespace EarthView {
	namespace World		{
		namespace Core		{
			namespace Database {
				class CSqlDatabase;
			}
		}
	}
}

namespace EarthView {
	namespace World		{
		namespace Spatial		{
			namespace Display {
				class ISymbolFactory;
			}
		}
	}
}
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Utility
			{      
				/// <summary>
				/// 工程文件管理
				/// 单体类
				/// </summary>
				class EV_PRJMGR_DLL CProjectManager : public EarthView::World::Core::CAllocatedObject
				{
				public:
					class EV_PRJMGR_DLL IProjectManagerListener : public EarthView::World::Core::CAllocatedObject
					{
					public:
						IProjectManagerListener();
						virtual ~IProjectManagerListener();
ev_private:
						IProjectManagerListener(EarthView::World::Core::CNameValuePairList* pList);
					public:
						virtual void onProjectFilePreLoaded();
						virtual void onProjectFileLoaded();
						virtual ev_bool isProjectFileCanLoad();

						virtual void onProjectLoadingProcessChanged(const EVString& tips,ev_uint8 percent);
					};
				private:
					static EarthView::World::Spatial::Utility::CProjectManager* msSingleton;

ev_private:
					CProjectManager(EarthView::World::Core::CNameValuePairList* pList);

				public:
					CProjectManager();
					~CProjectManager();

				public:
					static EarthView::World::Spatial::Utility::CProjectManager& getSingleton();
					static EarthView::World::Spatial::Utility::CProjectManager* getSingletonPtr();

				public:
					/// <summary>
					/// 设置符号解析监听者
					/// 该监听者负责自定义符号的解译
					/// </summary>
					/// <param name="pListener">监听者</param>
					void setSymbolListener(EarthView::World::Spatial::Display::ISymbolListener* ref_pListener);

					/// <summary>
					/// 获得符号解析监听者
					/// </summary>
					/// <param name=""></param>
					EarthView::World::Spatial::Display::ISymbolListener* getSymbolListener() const;

					/// <summary>
					/// 设置地图工厂                    
					/// </summary>
					/// <param name="pFactory">地图工厂</param>
					void setMapFactory(EarthView::World::Spatial::Atlas::IMapFactory* ref_pFactory);

					/// <summary>
					/// 获取地图参数解析对象                    
					/// </summary>
					/// <param name=""></param>
					EarthView::World::Spatial::Atlas::IMapFactory* getMapFactory() const;

					/// <summary>
					/// 设置场景参数解析对象                    
					/// </summary>
					/// <param name="pFactory">场景工厂</param>
					void setSceneFactory(EarthView::World::Spatial::Atlas::ISceneFactory* ref_pFactory);

					/// <summary>
					/// 获取场景工厂                  
					/// </summary>
					/// <param name=""></param>
					EarthView::World::Spatial::Atlas::ISceneFactory* getSceneFactory() const;

					/// <summary>
					/// 加载工程文件，并进行解译                    
					/// </summary>
					/// <param name="strPrjFilePath">工程文件路径</param>
					/// <returns>-1:文件未找到;0 : 加载成功; 1:自定义符号未解译; 2:地图参数未解译; 3:自定义符号和地图参数未解译; 4:场景参数为解译; 5:自定义符号和参数未解译; 6:地图参数和场景参数未解译; 7:自定义符号、地图参数和场景参数未解译;100:未找到数据源;1000:其它错误</returns>
					ev_int32 load(const EVString& strPrjFilePath);
					ev_int32 autoLoad(const EVString& strPrjFilePath,ev_bool isDefaultPro = FALSE);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool isLoading() const;

					/// <summary>
					/// 返回是否可以重新打工程文件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool canRenew();


					/// <summary>
					/// 创建新的工程文件
					/// 调用此函数，将重新初始化
					/// </summary>
					/// <param name=""></param>
					void renew();                

					/// <summary>
					/// 保存工程文件
					/// 当调用load加载后，可调用此函数就地保存
					/// </summary>
					/// <param name=""></param>
					ev_bool save();
					ev_bool autoSave( const EVString& strPrjFilePath);
					/// <summary>
					/// 另存为工程文件
					/// 当调用new创建或load加载后，可调用此函数进行保存
					/// </summary>
					/// <param name="strPrjFilePath">工程文件另存</param>
					ev_bool saveAs(const EVString& strPrjFilePath);

					/// <summary>
					/// 询问工程配置是否发生改变					
					/// </summary>
					/// <param name=""></param>
					ev_bool isProjectChanged();

					/// <summary>
					/// 设置工程配置为已改变。			
					/// </summary>
					/// <param name=""></param>
					void setProjectChanged();

					/// <summary>
					/// 获得数据源的个数					
					/// </summary>
					/// <param name=""></param>
					ev_uint32 getDataSourceCount() const;

					/// <summary>
					/// 添加数据源到工程配置中					
					/// </summary>
					/// <param name="strName">数据源名称主键</param>
					/// <param name="ds">数据源对象</param>
					ev_bool addDataSource(const EVString& strName,EarthView::World::Spatial::GeoDataset::IDataSource* ref_ds);

					/// <summary>
					/// 询问数据源是否存在					
					/// </summary>
					/// <param name="strName">数据源名称主键</param>					
					ev_bool existDataSource(const EVString& strName)const;

					/// <summary>
					/// 获得数据源对象					
					/// </summary>
					/// <param name="strName">数据源名称主键</param>	
					EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource(const EVString& strName);
					/// <summary>
					/// 获得数据源对象						
					/// </summary>
					/// <param name="index">数据源序号</param>	
					EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource(ev_uint32 index);

					/// <summary>
					/// 设置新的数据源对象			
					/// 如果名称已经存在，则覆盖；如果不存在，则添加。
					/// </summary>
					/// <param name="strName">数据源名称主键</param>
					/// <param name="ds">数据源对象</param>	
					ev_bool setDataSource(const EVString& strName,EarthView::World::Spatial::GeoDataset::IDataSource* ref_ds);

					/// <summary>
					/// 移除数据源对象					
					/// </summary>
					/// <param name="strName">数据源名称主键</param>	
					ev_bool removeDataSource(const EVString& strName);

					/// <summary>
					/// 清空所有数据源					
					/// </summary>
					/// <param name=""></param>	
					ev_bool clearDataSource();  

					ev_void setDataSourceChanged();

					/// <summary>
					/// 设置符号工厂
					/// 符号工厂负责对符号进行序列化和反序列化
					/// </summary>
					/// <param name="pFactory">工厂</param>	
					ev_void setSymbolFactory(EarthView::World::Spatial::Display::ISymbolFactory* pFactory){mpSymbolFactory = pFactory;}

					/// <summary>
					/// 获得符号工厂					
					/// </summary>
					/// <param name=""></param>	
					EarthView::World::Spatial::Display::ISymbolFactory* getSymbolFactory() const{return mpSymbolFactory;}

					/// <summary>
					/// 获得符号个数					
					/// </summary>
					/// <param name=""></param>	
					ev_uint32 getSymbolCount() const;

					/// <summary>
					/// 添加符号					
					/// </summary>
					/// <param name="strID">名称主键</param>	
					/// <param name="sym">符号对象</param>
					ev_bool addSymbol(const EVString& strID,EarthView::World::Spatial::Display::ISymbol* sym);

					/// <summary>
					/// 询问是否存在该符号					
					/// </summary>
					/// <param name="strID">名称主键</param>
					ev_bool existSymbol(const EVString& strID)const;

					/// <summary>
					/// 询问图片是否存在于某个符号中					
					/// </summary>
					/// <param name="strImageID">名称主键</param>
					ev_bool existImageInAnySymbol(const EVString& strImageID)const;

					/// <summary>
					/// 获取符号					
					/// </summary>
					/// <param name="strID">名称主键</param>
					EarthView::World::Spatial::Display::ISymbol* getSymbol(const EVString& strID);

					/// <summary>
					/// 获取符号					
					/// </summary>
					/// <param name="index">序号</param>
					EarthView::World::Spatial::Display::ISymbol* getSymbol(ev_uint32 index);

					/// <summary>
					/// 设置符号			
					/// 如果该名称已经存在，则替换符号；如果不存在，则添加。
					/// </summary>
					/// <param name="strID">名称主键</param>
					/// <param name="sym">符号对象</param>
					ev_bool setSymbol(const EVString& strID,EarthView::World::Spatial::Display::ISymbol* sym);

					/// <summary>
					/// 移除符号					
					/// </summary>
					/// <param name="strID">名称主键</param>
					ev_bool removeSymbol(const EVString& strID);

					/// <summary>
					/// 清空符号					
					/// </summary>
					/// <param name=""></param>
					ev_bool clearSymbol(); 

					/// <summary>
					/// 获得地图的个数					
					/// </summary>
					/// <param name=""></param>
					ev_uint32 getMapCount()const;

					/// <summary>
					/// 添加地图			
					/// 如果同名的地图已经存在，则返回false；添加成功即返回true
					/// </summary>					
					/// <param name="pMap">地图对象</param>
					ev_bool addMap(EarthView::World::Spatial::Atlas::IMap* ref_pMap);     

					/// <summary>
					/// 获得地图对象		
					/// </summary>
					/// <param name="index">序号</param>
					EarthView::World::Spatial::Atlas::IMap* getMap(ev_uint32 index);

					/// <summary>
					/// 获得地图对象		
					/// </summary>
					/// <param name="strMapName">名称</param>	
					EarthView::World::Spatial::Atlas::IMap* getMap(const EVString& strMapName);

					/// <summary>
					/// 重命名地图		
					/// </summary>
					/// <param name="pMap">地图对象</param>
					/// <param name="newName">新名称</param>
					ev_void renameMap(EarthView::World::Spatial::Atlas::IMap* pMap, const EVString& newName);

					/// <summary>
					/// 询问地图是否存在		
					/// </summary>
					/// <param name="strMapName">名称</param>					
					ev_bool existMap(const EVString& strMapName)const;

					/// <summary>
					/// 移除地图对象		
					/// </summary>
					/// <param name="index">序号</param>
					ev_bool removeMap(ev_uint32 index);

					/// <summary>
					/// 移除地图对象		
					/// </summary>
					/// <param name="strMapName">名称</param>
					ev_bool removeMap(const EVString& strMapName);

					/// <summary>
					/// 清空地图对象		
					/// </summary>
					/// <param name=""></param>
					ev_void clearMap();

					/// <summary>
					/// 设置为当前地图对象		
					/// 如果该名称不存在，则返回false；否则，返回true。
					/// </summary>
					/// <param name="strMapName">名称</param>
					ev_bool setCurrentMap(const EVString& strMapName);

					/// <summary>
					/// 获得当前地图对象的名称		
					/// </summary>
					/// <param name=""></param>
					const EVString& getCurrentMap() const;

					/// <summary>
					/// 标记地图发生改变
					/// </summary>					
					/// <param name=""></param>
					ev_void setMapChanged();    

					/// <summary>
					/// 标记场景发生改变
					/// </summary>					
					/// <param name=""></param>
					ev_void setSceneChanged();  

					/// <summary>
					/// 获得场景的个数					
					/// </summary>
					/// <param name=""></param>
					ev_uint32 getSceneCount()const;

					/// <summary>
					/// 添加场景	
					/// 如果同名的场景已经存在，则返回false；添加成功即返回true
					/// </summary>					
					/// <param name="pScene">场景对象</param>
					ev_bool addScene(EarthView::World::Spatial::Atlas::IScene* ref_pScene);					  

					/// <summary>
					/// 获得场景对象				
					/// </summary>
					/// <param name="index">场景序号</param>
					EarthView::World::Spatial::Atlas::IScene* getScene(ev_uint32 index);

					/// <summary>
					/// 获得场景对象					
					/// </summary>
					/// <param name="strSceneName">场景名称</param>
					EarthView::World::Spatial::Atlas::IScene* getScene(const EVString& strSceneName);

					/// <summary>
					/// 询问是否存在某个场景					
					/// </summary>
					/// <param name="strSceneName">场景名称</param>
					ev_bool existScene(const EVString& strSceneName)const;

					/// <summary>
					/// 移除场景对象				
					/// </summary>
					/// <param name="index">场景序号</param>
					ev_bool removeScene(ev_uint32 index);

					/// <summary>
					/// 移除场景对象					
					/// </summary>
					/// <param name="strSceneName">场景名称</param>
					ev_bool removeScene(const EVString& strSceneName);

					/// <summary>
					/// 清空所有场景对象				
					/// </summary>
					/// <param name=""></param>
					ev_void clearScene();

					/// <summary>
					/// 添加布局,如果布局名称相同则返回false					
					/// </summary>
					/// <param name="layout">布局对象</param>
					ev_bool addLayout(EarthView::World::Spatial::Carto::IPageLayout* ref_layout);
					/// <summary>
					/// 获得布局的个数					
					/// </summary>
					/// <param name=""></param>
					/// <return>布局的个数</return>
					ev_uint32 getLayoutCount() const;
					/// <summary>
					/// 通过索引获得布局对象		
					/// </summary>
					/// <param name="index">序号</param>
					EarthView::World::Spatial::Carto::IPageLayout* getLayout(ev_uint32 index);
					/// <summary>
					/// 通过布局名称获得布局对象		
					/// </summary>
					/// <param name="strLayoutName">名称</param>	
					EarthView::World::Spatial::Carto::IPageLayout* getLayout(const EVString& strLayoutName);
					/// <summary>
					/// 重命名布局		
					/// </summary>
					/// <param name="pLayout">布局对象</param>
					/// <param name="newName">新名称</param>
					ev_void renameLayout(EarthView::World::Spatial::Carto::IPageLayout* pLayout, const EVString& newName);
				
					/// <summary>
					/// 布局	发生变化	
					/// </summary>
					/// <param name="pLayout">布局对象</param>
					/// <return></return>
					ev_void layoutChange(EarthView::World::Spatial::Carto::IPageLayout* pLayout);

					/// <summary>
					/// 询问布局是否存在		
					/// </summary>
					/// <param name="strLayoutName">名称</param>					
					ev_bool existLayout(const EVString& strLayoutName) const;
					/// <summary>
					/// 移除布局对象		
					/// </summary>
					/// <param name="index">序号</param>
					ev_bool removeLayout(ev_uint32 index);
					/// <summary>
					/// 移除布局对象		
					/// </summary>
					/// <param name="strMapName">名称</param>
					ev_bool removeLayout(const EVString& strLayoutName);
					/// <summary>
					/// 清空布局对象		
					/// </summary>
					/// <param name=""></param>
					ev_void clearLayout();
					/// <summary>
					/// 设置为当前布局对象		
					/// 如果该名称不存在，则返回false；否则，返回true。
					/// </summary>
					/// <param name="strMapName">名称</param>
					ev_bool setCurrentLayout(const EVString& strLayoutName);
					/// <summary>
					/// 获得当前布局对象的名称		
					/// </summary>
					/// <param name=""></param>
					///<return>当前布局对象名称</return>
					const EVString& getCurrentLayout() const;

					/// <summary>
					/// 设置为当前场景对象		
					/// 如果该名称不存在，则返回false；否则，返回true。
					/// </summary>
					/// <param name="strSceneName">场景名称</param>
					ev_bool setCurrentScene(const EVString& strSceneName);

					/// <summary>
					/// 获得当前场景对象					
					/// </summary>
					/// <param name=""></param>
					const EVString& getCurrentScene()const;

					/// <summary>
					/// 设置用户扩展节点               
					/// </summary>
					/// <param name=""></param>
					void setExtension(const EVString& NodeTxt);

					/// <summary>
					/// 获得用户扩展节点               
					/// </summary>
					/// <param name=""></param>
					const EVString& getExtension() const; 

					/// <summary>
					/// 获得工程文件的路径               
					/// </summary>
					/// <param name=""></param>
					const EVString& getProjectFilePath() const;

					/// <summary>
					/// 获得某个绝对路径相对于工程文件路径的相对路径               
					/// </summary>
					/// <param name="fullpath">绝对路径</param>
					/// <param name="relpath">相对路径</param>
					ev_bool getRelativePathReferToProjectPath(const EVString& fullpath,EVString& relpath)const;

					/// <summary>
					/// 获得相对于工程文件路径的相对路径对应的绝对路径               
					/// </summary>					
					/// <param name="relpath">相对路径</param>
					EVString getFullPathReferToProjectPath(const EVString& relpath)const;

					/// <summary>
					/// 添加侦听对象               
					/// </summary>					
					/// <param name="listener">监听者对象</param>
					ev_bool addListener(EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ref_listener);

					/// <summary>
					/// 移除侦听对象               
					/// </summary>					
					/// <param name="listener">监听者对象</param>
					ev_bool removeListener(EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* listener);

				protected:
					ev_void resetChanged();

					int getWriteTypes() const;

					enum WriteDBTypes
					{
						WriteDB_Data		 = 0x01,
						WriteDB_Map			 = 0x02,
						WriteDB_Scene		 = 0x04,
						WriteDB_CurrentMap   = 0x08,
						WriteDB_CurrentScene = 0x10,
						WriteDB_Symbol		 = 0x20,
						WriteDB_Image		 = 0x40,
						WriteDB_Extend		 = 0x80,
						WriteDB_All			 = 0xff
					};

					ev_bool writeToDB(int types, EarthView::World::Core::Database::CSqlDatabase& db);
				private:
					EarthView::World::Spatial::GeoDataset::IDataSource* parseDataSource(const EVString& strXml);
					EarthView::World::Spatial::Display::ISymbol* parseSymbol(const EVString& strXml);                   

					void fireLoadingProcessChanged(const EVString& tips,ev_uint8 percent);

					EarthView::World::Spatial::Display::ISymbolFactory* mpSymbolFactory;

				protected:
					typedef map<EVString, EVString> FileDataSourcePathMap;  //工程文件路径变化时，保存文件型数据源的新旧路径的映射
					FileDataSourcePathMap mFileDsPathMap;
					typedef map<EVString,EarthView::World::Spatial::GeoDataset::IDataSource*> DataSourceMap;
					DataSourceMap mDsMap;
					ev_bool mDsChanged;//是否修改数据源集合,保存工程文件数据库时使用

					typedef map<EVString,EarthView::World::Spatial::Display::ISymbol*> SymbolMap;
					SymbolMap mSymMap;
					ev_bool mSymChanged;//是否修改符号集合,保存工程文件数据库时使用

					typedef map<EVString,ev_uint32> StringCountMap;
					StringCountMap mImgMap;
					ev_bool mImgChanged;//是否修改图片,保存工程文件数据库时使用

					EarthView::World::Spatial::Atlas::ISceneFactory* mpSceneFactory;
					EarthView::World::Spatial::Atlas::IMapFactory* mpMapFactory;

					typedef map<EVString,EarthView::World::Spatial::Atlas::IMap*> MapMap;
					MapMap mMapMap;
					mutable EVString mCurrentMapName;
					ev_bool mMapChanged;//是否修改地图集合,保存工程文件数据库时使用
					ev_bool mCurrentMapChanged;//是否修改当前地图,保存工程文件数据库时使用

					typedef map<EVString,EarthView::World::Spatial::Atlas::IScene*> SceneMap;
					SceneMap mSceneMap;
					mutable EVString mCurrentSceneName;
					ev_bool mSceneChanged;//是否修改场景集合,保存工程文件数据库时使用
					ev_bool mCurrentSceneChanged;//是否修改当前场景,保存工程文件数据库时使用
					ev_bool mIsDefaultPro;

					EarthView::World::Spatial::Display::ISymbolListener* mpSymbolListener;

					EVString mTextExt;
					ev_bool mExtChanged;

					EVString mPrjPath;

					typedef set<EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*> Listeners;
					Listeners mListeners;

					typedef map<EVString, EarthView::World::Spatial::Carto::IPageLayout*> LayoutMap;
					LayoutMap mLayoutMap;
					mutable EVString mCurrentLayoutName;
					ev_bool mLayoutChanged;//是否修改布局，保存工程文件数据库时使用
					ev_bool mCurrentLayoutChanged;//是否修改当前布局，保存工程文件数据库时使用

			private:
				bool mIsLoading;
				class LoadTag
				{
				public:
					LoadTag(CProjectManager* p);
					~LoadTag();
				protected:
				private:
					CProjectManager* mpProjectManager;
				};

				};
			}
		}
	}
}
#endif
