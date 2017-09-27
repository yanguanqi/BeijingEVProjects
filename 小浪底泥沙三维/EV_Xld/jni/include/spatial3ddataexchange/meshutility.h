#ifndef EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHUTILITY_H_ 
#define EARTHVIEW_WORLD_SPATIAL3D_DATAEXCHANGE_MESHUTILITY_H_

#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include "spatial3ddataexchange/meshparams.h"
#include "spatial3ddataexchange/meshdata.h"


#include "mathengine/axisalignedbox.h"
#include "core/datastream.h"
#include "spatial3ddataset/propertymanager.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CEntityDataset;
				class CMeshTemplateDataset;
				class CResourceDataset;
			}
			namespace DataExchange{
				class CMeshAnalyse;
			}}}}
namespace EarthView{
	namespace World{
		namespace Graphic{
			class CSceneManager;
		}
	}       
}


namespace EarthView{namespace World{namespace Spatial3D{namespace DataExchange
{
	class CMeshResource;
	class CDatasourceHelper;
	/// <summary>
	/// 模型入库合并的工具类
	/// </summary>
	class EV_Spatial3DDataExchange_DLL CMeshUtility:public EarthView::World::Core::CBaseObject
	{
ev_private:
		CMeshUtility(_in EarthView::World::Core::CNameValuePairList *pList);
	public:
		/// <summary>
		/// 构造函数
		/// </summary>
		/// <param name="sceManger">场景管理器</param>
		/// <returns></returns>
		CMeshUtility(EarthView::World::Graphic::CSceneManager* ref_sceManger);
		/// <summary>
		/// 析构函数
		/// </summary>
		/// <returns></returns>
		~CMeshUtility();
	public:
		
		/// <summary>
		/// 计算世界矩阵
		/// </summary>
		/// <param name="pos">世界坐标</param>
		/// <param name="scale">缩放比例</param>
		/// <param name="ros">x,y,z轴旋转角度</param>
		/// <returns>世界矩阵</returns>	
		static EarthView::World::Spatial::Math::CMatrix4 composeWorldMartix(const EarthView::World::Spatial::Math::CVector3& pos, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CVector3& ros);
		/// <summary>
		/// 计算世界矩阵
		/// </summary>
		/// <param name="lat">纬度</param>
		/// <param name="lon">经度</param>
		/// <param name="alt">高程</param>
		/// <returns>世界矩阵</returns>	
		static EarthView::World::Spatial::Math::CMatrix4 composeWorldMartix(ev_real32 lat,ev_real32 lon,ev_real32 ati);
		/// <summary>
		/// 分解计算世界矩阵
		/// </summary>
		/// <param name="worldMatrix">世界矩阵</param>
		/// <param name="lat">纬度</param>
		/// <param name="lon">经度</param>
		/// <param name="alt">高程</param>
		/// <param name="scaleInLocal">局部缩放</param>
		/// <param name="orientInLocal">局部旋转</param>
		/// <returns></returns>	
		static void decomposeWorldMatrix(const EarthView::World::Spatial::Math::CMatrix4& worldMatrix, _out ev_real64& lat, _out ev_real64& lon, _out ev_real64& alt, _out EarthView::World::Spatial::Math::CVector3& scaleInLocal, _out EarthView::World::Spatial::Math::CQuaternion& orientInLocal);
		/// <summary>
		/// 分解计算世界矩阵,只分解并转为经纬度，不做旋转处理，只用于3dmax插件
		/// </summary>
		/// <param name="worldMatrix">世界矩阵</param>
		/// <param name="lat">纬度</param>
		/// <param name="lon">经度</param>
		/// <param name="alt">高程</param>
		/// <param name="scaleInLocal">局部缩放</param>
		/// <param name="orientInLocal">局部旋转</param>
		/// <returns></returns>	
		static ev_void decomposeMatrixToPosition(const EarthView::World::Spatial::Math::CMatrix4& worldMatrix,_out ev_real64& lat,_out ev_real64& lon,_out ev_real64& alt,_out EarthView::World::Spatial::Math::CVector3& scaleInLocal,_out EarthView::World::Spatial::Math::CQuaternion& orientInLocal);

		/// <summary>
		/// 导出到模型库
		/// </summary>
		/// <param name="meshPath">模型数据</param>
		/// <param name="resourcePath">模型资源路径</param>
		/// <returns>成功返回true，否则返回false</returns>	
		ev_bool exportToModelBase(const EarthView::World::Spatial3D::DataExchange::CMeshData& meshdata, const EVString& resourcePath); 

