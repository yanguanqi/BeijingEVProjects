#ifndef _SPATIALINDEX_SPATIALINDEX_
#define _SPATIALINDEX_SPATIALINDEX_

#include "spatialindex/config.h"
#include "core/global.h"
#include "core/core_api.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace SpatialIndex{
/////namespace
typedef ev_uint32 id_type;

//////////////////////////////////////////////////////////
///index Type
//////////////////////////////////////////////////////////////
enum    SINDEXTYPE
{  
	INDEX_Unkown = 0,
    //INDEX_R_plus = 0, ///R+树索引
	INDEX_Quad   = 1, ///四叉树索引
	INDEX_R_plus = 2
};
////////////////////////////////////////////////////////////////////
//storageType
///////////////////////////////////////////////////////////////////
enum   DRIVERTYPE
{
	STRG_BinaryFile = 0,///二进制文件
	STRG_DBTable    = 1, ///数据库表
    STRG_Unkown     = 2
};


///////////////////////////////////////////////////////////////////////////
//class  IData
//////////////////////////////////////////////////////////////////////////

class  EV_SPATIALINDEX_DLL Data:public EarthView::World::Core::CAllocatedObject
{   
	 ev_private:
		/// <summary>
		/// 键值对构造函数
		/// </summary>
		///<returns></returns>
		Data(_in EarthView::World::Core::CNameValuePairList* pList);
public:
	///<summary>
	///析构函数
	///</summary>
	  ~Data();
	///<summary>
	///获取最小外接矩形
	///</summary>
	///<param name="dfUpleftX">左上角X</param>
	///<param name="dfUpleftY">左上角Y</param>
	///<param name="dfDownrightX">右下角X</param>
	///<param name="dfDownRightY">右下角Y</param>
	
	 ev_void  getMBR(_out ev_real32&dfUpleftX,_out ev_real32&dfUpleftY,
		                _out ev_real32&dfDownrightX,_out ev_real32&dfDownRightY)const;
	///<summary>
	///获取与该最小外接矩形绑定的矩形
	 ///</summary>
	///<returns>featureID</returns>
	 
	 id_type  getFeatureIndex()const;

	 ///<summary>
	 ///构造函数
	 ///</summary>
	 ///获取最小外接矩形
	 ///<param name="dfUpleftX">左上角X</param>
	 ///<param name="dfUpleftY">左上角Y</param>
	 ///<param name="dfDownrightX">右下角X</param>
	 ///<param name="dfDownRightY">右下角Y</param>
	 ///<param name="dfDownRightY">右下角Y</param>
	 ///<param name="ID">featureID</param>
	  
     Data(_in ev_real32 dfUpleftX,_in ev_real32 dfUpleftY,
		                _in ev_real32 dfDownrightX,_in ev_real32 dfDownRightY,
						_in id_type ID);
	 ///<summary>
	 ///默认构造函数
	 ///</summary>
     Data();
private:
	ev_real32 m_dfMinx;
	ev_real32 m_dfMaxx;
	ev_real32 m_dfMiny;
	ev_real32 m_dfMaxy;
    id_type m_mbrIdentifier;
};

///////////////////////////////////////////////////////////////////////
//class INode
/////////////////////////////////////////////////////////////////////////
class  EV_SPATIALINDEX_DLL INode :public EarthView::World::Core::CAllocatedObject
{   
	ev_private:
		/// <summary>
		/// 键值对构造函数
		/// </summary>
		///<returns></returns>
	   INode(_in EarthView::World::Core::CNameValuePairList* pList);
public:
	///<summary>
	///获取当前节点的ID
	///</summary>
	///<returns>当前节点的ID</returns>
	 
   virtual ev_int32 getNodeID()const;
	///<summary>
	///获取子阶段个数
    ///</summary>
	///<returns>子节点个数</returns>
	 
   virtual ev_int32 getChildrenCount()const;
    ///<summary>
	///获取子节点 
    ///</summary>
    ///<param name="index">子节点索引</param>
	///<returns>子节点</returns>
	 
   virtual const EarthView::World::Spatial2D::SpatialIndex::INode*  getChildNode(_in ev_int32 index)const;
   ///<summary>
   ///获取父节点
   ///</summary>
   ///<returns>父节点</returns>
    
