#ifndef EARTHVIEW_WORLD_SPATIAL_LABELENGINE_H
#define EARTHVIEW_WORLD_SPATIAL_LABELENGINE_H
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ilabelproperty.h"
#include "spatialinterface/ispatialdisplay.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				class CLabelElements;
				class EV_INTERFACE_DLL ILabelEngine
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~ILabelEngine();

				public:
					/// <summary>
					/// 添加要素
					/// </summary>
					virtual ev_void addFeature(ev_int32 classID,
						ILabelProperty * labelProperty,
						const EarthView::World::Spatial::Geometry::IGeometry *geo,
						EVString &label,
						ev_int32 featureID);
					/// <summary>
					/// 添加要素(分数注记)
					/// </summary>
					virtual ev_void addFeature(ev_int32 classID,
						ILabelProperty * labelProperty,
						const EarthView::World::Spatial::Geometry::IGeometry *geo,
						EVString &label_numerator,
						EVString &label_denominator,
						ev_int32 featureID);
					/// <summary>
					/// 获取标注元素集
					/// </summary>
					virtual CLabelElements* getLabelElements();
					/// <summary>
					/// 初始化
					/// </summary>
					virtual ev_void initialize(const EarthView::World::Spatial::Display::ISpatialDisplay * display,const EarthView::World::Spatial::Geometry::IEnvelope * extent);
					/// <summary>
					/// 是否初始化
					/// </summary>
					virtual ev_bool isInitialized();
					/// <summary>
					/// 释放资源
					/// </summary>
					virtual ev_void releaseResources();
					/// <summary>
					/// 获取引擎名
					/// </summary>
					virtual const EVString getEngineName();
					/// <summary>
					/// 添加障碍区域
					/// </summary>
					virtual ev_void addBarriers(const EarthView::World::Spatial::Geometry::IGeometry *geo);
ev_private:
					ILabelEngine( EarthView::World::Core::CNameValuePairList *pList );
				protected:
					ILabelEngine();			
				};

				class EV_INTERFACE_DLL CSubLabelElement
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CSubLabelElement();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CSubLabelElement();
					/// <summary>
					/// 获取旋转角度
					/// </summary>
					const ev_real64 getRatateAngle()const;
					/// <summary>
					/// 获取标注内容
					/// </summary>
					const EVString& getLabelText()const;
					/// <summary>
					/// 获取标注位置
					/// </summary>
					const EarthView::World::Spatial::Geometry::IGeometry*getLocation()const;
					/// <summary>
					/// 设置标注旋转角度
					/// </summary>
					ev_void setRotateAngle(ev_real64 angle);
					/// <summary>
					/// 设置标注内容
					/// </summary>
					ev_void setLabelText(EVString label);
					/// <summary>
					/// 设置标注位置
					/// </summary>
					ev_void setLocation(EarthView::World::Spatial::Geometry::IGeometry* location);
ev_private:
					CSubLabelElement( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ev_real64 m_rotateAngle;
					EVString m_Label;
					EarthView::World::Spatial::Geometry::IGeometry* m_location;

				};
				class EV_INTERFACE_DLL CLabelElement
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CLabelElement();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CLabelElement();
					/// <summary>
					/// 获取子元素个数
					/// </summary>
					const ev_int32 getSubElementCounts()const;
					/// <summary>
					/// 添加子元素
					/// </summary>
					ev_void addSubElement(CSubLabelElement*ref_subElement);
					/// <summary>
					/// 获取索引处的子元素
					/// </summary>
					const CSubLabelElement* getSubElement(ev_int32 index)const;
					/// <summary>
					/// 是否显示
					/// </summary>
					const ev_bool getPlaced()const;
					/// <summary>
					/// 获取关联要素ID
					/// </summary>
					const ev_int32 getFeatureID()const;
					/// <summary>
					/// 获取标识ID
					/// </summary>
					const ev_int32 getClassID()const;
					/// <summary>
					/// 获取label
					/// </summary>
					const EVString & getLabel()const;
					/// <summary>
					/// 设置是否显示
					/// </summary>
					ev_void setPlaced(ev_bool placed);
					/// <summary>
					/// 设置关联要素ID
					/// </summary>
					ev_void setFeatureID(ev_int32 id);
					/// <summary>
					/// 设置标识ID
					/// </summary>
					ev_void setClassID(ev_int32 id);
					/// <summary>
					/// 设置label
					/// </summary>
					ev_void setLabel(EVString label);
ev_private:
					CLabelElement( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ev_vector<CSubLabelElement*>m_Elements;
					ev_bool m_placed;
					ev_int32 m_featureID;
					ev_int32 m_classID;
					EVString m_label;

				};
				class EV_INTERFACE_DLL CLabelElements
					:public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CLabelElements();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CLabelElements();
					/// <summary>
					/// 获取元素个数
					/// </summary>
					const ev_int32 getElementCounts()const;
					/// <summary>
					/// 添加元素
					/// </summary>
					ev_void addElement(CLabelElement * ref_element);
					/// <summary>
					/// 获取索引处的元素
					/// </summary>
					CLabelElement* getElement(ev_int32 index)const;
					/// <summary>
					/// 释放资源
					/// </summary>
					const ev_void releaseResources();
				ev_private:
					CLabelElements( EarthView::World::Core::CNameValuePairList *pList );
				private:
					ev_vector<CLabelElement*>m_Elements;
				};
			}
		}
	}
}
#endif