		/// <summary>
		/// 导出到模型库
		/// </summary>
		/// <param name="meshPath">模型数据</param>
		/// <param name="resourcePath">模型资源路径</param>
		/// <param name = "attrtablename" >模板库分类名称</param>
		/// <param name = "nodecode" >模板库分类编码</param>
		/// <returns>成功返回true，否则返回false</returns>	
		ev_bool exportToModelBase(const EarthView::World::Spatial3D::DataExchange::CMeshData& meshdata, const EVString& resourcePath,const EVString& attrtablename,const EVString& nodecode); 
		/// <summary>
		/// 导出到数据集
		/// </summary>
		/// <param name="meshPath">模型数据</param>
		/// <param name="resourcePath">模型资源路径</param>
		/// <returns>成功返回true，否则返回false</returns>	
		ev_bool exportToModelDataset(const EarthView::World::Spatial3D::DataExchange::CMeshData& meshdata, const EVString& resourcePath);
		
		/// <summary>
		/// 导出到模型库
		/// </summary>
		/// <param name="meshdata">模型数据</param>
		/// <returns>成功返回true，否则返回false</returns>	
		ev_bool exportToModelBase(const EarthView::World::Spatial3D::DataExchange::CMeshData& meshdata); 
		/// <summary>
		/// 导出到模型库
		/// </summary>
		/// <param name="meshdata">模型数据</param>
		/// <param name = "attrtablename" >模板库分类名称</param>
		/// <param name = "nodecode" >模板库分类编码</param>
		/// <returns>成功返回true，否则返回false</returns>	
		ev_bool exportToModelBase(const EarthView::World::Spatial3D::DataExchange::CMeshData& meshdata,const EVString& attrtablename,const EVString& nodecode); 
		/// <summary>
		/// 导出到数据集
		/// </summary>
		/// <param name="meshdata">模型数据</param>
		/// <returns>成功返回true，否则返回false</returns>	
		ev_bool exportToModelDataset(const EarthView::World::Spatial3D::DataExchange::CMeshData& meshdata);
		/// <summary>
		/// 导出到本地
		/// </summary>
		/// <param name="meshdata">模型数据</param>
		/// <param name="path">导出目录</param>
		/// <returns>成功返回true，否则返回false</returns>	
		ev_bool exportToLocal(const EarthView::World::Spatial3D::DataExchange::CMeshData& meshdata, const EVString& path);
		/// <summary>
		/// 设置模型导出入库的参数
		/// </summary>
		/// <param name="params">参数设置</param>
		/// <returns></returns>	
		ev_void setParams(const EarthView::World::Spatial3D::DataExchange::CMeshParams& params);
		/// <summary>
		/// 获取模型导出入库的参数
		/// </summary>
		/// <returns>返回参数设置</returns>	
		EarthView::World::Spatial3D::DataExchange::CMeshParams& getParams();
		/// <summary>
		/// 获取模型数据源辅助类
		/// </summary>
		/// <returns>返回辅助类</returns>	
		EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* getDatasourceHelper()const;
		/// <summary>
		/// 这两个函数的作用是模型文件入库后，生成usetype表里面的信息
		/// </summary>
		/// <returns></returns>
		void publishUserType();
		/// <summary>
		/// 读取本地的坐标文件，构建世界矩阵
		/// </summary>
		/// <param name="matrix">世界矩阵</param>
		/// <param name="lontitude">经度</param>
		/// <param name="latitude">纬度</param>
		/// <param name="latitude">高度</param>
		/// <param name="latitude">缩放</param>
		/// <param name="latitude">旋转</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool readWorldTransformTxt(_out EarthView::World::Spatial::Math::CMatrix4& matrix, _out ev_real64& lontitude, _out ev_real64& latitude, _out ev_real64& atitu, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CVector3& rotate);
		/// <summary>
		/// 加载磁盘文件
		/// </summary>
		/// <param name="file">文件目录</param>
		/// <returns>磁盘文件数据</returns>
		/// <memo></memo>
		EarthView::World::Core::MemoryDataStreamPtr loadFile(const EVString& file);
		EarthView::World::Core::MemoryDataStreamPtr loadAniFile( const EVString& file );
	private:

