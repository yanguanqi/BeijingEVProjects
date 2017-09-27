#ifndef _DBRASTEREXCHANGEPARAM_H_
#define _DBRASTEREXCHANGEPARAM_H_

#include "spatial2ddataexchange/spatial2ddataexchangeexports.h"
#include "spatial2ddataexchange/dataexchange.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Convertor{
				/// <summary>
				/// 栅格数据交换参数类
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CDBRasterExchangeParam
					:public EarthView::World::Spatial::Convertor::CDataExchangeParam
				{
				public:
					///<summary>
					///析构函数
					///<summary>
					~CDBRasterExchangeParam();
					///<summary>
					///默认构造函数
					///<summary>
					 CDBRasterExchangeParam(); 
					 /// <summary>
					 /// 是否创建金字塔
					 /// </summary>
					 /// <returns></returns>
					 bool isBuildOverView();
					 /// <summary>
					 /// 设置是否创建金字塔
					 /// </summary>
					 /// <returns></returns>
					 void setBuildOverView(_in bool bValue);
					 /// <summary>
					 /// 获取最高金字塔等级
					 /// </summary>
					 /// <returns></returns>
					 int getMaxOverViewLevel();
					 /// <summary>
					 /// 设置最高金字塔等级
					 /// </summary>
					 /// <returns></returns>
					 void setMaxOverViewLevel(_in int nValue);
					 /// <summary>
					 /// 获取压缩方式
					 /// </summary>
					 /// <returns></returns>
					 int getCompressType();
					 /// <summary>
					 /// 设置压缩方式
					 /// </summary>
					 /// <returns></returns>
					 void setCompressType(_in int nValue);
					 /// <summary>
					 /// 获取分块大小
					 /// </summary>
					 /// <returns></returns>
					 int getBlockSize();
					 /// <summary>
					 /// 设置分块大小
					 /// </summary>
					 /// <returns></returns>
					 void setBlockSize(_in int nValue);
             ev_private:
					 CDBRasterExchangeParam(_in EarthView::World::Core::CNameValuePairList* pList );
				private:
					ev_bool mbBuildOverView;
					ev_int32 mnMaxOverViewLevel;
					ev_int32 mnCompressType;
					ev_int32 mnBlockSize;
				};
			}
		}
	}
}
#endif