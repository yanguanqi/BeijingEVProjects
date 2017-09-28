#ifndef __RENDERABLEFONTINSTANCED_H__
#define __RENDERABLEFONTINSTANCED_H__

#include "graphic/graphic_config.h"
#include "graphic/texturetextstyle.h"
#include "graphic/instanceobjectcreator.h"

namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class CMeshPtr;
			class CFontEventObject;
			class CInstanceManagerListenerFont;
			class CTextureMovableText;
			class CRenderableFontInstanceObjectCreatorManager;
			/// <summary>
			/// 基于instance的字体可渲染对象
			/// </summary>
			class EV_GRAPHIC_DLL CRenderableFontInstanced : public EarthView::World::Core::CBaseObject
			{
				friend class CTextureMovableText;
				friend class CRenderableFontInstanceObjectCreatorManager;
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				CRenderableFontInstanced(EarthView::World::Core::CNameValuePairList* pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CRenderableFontInstanced(CTextureMovableText *parent, const EarthView::World::Core::CUnicodeString& wstr,const CTextureTextStyle* ref_style,CSceneManager *ref_mgr);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CRenderableFontInstanced();

				/// <summary>
				/// 设置文字自动换行宽度
				/// </summary>
				/// <param name="width">以像素为单位的宽度值</param>
				/// <returns></returns>
				ev_void setAutoLineFeed( _in const ev_uint32 width );
				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				void setVisible(ev_bool visible);
				/// <summary>
				/// 设置渲染队列组信息
				/// </summary>
				/// <param name="queueID">队列ID号</param>
				/// <returns></returns>
				void setRenderQueueGroup(ev_uint8 queueID);
				/// <summary>
				/// 设置渲染队列组信息和队列优先级
				/// </summary>
				/// <param name="queueID">队列ID号</param>
				/// <param name="priority">优先级</param>
				/// <returns></returns>
				void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);
				/// <summary>
				/// 绑定世界变换矩阵
				/// </summary>
				/// <returns></returns>
				void bindWorldMaxtrix(const EarthView::World::Spatial::Math::CMatrix4* mx4);
				/// <summary>
				/// 设置是否开启深度测度
				/// </summary>
				/// <param name="enable"></param>
				/// <returns></returns>
				virtual ev_void setDepthCheckEnabled(_in ev_bool enable);
				/// <summary>
				/// 获取是否开启深度测度
				/// </summary>
				/// <returns></returns>
				ev_bool getDepthCheckEnabled();
				/// <summary>
				/// 设置渲染的文本字符串
				/// </summary>
				/// <returns></returns>
				void setText(const EarthView::World::Core::CUnicodeString& wstr);
				/// <summary>
				/// 获取渲染的文本字符串
				/// </summary>
				/// <returns></returns>
				const EarthView::World::Core::CUnicodeString& getText() const;
				/// <summary>
				/// 设置文本风格
				/// </summary>
				/// <param name="newStyle">新的文本风格</param>
				/// <returns></returns>
				void setTextStyle(CTextureTextStyle* newStyle);
				/// <summary>
				/// 更新渲染状态
				/// </summary>
				void updateRenderStatus(ev_bool geometryOutOfDate, ev_bool colorOutOfDate);
				/// <summary>
				/// 执行renderable自身的所有需要的更新
				/// </summary>
				/// <param name=""></param>
				void refresh();
				/// <summary>
				/// 强制执行执行renderable自身的所有需要的更新
				/// </summary>
				/// <param name=""></param>
				ev_bool forceRefresh();

ev_private:
				ev_void saveToInstanceObjectVecMap(CInstanceObject* pObject,EVString& meshName);
				InstanceObjectVecMap& getInstanceObjectVecMap();

			protected:
				CTextureMovableText *mParent;
				EarthView::World::Core::CUnicodeString mText;
				CTextureTextStyle* mTextStyle;
				CSceneManager* mSceneMgr;
				const EarthView::World::Spatial::Math::CMatrix4* mWorldMatrix;///世界变换矩阵
				EarthView::World::Spatial::Math::CVector3 mOffset;///局部坐标系下的偏移值,用于修正文本停靠方式				
				EarthView::World::Core::CRecursiveMutex mInstanceObjectsMutex;
				InstanceObjectVecMap mInstanceObjects;
				ev_bool mbVisible;
				ev_bool mbDepthCheckEnabled;
				ev_bool mbNeedRecreate;
				ev_bool mbNeedForceRefresh;
				ev_int32 mNeedForceRefreshMatCount;
				EarthView::World::Core::CMutex mNeedForceRefreshMutex;
				ev_uint64 mRequestId;
				ev_uint8 mRenderQueueGroupId;
				ev_uint16 mRenderQueueGroupPriority;
				ev_uint32 mAutoLineFeedWidth;

			private:
				void create(_inout EarthView::World::Spatial::Math::CVector2& pen, _inout EarthView::World::Spatial::Math::CAxisAlignedBox& aabb);
				void computeLayout(_inout EarthView::World::Spatial::Math::CVector3& layout3D,const CTextureTextStyle* style,const EarthView::World::Spatial::Math::CAxisAlignedBox& localAABB);
			};

			class EV_GRAPHIC_DLL CRenderableFontInstanceObjectCreatorManager : public EarthView::World::Core::CBaseObject
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CRenderableFontInstanceObjectCreatorManager(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CRenderableFontInstanceObjectCreatorManager();
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				virtual ~CRenderableFontInstanceObjectCreatorManager();
				/// <summary>
				/// 获取单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static CRenderableFontInstanceObjectCreatorManager* getSingleton();
				/// <summary>
				/// 销毁单例
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void destorySingleton();	
				/// <summary>
				/// 创建对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CInstanceObject* createInstanceObject(CRenderableFontInstanced* textInstance,CTextureTextStyle* textStyle,EVString& matName);
				/// <summary>
				/// 销毁对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void destroyInstanceObjects(CRenderableFontInstanced* textInstance);
				/// <summary>
				/// 添加请求
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void addRenderableFontInstancedRequest(CRenderableFontInstanced* textInstance);
				/// <summary>
				/// 中断请求
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void abortRenderableFontInstancedRequest(CRenderableFontInstanced* textInstance);

			private:
				/// <summary>
				/// 创建mesh资源
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CMeshPtr createOrRetrieveMesh(CRenderableFontInstanced* textInstance,CTextureTextStyle* textStyle,EVString& matName);

				static CRenderableFontInstanceObjectCreatorManager* mpSingleton;
				typedef map<EVString,CInstanceObjectCreator*> InstanceObjectCreatorMap;
				InstanceObjectCreatorMap mCreatorMap;
				EarthView::World::Core::CMutex mCreatorMapMutex;
				CFontEventObject* mpFontEventObject;
				friend class CFontEventObject;
				CInstanceManagerListenerFont* mpListener;
			};


		}
	}
}
#endif