		/// <summary>
		/// 坐标系统转换
		/// </summary>
		/// <param name="posV3">将其他的坐标系统转成WGS_84的坐标</param>
		/// <returns></returns>
		ev_void tranformCoordinate(EarthView::World::Spatial::Math::CVector3& posV3,ev_int32 sourceSRID,ev_int32 targetSRID);
		/// <summary>
		/// 假如模型文件已经被合并，需要手动拷贝自己已有的gpu文件
		/// </summary>
		/// <param name="data">meshdata</param>
		/// <param name="outpath">输出目录</param>
		/// <returns></returns>
		void copyGPU(const EarthView::World::Spatial3D::DataExchange::CMeshData& data, const EVString& outpath);
		/// <summary>
		/// 根据文件获取文件所在的文件夹路径  输入c:\a\a.mesh，返回c:\a\
		/// </summary>
		/// <param name="file">文件全路径</param>
		/// <returns>返回路径，不带文件名</returns>
		EVString getFilePath(const EVString& file); 
		/// <summary>
		/// 获取文件名，不带路径,不带后缀 c:\a\tmp.mesh  返回tmp。mesh
		/// </summary>
		/// <param name="file">文件全路径</param>
		/// <returns>返回文件名，带后缀</returns>
		EVString getMeshName(EVString& file);
		/// <summary>
		/// 获取文件名，不带路径,不带后缀 c:\a\tmp.mesh  返回tmp
		/// </summary>
		/// <param name="file">文件全路径</param>
		/// <returns>返回文件名，不带后缀</returns>
		EVString getMeshFileName(EVString& file);
		/// <summary>
		/// 给定一个mesh文件，将该文件所在目录及子目录添加到资源组中
		/// </summary>
		/// <param name="meshFile">mesh文件全路径</param>
		/// <returns></returns>
		ev_void addMeshFileResourceGroup(const EVString& meshFile);
		/// <summary>
		/// 根据mesh文件的全路径，获取模型的资源文件（.cg、.materal等）
		/// </summary>
		/// <param name = "meshFile" >mesh文件全路径</param>
		/// <param name = "pMeshResource" >资源</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool getMeshResource(const EVString& meshFile, EarthView::World::Spatial3D::DataExchange::CMeshResource* pMeshResource);
		/// <summary>
		/// 导到模型库
		/// </summary>
		/// <param name = "modelBase" >导入的目标</param>
		/// <param name = "meshPath" >文件所在的目录</param>
		/// <param name = "box" >包围盒</param>
		/// <param name = "skeleton" >骨骼信息</param>
		/// <param name = "materials" >材质信息</param>
		/// <param name = "textures" >纹理信息</param>
		/// <param name = "gpus" >gpu信息</param>
		/// <param name = "progs" >gpu信息</param>
		/// <param name = "animation" >动画信息</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool doImportModelbase(
			EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* modelBase,
			EVString& meshPath, 
			EarthView::World::Spatial::Math::CAxisAlignedBox& box,
			EVString& skeleton,
			EarthView::World::Core::CStringArray& materials,
			EarthView::World::Core::CStringArray& textures,
			EarthView::World::Core::CStringArray& gpus,
			EarthView::World::Core::CStringArray& progs,
			EVString& animation);
		/// <summary>
		/// 导到模型库
		/// </summary>
		/// <param name = "modelBase" >导入的目标</param>
		/// <param name = "meshPath" >文件所在的目录</param>
		/// <param name = "box" >包围盒</param>
		/// <param name = "skeleton" >骨骼信息</param>
		/// <param name = "materials" >材质信息</param>
		/// <param name = "textures" >纹理信息</param>
		/// <param name = "gpus" >gpu信息</param>
		/// <param name = "progs" >gpu信息</param>
		/// <param name = "animation" >动画信息</param>
		/// <param name = "attrtablename" >模板库分类名称</param>
		/// <param name = "nodecode" >模板库分类编码</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool doImportModelbase(
			EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* modelBase,
			EVString& meshPath, 
			EarthView::World::Spatial::Math::CAxisAlignedBox& box,
			EVString& skeleton,
			EarthView::World::Core::CStringArray& materials,
			EarthView::World::Core::CStringArray& textures,
			EarthView::World::Core::CStringArray& gpus,
			EarthView::World::Core::CStringArray& progs,
			EVString& animation,
			const EVString& attrtablename,
			const EVString& nodecode);
		/// <summary>
		/// 导到模型数据集
		/// </summary>
		/// <param name = "dataset" >导入的目标</param>
		/// <param name = "meshfile" >文件所在的目录</param>
		/// <param name = "pMeshData" >数据</param>
		/// <param name = "box" >包围盒</param>
		/// <param name = "skeleton" >骨骼信息</param>
		/// <param name = "materials" >材质信息</param>
		/// <param name = "textures" >纹理信息</param>
		/// <param name = "gpus" >gpu信息</param>
		/// <param name = "progs" >gpu信息</param>
		/// <param name = "animation" >动画信息</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool doImportDataset(
			EarthView::World::Spatial3D::Dataset::CEntityDataset* dataset,
			EVString& meshfile,
			const CMeshData& pMeshData, 
			EarthView::World::Spatial::Math::CAxisAlignedBox& box,
			EVString& skeleton,
			EarthView::World::Core::CStringArray& materials,
			EarthView::World::Core::CStringArray& textures,
			EarthView::World::Core::CStringArray& gpus,
			EarthView::World::Core::CStringArray& progs,
			EVString& animation);

