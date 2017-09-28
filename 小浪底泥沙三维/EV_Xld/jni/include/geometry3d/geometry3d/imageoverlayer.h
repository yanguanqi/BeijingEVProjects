#ifndef EV_IMAGE_OVERLAYER_H
#define EV_IMAGE_OVERLAYER_H

#include <core/global.h>
#include <spatialinterface/altitudemode.h>
#include <spatialobject/geometry/coordinate.h>

#include"geometry3d/iclampscenelayer.h"
#include "kmlserializer/geoobjectextension.h"

namespace EarthView{
	namespace World{
		namespace Display{
			class CBitmap;
		}
	}
}

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			class CMultiPolygon3DExtension;

			class EV_GEOMETRY3D_DLL CImageOverlayer:public EarthView::World::Spatial3D::Atlas::IClampSceneLayer
			{
				///这个枚举以后统一使用
#pragma  region 暂时定义部分
				/*enum QuadAlgorithmType
				{

				};
				*/
#pragma  endregion 
ev_private:
				CImageOverlayer(_in EarthView::World::Core::CNameValuePairList* pList);
			public: 
				CImageOverlayer();
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param name="geoObj">GeoObject对象</param>
				CImageOverlayer(const EVString& name,EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj);
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param name="name"></param>
				///<param name="north">最大纬度</param>
				///<param name="south">最小纬度</param>
				///<param name="east">最大经度</param>
				///<param name="west">最小经度</param>
				CImageOverlayer(const EVString& name,double north,double south,double east,double west);
				/// <summary>
				/// 构造函数
				/// </summary>
				///<param name="name"></param>
				///<param name="imageFilePath">图片路径</param>
				///<param name="north">最大纬度</param>
				///<param name="south">最小纬度</param>
				///<param name="east">最大经度</param>
				///<param name="west">最小经度</param>
				CImageOverlayer(const EVString& name,const EVString imageFilePath,double north,double south,double east,double west);
				/// <summary>
				/// 构造函数
				/// </summary>
				~CImageOverlayer();  
				virtual ev_void setSelectable(ev_bool selectable);
				/// <summary>
				/// 获知图层类型
				/// </summary>
				/// <returns>图层类型</returns>
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
				/// <summary>
				/// 获取瓦片
				/// </summary>
				/// <param name="tile">瓦片内容</param>
				/// <param name="north">瓦片信息</param>
				/// <returns>是否成功</returns>
				virtual ev_bool getTile(ev_int32 level,ev_int32 row,ev_int32 col,_inout EarthView::World::Spatial::CTileData& tile);
				/// <summary>
				/// 获取瓦片
				/// </summary>
				/// <param name="tile">瓦片内容</param>
				/// <param name="north">瓦片信息</param>
				/// <returns>是否成功</returns>
				virtual ev_bool getTile(_in const EarthView::World::Spatial::CTileInfo& tileInfo,_inout EarthView::World::Spatial::CTileData& tile);
				/// <summary>
				/// 获取瓦片
				/// </summary>
				/// <param name="minX">瓦片经纬度范围minX</param>
				/// <param name="minY">瓦片经纬度范围minY</param>
				/// <param name="maxX">瓦片经纬度范围maxX</param>
				/// <param name="maxY">瓦片经纬度范围maxY</param>
				/// <param name="tile">返回的瓦片数据信息</param>
				/// <returns>是否成功</returns>
				virtual ev_bool getTile(Real minX,Real minY,Real maxX,Real maxY,_inout EarthView::World::Spatial::CTileData& tile);
				/// <summary>
				/// Globe加载一个图层之后调用的函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void _notifyLayerAdd(EarthView::World::Graphic::CSceneManager* pSceneMgr);
				/// <summary>
				/// Globe卸载一个图层之后调用的函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void _notifyLayerRemoved_impl(EarthView::World::Graphic::CSceneManager* pSceneMgr);
				/// <summary>
				/// 设置旋转角度
				/// </summary>
				/// <param name="angle">旋转角度</param>
				ev_void setRotateAngle(ev_real64 angle);
				/// <summary>
				/// 设置图片路径
				/// </summary>
				/// <param name="filePath">图片路径</param>
				ev_void setImageFilePath(const EVString& filePath);
				/// <summary>
				/// 设置图片透明度 
				/// </summary>
				/// <param name="filePath">图片路径</param>
				ev_void setOpacity(ev_real32 opacity);
				/// <summary>
				/// 获取图片透明度 
				/// </summary>
				ev_real32 getOpacity();
				/// <summary>
				/// 设置影像投影类型 
				/// </summary>
				/// <param name="quadAlgorithmType">影像投影方式</param>
				//ev_void setQuadAlgorithmType(const EarthView::World::Spatial3D::CQuadAlgorithm::QuadAlgorithmType quadAlgorithmType);
				/// <summary>
				/// 设置图像覆盖层描述信息 
				/// </summary>
				/// <param name="description">描述</param>
				ev_void setDescription(const EVString& description);
				/// <summary>
				/// 获取图像覆盖层名称 
				/// </summary>
				EVString getName();
				/// <summary>
				/// 获取图像覆盖层图片路径 
				/// </summary>
				EVString getImagePath();
				/// <summary>
				/// 设置高度模式
				/// </summary>
				ev_void setImageAltitudeMode(EarthView::World::Spatial::Utility::EVAltitudeMode mode);
				/// <summary>
				/// 获取高度模式
				/// </summary>
				EarthView::World::Spatial::Utility::EVAltitudeMode getImageAltitudeMode();
			 
				/// <summary>
				/// 设置高度
				/// </summary>
				ev_void setAltitude(ev_real64 alt);
				EarthView::World::Spatial::Kml::CGeoObjectExtension* getGeoObject(ev_bool isSaveToKml);
				///<summary>
				///设置图像覆盖层ID，唯一性
				///</summary>
				ev_void setImageID(const EVString& id);
				
				EarthView::World::Geometry3D::CMultiPolygon3DExtension* mpoly;
				ev_void setSceneManager(EarthView::World::Graphic::CSceneManager* ref_mSceneMgr);
				EVString createCachePath(ev_bool isMercator,const EVString& picId,ev_int32 level,ev_int32 row,ev_int32 col);
			protected:
				void formatTime(time_t time1, EarthView::World::Core::CTime& time);			    
			public:
				ev_bool mIsRendering;
				EVString mPictureGUID;
				/// <summary>
				/// 图像覆盖层ID，唯一性
				/// </summary>
				EVString imageID;
				/// <summary>
				/// 高度
				/// </summary>
				ev_real64 altitude;
				/// <summary>
				/// 最大纬度
				/// </summary>
				ev_real64 north;
				/// <summary>
				/// 最小纬度
				/// </summary>
				ev_real64 south;
				/// <summary>
				/// 最大经度
				/// </summary>
				double east;
				/// <summary>
				/// 最大经度 
				/// </summary>
				ev_real64 west;
				/// <summary>
				/// 图像覆盖层最大地理度
				/// </summary>
				ev_real64 sphericalNorth;
				/// <summary>
				/// 图像覆盖层最大地理度
				/// </summary>
				ev_real64 sphericalSouth;
				/// <summary>
				/// 图像覆盖层最大地理经度
				/// </summary>
				ev_real64 sphericalWest;
				/// <summary>
				/// 图像覆盖层最大地理经度
				/// </summary>
				ev_real64 sphericalEast;
				/// <summary>
				/// 旋转角度
				/// </summary>
				ev_real64 rotateAngle;
				/// <summary>
				/// 图片路径
				/// </summary>
				EVString imageFilePath;
				/// <summary>
				/// 图像覆盖层描述
				/// </summary>
				EVString description;
				/// <summary>
				/// 图像覆盖层名称
				/// </summary>
				EVString name;
				/// <summary>
				/// 图片透明度
				/// </summary>
				ev_real32 opacity;				

				/// <summary>
				/// 是否启用抗锯齿及反走样
				/// </summary>
				ev_bool mSmooth;

				/// <summary>
				/// 是否可见
				/// </summary>
				ev_bool mIsVisible;

				ev_bool mIsRemovePictureCache;
				/// <summary>
				///高度模式
				/// </summary>
				EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode;
				EarthView::World::Graphic::CSceneManager* mSceneMgr;
				/// <summary>
				/// 复制构造函数
				/// </summary>
				/// <param name="obj">对象</param>
				/// <returns></returns>
				CImageOverlayer(const CImageOverlayer& obj);
			private:
					//ev_real64 minx,maxx,miny,maxy;

				EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj;
				EarthView::World::Core::DataStreamPtr mPicStream;
				//EVString mCurrentCachePath;
				EarthView::World::Display::CBitmap *mpImage;
				EarthView::World::Core::CRecursiveMutex mMutex;

				/// <summary>
				///差值数目
				/// </summary>
				ev_int32 meshPointNum;
				ev_bool mIsUseMerocator;
				
				///// <summary>
				/////图片流数据 
				///// </summary>
				//MemoryDataStreamPtr imageDataStream;
				///<summary>
				///影像投影类型
				///</summary>
				//EarthView::World::Spatial3D::CQuadAlgorithm::QuadAlgorithmType quadAlgorithmType;
				/// <summary>
				/// 绘制指定的图像覆盖层图片绘制到画布上，用于生成瓦块对象的纹理
				/// </summary>
				///<param name="tileinfo">瓦块信息</param>
				EarthView::World::Core::DataStreamPtr drawImage(const EarthView::World::Spatial::CTileInfo* tileinfo,const EVString& path);

				EarthView::World::Core::DataStreamPtr drawImage(Real minX,Real minY,Real maxX,Real maxY,const EVString& path);
				/// <summary>
				/// 通过给定的旋转角度以及图片路径，生成经过修正后的位图，用于贴地覆盖层的渲染
				/// </summary>
				EarthView::World::Core::DataStreamPtr createRectifyBitmap();
				///</summary>
				///获取EncoderClsid
				///</summary>
				//ev_bool getEncoderClsid(const WCHAR *format, CLSID *clsid);
				///</summary>
				///计算图像覆盖层的最大地理坐标范围
				///</summary>
				ev_void computeSphericalBox();
				/// <summary>
				/// 判断地理包围盒是否相交
				/// </summary>
				///<param name="north"></param>
				///<param name="south"></param>
				///<param name="east"></param>
				///<param name="west"></param>
				ev_bool intersects(ev_real64 north,ev_real64 south,ev_real64 east,ev_real64 west);
				/// <summary>
				/// 创建图像覆盖层顶点缓冲
				/// </summary>
				///<param name="vertices"></param>
				///<returns></returns>
				ev_void createVertexBuffer(_out const EarthView::World::Spatial::Geometry::CCoordinate**& vertices);
			};
		}
	}
}
#endif
