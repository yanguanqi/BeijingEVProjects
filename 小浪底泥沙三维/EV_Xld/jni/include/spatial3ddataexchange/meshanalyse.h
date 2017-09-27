#ifndef EARTHVIEW_WORLD_SPATIAL3D_MESHANALYSE_H
#define EARTHVIEW_WORLD_SPATIAL3D_MESHANALYSE_H

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "spatial3ddataset/spatial3ddatasetcomdef.h"
#include "graphic/entity.h"
#include "graphic/scriptcompiler.h"


namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace DataExchange{
				class CResourceFileInfo;
				class CMeshFileLoader;

				class CMeshFileLoaderListener : public EarthView::World::Graphic::CScriptCompilerListener
				{
				public:
					set<EVString> mGpus;
					set<EVString> mProgRefs;
					CMeshFileLoader* mLoader;
				public:
					/// <summary>
					/// 模型分析监听器错误回调函数
					/// </summary>
					/// <param name="compiler">脚本编译器</param>
					/// <param name="code">错误码</param>
					/// <param name="file">当前编译的脚本名称</param>
					/// <param name="line">行</param>
					/// <param name="msg">错误描述</parraam>
					/// <returns>void</returns>
					void handleError( EarthView::World::Graphic::CScriptCompiler *compiler, _in ev_uint32 code, _in const EVString &file, _in ev_int32 line, _in const EVString &msg);
				};

				/// <summary>
				/// 模型文件加载器，加载目录下所有模型和相关资源
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CMeshFileLoader  : public EarthView::World::Core::CAllocatedObject
				{
					friend class CMeshFileLoaderListener;
				private:
					EVString mGroupName;
					EarthView::World::Core::CStringArray mErrors;
					EarthView::World::Core::CStringArray mFiles;
					EVString mFolder;
					EarthView::World::Graphic::CSceneManager* mSceneMnger;

					CMeshFileLoaderListener mListener;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshFileLoader(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CMeshFileLoader(EarthView::World::Graphic::CSceneManager* ref_SceneMnger);
					virtual ~CMeshFileLoader();

					/// <summary>
					/// 加载需要进行模型分析的目录
					/// </summary>
					/// <param name="folder">目录路径</param>
					/// <returns>ev_bool</returns>
					ev_bool loadFiles(const EVString& folder);


					/// <summary>
					/// 检查材质文件是否都在
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					//void checkMeshMaterial(EarthView::World::Graphic::CSceneManager* sceneMnger, EarthView::World::Core::CStringArray& meshFiles, EarthView::World::Core::CStringArray& errors, EVString& folder)


					/// <summary>
					/// 卸载模型分析资源
					/// </summary>
					/// <returns>void</returns>
					ev_bool unloadFiles();

					/// <summary>
					/// 获取mesh文件集
					/// </summary>
					/// <param name="files">文件路径集</param>
					/// <returns>ev_bool</returns>
					ev_void getMeshFiles(_inout EarthView::World::Core::CStringArray& files);

					/// <summary>
					/// 根据文件名查找分析目录下的文件
					/// </summary>
					/// <param name="filename">文件名</param>
					/// <param name="files">文件路径集</param>
					/// <returns>ev_bool</returns>
					ev_bool findFile(const EVString& filename, EarthView::World::Core::CStringArray& files);

					/// <summary>
					/// 根据文件路径获取文件名
					/// </summary>
					/// <param name="file">文件路径</param>
					/// <returns>EVString</returns>
					static EVString getFilename(const EVString& file);

					/// <summary>
					/// 获取解析相关资源文件时的错误
					/// </summary>
					/// <param name="errors">错误集</param>
					/// <returns>void</returns>
					ev_void getErrors(_inout EarthView::World::Core::CStringArray& errors);

				};

				/// <summary>
				/// 模型分析类，负责分析出模型相关的资源文件。被分析的模型应该先通过CMeshFileLoader
				///加载到资源管理器中
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CMeshAnalyse : public EarthView::World::Core::CAllocatedObject
				{
				private:
					EarthView::World::Graphic::CSceneManager* mSceneMnger;
					EarthView::World::Graphic::CEntity* mEntity;
					EVString mResourceGroupName;
					EVString mFolder;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshAnalyse(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CMeshAnalyse(EarthView::World::Graphic::CSceneManager* ref_SceneMnger);
					virtual ~CMeshAnalyse();

					/// <summary>
					/// 打开需要分析的模型文件
					/// </summary>
					/// <param name="meshName">模型名称，此时该名称的模型应该被加载到资源管理器中</param>
					/// <returns>ev_bool</returns>
					ev_bool open(const EVString &meshName,const EVString &resourceGroup);

					ev_bool open(const EVString &meshName,const EVString& resourcePath,const EVString &resourceGroup);

					/// <summary>
					/// 关闭当前分析的模型文件
					/// </summary>
					/// <returns>ev_bool</returns>
					ev_void close();

					/// <summary>
					/// 判断是否存在GPU
					/// </summary>
					/// <returns>存在返回true，失败返回fal</returns>
					ev_bool isExistGPU();

					/// <summary>
					/// 获取当前模型的骨骼资源文件名
					/// </summary>
					/// <returns>EVString</returns>
					EVString getSkeleton();

					/// <summary>
					///  获取当前模型的材质资源文件名集合
					/// </summary>
					/// <param name="materials">材质文件名称集</param>
					/// <returns>void</returns>
					ev_void getMaterials(_inout EarthView::World::Core::CStringArray& materials);

					/// <summary>
					/// 获取当前模型的纹理资源文件名集合
					/// </summary>
					/// <param name="textures">纹理文件名称集合</param>
					/// <returns>void</returns>
					ev_void getTextures(_inout EarthView::World::Core::CStringArray& textures);

					/// <summary>
					///  获取当前模型的纹理资源文件名集合
					/// </summary>
					/// <param name="gpus">GPU文件名称集合</param>
					/// <param name="progs">PROGRAM文件名径集合</param>
					/// <returns>void</returns>
					ev_void getGpus(_inout EarthView::World::Core::CStringArray& gpus, _inout EarthView::World::Core::CStringArray& progs);

					/// <summary>
					/// 获取模型包围盒
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					
					ev_void getBoundingBox(_out EarthView::World::Spatial::Math::CAxisAlignedBox& boundingbox);

				private:
					ev_void insertUnifiedGpus(set<EVString>& gpus, set<EVString>& progs,EarthView::World::Graphic::CGpuProgramPtr prog);
				};

				/// <summary>
				///  模型资源映射表表项
				/// </summary>
                class EV_Spatial3DDataExchange_DLL CMeshResourceItem : public EarthView::World::Core::CAllocatedObject
				{
				private:
					ev_bool mIsValid;
					ev_bool mHasUpload;

					EVString mResourceName;
					EVString mFilename;
					EarthView::World::Spatial3D::Dataset::MaterialResourceType mType;

					ev_uint32 refNum;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshResourceItem(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CMeshResourceItem();
					virtual ~CMeshResourceItem();

					/// <summary>
					///  获取资源文件是否合法，一般指关联的文件是否存在
					/// </summary>
					/// <returns>ev_bool</returns>
					ev_bool getValidState();

					/// <summary>
					///  设置合法状态
					/// </summary>
					/// <param name="state">状态</param>
					/// <returns>void</returns>
					ev_void setValidState(ev_bool state);

					/// <summary>
					///  获取当前资源文件是否已经被导入过
					/// </summary>
					/// <returns>ev_bool</returns>
					ev_bool getUploadState();

					/// <summary>
					///  设置当前资源文件是否已经被导入过
					/// </summary>
					/// <param name="state">状态</param>
					/// <returns>void</returns>
					ev_void setUploadState(ev_bool state);

					/// <summary>
					///  获取资源名称，主要做为在映射表中key
					/// </summary>
					/// <returns>EVString</returns>
					EVString getResourceName();

					/// <summary>
					///  设置资源名称
					/// </summary>
					/// <param name="resourceName">资源名称</param>
					/// <returns>void</returns>
					ev_void setResourceName(const EVString& resourceName);

					/// <summary>
					///  获取资源文件路径
					/// </summary>
					/// <returns>EVString</returns>
					EVString getResourceFile();

					/// <summary>
					///  设置资源文件路径
					/// </summary>
					/// <param name="filename">资源文件路径</param>
					/// <returns>void</returns>
					ev_void setResourceFile(const EVString& filename);

					/// <summary>
					///  获取资源类别
					/// </summary>
					/// <returns>EarthView::World::Spatial3D::Dataset::MaterialResourceType</returns>
					EarthView::World::Spatial3D::Dataset::MaterialResourceType getType();

					/// <summary>
					/// 设置资源类别
					/// </summary>
					/// <param name="type">资源类别</param>
					/// <returns>void</returns>
					ev_void setType(EarthView::World::Spatial3D::Dataset::MaterialResourceType type);

					/// <summary>
					///  引用计数，同一资源可能被不同模型引用，在删除该资源时要检查引用计数是否为0
					/// </summary>
					/// <returns>void</returns>
					ev_void addRef();
					ev_void delRef();
					ev_void resetRef();
					ev_uint32 getRef();
					ev_void setRef(ev_uint32 count);
				};

				/// <summary>
				///  模型资源映射表，避免某一批模型导入时导入相同资源
				/// </summary>
				class EV_Spatial3DDataExchange_DLL CMeshResourceMap : public EarthView::World::Core::CAllocatedObject
				{
				private:
					typedef struct  ResIndex
					{
						EVString resName;
						EarthView::World::Spatial3D::Dataset::MaterialResourceType type;
					};

					typedef vector<ResIndex> MeshItem;

					typedef map<EVString, MeshItem*> MeshResTab;
					MeshResTab mMeshs;

					typedef map<EVString, EarthView::World::Spatial3D::DataExchange::CMeshResourceItem*> ResourceTab;
					ResourceTab mMaterialRes;
					ResourceTab mTextureRes;
					ResourceTab mGpuRes;
					ResourceTab mSkeletonRes;
					ResourceTab mProgramRes;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CMeshResourceMap(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CMeshResourceMap();
					virtual ~CMeshResourceMap();

					/// <summary>
					///  获取映射表中模型名称集
					/// <param name="meshNames">模型名称集</param>
					/// </summary>
					/// <returns>void</returns>
					ev_void getMeshNames(_inout EarthView::World::Core::CStringArray& meshNames);

					/// <summary>
					///  添加某个模型的资源
					/// <param name="meshName">模型名称</param>
					/// <param name="res">资源</param>
					/// </summary>
					/// <returns>ev_bool</returns>
					ev_bool addResItem(const EVString& meshName,  EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res);

					/// <summary>
					///  删除某个模型的资源
					/// <param name="meshName">模型名称</param>
					/// <param name="res">资源</param>
					/// </summary>
					/// <returns>ev_bool</returns>
					ev_bool deleteResItem(const EVString& meshName,  EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res);

					/// <summary>
					///  获取某个模型资源数
					/// <param name="meshName">模型名称</param>
					/// </summary>
					/// <returns>ev_uint32</returns>
					ev_uint32 getResNum(const EVString& meshName);

					/// <summary>
					///  获取某个模型的某个资源
					/// <param name="meshName">模型名称</param>
					/// <param name="index">模型资源的下标</param>
					/// <param name="res">获取的模型资源</param>
					/// </summary>
					/// <returns>ev_bool</returns>
					ev_bool getResItem(const EVString& meshName, ev_uint32 index, _inout EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res);
				private:
					ev_bool addMeshRes(ResourceTab& tab, const EVString& meshName, EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res);
					ev_bool deleteMeshRes(ResourceTab& tab, const EVString& meshName, EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res);
					ev_bool getMeshRes(ResourceTab& tab, const EVString& resName,_inout EarthView::World::Spatial3D::DataExchange::CMeshResourceItem* res);
					ev_void clearTab(ResourceTab& tab);
				};
			} //namespace 
		}
	}
}
#endif

