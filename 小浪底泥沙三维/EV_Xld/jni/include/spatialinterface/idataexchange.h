#ifndef	 EARTHVIEW_WORLD_SPATIAL_CONVERTOR_IDATAEXCHANGE_H
#define  EARTHVIEW_WORLD_SPATIAL_CONVERTOR_IDATAEXCHANGE_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 数据交换类型
				/// </summary>
				enum  EVDataExchangeType
				{
					/// <summary>
					/// 未知
					/// </summary>
					DataExchangeType_Unknown			=	0,
					/// <summary>
					/// 矢量数据交换
					/// </summary>
					DataExchangeType_Spatial2D			=	1,
					/// <summary>
					/// 模型等三维数据交换
					/// </summary>
					DataExchangeType_Spatial3D			=	2
				};
				/// <summary>
				/// 数据交换监听类接口
				/// </summary>
				class IDataExchangeListener;

				/// <summary>
				/// 数据交换类接口
				/// </summary>
				class EV_INTERFACE_DLL IDataExchange:
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 获取数据转换类型
					/// </summary>
					/// <returns>数据转换类型</returns>
					virtual EarthView::World::Spatial::Convertor::EVDataExchangeType getType() const;

					/// <summary>
					/// 进行数据转换
					/// </summary>
					/// <returns>数据转换结果，0 表示OK</returns>
					virtual ev_int32 exchange();

					/// <summary>
					/// 设置监听（内部保存引用）
					/// </summary>
					/// <param name="listener">监听对象，程序结束需外部删除</param>
					/// <returns></returns>
					virtual ev_void setListener(_in EarthView::World::Spatial::Convertor::IDataExchangeListener* ref_listener);

					/// <summary>
					/// 获取监听对象
					/// </summary>
					/// <returns>获取监听对象指针，不需删除</returns>
					virtual const EarthView::World::Spatial::Convertor::IDataExchangeListener* getListener() const;

					//设置源文件路径，不含文件后缀
					//virtual ev_void setSrcSource(EVString value);
					//设置源文件格式，如果输入为文件夹，则传入空值
					//virtual ev_void setSrcFormat(EVString value);
					//virtual const EVString getSrcSource() const;
					//virtual const EVString getSrcFormat() const;

					//virtual ev_void setDestSource(EVString value);
					//virtual ev_void setDestFormat(EVString value);
					//virtual const EVString getDestSource() const;
					//virtual const EVString getDestFormat() const;

				/*	virtual EVString getSrcName() const;
					virtual EVString getDestname() const;*/

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~IDataExchange();
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IDataExchange();

					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <returns></returns>
					IDataExchange(IDataExchange& dataExchange);
				ev_private:
					IDataExchange(_in EarthView::World::Core::CNameValuePairList* pList );
				};
			}
		}
	}
}
#endif