		/// <summary>
		/// 向数据集中写入gpus数据
		/// </summary>
		/// <param name="pdataSet">资源数据集</param>
		/// <param name="meshID">对应的ID</param>
		/// <param name="filePath">文件路径</param>
		/// <param name="gpus">gpu文件</param>
		/// <param name="bIntoModelbase">是否导入模型库</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool writeGpus(EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,  ev_int32 meshID, EVString& filePath, EarthView::World::Core::CStringArray& gpus,ev_bool bIntoModelbase);
		/// <summary>
		/// 向数据集中写入progs数据
		/// </summary>
		/// <param name="pdataSet">资源数据集</param>
		/// <param name="meshID">对应的ID</param>
		/// <param name="filePath">文件路径</param>
		/// <param name="progs">progs文件</param>
		/// <param name="bIntoModelbase">是否导入模型库</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool writeProgs(EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,  ev_int32 meshID, EVString& filePath, EarthView::World::Core::CStringArray& progs,ev_bool bIntoModelbase);
		/// <summary>
		/// 向数据集中写入texture数据
		/// </summary>
		/// <param name="pdataSet">资源数据集</param>
		/// <param name="meshID">对应的ID</param>
		/// <param name="filePath">文件路径</param>
		/// <param name="textures">textures文件</param>
		/// <param name="bIntoModelbase">是否导入模型库</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool writeTextures(EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,  ev_int32 meshID, EVString& filePath, EarthView::World::Core::CStringArray& textures,ev_bool bIntoModelbase);
		/// <summary>
		/// 向数据集中写入material数据
		/// </summary>
		/// <param name="pdataSet">资源数据集</param>
		/// <param name="meshID">对应的ID</param>
		/// <param name="filePath">文件路径</param>
		/// <param name="materials">materials文件</param>
		/// <param name="bIntoModelbase">是否导入模型库</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool writeMaterials(EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,  ev_int32 meshID, EVString& filePath,  EarthView::World::Core::CStringArray& materials,ev_bool bIntoModelbase);
		/// <summary>
		/// 向数据集写入skeleton数据
		/// </summary>
		/// <param name="pdataSet">资源数据集</param>
		/// <param name="meshID">对应的ID</param>
		/// <param name="filePath">文件路径</param>
		/// <param name="skeleton">skeleton文件</param>
		/// <param name="bIntoModelbase">是否导入模型库</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool writeSkeleton(EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataSet,  ev_int32 meshID, EVString& filePath, EVString& skeleton,ev_bool bIntoModelbase);
		/// <summary>
		/// 向数据集写入动画数据
		/// </summary>
		/// <param name="pdataSet">资源数据集</param>
		/// <param name="meshID">对应的ID</param>
		/// <param name="animationFile">文件路径</param>
		/// <param name="bIntoModelbase">是否导入模型库</param>
		/// <returns>成功返回true，否则返回false</returns>
		ev_bool writeAnimation(EarthView::World::Spatial3D::Dataset::CResourceDataset* pdataset, ev_int32 meshID, EVString& animationFile, ev_bool bIntoModelbase);
		/// <summary>
		/// 获取动画
		/// </summary>
		/// <param name="path">路径</param>
		/// <returns>返回路径</returns>
		EVString getAnimation(EVString path);
		/// <summary>
		/// 获取对象ids
		/// </summary>
		/// <returns>返回IDS</returns>
		EarthView::World::Spatial3D::Dataset::CObjectIDList getObjectIDS();

		EarthView::World::Spatial3D::DataExchange::CMeshAnalyse*		     mpMeshAnalyse;	//mesh文件分析对象
		EarthView::World::Spatial3D::DataExchange::CMeshParams              mParams;     // 入库时的一些参数
		EarthView::World::Graphic::CSceneManager*           mpSceneMgr;    // 场景管理器 
		EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*       mDataHelper; // 封装一些对数据库、数据集操作的方法

	};
}}}}

#endif
