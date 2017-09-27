

#ifndef _SPATAIL_REFERENCE_H
#define _SPATAIL_REFERENCE_H

#define  COORDINATESYSTEMEXPORTS
#include "spatialobject/coordinatesystem/coordinatesysenumtype.h"
#include "spatialinterface/ispatialreference.h"

////// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Geometry;
namespace EarthView
{////EarthView
	namespace World
	{////World
		namespace Spatial
		{  
			namespace Utility
			{   
				///所有char型的变量 对应着ASCII码
                class CCoordinateSystemFactory;
                class CProjParameter;
				class CCoordinateTransformation;
				class ISpatialReferenceImpl;
				class CEllipseSpheriod;
				/************************************************************************/
				/*    EarthView::World::Spatial::Utility::CSpatialReference                                                 */
				/************************************************************************/
				///<summary>
				///EarthView::World::Spatial::Utility::CSpatialReference
				///空间参考的基类 为空间中的物体位置提供一个数学描述
				///</summary>
				class EV_GEOMETRY_DLL CSpatialReference: public EarthView::World::Spatial::Geometry::ISpatialReference
				{
                    
                 ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
		                CSpatialReference(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					virtual~CSpatialReference();
					/// <summary>
					/// 获取椭球体指针
					/// </summary>
					///<returns>CEllipseSpheriod*椭球体指针</returns>
					virtual const   EarthView::World::Spatial::Geometry::IEllipseSpheriod *getCEllipseSphere() const;
					/// <summary>
					/// 将空间参考导出成指定的字符串格式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					/// <param name="pszText"></param>
					///<returns></returns>
					virtual ev_void  exportToString(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type,_out EVString&pszstrText)const;

					/// <summary>
					/// 获取坐标的单位名称和单位值
					/// </summary>
					/// <param name="pszunitsName"></param>
					/// <param name="dfvalue"></param>
					///<returns></returns>
					virtual ev_void  getCoordUnits( _out EVString&pszunitsName,_out ev_real64&dfvalue)const;
					
					/// <summary>
					/// 获取椭球长半轴的值
					/// </summary>
					///<returns>ev_real64</returns>
					const   ev_real64 getSamiMajor()const;
                    
					/// <summary>
					/// 获取椭球扁率的倒数
					/// </summary>
					///<returns>ev_real64</returns>
					const ev_real64 getInvFlattening()const;
					/// <summary>
					/// 获取椭球名称
					/// </summary>
					///<returns>ev_char*</returns>
					EVString getSphereName()const;
                    
					/// <summary>
					/// 根据已有的坐标参考框架，克隆一个坐标参考系统
					///需要在外边调用释放
					/// </summary>
					///<returns>EarthView::World::Spatial::Utility::CSpatialReference*</returns>
					virtual _extfree EarthView::World::Spatial::Geometry::ISpatialReference*clone()const;
                    
					/// <summary>
					/// 是否是地理坐标系统
					/// </summary>
					///<returns>ev_real64</returns>
					const ev_bool isGeographic()const;
					/// <summary>
					/// 是否是投影坐标系统
					/// </summary>
					///<returns>ev_real64</returns>
					const ev_bool isProjected()const;
					/// <summary>
					/// 获取空间参考系统的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const;
					/// <summary>
					/// 获取空间参考系统的EPSG值
					/// </summary>
					/// <param name=""></param>
					/// <returns>ESPG值,0表示代码ESPG未知</returns>
					virtual ev_uint32 getSRID()const;

					/// <summary>
					/// 获取空间坐标系统的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统名称</returns>
					virtual EVString getCoordianteSystemName() const;

					/// <summary>
					/// 设置空间坐标系统的名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>坐标系统名称</returns>
					virtual void setCoordianteSystemName(_in EVString& name) const;
					/// <summary>
					/// 将空间坐标系统 导出成流形式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					///<param name="objStream">流引用</param>
					/// <returns> </returns>
					virtual const ev_void  toStream(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type,_inout EarthView::World::Core::CDataStream&objStream)const;
					///<summary>
					///引用增加，引用计数加一
					///<summary>
					ev_int32   reference();
					///<summary>
					///引用减少，引用计数减一
					///<summary>
                    ev_int32   dereference();
					///<summary>
					///获取引用计数数，
					///<summary>
					///<returns>引用的次数</returns>
                    ev_int32  getReferenceCount() const;
					///<summary>
					///释放对象自身
					///<summary>
                    ev_void   release();
					/// <summary>
					/// 比较两个空间参考是否相等
					/// </summary>
					/// <param name="pref">空间参考指针</param>
					/// <returns>true ,fase</returns>
					virtual ev_bool isSameAs(const EarthView::World::Spatial::Geometry::ISpatialReference*pref)const;
					////
					virtual ev_void getInOutputRect(ev_bool isLatLong,ev_real64&dfLeft,
						                        ev_real64&dfTop,ev_real64&dfRight,
												ev_real64&dfDown)const;
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					CSpatialReference();
					////空间参考实现
					ISpatialReferenceImpl      *m_spaitalImpl;
					ev_int32                   m_nRefCount;
					mutable CEllipseSpheriod           *m_pEllipse;
				private:
					/// <summary>
					/// 禁用赋值操作符
					/// </summary>
					EarthView::World::Spatial::Utility::CSpatialReference&operator=(_in const EarthView::World::Spatial::Utility::CSpatialReference&objSpatialRef);
					/// <summary>
					/// 禁用拷贝构造函数
					/// </summary>
                    CSpatialReference(_in const CSpatialReference&objSpatialRef);
				///friend
				friend class  CCoordinateSystemFactory;
				friend class  CCoordinateTransformation;
				};