   virtual const EarthView::World::Spatial2D::SpatialIndex::INode*getParent()const;
	///<summary>
	///获取要素个数
    ///</summary>
	///<returns>要素个数</returns>
	 
	virtual ev_int32 getFeatureCount()const;
	///<summary>
	///获取要素的ID
	///</summary>
	///<param name="index">feature链表中的位置</param>
	///<returns>要素数据</returns>
	 
    virtual EarthView::World::Spatial2D::SpatialIndex::Data getFeatrueData(_in ev_int32 index)const;
	///<summary>
	///获取指定要素的外接矩形框
	///</summary>
	///<param name="dfUpleftX">左上角X</param>
	///<param name="dfUpleftY">左上角Y</param>
	///<param name="dfDownrightX">右下角X</param>
	///<param name="dfDownRightY">右下角Y</param>
	 
	virtual ev_void getNodeMBR(_out ev_real32&dfUpleftX,_out ev_real32&dfUpleftY,
		                        _out ev_real32&dfDownrightX,_out ev_real32&dfDownRightY)const;
   ///<summary>
   ///是否是叶节点
   ///</summary>
   ///<returns>1，是叶节点,0非叶子节点</returns>
   
   virtual ev_bool isLeaf() const;
   ///<summary>
   ///是否是根节点
   ///</summary>
   ///<returns>1，是根节点,0非根子节点</returns>
    
   virtual ev_bool isRoot()const;
   ///<summary>
   ///变换到流
   ///</summary>
   ///<param name="pBuffer">流内存,外边调用释放</param>
   ///<param name="lenth">数据长度</param>
    
   virtual ev_void toStream(_out ev_uchar*&pBuffer,_out ev_uint32 &lenth)const;
   ///<summary>
   ///析构 函数
   ///</summary>
   virtual   ~INode();
protected:
    INode();
};

///////////////////////////////////////////////////////////
//EarthView::World::Spatial2D::SpatialIndex::IDVistor
////////////////////////////////////////////////////////////////
class EV_SPATIALINDEX_DLL IDVistor:public EarthView::World::Core::CAllocatedObject
{      
   ev_private:
	/// <summary>
	/// 键值对构造函数
	/// </summary>
	///<returns></returns>
	IDVistor(_in EarthView::World::Core::CNameValuePairList* pList);
	public:
		/// <summary>
	    /// 构造函数
	    /// </summary>
	    ///<returns></returns>
		IDVistor();
		///<summary>
	   ///变换到流
	   ///</summary>
	   ///<param name="size">data中 id_type元素个数</param>
	   ///<param name="data">数据</param>
		IDVistor(_in size_t size ,_in id_type*data );
		/// <summary>
	    /// 构造函数
	    /// </summary>
	    ///<returns></returns>
		IDVistor(const IDVistor&other);
		/// <summary>
	    /// 赋值构造函数
	    /// </summary>
	    ///<returns></returns>
		EarthView::World::Spatial2D::SpatialIndex::IDVistor&operator=(const EarthView::World::Spatial2D::SpatialIndex::IDVistor&other);
		/// <summary>
	    /// 析构函数
	    /// </summary>
	    ~IDVistor();
		/// <summary>
	    /// 获取个数
	    /// </summary>
	    ///<returns>个数</returns>
		size_t  getSize()const;
		/// <summary>
	    /// 获取指定系数的值
	    /// </summary>
	    ///<returns>ID值</returns>
		id_type& operator[](size_t index);
		/// <summary>
	    /// 获取指定系数的值
	    /// </summary>
	    ///<returns>ID值</returns>
		const id_type& operator[](size_t index)const;
	private:
		inline ev_void rem_ref();
		size_t _size;   ///有多少个
		size_t *_used;  ///使用引用
		id_type *_pData;///数组
};

///////////////////////////////////////////////////////
//class Point2DF
////////////////////////////////////////////////////////////
class  EV_SPATIALINDEX_DLL Point2DF:public EarthView::World::Core::CAllocatedObject
{    
ev_private:
	/// <summary>
	/// 键值对构造函数
	/// </summary>
	///<returns></returns>
	Point2DF(_in EarthView::World::Core::CNameValuePairList* pList);
public:
	///<summary>
	///构造函数
	///</summary>
	///<param name="dfX">X坐标</param>
	///<param name="dfY">Y坐标</param>
	
