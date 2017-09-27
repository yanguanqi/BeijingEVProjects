#ifndef EARTHVIEW_WORLD_SPATIAL_ATLAS_ICHARTLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_ATLAS_ICHARTLAYER_H
#include "spatialinterface/ilayer.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/ivectorlayer.h"
#include "spatialinterface/ichartoption.h"
#include "spatialinterface/icolor.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
				/// <summary>
				/// 海图图层类接口
				/// </summary>
				class EV_INTERFACE_DLL IChartLayer
					:public EarthView::World::Spatial::Atlas::ILayer
				{
				public:
					/// <summary>
					/// 获取此图层物标类数目
					/// </summary>
					/// <returns>图层所含物标类数目</returns>
					virtual ev_uint32 getObjectClassNum() const;

					/// <summary>
					/// 获取物标类名称
					/// </summary>
					/// <param name="index">索引</param>
					/// <returns>物标类名称</returns>
					virtual const EVString getObjectClassName(_in ev_uint32 index);

					/// <summary>
					/// 获取物标类名称
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <returns>物标类类型</returns>
					virtual ev_int32 getObjectClassType(const EVString& name);

					/// <summary>
					/// 设置某一物标类的可见性
					/// </summary>
					/// <param name="index">物标类索引</param>
					/// <param name="value">该类物体是否可见</param>
					/// <returns></returns>
					virtual ev_void setClassVisible(_in ev_uint32 index,_in ev_bool value);

					
					/// <summary>
					/// 设置某一物标类的可见性
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <param name="value">该类物体是否可见</param>
					/// <returns></returns>
					virtual ev_void setClassVisible(_in const EVString& name,_in ev_bool value);

					/// <summary>
					/// 查询某一物标类是否可见
					/// </summary>
					/// <param name="index">物标类索引</param>
					/// <returns>某类物体是否可见</returns>
					virtual ev_bool isClassVisible(_in ev_uint32 index);

					/// <summary>
					/// 查询某一物标类是否可见
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <returns>某类物体是否可见</returns>
					virtual ev_bool isClassVisible(_in const EVString& name);

					/// <summary>
					/// 设置某物标类是否可选
					/// </summary>
					/// <param name="index">索引</param>
					/// <param name="value">是否可选</param>
					/// <returns></returns>
					virtual ev_void setClassSelected(_in ev_uint32 index,_in ev_bool value);

					/// <summary>
					/// 查询某物标类是否可选
					/// </summary>
					/// <param name="index">物标类索引</param>
					/// <returns>某类物体是否可选</returns>
					virtual ev_bool isClassSelected(_in ev_uint32 index);

					/// <summary>
					/// 查询某物标类是否可选
					/// </summary>
					/// <param name="name">物标类名称</param>
					/// <returns>某类物体是否可选</returns>
					virtual ev_bool isClassSelected(_in const EVString& name);

					/// <summary>
					/// 设置关联的数据集
					/// </summary>
					/// <param name="pDataset">关联数据集</param>
					/// <returns></returns>
					virtual ev_void setDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* ref_pDataset);

					/// <summary>
					/// 设置要素选择集
					/// </summary>
					/// <param name="filter">查询条件</param>
					/// <param name="type">选择结果类型</param>
					/// <returns></returns>
					virtual ev_void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter *filter,_in EarthView::World::Spatial::Atlas::EVSelectionResultType type );

					/// <summary>
					/// 清除要素选择集
					/// </summary>
					/// <returns></returns>
					virtual ev_void clearSelection();

					/// <summary>
					/// 获取选择图层
					/// </summary>
					/// <returns>选择图层对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Atlas::ILayerSelection * getLayerSelection();

					/// <summary>
					/// 获取显示参数
					/// </summary>
					/// <returns>显示参数对象指针，不需释放</returns>
					virtual EarthView::World::Spatial::Display::IChartOption* getOptionRef();

					/// <summary>
					/// 设置显示参数
					/// </summary>
					/// <param name="uniformOption">显示参数对象</param>
					/// <returns></returns>
					virtual ev_void setEnvironment(_in const EarthView::World::Spatial::Display::IChartOption* uniformOption);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~IChartLayer();
					virtual ev_void setClassDisplayMinScale (const EVString& className, const ev_real64 scale);
					virtual ev_bool getClassDisplayMinScale (const EVString& className, ev_real64& minScale) const;
					virtual ev_void setClassDisplayMaxScale (const EVString& className, const ev_real64 scale);
					virtual ev_bool getClassDisplayMaxScale (const EVString& className, ev_real64& maxScale) const;
					virtual ev_void setClassIgnoreScale(const EVString& className, const ev_bool classIgnore);
					virtual ev_bool getClassIgnoreScale (const EVString& className) const;
					virtual ev_void setClassDisplayMinScale (const ev_uint32 index, const ev_real64 scale);
					virtual ev_bool getClassDisplayMinScale(const ev_uint32 index, ev_real64& scale) const;
					virtual ev_void setClassDisplayMaxScale(const ev_uint32 index, const ev_real64 scale);
					virtual ev_bool getClassDisplayMaxScale(const ev_uint32 index, ev_real64& scale) const;
					virtual ev_void setClassIgnoreScale(const ev_uint32 index, const ev_bool classIgnore);
					virtual ev_bool getClassIgnoreScale(const ev_uint32 index) const;

					virtual ev_void setUseChartClassControl(const EVString& className, ev_bool IsUse);
					virtual ev_bool getUseChartClassControl(const EVString& className) const;
					virtual ev_void setChartClassControlSize(const EVString& className, ev_uint32 sizeFactor);
					virtual ev_bool getChartClassControlSize(const EVString& className, ev_uint32& sizeFactor) const;
					virtual ev_void setChartClassControlColor(const EVString& className,
								const EarthView::World::Spatial::Display::IColor* color);
					virtual ev_bool getChartClassControlColor(const EVString& className,
										EarthView::World::Spatial::Display::IColor*& pColor) const;
					virtual ev_void setUseChartClassControlColor(const EVString& className, ev_bool useColor);
					virtual ev_bool getUseChartClassControlColor(const EVString& className) const;
					virtual ev_void setChartClassControlColorBlendMode(const EVString& className,EarthView::World::Spatial::Display::EVColorBlendOperation mode);
					virtual EarthView::World::Spatial::Display::EVColorBlendOperation getChartClassControlColorBlendMode(const EVString& className) const;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IChartLayer();	
				ev_private:
					IChartLayer( EarthView::World::Core::CNameValuePairList *pList );
				};
			}
		}
	}
}
#endif


