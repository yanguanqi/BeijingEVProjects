#ifndef CBASEMANAGER_H
#define CBASEMANAGER_H

#include "core/stringdefines.h"
#include "core/multibytestring.h"
#include "industryengine/industrygraphic/industrygraphic_cfg.h"
#include "graphic/scenenode.h"
#include"core/memoryallocatedobject.h"
#include "core/global.h"
#include "core/classfactory.h"



namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			 /// <summary>
            /// 挂接对象基类
            /// </summary>
			class EV_INDUSTRYGRAPHIC_DLL CBaseBandingObject:public EarthView::World::Core::CBaseObject
			{

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">参数键值对表</param>
				CBaseBandingObject(EarthView::World::Core::CNameValuePairList* pList);
			public:

				 /// <summary>
                /// 构造函数
                /// </summary>
				CBaseBandingObject();
				
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">名称</param>
				CBaseBandingObject(_in const EarthView::World::Core::ev_string& name); 
				 
				/// <summary>
                /// 析构函数
                /// </summary>
				virtual ~CBaseBandingObject(); 
				 
				/// <summary>
                /// 获取是否能够交换buffer
                /// </summary>
                /// <returns>是否能够交换buffer</returns>
				virtual ev_bool getCanSwapBuffer() const ;

				/// <summary>
                /// 设置名称
                /// </summary>
                /// <param name="name">名称</param>
				virtual ev_void setName(_in const EarthView::World::Core::ev_string& name); 
				
				/// <summary>
                /// 获取名称
                /// </summary>
                /// <returns>名称</returns>
				virtual EarthView::World::Core::ev_string getName() const; 
				
				/// <summary>
                /// 设置是否需要更新
                /// </summary>
                /// <param name="needUpdate">更新状态</param>
				virtual ev_void setNeedUpdate(_in const ev_bool& needUpdate); 
				
				/// <summary>
                /// 获取是否需要更新
                /// </summary>
                /// <returns>是否需要更新</returns>
				virtual ev_bool getNeedUpdate()const; 
				
				/// <summary>
                /// 获取绑定的节点
                /// </summary>
                /// <returns>绑定的节点</returns>
				virtual EarthView::World::Graphic::CNode* getNode() const;

				/// <summary>
                /// 更新
                /// </summary>
				virtual ev_void update() ; 
			protected:
				
				/// <summary>
                /// 刷新
                /// </summary>
				virtual ev_void refresh() ;
				
				/// <summary>
                /// 交换buffer
                /// </summary>
				virtual ev_void swapBuffer() ;

				/// <summary>
                /// 设置显示状态
                /// </summary>
                /// <param name="value">是否可见</param>
				virtual ev_void setVisible(_in const ev_bool& value);
				
				/// <summary>
                /// 获取显示状态
                /// </summary>
                /// <returns>是否可见</returns>
				virtual ev_bool getVisible() const; 

				/// <summary>
                /// 创建渲染资源
                /// </summary>
				virtual ev_void build() ; 
				
				/// <summary>
                ///渲染
                /// </summary>
				virtual ev_void render() ; 

				
				/// <summary>
                /// 移除渲染
                /// </summary>
				virtual ev_void derender() ; 
			protected:
				/// <summary>
				/// 是否能够交换buffer
				/// </summary>
				ev_bool mCanSwapBuffer;

				/// <summary>
				/// 是否需要更新
				/// </summary>
				ev_bool mIsNeedUpdate;

				/// <summary>
				/// 名称
				/// </summary>
				EarthView::World::Core::ev_string mName;

				/// <summary>
				/// 显示状态
				/// </summary>
				ev_bool mVisible;

				/// <summary>
				/// 绑定的节点
				/// </summary>
				EarthView::World::Graphic::CNode* mpNode;

				friend class CPolylineFeatureManager;
			};  //end class CBaseManager

		}
	}
}

#endif

