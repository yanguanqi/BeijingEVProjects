#ifndef EARTHVIEW_WORLD_SPATIAL3D_EFFECTOBJECT_H
#define EARTHVIEW_WORLD_SPATIAL3D_EFFECTOBJECT_H


#include "graphic/scenenode.h"
#include "spatial3dengineconfig.h"
#include "geometry3d/visibleobject.h"
#include "spatialinterface/altitudemode.h"
#include "graphic/node.h"

namespace EarthView{
	namespace World{
		namespace Spatial3D{
			namespace Dataset
			{
				class CEffectFeature; 
			}
			namespace EffectManager{

				class CEffect;


				/// <summary>
				/// 特效对象类
				/// </summary>
				/// <returns></returns>
				class  EV_Spatial3DEngine_DLL CEffectObject : public EarthView::World::Geometry3D::CVisibleObject
				{

ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectObject(_in EarthView::World::Core::CNameValuePairList* pList);			

				public:

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="ref_f">要素指针</param>
					/// <param name="ref_layer">三维图层指针</param>
					/// <returns></returns>
					CEffectObject(EarthView::World::Spatial::GeoDataset::IFeature* ref_f, EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="id">要素id</param>
					/// <param name="ref_layer">三维图层指针</param>
					/// <returns></returns>
					CEffectObject(ev_uint32 id, EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEffectObject();
					/// <summary>
					/// 得到特效
					/// </summary>
					/// <returns>返回特效指针</returns>
					EarthView::World::Spatial3D::EffectManager::CEffect* getEffect();

					/// <summary>
					/// 加载资源
					/// </summary>
					/// <returns>加载成功返回true否则返回false</returns>
					ev_bool load();

					/// <summary>
					/// 卸载资源
					/// </summary>
					/// <returns>卸载成功返回true否则返回false</returns>
					ev_bool unload();

					/// <summary>
					/// 判断资源是否被加载
					/// </summary>
					/// <returns>已加载返回true否则返回false</returns>
					ev_bool isLoaded();

					/// <summary>
					/// 将特效绑定到渲染节点
					/// <param name="n">被挂接的节点</param>
					/// </summary>
					/// <returns>true成功，false失败</returns>
					ev_bool attachToNode(EarthView::World::Graphic::CNode* n);

					/// <summary>
					/// 从节点上卸载模型
					/// </summary>
					/// <returns>成功返回被挂接的父节点，失败返回NULL</returns>
					EarthView::World::Graphic::CNode* detachFromNode();

					/// <summary>
					/// 设置特效位置
					/// </summary>
					/// <param name="pos">特效位置</param>
					/// <param name="scale">缩放比例</param>
					/// <param name="qua">四元数</param>
					/// <returns></returns>
					void setPosition(const EarthView::World::Spatial::Math::CVector3& pos, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 得到特效位置
					/// </summary>
					/// <param name="pos">特效位置</param>
					/// <param name="scale">缩放比例</param>
					/// <param name="qua">四元数</param>
					/// <returns></returns>
					void getPosition(_out EarthView::World::Spatial::Math::CVector3& pos, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 设置特效位置
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高度</param>
					/// <param name="scale">缩放比例</param>
					/// <param name="qua">四元数</param>
					/// <returns></returns>
					virtual void setPosition(ev_real64 latitude, ev_real64 longitude, ev_real64 altitude, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 得到特效位置
					/// </summary>
					/// <param name="latitude">纬度</param>
					/// <param name="longitude">经度</param>
					/// <param name="altitude">高度</param>
					/// <param name="scale">缩放比例</param>
					/// <param name="qua">四元数</param>
					/// <returns></returns>
					virtual void getPosition(_out ev_real64& latitude, _out ev_real64& longitude, _out ev_real64& altitude, _out EarthView::World::Spatial::Math::CVector3& scale, _out EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="altMode">高度模式</param>
					/// <param name="altValue">高度值</param>
					/// <returns></returns>
					void setAlt(EarthView::World::Spatial::Utility::EVAltitudeMode altMode,ev_real64 altValue);

					/// <summary>
					/// 获取高度
					/// </summary>
					/// <param name="altMode">高度模式</param>
					/// <param name="altValue">高度值</param>
					/// <returns></returns>
					void getAlt(_out EarthView::World::Spatial::Utility::EVAltitudeMode& altMode,_out ev_real64& altValue);

					/// <summary>
					/// 得到要素指针
					/// </summary>
					/// <returns>返回要素指针</returns>
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature();

					/// <summary>
					/// 得到三维图层指针
					/// </summary>
					/// <returns>返回三维图层指针</returns>
					virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer();

					/// <summary>
					/// 得到要素ID
					/// </summary>
					/// <returns>返回要素ID</returns>
					virtual ev_uint32 getID();

					/// <summary>
					/// 得到特效的平行轴边框盒
					/// </summary>
					/// <returns>返回特效的平行轴边框盒</returns>
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getBound();

					/// <summary>
					/// 设置位置
					/// </summary>
					/// <param name="pos">位置坐标</param>
					/// <returns></returns>
					virtual void setPos(const EarthView::World::Spatial::Math::CVector3& pos);

					/// <summary>
					/// 得到位置
					/// </summary>
					/// <returns>位置坐标</returns>
					virtual EarthView::World::Spatial::Math::CVector3 getPos();

					/// <summary>
					/// 设置缩放
					/// </summary>
					/// <param name="pos">缩放值</param>
					/// <returns></returns>
					virtual void setScale(const EarthView::World::Spatial::Math::CVector3& scale);


					/// <summary>
					/// 得到缩放值
					/// </summary>
					/// <returns>得到缩放值</returns>
					virtual EarthView::World::Spatial::Math::CVector3 getScale();

					/// <summary>
					/// 设置四元数
					/// </summary>
					/// <param name="qua">四元数</param>
					/// <returns></returns>
					virtual void setQua(const EarthView::World::Spatial::Math::CQuaternion& qua);

					/// <summary>
					/// 得到四元数
					/// </summary>
					/// <returns>得到四元数</returns>
					virtual EarthView::World::Spatial::Math::CQuaternion getQua();

					/// <summary>
					/// 设置是否可见
					/// </summary>
					/// <param name="isVisiable">是否可见</param>					
					/// <returns></returns>
					virtual void setVisiable(ev_bool isVisiable);

					/// <summary>
					/// 得到是否可见
					/// </summary>
					/// <returns>返回是否可见</returns>
					virtual ev_bool getVisiable();

					/// <summary>
					/// 挂载特效
					/// </summary>
					/// <returns></returns>
					virtual ev_bool attachObject();

					/// <summary>
					/// 反挂载特效
					/// </summary>
					/// <returns></returns>
					virtual ev_bool detachObject();

					/// <summary>
					/// 判断是否挂载
					/// </summary>
					/// <returns>返回是否挂载</returns>
					virtual ev_bool isAttached();

					/// <summary>
					/// 设置世界变换矩阵
					/// </summary>
					/// <returns></returns>
					void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& matrix);

					/// <summary>
					/// 得到世界变换矩阵
					/// </summary>
					/// <param name="matrix">变换矩阵</param>
					/// <returns>世界变换矩阵</returns>
					EarthView::World::Spatial::Math::CMatrix4 getMatrix();
				private:
					EarthView::World::Spatial3D::Atlas::IGlobeLayer* mpGlobeLayer;
					EarthView::World::Spatial3D::Dataset::CEffectFeature* mpFeature;
					ev_uint32 mEffectId;
					EarthView::World::Spatial3D::EffectManager::CEffect* mpEffect;
					EarthView::World::Spatial::Math::CVector3 mPos;
					EarthView::World::Spatial::Math::CVector3 mScale;
					EarthView::World::Spatial::Math::CQuaternion mQua;
					EarthView::World::Spatial::Utility::EVAltitudeMode mAltMode;
					ev_real64 mAltValue;
					ev_bool mIsVisiable;
					ev_bool mIsAttach;

				};


				/// <summary>
				/// 特效对象容器类
				/// </summary>
				class EV_Spatial3DEngine_DLL CEffectObjectVector:public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CEffectObjectVector(_in EarthView::World::Core::CNameValuePairList *pList);

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CEffectObjectVector();

ev_private:
					typedef vector<EarthView::World::Spatial3D::EffectManager::CEffectObject *> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					///RESERVE_CONTAINER_FUNCTION(mList); //保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);

				private:
					InternalList mList;
				public:
					/// <summary>
					/// 为当前容器添加一个特效对象
					/// </summary>
					/// <param name="t">特效对象</param>
					/// <returns></returns>
					void push_back(EarthView::World::Spatial3D::EffectManager::CEffectObject *const &t);

					/// <summary>
					/// 删除最后一个数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();

					/// <summary>
					/// 返回容器中第一个元素的引用
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效对象的引用</returns>
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& front();

					/// <summary>
					/// 传回容器中最后一个特效对象,不检查这个特效对象是否存在
					/// </summary>
					/// <param name=""></param>
					/// <returns>特效对象的引用</returns>
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& back();

					/// <summary>
					/// 在pos位置插入一个特效对象
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">特效对象</param>
					/// <returns></returns>
					void insert(ev_uint32 pos, EarthView::World::Spatial3D::EffectManager::CEffectObject *const &t);

					/// <summary>
					/// 删除pos位置的数据
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					void remove(ev_size_t pos);

					/// <summary>
					/// 判断容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>
					ev_bool empty() const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效对象的引用 </returns>
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& operator[](ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效对象的引用 </returns>
					EarthView::World::Spatial3D::EffectManager::CEffectObject *const &operator[](ev_size_t n) const;

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效对象的引用 </returns>
					EarthView::World::Spatial3D::EffectManager::CEffectObject*& at(ev_size_t n);

					/// <summary>
					/// 返回容器中指定位置的一个引用
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>指定位置的一个特效对象的引用 </returns>
					EarthView::World::Spatial3D::EffectManager::CEffectObject *const &at(ev_size_t n) const;

					/// <summary>
					/// 返回容器中数据个数
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据个数 </returns>
					ev_size_t size() const;

					/// <summary>
					/// 重新指定容器的容量
					/// </summary>
					/// <param name="newSize">容量大小</param>
					/// <returns></returns>
					void resize(ev_size_t newSize);

					/// <summary>
					/// 设置容器预留容量
					/// </summary>
					/// <param name="count">容量大小</param>
					/// <returns></returns>
					void reserve(ev_size_t count);

					/// <summary>
					/// 移除容器中所有的数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};
				class CAsynchronousEffectListener : public EarthView::World::Geometry3D::CVisibleObjectListener
				{

				public:
					/// <summary>
					/// 通知挂接完成
					/// </summary>
					/// <returns></returns>
					void notifyAttachedToNode(EarthView::World::Geometry3D::CVisibleObject* pObj,EarthView::World::Graphic::CNode* parentNode);


					/// <summary>
					/// 移除监听器
					/// </summary>
					/// <returns></returns>
					//void notifyDestroyed(EarthView::World::Geometry3D::CVisibleObject* pObj);

				};
			}//end namespace
		}
	}
}
#endif
