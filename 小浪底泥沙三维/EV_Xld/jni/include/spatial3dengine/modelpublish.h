#ifndef EV_SPATIAL_3DPROXY_MODEL_PUBLISH
#define  EV_SPATIAL_3DPROXY_MODEL_PUBLISH
#include "core/stringdefines.h"
#include "spatial3dengine/spatial3dengineconfig.h"
#include "spatial3ddataset/modeldatasource.h"
#include "spatialdatabase/fields.h"
#include "spatial3ddataset/propertymanager.h"
#include "spatial3ddataset/usertypemanager.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			//class EarthView::World::Spatial3D::ModelIdAndNameMap;
			/// <summary>
			/// 存储模型的ID与名称
			/// </summary>
			class EV_Spatial3DEngine_DLL ModelIdAndNameMap : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				ModelIdAndNameMap(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ModelIdAndNameMap();
				/// <summary>
				/// 默认析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~ModelIdAndNameMap();
				/// <summary>
				/// 在EarthView::World::Core::hashmap容器中添加元素
				/// </summary>
				/// <param name="key">键</param>
				/// <param name="val">值</param>
				/// <returns>成功增加true，否则false</returns>
				ev_bool push(ev_uint16 const &key, const EVString &val);
				/// <summary>
				/// 判断元素是否存在
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>存在true，否则false</returns>
				ev_bool exist(ev_uint16 const &key);
				/// <summary>
				/// 重载[]操作符
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回键对应的值</returns>
				EVString &operator[](ev_uint16 const &key);
				/// <summary>
				/// 获得键对应的值
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回键对应的值</returns>
				EVString &get(ev_uint16 const &key);
				/// <summary>
				/// 删除键对应的值
				/// </summary>
				/// <param name="key">键</param>
				/// <returns></returns>
				void erase(ev_uint16 const &key);
				/// <summary>
				/// 返回容器的大小
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器的大小</returns>
				ev_size_t size() const;
				/// <summary>
				/// 清空容器
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				void clear();
				/// <summary>
				/// 判断容器是否为空
				/// </summary>
				/// <param name=""></param>
				/// <returns>容器为空返回true，否则false</returns>
				ev_bool empty() const;

				EarthView::World::Core::IntVector getKeys()const;
ev_private:
				typedef EarthView::World::Core::hashmap<ev_uint16, EVString/*_StringHash*/> InternalList;
				typedef InternalList::iterator iterator;
				typedef InternalList::const_iterator const_iterator;
				typedef InternalList::mapped_type mapped_type;
				typedef InternalList::key_type key_type;
				typedef InternalList::value_type value_type;
				typedef pair<InternalList::iterator, bool> _Pairib;
				RESERVE_CONTAINER_FUNCTION_HASHMAP(mList);
				/// <summary>
				/// 容器中插入元素
				/// </summary>
				/// <param name="val">值</param>
				/// <returns>插入后的键值对</returns>
				_Pairib insert(const value_type &val);
				/// <summary>
				/// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回指向该元素的迭代器</returns>
				iterator find(ev_uint16 const &key);
				/// <summary>
				/// 如果容器中存在按key索引存在的元素，则返回指向该元素的迭代器
				/// </summary>
				/// <param name="key">键</param>
				/// <returns>返回指向该元素的迭代器</returns>
				const_iterator find(ev_uint16 const &key) const;
			private:
				InternalList mList;
			};

			class EV_Spatial3DEngine_DLL CModelPublishToolListener : public EarthView::World::Core::CBaseObject
			{
ev_private:
				CModelPublishToolListener(_in EarthView::World::Core::CNameValuePairList *pList);
			public:
				CModelPublishToolListener();
				virtual ~CModelPublishToolListener();

				/// <summary>
				/// 消息接收
				/// </summary>
				/// <param name=info"">消息内容</param>
				/// <returns></returns>
				virtual ev_void information(const EVString& info);

				/// <summary>
				/// 进度接收
				/// </summary>
				/// <param name="percent">进度百分比</param>
				/// <returns></returns>
				virtual ev_void workPercent(ev_int32 percent);

				/// <summary>
				/// 获取当前导入完成的模型id与名称
				/// </summary>
				/// <param name="id">模型id</param>
				/// <param name="name">模型名称</param>
				/// <returns></returns>
				virtual ev_void getModelIdAndName(ev_int32 id,const EVString& name);

				/// <summary>
				/// 设置模型总数量
				/// </summary>
				/// <param name="totalcount">模型总数量</param>
				/// <returns></returns>
				ev_void setTotalCount(ev_int32 totalcount);
				ev_void setCurrentCount(ev_int32 currentCount);
				/// <summary>
				/// 添加模型总数量
				/// </summary>
				/// <param name="addcount">添加的模型数量</param>
				/// <returns></returns>
				ev_void addTotalCount(ev_int32 addcount);

				/// <summary>
				/// 添加当前处理的模型数量
				/// </summary>
				/// <param name="addCount">处理的模型数量</param>
				/// <returns></returns>
				ev_void addCurrentCount(ev_int32 addCount);

				/// <summary>
				/// 获取当前进度百分比
				/// </summary>
				/// <param name=""></param>
				/// <returns>进度百分比</returns>
				ev_int32 getPercent();

				/// <summary>
				/// 获取要导入模型的总数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>要导入模型的总数量</returns>
				ev_int32 getTotalCount();

				/// <summary>
				/// 获取已经导入模型的数量
				/// </summary>
				/// <param name=""></param>
				/// <returns>已经导入模型的数量</returns>
				ev_int32 getCurrentCount();

			protected:
				ev_int32 mTotalCount;
				ev_int32 mCurrentCount;
			private:
			};

			enum ClashModelTreatWay
			{
				cover_with_clashmodel,   //覆盖冲突数据
				jump_over_clashmodel,   //跳过冲突数据
			};
			class ModelIdAndNameMap;
			class EV_Spatial3DEngine_DLL CModelPublishTool:public EarthView::World::Core::CAllocatedObject
			{
ev_private:
				CModelPublishTool(_in EarthView::World::Core::CNameValuePairList *pList){};
			public:
				CModelPublishTool();
				virtual ~CModelPublishTool();

				/// <summary>
				/// 设置发布侦听者
				/// </summary>
				/// <param name="EarthView::World::Spatial3D::CModelPublishToolListener">侦听者对象</param>
				/// <returns></returns>
				ev_void setCModelPulishToolListener(EarthView::World::Spatial3D::CModelPublishToolListener* ref_pListener);

				/// <summary>
				/// 开始发布
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void startPublish();

				/// <summary>
				/// 开始发布
				/// </summary>
				/// <param name="modelIDVec">需要发布的模型ID</param>
				/// <param name="typeCodesVec">需要发布的模型分类</param>
				/// <param name="effectInfoVec">需要发布的特效ID</param>
				/// <returns></returns>
				ev_void startPublish(const EarthView::World::Core::IntVector& modelIDVec,const EarthView::World::Core::StringVector& typeCodesVec,const EarthView::World::Spatial3D::Dataset::CEffectInfoVector& effectInfoVec);

				/// <summary>
				/// 停止发布
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void stopPublish();

				/// <summary>
				/// 获取目标数据源中属性表表名和字段结构列表
				/// </summary>
				/// <param name=""></param>
				/// <returns>-1 错误</returns>
				ev_int32 getDesModelSourceAttrNameAndAttrStructVector();

				/// <summary>
				/// 获取源数据源中属性表表名和字段结构列表
				/// </summary>
				/// <param name=""></param>
				/// <returns>-1 错误</returns>
				ev_int32 getSrcModelSourceAttrNameAndAttrStructVector();


				/// <summary>
				/// 处理属性表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 processAttrTable();


				/// <summary>
				/// 获取目标数据源中节点名称和属性表表名列表
				/// </summary>
				/// <param name=""></param>
				/// <returns>-1 错误</returns>
				ev_int32 getDesModelSourceNodecodeNameAndAttrNameVector();


				/// <summary>
				/// 获取源数据源中节点名称和属性表表名列表
				/// </summary>
				/// <param name=""></param>
				/// <returns>-1 错误</returns>
				ev_int32 getSrcModelSourceNodecodeNameAndAttrNameVector();

				/// <summary>
				/// 处理nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 processNodeCode();

				/// <summary>
				/// 获取冲突模型数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 calcClashModel();

				/// <summary>
				/// 设置冲突模型处理办法
				/// </summary>
				/// <param name="treatway">处理方法枚举值</param>
				/// <returns></returns>
				ev_void setClashModelTreatWay(EarthView::World::Spatial3D::ClashModelTreatWay treatway);
				ev_void setCompositorAllSubmesh(const ev_bool b);
				/// <summary>
				/// 获取模型导入时最新的属性表名称和nodecode
				/// </summary>
				/// <param name="modelname">模型名称</param>
				/// <param name="nodecode">节点名称</param>
				/// <param name="newattrtablename">新的属性表名称</param>
				/// <param name="newnodecode">新的节点</param>
				/// <returns>获取成功返回true</returns>
				ev_bool getNewAttrTableNameAndNewNodecode(const EVString& modelname, const EVString& nodecode, EVString& newattrtablename, EVString& newnodecode);

				/// <summary>
				/// 通过nodecode获取属性表名和字段属性
				/// </summary>
				/// <param name="nodecode">节点名称</param>
				/// <param name="attrtablename">属性表名</param>
				/// <param name="fields">属性表字段</param>
				/// <returns>获取成功返回true</returns>
				ev_bool getDesAttrTableNameAndFieldsByNodeCode(const EVString& nodecode, EVString& attrtablename, EarthView::World::Spatial::GeoDataset::CFields*& fields);

				// <summary>
				// 把X文件转换为mesh文件保存到本地
				// </summary>
				// <param name="xFile">x文件</param>
				// <param name="exportPath">要保存到本地mesh的文件目录</param>
				// <param name="bIsLeftHand">xFile为左手系还是右手系</param>
				// <returns></returns>
				ev_bool EVConvertXToMesh(const EVString& xFile, EVString& exportPath, const ev_bool bIsLeftHand, const ev_bool bIsExportNormal,  const ev_bool bIsDoubleLight);

			protected:
				ev_bool mbCanPublish;
				ev_bool mbIsSelective;
				EarthView::World::Spatial3D::CModelPublishToolListener* mpCModelPulishToolListener;

				/// 属性表表名和字段信息映射
				typedef map<EVString, EarthView::World::Spatial::GeoDataset::CFields*> AttrNameAndFieldsMap;
				AttrNameAndFieldsMap mDesAttrNameAndFieldsMap;
				AttrNameAndFieldsMap mSrcAttrNameAndFieldsMap;
				AttrNameAndFieldsMap mProcessedAttrNameAndFieldsMap;  //处理后的属性表表名和字段信息映射（*）

				///属性表表名变换关系
				typedef map<EVString, EVString> OldAndNewAttrNameMap;
				OldAndNewAttrNameMap mOldAndNewAttrNameMap; //（*）

				///节点名称变换关系
				typedef map<EVString, EVString> OldAndNewNodeCodeMap;
				OldAndNewNodeCodeMap mOldAndNewNodeCodeMap; //(*)

				///节点名称和属性表名称映射
				typedef EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap NodeCodeAndAttrNameMap;
				NodeCodeAndAttrNameMap mDesNodeCodeAndAttrNameMap;
				NodeCodeAndAttrNameMap mSrcNodeCodeAndAttrNameMap;

				NodeCodeAndAttrNameMap mNewNodeCodeAndAttrNameMap;  //需要新加入到用户属性表中的节点名称和属性表名称(*)

				///节点名称和模型名称映射
				typedef struct SameNodecodeModelNames
				{
					EVString nodecode;
					vector<EVString> modelnames;
				};
				typedef map<EVString, SameNodecodeModelNames> NodeCodeAndModelNameMap;
				NodeCodeAndModelNameMap mDesNodeCodeAndModelNameMap;
				NodeCodeAndModelNameMap mSrcNodeCodeAndModelNameMap;
				vector<EVString> mDesModelNamesNotInDesNodecode;
				map<EVString, EVString> mOldAndNewModelNameMap;

				typedef map<ev_int32, EVString> ModelIDList;
				////可发布的模型id列表
				ModelIDList mNeedPulishModelIDList;  
				////数据冲突的模型id列表
				ModelIDList mClashModelIDList;	 

				//EarthView::World::Core::IntVector& mEffectIDList;

				list<EVString> mClashModelNameList;
				EarthView::World::Spatial3D::ClashModelTreatWay mClashModelTreatWay;
				ev_bool mbCompositorAllSubmesh;
				map<ev_int32, ev_int32> mOldMeshIDAndPublishedMeshIDMap;

				ModelIdAndNameMap mPulishedModelIdAndNameMap;
				EarthView::World::Core::IntVector mvModelIDVec;
				EarthView::World::Core::StringVector mTypeCodesVec;
				EarthView::World::Spatial3D::Dataset::CEffectInfoVector mEffectInfos;

				typedef struct
				{
					ev_int32 modelID;
					EVString modelname;
					EVString nodecode;
				}ModelInfo;
				vector<ModelInfo> mSrcModelInfos;
			protected:
				/// <summary>
				/// 导入前预处理
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool _preProcessing();

				/// <summary>
				/// 获取目标数据源中属性表表名和字段结构列表
				/// </summary>
				/// <param name="attrnameandfieldsmap">属性表名和字段结构的map</param>
				/// <returns>获取到的属性表个数</returns>
				virtual ev_int32 _getDesModelSourceAttrNameAndAttrStructVector(AttrNameAndFieldsMap& attrnameandfieldsmap);

				/// <summary>
				/// 获取源数据源中属性表表名和字段结构列表
				/// </summary>
				/// <param name="attrnameandfieldsmap">属性表名和字段结构的map</param>
				/// <returns>获取到的属性表个数</returns>
				virtual ev_int32 _getSrcModelSourceAttrNameAndAttrStructVector(AttrNameAndFieldsMap& attrnameandfieldsmap);

				/// <summary>
				/// 获取目标数据源中属性表表名和节点名称列表
				/// </summary>
				/// <param name="nodecodeandattrnamemap">属性表名和节点名的map</param>
				/// <returns>获取到的属性表个数</returns>
				virtual ev_int32 _getDesModelSourceNodecodeNameAndAttrNameVector(NodeCodeAndAttrNameMap& nodecodeandattrnamemap);


				/// <summary>
				/// 获取源数据源中属性表表名和节点名称列表
				/// </summary>
				/// <param name="nodecodeandattrnamemap">属性表名和节点名的map</param>
				/// <returns>数量</returns>
				virtual ev_int32 _getSrcModelSourceNodecodeNameAndAttrNameVector(NodeCodeAndAttrNameMap& nodecodeandattrnamemap);


				/// <summary>
				/// 通过节点获取目标数据源中的模型名称和nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型数量</returns>
				virtual ev_int32 _getDesModelSourceNodecodeAndModelNameVector(_in vector<EVString>& nodecodes,  _out NodeCodeAndModelNameMap& nodecodeandmodelnamemap);

				/// <summary>
				/// 通过节点获取目标数据源中的模型名称
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型数量</returns>
				virtual ev_int32 _getDesModelSourceModelNameVectorByFilter(_in vector<EVString>& nodecodes,  _out vector<EVString>& modelnames);

				/// <summary>
				/// 获取源数据源中的模型名称和nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns>模型数量</returns>
				virtual ev_int32 _getSrcModelSourceNodecodeAndModelNameVector(_in vector<EVString>& nodecodes, _out NodeCodeAndModelNameMap& nodecodeandmodelnamemap);

				/// <summary>
				/// 在NodeCodeAndAttrNameMap中，通过属性名称找到第一个nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns>nodecode</returns>
				EVString getNodeCodeByAttrName(const NodeCodeAndAttrNameMap& maps, const EVString& attrname);

				/// <summary>
				/// 获取新的属性表名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getNewAttrTableName(const EVString& oldAttrTableName);

				/// <summary>
				/// 获取旧的属性表名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getOldAttrTableName(const EVString& oldNodecode);

				/// <summary>
				/// 获取新的节点名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getNewNodecode(const EVString& oldnodecode);

				/// <summary>
				/// 从目标数据源中获取一个新的节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EVString _getNewNodeCodeFromDesModelSource(const EVString& typetablename, EarthView::World::Spatial::GeoDataset::IFields* pfields);

				/// <summary>
				/// 从源数据源中获取mesh id 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Core::IntVector _getSrcMeshID(const EVString& meshname, const EVString& nodecode);


				/// <summary>
				/// 从源数据源中获取mesh名称
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EVString _getSrcMeshName(ev_int32 id);

				/// <summary>
				/// 开始发布数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool  _startPublish();

				/// <summary>
				/// 处理冲突模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void _processClashModel();

				/// <summary>
				/// 清理
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void _clear();
			private:
			};

			// <summary>
			// 目标数据源是数据库类型的
			// </summary>
			class EV_Spatial3DEngine_DLL CModelPublishTool_DBDesSource : public EarthView::World::Spatial3D::CModelPublishTool
			{
ev_private:
				CModelPublishTool_DBDesSource(_in EarthView::World::Core::CNameValuePairList *pList){};
			public:
				CModelPublishTool_DBDesSource();
				virtual ~CModelPublishTool_DBDesSource();

				/// <summary>
				/// 设置目标数据源句柄
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setDesDataSourcePtr(EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_desdatasourceptr);

				/// <summary>
				/// 设置挂载nodecode节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void setDesNodecode(const EVString& desnodecode);
			protected:
				EarthView::World::Spatial3D::Dataset::CModelDataSource* mpDesDataSourcePtr;
				EVString mDesNodeCode;
				/// <summary>
				/// 获取目标数据源中属性表表名和字段结构列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_int32 _getDesModelSourceAttrNameAndAttrStructVector(AttrNameAndFieldsMap& attrnameandfieldsmap);

				/// <summary>
				/// 获取目标数据源中属性表表名和节点名称列表
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_int32 _getDesModelSourceNodecodeNameAndAttrNameVector(NodeCodeAndAttrNameMap& nodecodeandattrnamemap);

				/// <summary>
				/// 获取目标数据源中的模型名称和nodecode
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_int32 _getDesModelSourceNodecodeAndModelNameVector(_in vector<EVString>& nodecodes,   _out NodeCodeAndModelNameMap& nodecodeandmodelnamemap);
				virtual ev_int32 _getDesModelSourceModelNameVectorByFilter(_in vector<EVString>& nodecodes,  _out vector<EVString>& modelnames);
				/// <summary>
				/// 从目标数据源中获取一个新的节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EVString _getNewNodeCodeFromDesModelSource(const EVString& typetablename, EarthView::World::Spatial::GeoDataset::IFields* pfields);

				/// <summary>
				/// 回滚一条发布的数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_bool reversionPublishedModel(ev_int32 publishedModelID);

				/// <summary>
				/// 从目标数据源中删除冲突模型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void deleteClashModelFromDesDataSource(ModelIDList& deletedModelIDList);

				/// <summary>
				/// 获取insid
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getDesDataSourceInsID(const EVString& meshfilename, const EVString& nodecode);
			private:
			};
			
		}}}
#endif