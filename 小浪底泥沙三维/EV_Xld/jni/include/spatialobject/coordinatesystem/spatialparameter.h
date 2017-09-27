
#ifndef _SPATIAL_PARAMETTER_H
#define _SPATIAL_PARAMETTER_H

#define  COORDINATESYSTEMEXPORTS
#include "coordinatesysenumtype.h"
#include  "spatialinterface/ispatialreference.h"
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
				
				/************************************************************************/
				/*   CEllipseShpere                                                       */
				/************************************************************************/
				///<summary>
				///CEllipseShpere
				///椭球体类，维护椭球体相关参数
				///</summary>
			   class IEllipseSpheriodImpl;
			   class CProjParameterImpl;
               class EV_GEOMETRY_DLL CEllipseSpheriod: public EarthView::World::Spatial::Geometry::IEllipseSpheriod
			   {
				   ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
		            CEllipseSpheriod(_in EarthView::World::Core::CNameValuePairList* pList);
			   public:
				   /// <summary>
				   /// 默认构造函数
				   /// </summary>
				   CEllipseSpheriod();

				   /// <summary>
				   /// 初始化构造函数
				   /// </summary>
				   /// <param name="strSphereName">椭球体名称</param>
				   /// <param name="eDatumType">水准面模型</param>
				   /// <param name="dfSamimajor">长半轴</param>
				   /// <param name="dfInvFlattening">扁率倒数</param>
				   /// <param name="dfFromGreenWicth">与格林威治天文子午面之间的夹角</param>
				   /// <param name="unitsName">单位名称,"degree"</param>
				   /// <param name="dfAngularUnits">单位数值,以弧度为标准,1°= 180/PI</param>
				   CEllipseSpheriod(_in const EVString& pszSphereName,_in EarthView::World::Spatial::Utility::EVDatumType eDatumType,_in ev_real64 dfSamimajor,
					              _in ev_real64 dfInvFlattening,_in ev_real64 dfFromGreenWicth,_in const EVString& pszunitsName,
								  _in ev_real64 dfAngularUnits);
				   /// <summary>
				   /// 构造常见椭球体
				   /// <summary>
				   /// <param name="spheriodType">椭球体类型</param>
				   CEllipseSpheriod(_in EVSpheriod spheriodType);
				   /// <summary>
				   /// 拷贝构造函数
				   /// </summary>
				   CEllipseSpheriod(_in const CEllipseSpheriod&objEllipse);
				   /// <summary>
				   /// 赋值函数
				   /// </summary>
				   EarthView::World::Spatial::Utility::CEllipseSpheriod&operator=(_in const EarthView::World::Spatial::Utility::CEllipseSpheriod&objEllipse);

				   /// <summary>
				   /// 默认析构函数
				   /// </summary>
				   ~CEllipseSpheriod();

				   /// <summary>
				   /// 获取椭球长半轴
				   /// </summary>
				   /// <returns>const ev_real64</returns>
				   const ev_real64 getSamiMajor()const;

				   /// <summary>
				   /// 获取椭球扁率倒数
				   /// </summary>
				   /// <returns>const ev_real64</returns>
				   const ev_real64 getInvFlattening()const;

				   /// <summary>
				   /// 获取椭球体名称
				   /// </summary>
				   /// <returns> string</returns>
				   EVString getSphereName()const;

				   /// <summary>
				   /// 获取椭球体对应的大地水准面模型
				   /// </summary>
				   /// <returns>const EarthView::World::Spatial::Utility::EVDatumType</returns>
				   const EarthView::World::Spatial::Utility::EVDatumType getDatumType()const;

				   /// <summary>
				   /// 获取椭球体起始子午面与格林威治天文子午面之间的夹角
				   /// </summary>
				   /// <returns>const ev_real64</returns>
                   const ev_real64 getFromGreenWicth()const;

				   /// <summary>
				   /// 获取椭球体地理坐标单位键值对
				   /// </summary>
				   /// <param name="name">string&</param>
				   /// <param name="unitsValue">ev_real64&</param>
				   ev_void  getAngularUnits(_out EVString&pszname,_out ev_real64&dfunitsValue)const;

			   protected:
				  IEllipseSpheriodImpl   *m_EllipseImpl;
			   };

			   /************************************************************************/
			   /*   CProjParameter                                                       */
			   /************************************************************************/
			   ///<summary>
			   ///CProjParameter
			   ///投影参数类，维护投影正反算所需参数类
			   ///</summary>
			   class   EV_GEOMETRY_DLL CProjParameter:public EarthView::World::Core::CAllocatedObject
			   {
				   ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
		            CProjParameter(_in EarthView::World::Core::CNameValuePairList* pList);
			   public:
				   /// <summary>
				   /// 赋值构造函数
				   /// </summary>
				   /// <param name="dfCenterLong">中央经线经度</param>
				   /// <param name="dfCenterLat">原点纬线</param>
				   /// <param name="dfSacleFactor">比例因子</param>
				   /// <param name="dfEasting">东偏移量</param>
				   /// <param name="dfNorthing">北偏移量</param>
				   /// <param name="bNorth">是否是北坐标</param>
				   CProjParameter(_in ev_real64 dfCenterLong,_in ev_real64 dfCenterLat,_in ev_real64 dfSacleFactor,
					              _in ev_real64 dfEasting,_in ev_real64 dfNorthing,_in EarthView::World::Spatial::Utility::EVProjectionType projType, _in ev_bool bNorth);
				   ///<summary>
				   /// 默认构造函数
				   /// </summary>
                   CProjParameter();

				   ///<summary>
				   /// 构造预定义的投影
				   /// </summary>
                   CProjParameter(_in EVPredefinedProjection projectionType);

				   ///<summary>
				   /// 析构函数
				   /// </summary>
				   virtual~CProjParameter();

				   /// <summary>
				   /// 设置中央经线
				   /// </summary>
				   /// <param name="dfCenterLong">中央经线经度</param>
				    ev_void setCenterLong(_in ev_real64 dfCenterLong);
				   /// <summary>
				   /// 设置原点纬线
				   /// </summary>
				   /// <param name="dfCenterLat">原点纬线坐标</param>
				    ev_void setOriginLatitude(_in ev_real64 dfCenterLat);

				   /// <summary>
				   /// 设置比例因子
				   /// </summary>
				   /// <param name="dfsacleFactor">比例因子</param>
				    ev_void setSacleFactor(_in ev_real64 dfsacleFactor);
				   ///<summary>
				   ///设置第一标准线，单位为°
				   /// </summary>
				   /// <returns>ev_bool</returns>
				   ev_void   setStandarPrallel_1(_in ev_real64 dfstandParallel);
				   ///<summary>
				   ///设置第二标准线，单位为°
				   /// </summary>
				   /// <returns>ev_bool</returns>
				   ev_void   setStandarPrallel_2(_in ev_real64 dfstandParallel);
				   /// <summary>
				   /// 设置东偏移量
				   /// </summary>
				   /// <param name="dfEasting">坐标东向偏移</param>
				   ev_void setFalseEasting(_in ev_real64 dfEasting);
				   /// <summary>
				   /// 设置北偏移量
				   /// </summary>
				   /// <param name="dfNothing">北坐标偏移</param>
				    ev_void setFalseNorthing(_in ev_real64 dfNothing);
				   ///<summary>
				   /// 设置是否在北半球
				   /// </summary>
				   /// <param name="bnorth">是否在北半球</param>
				    ev_void setNorthing(_in ev_bool bnorth);
				   ///<summary>
				   /// 获得中央经线
				   /// </summary>
				   /// <returns>ev_real64</returns>
				    const ev_real64 getCenterLong()const;
				   ///<summary>
				   /// 获得原点纬线
				   /// </summary>
				   /// <returns>ev_real64</returns>
				    const ev_real64 getOriginLatitude()const;
				   ///<summary>
				   /// 获取比例因子
				   /// </summary>
				   /// <returns>ev_real64</returns>
				    const ev_real64 getSacleFactor()const;
				   /// <summary>
				   ///获取第一标准线，单位为°
				   /// </summary>
				   /// <returns>ev_real64</returns>
				    const ev_real64  getStandarPrallel_1()const;
				   /// <summary>
				   ///  获取第二标准线，单位为°
				   /// </summary>
				   /// <returns>ev_real64</returns>
				    const ev_real64  getStandarPrallel_2()const;
				   ///<summary>
				   /// 获取东方向偏移量
				   /// </summary>
				   /// <returns>ev_real64</returns>
				    const ev_real64 getFalseEasting()const;
				   ///<summary>
				   /// 获取北方向偏移量
				   /// </summary>
				   /// <returns>ev_real64</returns>
				    const ev_real64 getFalseNorthing()const;
				   ///<summary>
				   /// 判断是否为北半球坐标
				   /// </summary>
				   /// <returns>ev_bool</returns>
				   const ev_bool   isNorthing()const;
                   ///<summary>
				   /// 获取投影坐标类型 
				   /// </summary>
				   /// <returns>投影类型</returns>
				   const EarthView::World::Spatial::Utility::EVProjectionType   getProjectionType()const;
			   protected:
				 
				   CProjParameterImpl* m_pramImpl;
			   };
			   /************************************************************************/
			   /*   CTransParameter                                                       */
			   /************************************************************************/
			   ///<summary>
			   ///CTransParameter
			   ///基准变换所需参数集
			   ///</summary>
			   class   EV_GEOMETRY_DLL CTransParameter:public EarthView::World::Core::CAllocatedObject
			   {
				    ev_private:
					/// <summary>
					/// 键值对构造函数
					/// </summary>
					///<returns></returns>
		            CTransParameter(_in EarthView::World::Core::CNameValuePairList* pList);
			   public:
				   ///<summary>
				   ///禁用默认构造函数
				   ///</summary>
				   CTransParameter();
				   /// <summary>
				   /// 赋值构造函数
				   /// </summary>
				   /// <param name="dfX">X轴平移量(单位为m)</param>
				   /// <param name="dfY">Y轴平移量(单位为m)</param>
				   /// <param name="dfZ">Z轴平移量(单位为m)</param>
				   /// <param name="dfRX">X轴旋转量(单位为弧度)</param>
				   /// <param name="dfRY">Y轴旋转量(单位为弧度)</param>
				   /// <param name="dfRZ">Z轴旋转量(单位为弧度)</param>
				   /// <param name="dfPPM">缩放因子(单位为百万分之一米)</param>
				   CTransParameter(_in ev_real64 dfX,_in ev_real64 dfY,_in ev_real64 dfZ,_in ev_real64 dfRX,
					              _in ev_real64 dfRY,_in ev_real64 dfRZ,_in ev_real64 dfPPM);
				   ///<summary>
				   ///析构函数
				   ///</summary>
				   virtual ~CTransParameter();

				   /// <summary>
				   /// 设置X方向平移量
				   /// </summary>
				   /// <param name="dfX">X轴平移量</param>
				   ev_void setTransX(_in ev_real64 dfX);
				   /// <summary>
				   /// 设置Y方向平移量
				   /// </summary>
				   /// <param name="dfY">Y轴平移量</param>
				   ev_void setTransY(_in ev_real64 dfY);
            
				   /// <summary>
				   /// 设置Z方向平移量
				   /// </summary>
				   /// <param name="dfZ">Z轴平移量</param>
				   ev_void setTransZ(_in ev_real64 dfZ);
				   /// <summary>
				   /// 设置X方向旋转量
				   /// </summary>
				   /// <param name="dfRX">X轴方向旋转量</param>
				   ev_void setRotateX(_in ev_real64 dfRX);
				   /// <summary>
				   /// 设置Y方向旋转量
				   /// </summary>
				   /// <param name="dfRY">Y轴方向旋转量</param>
				   ev_void setRotateY(_in ev_real64 dfRY);
				   /// <summary>
				   /// 设置Z方向旋转量
				   /// </summary>
				   /// <param name="dfRZ">Z轴方向旋转量</param>
				   ev_void setRotateZ(_in ev_real64 dfRZ);
				   /// <summary>
				   /// 设置缩放因子
				   /// </summary>
				   /// <param name="dfPPM">dfPPM缩放因子</param>
				   ev_void setSaclePPM(_in ev_real64 dfPPM);
				   /// <summary>
				   /// 获取X轴方向平移量
				   /// </summary>
				   /// <returns></returns>
				   const ev_real64 getTransX()const;
				   /// <summary>
				   /// 获取Y轴方向平移量
				   /// </summary>
				   /// <returns></returns>
				   const ev_real64 getTransY()const;
				   /// <summary>
				   /// 获取Z轴方向平移量
				   /// </summary>
				   /// <returns></returns>
				   const ev_real64 getTransZ()const;
				   /// <summary>
				   /// 获取X轴方向旋转量
				   /// </summary>
				   /// <returns></returns>
				   const ev_real64 getRotateX()const;
				   /// <summary>
				   /// 获取Y轴方向旋转量
				   /// </summary>
				   /// <returns></returns>
				   const ev_real64 getRotateY()const;
				   /// <summary>
				   /// 获取Z轴方向旋转量
				   /// </summary>
				   /// <returns></returns>
				   const ev_real64 getRotateZ()const;
				   /// <summary>
				   /// 获取缩放因子PPM
				   /// </summary>
				   /// <returns></returns>
				   const ev_real64 getSaclePPM()const;
			  
			   protected:
				   ///三轴平移量,单位为米
				   ev_real64 m_dfTranX;  
				   ev_real64 m_dfTransY;
				   ev_real64 m_dfTransZ;
                   
				   ///三轴旋转量 单位为弧度
				   ev_real64 m_dfRotateX;
				   ev_real64 m_dfRotateY;
				   ev_real64 m_dfRotateZ;
                   ///缩放因子 单位为百万分之一米
				   ev_real64 m_dfPPM;
			   private:
			   };

			}
		}///Spatial
	}///World
}///EarthView

#endif //_SPATIAL_PARAMETTER_H