	Point2DF(_in ev_real32 dfX,_in ev_real32 dfY);
	///<summary>
	///默认构造函数
	///</summary>
	Point2DF();
	///<summary>
	///判断相等函数
	///</summary>
	///<returns>true,相等，false不相等</returns>
	 
    ev_bool operator==(const EarthView::World::Spatial2D::SpatialIndex::Point2DF&other);
	///<summary>
	///判断不等函数
	///</summary>
	///<returns>true,不相等，false相等</returns>
	ev_bool operator!=(const EarthView::World::Spatial2D::SpatialIndex::Point2DF&other);
public:
	ev_real32 X;
	ev_real32 Y;
};

//////////////////////////////////////////////////////////////
///EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex
//////////////////////////////////////////////////////////////
class  EV_SPATIALINDEX_DLL ISpatialIndex:public EarthView::World::Core::CAllocatedObject
{  
ev_private:
	/// <summary>
	/// 键值对构造函数
	/// </summary>
	///<returns></returns>
	ISpatialIndex(_in EarthView::World::Core::CNameValuePairList* pList);

	public:
		///<summary>
	    ///插入数据
		///</summary>
		///<param name="data">featue只最小外接矩形及ID</param>
	     
		virtual ev_void insertData(_in const Data&data);
		///<summary>
	    ///删除数据
		///</summary>
		///<param name="data">featue只最小外接矩形及ID</param>
	     
		virtual ev_void deleteData(_in const Data&data);
		///<summary>
	    ///数据包含查询,返回该查询窗口中所包含的feature之ID
		///</summary>
		///<param name="query">查询窗口</param>
		///<param name="presultIDList">featueID列表</param>
	     
		virtual ev_void containsWhatQuery(_in const EarthView::World::Spatial2D::SpatialIndex::Data& query, _out EarthView::World::Spatial2D::SpatialIndex::IDVistor&presultIDList)const;
		///<summary>
	    ///数据数据相交查询,返回与之相交的featrue之最小外接矩形之ID
		///不包括包含情况
		///</summary>
		///<param name="query">查询窗口</param>
		///<param name="presultIDList">featueID列表</param>
	     
		virtual ev_void intersectsWithQuery(_in const EarthView::World::Spatial2D::SpatialIndex::Data& query, _out EarthView::World::Spatial2D::SpatialIndex::IDVistor&presultIDList)const;
		///<summary>
	    ///返回点落在某个feature时该feature之的ID
		///</summary>
		///<param name="query">查询点</param>
		///<param name="presultIDList">featueID列表,长度为零表示没有</param>
	     
		virtual ev_void pointLocationQuery(_in const EarthView::World::Spatial2D::SpatialIndex::Point2DF& query,_out  EarthView::World::Spatial2D::SpatialIndex::IDVistor&presultIDList)const;
        ///<summary>
	    ///与query距离小于dfthreshold之featureID
		///</summary>
		///<param name="dfthreshold">query中心外扩距离</param>
		///<param name="query">邻近查询</param>
		///<param name="presultIDList">featueID列表</param>
	     
		virtual ev_void nearestNeighborQuery(_in ev_real32 dfthreshold, _in const EarthView::World::Spatial2D::SpatialIndex::Data& query,
			                              _out EarthView::World::Spatial2D::SpatialIndex::IDVistor&presultIDList)const;
		///<summary>
		///获取索引类型
		///</summary>
		///<returns>索引类型</returns>
		 
		virtual EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE getIndexType()const;

		///<summary>
		///获取根节点
		///</summary>
        ///<returns>根接点</returns>
		 
		///virtual const EarthView::World::Spatial2D::SpatialIndex::INode*getRootNode()const;
        ///<summary>
		///获取统计信息
		///</summary>
		///<param name="pnFeatureCount">要素个数</param>
		///<param name="pnNodeCount">节点个数</param>
		///<param name="pnMaxDepth">树的深度</param>
		///<param name="pnMaxBucketCapacity">每个叶子节点最大要素个数</param>
        ///<returns></returns>
		 
