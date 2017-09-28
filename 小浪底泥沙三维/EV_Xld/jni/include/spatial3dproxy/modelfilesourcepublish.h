#ifndef EV_SPATIAL_3DPROXY_MODEL_FILE_SOURCE_PUBLISH
#define  EV_SPATIAL_3DPROXY_MODEL_FILE_SOURCE_PUBLISH
#include "spatial3dengine/modelpublish.h"
#include "graphic/mesh.h"


namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{

			class CModelFileSourcePulishTool_Help;

			class  CModelFileSourcePublishTool : public EarthView::World::Spatial3D::CModelPublishTool_DBDesSource
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CModelFileSourcePublishTool(_in EarthView::World::Core::CNameValuePairList *pList){};
			public:
				/// <summary>
				///  构造函数
				/// </summary>
				/// <returns></returns>
				/// <memo></memo>
				CModelFileSourcePublishTool();

				/// <summary>
				///  析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				~CModelFileSourcePublishTool();
				/// <summary>
				/// 设置模型采用双面光照
				/// </summary>
				/// <param isLeftHand>是否采用双面光照</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setDoubleSideLight(bool doubleSideLight);
				/// <summary>
				/// 设置模型源坐标系
				/// </summary>
				/// <param isLeftHand>是否是左手系</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setIsLeftHand(bool isLeftHand);
				/// <summary>
				/// 设置重新计算法线
				/// </summary>
				/// <param isReCalNormal>是否重新计算法线</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setReCalNormal(bool isReCalNormal);
				/// <summary>
				/// 设置文件数据源路径
				/// </summary>
				/// <param name="path">路径</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setModelFileSourcePath(const EVString& path);

				/// <summary>
				/// 设置属性
				/// </summary>
				/// <param name="tablename">属性表表名</param>
				/// <param name="fields">属性表字段集</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setAttrTable(const EVString& tablename ,EarthView::World::Spatial::GeoDataset::CFields* ref_fields);

				/// <summary>
				/// 设置场景管理器
				/// </summary>
				/// <param name="ref_pscenemanager">场景对象</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setCSceneManager(EarthView::World::Graphic::CSceneManager* ref_pscenemanager);
				/// <summary>
				/// 设置场景RenderWindow
				/// </summary>
				/// <param name="ref_prenderwindow">RenderWindow</param>
				/// <returns></returns>
				/// <memo></memo>
				ev_void setRenderWindow(EarthView::World::Graphic::CRenderWindow* ref_prenderwindow);

				EarthView::World::Spatial3D::ModelIdAndNameMap getPulishedModelIdAndNameMap();

			protected:
				/// <summary>
				/// 导入前预处理
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool _preProcessing();

				/// <summary>
				/// 获取源数据源中属性表表名和字段结构列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceAttrNameAndAttrStructVector(AttrNameAndFieldsMap& attrnameandfieldsmap);

				/// <summary>
				/// 获取源数据源中属性表表名和节点名称列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceNodecodeNameAndAttrNameVector(NodeCodeAndAttrNameMap& nodecodeandattrnamemap);

				/// <summary>
				/// 获取源数据源中的模型名称和nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_int32 _getSrcModelSourceNodecodeAndModelNameVector(_in vector<EVString>& nodecodes, _out NodeCodeAndModelNameMap& nodecodeandmodelnamemap);

				/// <summary>
				/// 开始发布数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_bool  _startPublish();

				/// <summary>
				/// 处理冲突模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_void _processClashModel();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				virtual ev_void _clear();

				/// <summary>
				/// 开始发布数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool publishModel(const EVString& modelFile, ev_bool bUpdate, ev_int32 updateID, ev_int32& importedID);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool initMeshFileResourceGroup(const EVString& meshfile);
			private:
				/// <summary>
				/// 获取模型文件列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_int32 getModelFileNames();
				/// <summary>
				/// 获取单个模型文件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_int32 getModelFileName();

				ev_void addMaterialFolder(const EVString& folder);
				ev_void removeMaterialFolder(const EVString& folder);
				ev_void addResourceFolder(const EVString& folder);
				ev_void removeResourceFolder(const EVString& folder);
				ev_void exportToLocal(EarthView::World::Graphic::CMesh* mesh,EVString exportPath,EarthView::World::Core::MemoryDataStreamPtr& aniStream,EarthView::World::Core::MemoryDataStreamPtr& skeletonStream);
				
				EarthView::World::Graphic::CMesh*  modelSerializer(EVString filePath,EarthView::World::Core::MemoryDataStreamPtr& aniStream,EarthView::World::Core::MemoryDataStreamPtr& skeletonStream);
				
				// 只处理X文件，限于D3D9渲染系统;(主要用于内部测试用)
				EarthView::World::Graphic::CMesh*  modelSerializerOnlyXFile(const ev_bool& bOnlyZIP, EVString filePath,EarthView::World::Core::MemoryDataStreamPtr& aniStream,EarthView::World::Core::MemoryDataStreamPtr& skeletonStream);

		private:
				bool mDoubleSideLight;
				bool mIsLeftHand;
				bool mReCalNormal;
				EVString mModelFileSourcePath;	
				EVString mAttrTableName;
				EarthView::World::Spatial::GeoDataset::CFields* mpAttrTableFields;
				EarthView::World::Spatial::GeoDataset::CFields* mpDefaultAttrTableFields;
				vector<EVString> mModelFiles;
				vector<EVString> mModelNames;
				EarthView::World::Graphic::CRenderWindow* mpRenderWindow;
				EarthView::World::Graphic::CSceneManager* mpSceneManager;
				EarthView::World::Spatial3DProxy::CModelFileSourcePulishTool_Help* mpHelp;
			};

		}}}

#endif
