#ifndef MODEL_DATASET_ACCESSOR_H__
#define MODEL_DATASET_ACCESSOR_H__
#include "modeldatasourcetool_config.h"
#include "utility.h"
BEGIN_MODEL_TOOL_NAMESPACE
	class ModelDataSetAccessor : public CAllocatedObject
	{
	public:
		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ModelDataSetAccessor();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ModelDataSetAccessor(CEntityDataset* pDataSet);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		~ModelDataSetAccessor();

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_void setModelDataSet(CEntityDataset* pDataSet);

		/// <summary>
		/// 从数据库读取模型
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_bool loadModel();

		/// <summary>
		/// 获取下一条模型数据
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_bool nextModelData(String& nodename, CSpatialPosition& position, CAxisAlignedBox& box, ModelFileDataArr& modelFileDataArr);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_bool nextModelEntityFeature(CEntityFeature*& pEntityFeature, vector<CResourceFeature*>& resFeatures);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_void addModelEntityFeature(CEntityFeature* pEntityFeature, vector<CResourceFeature*>& resFeatures);

		/// <summary>
		/// 
		/// </summary>
		/// <param name=""></param>
		/// <returns></returns>
		/// <memo></memo>
		ev_int32 getRecortCount();

	protected:
	private:
		CEntityDataset* mpDataSet;
		CEntityIterator* mpEntityIte;
		ev_int32 mRecordCount;
	};
END_MODEL_TOOL_NAMESPACE
#endif