		virtual ev_void getStatistics(_out ev_int32&pnFeatureCount,
                                   _out ev_int32&pnNodeCount,
                                   _out ev_int32&pnMaxDepth,
                                   _out ev_int32&pnMaxBucketCapacity);
		///<summary>
	    ///默认析构函数
	    ///</summary>
		virtual ~ISpatialIndex();
protected:
       ///<summary>
	   ///默认构造函数
	   ///</summary>
       ISpatialIndex();

	}; // EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex

//////////////////////////////////////////////////////////////////////////
//IStorageManager
/////////////////////////////////////////////////////////////////////
class  EV_SPATIALINDEX_DLL IStorageManager:public EarthView::World::Core::CAllocatedObject
{   
ev_private:
	/// <summary>
	/// 键值对构造函数
	/// </summary>
	///<returns></returns>
	IStorageManager(_in EarthView::World::Core::CNameValuePairList* pList);

	public:
		///<summary>
		///将空间索引文件导成内存空间索引
		///</summary>
		///<param name="pFullpath">指定文件路径</param>
		///<returns>空间索引句柄</returns>
		 
		virtual _extfree EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* load(_in const ev_char*pFullpath)const;
		///<summary>
		///将空间索引文件导成内存空间索引
		///</summary>
		///<param name="pFullpath">指定文件路径</param>
		///<returns>0,保存成功，1保存失败</returns>
		 
		virtual ev_bool  save(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex ,_in const ev_char*pFilepath)const;
		///<summary>
		///从内存流创建空间索引
		///</summary>
		///<param name="stream">流引用</param>
		///<returns>空间索引句柄</returns>
		 
		virtual _extfree EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* load(_in EarthView::World::Core::CDataStream&stream)const;
		///<summary>
		///将空间索引导成流
		///</summary>
		///<param name="stream">流引用</param>
		///<returns>0,保存成功，1保存失败</returns>
		 
		virtual ev_bool  save(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex ,_inout  EarthView::World::Core::CDataStream&stream)const;

		///<summary>
		///保存所有的节点信息
		///</summary>
		///<param name="hSpatialIndex">空间索引对象</param>
		///<returns>保存成功，返回true，失败，返回false
		virtual ev_bool saveAllNodes(_in const EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* hSpatialIndex,
													_inout EarthView::World::Core::CDataStream& stream);
		///<summary>
		///存储类型
		///</summary>
		///<returns>0,文件，1内存流</returns>
		virtual EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE getDriverType()const;
		///<summary>
		///析构函数
		///</summary>
		virtual ~IStorageManager();
protected:
	    ///<summary>
		///构造函数
		///</summary>
	    IStorageManager();

}; // IStorageManager

///
///interface
extern "C" ///extern C
{   
	///<summary>
	///创建存储驱动
	///</summary>
	///<param name="etype">驱动类型</param>
	///<returns>IStorageManager指针</returns>
	 
	EV_SPATIALINDEX_DLL _extfree IStorageManager*SIDXGetDriverByType(_in EarthView::World::Spatial2D::SpatialIndex::DRIVERTYPE etype);

	///<summary>
	///存储空间索引
	///</summary>
	///<param name="pDriverMng">存储指针</param>
	///<returns></returns>
	 
	EV_SPATIALINDEX_DLL ev_void SIDXDestroyStorageManager(_in IStorageManager*pDriverMng);

    ///<summary>
	///根据数据，创建空间索引
	///</summary>
	///<param name="eType">索引类型</param>
    ///<param name="pFeatures">存储feature数据的指针</param>
     ///<param name="featureCount">feature总个数</param>
	///<returns>空间索引指针</returns>
	 
	EV_SPATIALINDEX_DLL _extfree EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* SIDXCreateSpatialIndex(_in EarthView::World::Spatial2D::SpatialIndex::SINDEXTYPE eType,  _in EarthView::World::Spatial2D::SpatialIndex::Data**pFeatures,
		                                          _in ev_uint32 featureCount, _in const EarthView::World::Spatial2D::SpatialIndex::Data&pGobalRect);
    
	///<summary>
	///销毁一个空间索引指针
	///</summary>
	///<param name="pSIDX">空间索引指针</param>
	 
	 EV_SPATIALINDEX_DLL ev_void SIDXDestroySpatialIndex(_in EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex* pSIDX);
}////extern C


}}}}///namespace

#endif//_SPATIALINDEX_SPATIALINDEX_

