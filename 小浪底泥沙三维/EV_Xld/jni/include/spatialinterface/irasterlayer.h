#ifndef EARTHVIEW_WORLD_SPATIAL_ATLAS_IRASTERLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_ATLAS_IRASTERLAYER_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/ilayer.h"
#include "spatialinterface/irasterrenderer.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Atlas{
				/// <summary>
				/// 栅格图层基类
				/// </summary>
				class EV_INTERFACE_DLL IRasterLayer :
					public EarthView::World::Spatial::Atlas::ILayer
				{
				public:	
					/// <summary>
					/// 默认析构函数
					/// </summary>
					virtual ~IRasterLayer();
					
					/// <summary>
					/// 将栅格图层关联到一个数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集</returns>
					virtual ev_void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset);
					/// <summray>
					/// 设置栅格渲染对象
					/// </summary>
					/// <param name="pRenderer">栅格渲染对象（内部释放）</param>
					/// <returns></returns>
					virtual ev_void setRenderer(_nofree EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer);
					/// <summray>
					/// 获取栅格渲染对象
					/// </summary>
					/// <returns>栅格渲染对象</returns>
					virtual const EarthView::World::Spatial2D::Raster::IRasterRenderer* getRenderer() const;
					///<summary>
					///获取栅格图层的ID
					///</summary>
					///<returns>图层ID</returns>
					virtual ev_int32 getLayerID();
					///<summary>
					///设置栅格图层的ID
					///</summary>
					///<param name="iID">图层ID</param>
					///<returns></returns>
					virtual ev_void  setLayerID(_in ev_int32 iID);
					///<summary>
					///为R通道指定波段索引(波段索引不能超过波段的总数)
					/// <param name="iBand">波段索引，-1为未指定任何波段，即该波段不被显示</param>
					///<returns></returns>
					///<summary>
					virtual ev_void assignRChannel(_in ev_int32 iBand);
					///<summary>
					///为G通道指定波段索引
					/// <param name="iBand">波段索引,-1为未指定任何波段，即该通道不被显示</param>
					///<returns></returns>
					///</summary>
					virtual ev_void assignGChannel(_in ev_int32 iBand);
					///<summary>
					///为B通道指定波段索引
					/// <param name="iBand">波段索引,-1为未指定任何波段，即该通道不被显示</param>
					///<returns></returns>
					///</summary>
					virtual ev_void assignBChannel(_in ev_int32 iBand);
					/// <summary>
					/// 获取R通道的波段索引
					/// </summary>
					/// <returns>波段索引</returns>
					virtual ev_int32  getRedIndex()const;
					/// <summary>
					/// 获取G通道的波段索引
					/// </summary>
					/// <returns>波段索引</returns>
					virtual ev_int32  getGreenIndex()const;
					/// <summary>
					/// 获取B通道的波段索引
					/// </summary>
					/// <returns>波段索引</returns>
					virtual ev_int32  getBlueIndex()const;
					/// <summary>
					/// 获取指定地面坐标处的RGB值
					/// </summary>
					/// <param name="dfX">X坐标</param>
					/// <param name="dfY">Y坐标</param>
					/// <param name="dfRValue">R通道值</param>
					/// <param name="dfGValue">G通道值</param>
					/// <param name="dfBValue">B通道值</param>
					/// <returns></returns>
					virtual void getPixelValue(_in ev_real64 dfX,_in ev_real64 dfY,
						                ev_real64 &dfRValue, ev_real64& dfGValue,
										ev_real64 &dfBValue) const;
                ev_private:
					IRasterLayer( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					IRasterLayer();
				private:
					IRasterLayer(const IRasterLayer&);
					IRasterLayer& operator=(const IRasterLayer&);
				};
			}
		}
	}
}

#endif