                /************************************************************************/
                /*  CGeoSpatialReference                                                 */
                /************************************************************************/
				///<summary>
				///CGeoSpatialReference
				///地理参考 即地理坐标系统描述 继承EarthView::World::Spatial::Utility::CSpatialReference
				///</summary>
				class  EV_GEOMETRY_DLL CGeoSpatialReference:public EarthView::World::Spatial::Utility::CSpatialReference
				{
				    /// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
				ev_private:
		                CGeoSpatialReference(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					~CGeoSpatialReference();
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					CGeoSpatialReference();
				private:
					/// <summary>
					/// 禁用赋值操作符
					/// </summary>
					CGeoSpatialReference&operator=(_in const CGeoSpatialReference&objSpatialRef);
					/// <summary>
					/// 禁用拷贝构造函数
					/// </summary>
					CGeoSpatialReference(_in const CGeoSpatialReference&objSpatialRef);
				///friend
				friend class   CCoordinateSystemFactory;
				friend class  CCoordinateTransformation;
				};

				/************************************************************************/
				/*   CProjectedReference                                                 */
				/************************************************************************/
				///<summary>
				///CProjectedReference
				///投影参考 即投影坐标系统描述 继承EarthView::World::Spatial::Utility::CSpatialReference
				///</summary>
				class   EV_GEOMETRY_DLL CProjectedReference:public EarthView::World::Spatial::Utility::CSpatialReference
				{
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
				ev_private:
		                CProjectedReference(_in EarthView::World::Core::CNameValuePairList* pList);
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					virtual~CProjectedReference();
					/// <summary>
					/// 获取投影参数
					/// </summary>
					/// <param name=> </param>
					///<returns>const EarthView::World::Spatial::Utility::CProjParameter*</returns>
                    const EarthView::World::Spatial::Utility::CProjParameter*getProjParameter()const;

					/// <summary>
					/// 获取坐标的单位名称和单位值
					/// </summary>
					/// <param name="pszunitsName"></param>
					/// <param name="dfvalue"></param>
					///<returns></returns>
					virtual ev_void  getCoordUnits( _out EVString&pszunitsName,_out ev_real64&dfvalue)const;

					/// <summary>
					/// 将空间参考导出成指定的字符串格式
					/// </summary>
					/// <param name="type">EarthView::World::Spatial::Utility::EVSpatialReferenceStringType</param>
					/// <param name="pszstrText"></param>
					///<returns></returns>
					virtual ev_void  exportToString(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType type,_out EVString&pszstrText)const;

					/// <summary>
					/// 根据已有的坐标参考框架，克隆一个坐标参考系统
					/// </summary>
					///<returns>EarthView::World::Spatial::Utility::CSpatialReference*</returns>
				    virtual _extfree EarthView::World::Spatial::Geometry::ISpatialReference*clone()const;
					// <summary>
					/// 获取空间参考系统的类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间参考系统类型</returns>
					virtual EarthView::World::Spatial::Geometry::EVSpatialReferenceType getType() const;
					/// <summary>
					/// 获取空间参考系统的EPSG值
					/// </summary>
					/// <param name=""></param>
					/// <returns>EPSG值</returns>
					///virtual ev_uint32 getSRID() const;
				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					CProjectedReference();
					mutable EarthView::World::Spatial::Utility::CProjParameter* m_projPram;
				private:
					/// <summary>
					/// 禁用赋值操作符
					/// </summary>
					CProjectedReference&operator=(_in const CProjectedReference&objSpatialRef);
					/// <summary>
					/// 禁用拷贝构造函数
					/// </summary>
					CProjectedReference(_in const CProjectedReference&objSpatialRef);
				///friend
				friend class  CCoordinateSystemFactory;
				friend class  CCoordinateTransformation;
				};

			}
		}///Spatial
	}
}///EarthView

#endif//_SPATAIL_REFERENCE_H
