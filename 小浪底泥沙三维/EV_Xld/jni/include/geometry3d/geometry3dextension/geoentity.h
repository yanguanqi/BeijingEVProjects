#ifndef CGEOENTITY_H
#define CGEOENTITY_H

#include <core/memoryallocatedobject.h>
#include <core/name_value_pair.h>
#include <graphic/movableobject.h>
#include <graphic/framelistener.h>
#include <mathengine/axisalignedbox.h>
#include "geometry3d/geometry3d_config.h"

namespace EarthView{
	namespace World{

		namespace Graphic
		{
			class CSceneManager;
			class CCamera;
			class CViewport;

		}

		namespace Spatial
		{
			class CGeoObject;
		}

	}
}

namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{

			class CMultiGeometry3DExtension;
			class CMultiPoint3DExtension;
			class CMultiPolyline3DExtension;
			class CMultiPolygon3DExtension;
			class CRenderableGeometryExtensionListener;

			/// <summary>				
			/// 管理地理实体类
			/// </summary>
			class EV_GEOMETRY3D_DLL CGeoEntity : public EarthView::World::Graphic::CMovableObject
			{               

			private:
				friend class CGeoObjectListener;
				friend class CMultiGeometry3DExtension;
				friend class CMultiPoint3DExtension;
				friend class CMultiPolyline3DExtension;
				friend class CMultiPolygon3DExtension;
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGeoEntity();
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGeoEntity(EarthView::World::Graphic::CSceneManager* ref_sceneManager);
				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CGeoEntity();
			ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoEntity(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// 获得局部坐标系包围盒
				/// </summary>
				/// <param name=""></param>
				/// <returns>中轴盒</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getBoundingBox() const;
				/// 获得局部坐标系包围球体半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>半径</returns>
				virtual Real getBoundingRadius() const;
				/// 获得世界坐标系包围盒半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>半径</returns>
				virtual const EarthView::World::Spatial::Math::CAxisAlignedBox &getWorldBoundingBox( ) const;
				/// 获得世界坐标系包围球体半径
				/// </summary>
				/// <param name=""></param>
				/// <returns>半径</returns>
				virtual const EarthView::World::Spatial::Math::CSphere &getWorldBoundingSphere() const;
				/// <summary>
				/// 更新渲染队列
				/// </summary>
				/// <param name="queue">渲染队列</param>
				/// <returns></returns>
				virtual void _updateRenderQueue( EarthView::World::Graphic::CRenderQueue *queue);
				/// <summary>
				/// 获知是否启用阴影投射
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_bool getCastsShadows() const;
				/// <summary>
				/// 唤醒移动对象的摄像机线程用于下一次渲染操作
				/// 内部方法
				/// </summary>
				/// <param name="cam">摄像机</param>
				/// <returns></returns>
				virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera *cam);
				/// <summary>
				/// 访问可渲染对象
				/// 允许迭代器遍历渲染实例，当被询问时，移动对象将添加到渲染队列
				/// </summary>
				/// <param name="visitor"></param>
				/// <param name="debugRenderables">为false，只渲染正常可渲染对象；为true，调试渲染对象也将被包括</param>
				/// <returns></returns>
				virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor, ev_bool debugRenderables /*= false*/ );
				virtual void visitRenderables( EarthView::World::Graphic::CRenderable::CVisitor *visitor );

				/// <summary>
				/// 设置是否可见               
				/// </summary>
				/// <param name="visible">是否可见</param>
				/// <returns></returns>
				virtual void setVisible(ev_bool visible);

				/// <summary>
				/// 设置该对象可渲染的距离上限
				/// </summary>
				/// <param name="dist">默认为0</param>
				/// <returns></returns>
				virtual void setRenderingMaxDistance(Real dist);
				/// <summary>
				/// 设置该对象可渲染的距离下限
				/// </summary>
				/// <param name="dist">默认为0</param>
				/// <returns></returns>
				virtual void setRenderingMinDistance(Real dist);

				/// <summary>
				/// 设置渲染队列组信息
				/// </summary>
				/// <param name="queueID">队列ID号</param>
				/// <returns></returns>
				virtual void setRenderQueueGroup(ev_uint8 queueID);
				/// <summary>
				/// 设置渲染队列组信息和队列优先级
				/// </summary>
				/// <param name="queueID">队列ID号</param>
				/// <param name="priority">优先级</param>
				/// <returns></returns>
				virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority);

				/// <summary>
				/// 获得movable类型
				/// </summary>
				/// <param name=""></param>
				/// <returns>可移动的类型</returns>
				virtual EVString getMovableType() const;			

				/// <summary>
				/// 射线选择
				/// </summary>
				/// <param name="ray">射线对象</param>
				/// <param name="viewport">所在视口</param>
				/// <param name="prepareToRenderSelection">是否准备渲染选中的对象</param>				
				/// <param name="objIndex">选中的对象序号</param>
				/// <param name="point">交点</param>
				/// <returns>true:与射线相交;false:不相交</returns>
				virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray,const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, _out ev_int32& objIndex,_out EarthView::World::Spatial::Math::CVector3& point);
				/// <summary>
				/// 绘制选择对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void renderSelection();
				/// <summary>
				/// 清除选择对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void clearSelection();
				/// <summary>
				/// 设置选中的对象				
				/// <param name="objIndics">选中的对象集合</param>				
				/// <returns></returns>
				virtual ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics);				

				/// <summary>
				/// 获得选中的对象				
				/// <param name=""></param>				
				/// <returns>选中的对象集合</returns>
				virtual EarthView::World::Core::IntVector getSelected()const;	
				/// <summary>
				/// 设置选择的颜色
				/// </summary>
				/// <param name="colour">颜色</param>
				/// <returns></returns>
				virtual ev_void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour);

				/// <summary>
				/// 追加地理对象				
				/// <param name="geo">地理对象</param>				
				/// <returns>是否成功</returns>
				ev_bool addGeoObject(EarthView::World::Spatial::CGeoObject* ref_geo);
				/// <summary>
				/// 移除地理对象				
				/// <param name="pos">索引</param>				
				/// <returns>是否成功</returns>
				ev_bool removeGeoObject(ev_uint32 pos);
				/// <summary>
				/// 移除地理对象				
				/// <param name="geo">地理对象</param>				
				/// <returns>是否成功</returns>
				ev_bool removeGeoObject(EarthView::World::Spatial::CGeoObject* geo);
				/// <summary>
				/// 返回地理对象数量				
				/// <param name=""></param>				
				/// <returns>地理对象数量</returns>
				ev_uint32 getGeoObjectCount();
				/// <summary>
				/// 是否存在地理对象				
				/// <param name="geo">地理对象</param>				
				/// <returns>是否存在</returns>
				ev_bool existGeoObject( EarthView::World::Spatial::CGeoObject* geo);
				/// <summary>
				/// 获取地理对象				
				/// <param name="pos">索引</param>				
				/// <returns>地理对象</returns>
				EarthView::World::Spatial::CGeoObject* getGeoObject(ev_uint32 pos) const;
				/// <summary>
				/// 插入地理对象				
				/// <param name="geo">地理对象</param>
				/// <param name="pos">索引位置</param>	
				/// <returns>是否成功</returns>
				ev_bool insertGeoObject( EarthView::World::Spatial::CGeoObject* ref_geo,ev_uint32 pos);
				/// <summary>
				/// 替换地理对象				
				/// <param name="geo">地理对象</param>
				/// <param name="pos">索引位置</param>	
				/// <returns>是否成功</returns>
				ev_bool setGeoObject( EarthView::World::Spatial::CGeoObject* ref_geo,ev_uint32 pos);
				/// <summary>
				/// 清除地理对象				
				/// <param name=""></param>
				/// <returns>是否成功</returns>
				ev_bool clearGeoObjects();					

				/// <summary>
				/// 获取movableobject数量				
				/// <param name=""></param>
				/// <returns>movableobject数量</returns>
				ev_uint32 getMovableObjectsCount();
				/// <summary>
				/// 是否存在movableobject				
				/// <param name="mo">movableobject</param>
				/// <returns>是否存在</returns>
				ev_bool existMovableObject(EarthView::World::Graphic::CMovableObject* mo);
				/// <summary>
				/// 获取movableobject				
				/// <param name="pos">索引位置</param>
				/// <returns>movableobject</returns>
				EarthView::World::Graphic::CMovableObject* getMovableObject(ev_uint32 pos) const;

				/// <summary>
				/// 获取renderablelistener
				/// </summary>
				/// <param name=""></param>
				/// <returns>renderablelistener</returns>
				void setRenderableListener(CRenderableGeometryExtensionListener* listener);

				/// <summary>
				/// 闪烁
				/// <param name="objIndics">选中的对象集合,集合为空表示全部闪烁</param>
				/// <param name="color">高亮颜色</param>
				/// <param name="hightLight_ms">高亮时长(单位：毫秒)</param>
				/// <param name="normally_ms">非高亮时长(单位：毫秒)</param>
				/// <param name="flashCount">闪烁次数</param>
				/// </summary>
				/// <returns></returns>
				virtual void flash(const EarthView::World::Core::IntVector& objIndics,const EarthView::World::Graphic::CColourValue& color, ev_uint32 hightLight_ms, ev_uint32 normally_ms,ev_uint32 flashCount);
				/// <summary>
				/// 结束闪烁
				/// </summary>
				/// <returns></returns>
				void endFlash();
          protected:
				class CGeoEntityFlashFrameListener : public EarthView::World::Graphic::CFrameListener
				{
				private:
					CGeoEntity* mpParent;
					EarthView::World::Core::CTime mLastTime;

					ev_uint32 mHightLight_ms;
					ev_uint32 mNormally_ms;

					ev_uint32 mRequestFlashCount;

					ev_uint32 mCurrentFlashCount;
					ev_bool mbHeighting;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CGeoEntityFlashFrameListener(CGeoEntity* pParent, ev_uint32 hightLight_ms, ev_uint32 normally_ms, ev_uint32 flashCount);

					/// <summary>
					/// 帧渲染之后被调用
					/// </summary>
					/// <param name="evt"></param>
					/// <returns></returns>
					ev_bool frameEnded(const EarthView::World::Graphic::FrameEvent &evt);
				};

				void beginFlash(const EarthView::World::Graphic::CColourValue& color);
				void startFlash();
				void stopFlash();
				
				CGeoEntityFlashFrameListener* mFrameListener;

				friend class CGeoEntityFlashFrameListener;

				EarthView::World::Core::IntVector mFlashIndices;
				
				EarthView::World::Graphic::CBillboardSet* mFlashBBS;
			protected:
				friend class CMultiPoint3DExtension;				
				ev_bool setSelectedPointEx(list<EarthView::World::Graphic::CBillboard*>& billbords);
				void setSelectedIndics(const EarthView::World::Core::IntVector& objIndics);
			protected:
				ev_bool addMovableObject( EarthView::World::Graphic::CMovableObject* mo);
				ev_bool clearMovableObjects();
				ev_void destroySelectedMovableObjects();

				/// <summary>
				/// 绘制选择对象
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void renderSelectionImpl(EarthView::World::Core::IntVector& selectedIndices);

			protected:
				typedef vector<EarthView::World::Spatial::CGeoObject*> GeoObjectVector;
				typedef vector<EarthView::World::Graphic::CMovableObject*> MovableVector;
				
				GeoObjectVector mGeoObjects;				
				MovableVector mMovables;				

				mutable EarthView::World::Spatial::Math::CAxisAlignedBox mAABB;
				EarthView::World::Graphic::CSceneManager* mSceneManager;
				
				//关于选择的对象
				MovableVector mSelectedMovables;
				
				EarthView::World::Core::IntVector mSelected;

				EarthView::World::Graphic::CColourValue mSelectionColour;

				CRenderableGeometryExtensionListener* mRenderableListener;
			};

			/// <summary>
			/// 创建广告板设置实例类
			/// 定义实例的创建及相关操作
			/// </summary>
			class EV_GEOMETRY3D_DLL CGeoEntityFactory : public EarthView::World::Graphic::CMovableObjectFactory
			{
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
				CGeoEntityFactory(_in EarthView::World::Core::CNameValuePairList *pList);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CGeoEntityFactory();

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~CGeoEntityFactory();

				static EVString FACTORY_TYPE_NAME;
				/// <summary>
				/// 获得类型
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getType() const;
				/// <summary>
				/// 创建实例
				/// 为对象创建新的实例
				/// </summary>
				/// <param name=""></param>
				virtual EarthView::World::Graphic::CMovableObject *createInstance();
				/// <summary>
				/// 销毁实例
				/// </summary>
				/// <param name="obj">实例</param>
				/// <returns></returns>
				void destroyInstance(  EarthView::World::Graphic::CMovableObject *obj);

			};
			
			/** @} */
		}
	}
}
#endif
