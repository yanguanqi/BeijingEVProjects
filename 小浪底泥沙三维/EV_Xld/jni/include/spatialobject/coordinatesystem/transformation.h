
#ifndef _COORD_TRANS_FROMATION_H
#define _COORD_TRANS_FROMATION_H
#define COORDINATESYSTEMEXPORTS
#include "coordinatesysenumtype.h"

// using namespace EarthView::World::Core;

namespace EarthView
{////EarthView
	namespace World
	{////World
		namespace Spatial
		{  
			namespace Utility
			{  
				class CSpatialReference;
                class CTransParameter;
				/************************************************************************/
				/*     CCoordinateTransformation                                             
				/************************************************************************/
				///<summary>
				///CCoordinateTransformation
				///同一椭球基准的投影正反算
                ///不同椭球基准之间的转换，需要设置转换参数，否者可能
				///结果不能满足精度要求
				class CCoordinateTransformationImpl;
				class EV_GEOMETRY_DLL CCoordinateTransformation: public EarthView::World::Core::CAllocatedObject
				{
					ev_private:
						/// <summary>
						/// 键值对构造函数
						/// </summary>
						///<returns></returns>
						CCoordinateTransformation(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CCoordinateTransformation();
					///<summary>
					/// 析构函数
					/// </summary>
					virtual ~CCoordinateTransformation();
					///<summary>
					/// 设置源坐标参考,；坐标转换结束，外边释放
					/// </summary>
					/// <param name="objSrcCrdSys">源坐标空间参考指针</param>
					virtual ev_void setSourceCS(_in  const EarthView::World::Spatial::Utility::CSpatialReference*ref_objSrcCrdSys);

					///<summary>
					/// 设置目标坐标参考，坐标转换结束，外边释放
					/// </summary>
					/// <param name="objDstCrdSys">目标坐标参考指针</param>
					virtual ev_void setTargetCS(_in  const EarthView::World::Spatial::Utility::CSpatialReference* ref_objDstCrdSys);

					///<summary>
					/// 设置基准转换参数，坐标转换结束，外边释放
					/// </summary>
					/// <param name="objTransParameter">转换参数指针</param>
					virtual ev_void setTransParameter(_in const EarthView::World::Spatial::Utility::CTransParameter*objTransParameter);
					///<summary>
					/// 获取源坐标参考
					/// </summary>
					/// <returns>源坐标空间参考指针</returns>
				    const EarthView::World::Spatial::Utility::CSpatialReference* getSourceCS()const;
					 
					///<summary>
					/// 获取目标坐标参考
					/// </summary>
					/// <returns>目标坐标参考指针</returns>
					 const EarthView::World::Spatial::Utility::CSpatialReference* getTargetCS()const;
					 
					///<summary>
					/// 获取基准转换参数
					/// </summary>
					/// <returns>转换参数指针</returns>
					const EarthView::World::Spatial::Utility::CTransParameter* getTransParameter()const;
					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针,椭球高度（m）</param>
					///<returns>0表示成功 正常</returns>
					virtual ev_int32 transform(_in ev_int32 nCount,_inout ev_real64*pdfX,_inout ev_real64*pdfY,_inout ev_real64*pdfZ);					
					///<summary>
					/// 坐标转换
					/// </summary>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针，北坐标(m)或纬度(°)</param>
					/// <param name="pdfZ">Z坐标指针，椭球高度（m）</param>
					/// <param name="pBSuccesss">每个坐标点转换成功标记</param>
					///<returns>0表示成功 正常,-1至少一个投影参考为空</returns>
					virtual ev_int32 transfromEx(_in ev_int32 nCount,_inout ev_real64*pdfX,_inout ev_real64*pdfY,_inout ev_real64*pdfZ,_inout ev_bool*pBSuccesss);
					///<summary>
					/// 提供某个投影坐标系下椭球面经纬度坐标和投影坐标之间的转换
					/// </summary>
					/// <param name="objSrcCrdSys">坐标空间参考指针，如果传入地理坐标系则不进行转换</param>
					/// <param name="nCount">坐标个数</param>
					/// <param name="pdfX">X坐标指针,东坐标(m)或经度(°)</param>
					/// <param name="pdfY">Y坐标指针,北坐标(m)或纬度(°)</param>
					/// <param name="pForwardFlag">正算标记,true表示从球面坐标到投影平面坐标</param>
					///<returns>0表示成功 正常</returns>
					static ev_int32 transform(_in const EarthView::World::Spatial::Utility::CSpatialReference* objSrcCrdSys,
						_in ev_int32 nCount,_inout ev_real64*pdfX,_inout ev_real64*pdfY,_in ev_bool pForwardFlag);					
				protected:

				   EarthView::World::Spatial::Utility::CTransParameter*m_objTransParameter;                ///基准转换参数
				   const EarthView::World::Spatial::Utility::CSpatialReference*m_objSrcSpatialReference;         ///源坐标参考索引
				   const EarthView::World::Spatial::Utility::CSpatialReference*m_objDstSpatialReference;         ///目标坐标参考索引
				   CCoordinateTransformationImpl *m_coordinateTransImpl;
				};				
				///</summary>
			}
		}///Spatial
	}///World
}///EarthView
#endif//_COORD_TRANS_FROMATION_H

