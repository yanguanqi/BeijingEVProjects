#ifndef EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IACCESSOR_H
#define EARTHVIEW_WORLD_SPATIAL_ACCESSOR_IACCESSOR_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Accessor{

				/// <summary>
				/// 访问者类型枚举
				/// </summary>
				enum EVAccessorType
				{
					/// <summary>
					/// 未知类型
					/// </summary>
					AT_UNKNOWN              = 0,
					/// <summary>
					/// 文件类型
					/// </summary>
					AT_FILE                 = 1,
					/// <summary>
					/// 数据库类型
					/// </summary>
					AT_DATABASE             = 2,
					/// <summary>
					/// 网络类型
					/// </summary>
					AT_WEB                  = 3
				};

				/// <summary>
				/// 访问者类，是所有访问者类的基类，用于数据打开和关闭操作。
				/// </summary>
				class EV_INTERFACE_DLL IDataAccessor :
					public EarthView::World::Core::CAllocatedObject
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ~IDataAccessor();
				public:
					/// <summary>
					/// 获取类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>访问者类型</returns>	
					virtual EarthView::World::Spatial::Accessor::EVAccessorType getType() const;
					/// <summary>
					/// 根据连接字符串，打开相应的数据文件
					/// </summary>
					/// <param name="connectionString">连接字符串</param>
					/// <returns>成功关闭，返回true；否则，返回false</returns>	
					virtual ev_bool open(_in const EVString& connectionString);
					/// <summary>
					/// 关闭打开的数据文件
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功关闭，返回true；否则，返回false</returns>	
					virtual ev_bool close();
					//--
                ev_private:
					IDataAccessor( EarthView::World::Core::CNameValuePairList *pList );
					//--
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					IDataAccessor();
				private:
					IDataAccessor(IDataAccessor & obj);
				}; // Class IDataAccessor
			} // Accessor
		} // Spatial
	} // World
} // EarthView

#endif
