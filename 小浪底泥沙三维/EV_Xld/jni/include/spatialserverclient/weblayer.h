#ifndef EARTHVIEW_WORLD_SPATIAL_CWEBLAYER_H
#define EARTHVIEW_WORLD_SPATIAL_CWEBLAYER_H
#include "spatialinterface/ilayer.h"
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialinterface/irenderer.h"
#include "spatialinterface/idisplay2d.h"
#include "core/xml.h"
// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::Atlas;
// using namespace EarthView::World::Spatial::Display;
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 空间数据集元数据信息类
            /// </summary>
			class CServerLayerInfo;

			/// <summary>
            /// 空间服务元数据信息类
            /// </summary>
			class CServerInfo;

			/// <summary>
            /// OGC 查询结果类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCResult
				:public EarthView::World::Core::CAllocatedObject
			{
			private:
				EarthView::World::Core::MemoryDataStreamPtr pPtr;
			public:
				/// <summary>
				/// 获取查询结果智能指针
				/// </summary>
				/// <returns>查询结果智能指针</returns>
				EarthView::World::Core::MemoryDataStreamPtr& getDataPtr();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~COGCResult();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <returns></returns>
				COGCResult();
			ev_private:
				COGCResult(_in EarthView::World::Core::CNameValuePairList* pList);
				friend class CWMSDataset;
				friend class CWMTSDataset;
			};
			
			/// <summary>
            /// 网络图层类
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebLayer:
				public EarthView::World::Spatial::Atlas::ILayer
			{
			public:
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const;
				/// <summary>
				/// 获取关联的数据集
				/// </summary>
				/// <returns>数据集对象指针，不需释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset();
				
				/// <summary>
				/// 获取图层名称
				/// </summary>
				/// <returns></returns>
				virtual EVString getName() const;

				/// <summary>
				/// 设置图层名称
				/// </summary>
				/// <param name="name">图层名称</param>
				/// <returns></returns>
				virtual ev_void setName(_in  const EVString &name );
				
				/// <summary>
				/// 获取图层描述信息
				/// </summary>
				/// <returns>图层描述</returns>
				virtual EVString getDescription() const;

				/// <summary>
				/// 设置图层描述信息
				/// </summary>
				/// <param name="value">图层描述</param>
				/// <returns></returns>
				virtual ev_void setDescription(_in const EVString& value);

				/// <summary>
				/// 是否可编辑
				/// </summary>
				/// <returns>false</returns>
				virtual ev_bool canEdit() const;

				/// <summary>
				/// 是否正在编辑
				/// </summary>
				/// <returns>false</returns>
				virtual ev_bool isEditing() const;

				/// <summary>
				/// 设置编辑
				/// </summary>
				/// <param name="editing">是否编辑</param>
				/// <returns></returns>
				virtual ev_void setEditing(_in ev_bool editing);

				/// <summary>
				/// 获取是否可见
				/// </summary>
				/// <returns>true表示可见</returns>
				virtual ev_bool isVisible() const;

				/// <summary>
				/// 设置是否可见
				/// </summary>
				/// <param name="visible">true表示可见</param>
				/// <returns></returns>
				virtual ev_void setVisible(_in ev_bool visible);

				/// <summary>
				/// 获取是否可用
				/// </summary>
				/// <returns>true表示可用</returns>
				virtual ev_bool isValid() const;

				/// <summary>
				/// 获取是否可选
				/// </summary>
				/// <returns>true表示可选</returns>
				virtual ev_bool isSelected() const;

				/// <summary>
				/// 设置是否可选
				/// </summary>
				/// <param name="selected">true表示可选</param>
				/// <returns></returns>
				virtual ev_void setSelected(_in ev_bool selected);

				/// <summary>
				/// 获取是否忽略比例尺
				/// </summary>
				/// <returns>true表示忽略比例尺</returns>
				virtual ev_bool ignoreScale() const;

				/// <summary>
				/// 设置是否忽略比例尺
				/// </summary>
				/// <param name="bIgnore">true表示忽略比例尺</param>
				/// <returns></returns>
				virtual ev_void setIgnoreScale( _in ev_bool bIgnore );

				/// <summary>
				/// 获取最大显示比例尺
				/// </summary>
				/// <returns>最大显示比例尺分母</returns>
				virtual ev_real64 getDisplayMaxScale() const;

				/// <summary>
				/// 设置最大显示比例尺
				/// </summary>
				/// <param name="scale">最大显示比例尺分母</param>
				/// <returns></returns>
				virtual ev_void setDisplayMaxScale(_in ev_real64 scale);

				/// <summary>
				/// 获取最小显示比例尺
				/// </summary>
				/// <returns>最小显示比例尺分母</returns>
				virtual ev_real64 getDisplayMinScale() const;

				/// <summary>
				/// 设置最小显示比例尺
				/// </summary>
				/// <param name="scale">最小显示比例尺分母</param>
				/// <returns></returns>
				virtual ev_void setDisplayMinScale(_in ev_real64 scale);

				/// <summary>
				/// 克隆
				/// </summary>
				/// <returns>克隆对象指针</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer * clone() const;
				
				/// <summary>
				/// 获取空间参考信息
				/// </summary>
				/// <returns>空间参考对象指针，不需释放</returns>
				virtual EarthView::World::Spatial::Geometry::ISpatialReference *getSpatialReference() const;

				/// <summary>
				/// 设置空间参考
				/// </summary>
				/// <param name="sr">空间参考对象</param>
				/// <returns></returns>
				virtual ev_void setSpatialReference( _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr );

				/// <summary>
				/// 获取包围盒信息
				/// </summary>
				/// <returns>包围盒对象指针，不需释放</returns>
				virtual const EarthView::World::Spatial::Geometry::IEnvelope * getExtent() const;

				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="display">渲染设备参数</param>
				/// <param name="type">渲染类型</param>
				/// <returns>成功返回true</returns>
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display,_in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type);
				
				/// <summary>
				/// 将当前图层生成xml描述
				/// </summary>
				/// <returns>xml</returns>
				virtual EVString toXML() const;

				/// <summary>
				/// 从EarthView::World::Core::CXmlElement中含有的信息还原图层
				/// </summary>
				/// <param name="element">xml要素节点</param>
				/// <returns></returns>
				virtual ev_void fromXmlElement( _in EarthView::World::Core::CXmlElement& element);

				/// <summary>
				/// 获取当前图层的xml结点描述
				/// </summary>
				/// <returns>当前图层描述的EarthView::World::Core::CXmlElement对象</returns>
				virtual EarthView::World::Core::CXmlElement toXmlElement() const;

				//
				//virtual const IRenderer* getRender() const;
				//
				//virtual ev_void setRender(_in const IRenderer* renderer);

				//virtual ev_void setDataset(_in const EarthView::World::Spatial::GeoDataset::IDataset* dataset); 
				// <summary>
                // 获取显示投影
                // </summary>
                // <returns>投影类型</returns>
				//virtual const EVString getDisplaySRS() const;
				
				//virtual ev_void setDisplaySRS(_in const);
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWebLayer();
			protected:
				///构造函数
				CWebLayer();
				CWebLayer(_in const CWebLayer& weblayer);
			ev_private:
				CWebLayer(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				///渲染引擎
				//IRenderer* mpRender;
				///渲染投影方式
				//EVString mstrSRS;
				EarthView::World::Spatial::Geometry::ISpatialReference* mpSRS;

				EarthView::World::Spatial::GeoDataset::IDataset* mpDataset;

				ev_bool mbVisible;
				ev_bool mbSelectable;

				EarthView::World::Spatial::Atlas::EVLayerType mnLayerType;

				ev_bool	mbIgnoreScale;
				ev_real64 mdfMaxDisplayScale;
				ev_real64 mdfMinDisplayScale;

				EVString mstrLayerName;
				EVString mstrDescription;

				friend class CWebLayerFactory;
			};

			/// <summary>
            /// 网络图层类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CWebLayerFactory
				:public EarthView::World::Spatial::Atlas::ILayerFactory
			{
			protected:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CWebLayerFactory(){}
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CWebLayerFactory(){}
			ev_private:
				CWebLayerFactory(_in EarthView::World::Core::CNameValuePairList* pList);	
            public:
				/// <summary>
                /// 获取图层类型
                /// </summary>
                /// <returns>图层类型</returns>
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType()const;

				/// <summary>
                /// 从xml还原图层
                /// </summary>
				/// <param name="strXml">xml描述</param>
                /// <returns>图层对象指针</returns>
				virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(const EVString& strXml);
				
				/// <summary>
                /// 从xml结点要素还原图层对象
                /// </summary>
				/// <param name="element">xml结点对象</param>
                /// <returns>图层对象指针</returns>
                virtual _extfree EarthView::World::Spatial::Atlas::ILayer* createInstance(EarthView::World::Core::CXmlElement& element);
				
				/// <summary>
                /// 销毁图层对象
                /// </summary>
				/// <param name="layer">要销毁的图层</param>
                /// <returns></returns>
				virtual ev_bool destroyInstance(EarthView::World::Spatial::Atlas::ILayer* layer);
			protected:
				EarthView::World::Spatial::Atlas::EVLayerType mnLayerType;
			};
		}
	}
}
#endif


