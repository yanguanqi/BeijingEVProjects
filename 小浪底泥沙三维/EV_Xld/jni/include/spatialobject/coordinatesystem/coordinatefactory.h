
#ifndef _COORDINATE_FACTORY_H
#define _COORDINATE_FACTORY_H
#define COORDINATESYSTEMEXPORTS


#include "coordinatesysenumtype.h"
#include "spatialinterface/ispatialreference.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Geometry;
namespace EarthView
{////EarthView
	namespace World
	{////World
		namespace Spatial
		{  
		
			namespace Utility
			{   
				////declare
				class CSpatialReference;
                class CEllipseSpheriod;
                class CProjParameter;
				///<summary>
				///CCoordinateSystemFactory
				///根据给定的参数或枚举值 创建相应的坐标系统
				///</summary>
				class EV_GEOMETRY_DLL CCoordinateSystemFactory: public EarthView::World::Core::CAllocatedObject
				{  
					 ev_private:
						/// <summary>
						/// 键值对构造函数
						/// </summary>
						///<returns></returns>
						CCoordinateSystemFactory(_in EarthView::World::Core::CNameValuePairList* pList);
					public:
						///<summary>
						///构造函数
						///</summary>
						/// <param name=""></param>
						/// <returns></returns>
						CCoordinateSystemFactory();

						///<summary>
						///根据常见的坐标系统枚举 创建常见地理坐标系统
						///</summary>
						/// <param name="eWellKnownCS">EarthView::World::Spatial::Utility::EVWellKnownGeoCSType常见地理坐标系统枚举</param>
						/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
						static EarthView::World::Spatial::Utility::CSpatialReference*createCoordSys(_in EarthView::World::Spatial::Utility::EVWellKnownGeoCSType eWellKnownCS);

						///<summary>
						///根据常见的坐标系统枚举 创建常见投影坐标系统
						///</summary>
						/// <param name="eWelKnProjCS">EarthView::World::Spatial::Utility::EVWellKnownProjCSType常见投影坐标系统枚举</param>
						/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
						static EarthView::World::Spatial::Utility::CSpatialReference*createCoordSys(_in EarthView::World::Spatial::Utility::EVWellKnownProjCSType eWelKnProjCS);

						///<summary>
						///根据给定椭球体和投影参数 创建坐标系统 如果pObjProjParameter = NULL则
						///创建地理坐标系统 否则创建投影坐标系统
						///</summary>
						/// <param name="pobjEllipseSphere">CEllipseShpere指针</param>
						/// <param name="pObjProjParameter">EarthView::World::Spatial::Utility::CProjParameter指针,为NULL时表示创建地理坐标系统</param>
						/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
						static EarthView::World::Spatial::Utility::CSpatialReference*createCoordSys(_in const EarthView::World::Spatial::Geometry::IEllipseSpheriod*pobjEllipseSphere,
							                             _in const EarthView::World::Spatial::Utility::CProjParameter*pObjProjParameter);
                        
						///<summary>
						///根据给定格式的投影参考文本 创建相应的坐标系统
						///</summary>
						/// <param name="eStrType">EVSpatialReferenceStrTypes文本格式</param>
						/// <param name="strReference">空间参考的字符串描述</param>
						/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
						static EarthView::World::Spatial::Utility::CSpatialReference*createCoordSys(_in EarthView::World::Spatial::Utility::EVSpatialReferenceStringType eStrType,_in  const EVString&pszReference);
                        
						///<summary>
						///根据给ESPG代号创建相应的坐标系统
						///</summary>
						/// <param name="ESPG">int ESPG带号</param>
						/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*空间参考指针</returns>
						static EarthView::World::Spatial::Utility::CSpatialReference*createCoordSys(_in ev_int32 ESPG);

						///<summary>
						///从流创建一个坐标参考系统
						///</summary>
						/// <param name="objStream">流</param>
						/// <returns>EarthView::World::Spatial::Utility::CSpatialReference*从流创建指针</returns>
						static EarthView::World::Spatial::Utility::CSpatialReference*createCoordSys(EarthView::World::Core::CDataStream&objStream);

						///<summary>
						///释放坐标系统
						///</summary>
						/// <param name="pCorSys">坐标系统指针</param>
						/// <returns></returns>
						static ev_void   releaseCoordSys(_in EarthView::World::Spatial::Utility::CSpatialReference *pCorSys);
						///<summary>
						///析构函数
						///</summary>
						/// <param name=""></param>
						/// <returns></returns>
						virtual ~CCoordinateSystemFactory();
					protected:
				    private:
						///禁用赋值
                        CCoordinateSystemFactory&operator=(_in const CCoordinateSystemFactory&obj);
						///禁用拷贝构造
                        CCoordinateSystemFactory(_in const CCoordinateSystemFactory&obj);
					
				};
			}

		}
	}///World
}///EarthView


#endif//_COORDINATE_FACTORY_H
