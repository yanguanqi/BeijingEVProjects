#pragma once
#ifndef __TagPoint_H_
#define __TagPoint_H_
#include "graphic/graphic_config.h"
#include "bone.h"
#include <mathengine/matrix4.h>

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            /// <summary>
            /// 骨骼挂载点类
            /// 管理骨骼挂载点
            /// </summary>
            class EV_GRAPHIC_DLL CTagPoint : public EarthView::World::Graphic::CBone
            {
				friend class CEntity;
				friend class CInstancedEntity2;

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CTagPoint(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 复制构造函数
                /// </summary>
                /// <param name="handle">挂载点标识</param>
                /// <param name="creator">挂载点所属骨骼对象</param>
                /// <returns></returns>
                CTagPoint(_in ev_uint16 handle, _in EarthView::World::Graphic::CSkeleton *ref_creator);
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                virtual ~CTagPoint();
                /// <summary>
                /// 获得挂载点的父实体对象
                /// </summary>
                /// <param name=""></param>
                /// <returns>父实体对象</returns>
                EarthView::World::Graphic::CMovableObject *getParentEntity() const;               
                /// <summary>
                /// 设置挂载点的父实体对象
                /// </summary>
                /// <param name="pEntity">父实体对象</param>
                /// <returns></returns>
                void setParentEntity( EarthView::World::Graphic::CMovableObject *ref_pEntity);               
				
				
                /// <summary>
                /// 设置是否从父实体继承方向属性
                /// </summary>
                /// <param name="inherit">是否继承标识</param>
                /// <returns></returns>
                void setInheritParentEntityOrientation(_in ev_bool inherit);
                /// <summary>
                /// 返回是否从父实体继承方向属性
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否则返回false</returns>
                ev_bool getInheritParentEntityOrientation() const;
                /// <summary>
                /// 设置是否从父实体继承缩放比例属性
                /// </summary>
                /// <param name="inherit">是否继承标识</param>
                /// <returns></returns>
                void setInheritParentEntityScale(_in ev_bool inherit);
                /// <summary>
                /// 返回是否从父实体继承缩放比例属性
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否则返回false</returns>
                ev_bool getInheritParentEntityScale() const;
                /// <summary>
                /// 获得模型的世界变换矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns>父实体变换矩阵</returns>
                const EarthView::World::Spatial::Math::CMatrix4 &getParentEntityTransform() const;

				/// <summary>
				/// 获得自身在场景中的世界变换矩阵，重写该函数以解决骨骼动画绑定组件的问题
				/// </summary>
				/// <param name=""></param>
				/// <returns>累积的世界变换矩阵</returns>
				const EarthView::World::Spatial::Math::CMatrix4 &_getFullTransform() const;
                /// <summary>
                /// 获得节点相对模型的局部变换矩阵
                /// </summary>
                /// <param name=""></param>
                /// <returns>变换矩阵</returns>
                const EarthView::World::Spatial::Math::CMatrix4 &_getFullLocalTransform() const;

                /// <summary>
                /// 通知所属Bone和父实体节点需要更新数据
                /// </summary>
                /// <param name="forceParentUpdate">是否更新标识</param>
                /// <returns></returns>
                void needUpdate(_in ev_bool forceParentUpdate);
                /// <summary>
                /// 通知所属Bone和父实体节点需要更新数据
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void needUpdate();

                
                /// <summary>
                /// 获得光照集合数据
                /// </summary>
                /// <param name=""></param>
                /// <returns>光照集合数据</returns>
                const EarthView::World::Graphic::LightList &getLights() const;

				/// <summary>
				/// 设置相对于场景根节点的旋转
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void _setDerivedOrientation(const EarthView::World::Spatial::Math::CQuaternion &q);
				/// <summary>
				/// 设置相对于场景根节点的偏移
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void _setDerivedPosition(const EarthView::World::Spatial::Math::CVector3 &pos);

				/// <summary>
				/// 设置缩放
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void setScale(_in const EarthView::World::Spatial::Math::CVector3 &scale);

				/// <summary>
				/// 设置方向
				/// 通过四元数设置
				/// </summary>
				/// <param name="q">四元数值，节点旋转围绕着节点原点</param>
				/// <returns></returns>
				virtual void setOrientation( _in const EarthView::World::Spatial::Math::CQuaternion &q );

				/// <summary>
				/// 设置节点位置
				/// </summary>
				/// <param name="pos">三维向量</param>
				/// <returns></returns>
				virtual void setPosition( _in const EarthView::World::Spatial::Math::CVector3 &pos);


				/// <summary>
				/// 设置相对于父模型的缩放
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void setDerivedLocalScale(const EarthView::World::Spatial::Math::CVector3 &scale);

				/// <summary>
				/// 设置相对于父模型的旋转
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void setDerivedLocalOrientation(const EarthView::World::Spatial::Math::CQuaternion &q);

				/// <summary>
				/// 设置相对于父模型的偏移
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void setDerivedLocalPosition(const EarthView::World::Spatial::Math::CVector3 &pos);

			public:
				/// <summary>
				/// 在当前节点下挂接一个移动对象
				/// </summary>
				/// <param name="obj">移动对象</param>
				/// <returns></returns>
				virtual void attachObject(EarthView::World::Graphic::CMovableObject *ref_obj);
				/// <summary>
				/// 挂接在当前节点下的挂接对象的个数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_uint16 numAttachedObjects() const;
				/// <summary>
				/// 按索引号获取挂接对象
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CMovableObject *getAttachedObject(ev_uint16 index);
				/// <summary>
				/// 按名称获取挂接对象
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CMovableObject *getAttachedObject(const EVString &name);
				/// <summary>
				/// 反挂接指定序号的移动对象
				/// </summary>
				/// <param name="index">索引</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CMovableObject *detachObject(ev_uint16 index);
				/// <summary>
				/// 反挂接移动对象
				/// </summary>
				/// <param name="obj">移动对象</param>
				/// <returns></returns>
				virtual void detachObject(EarthView::World::Graphic::CMovableObject *obj);
				/// <summary>
				/// 脱钩指定名称的移动对象
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CMovableObject *detachObject(const EVString &name);
				/// <summary>
				/// 反挂接所有移动对象
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				virtual void detachAllObjects();

				/// <summary>
				/// 创建子节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual EarthView::World::Graphic::CTagPoint* createChildTagPoint();

				/// <summary>
				/// 通过名称删除并销毁子节点(递归销毁子节点)
				/// </summary>
				/// <param name="name">名称</param>
				/// <returns></returns>
				virtual void removeAndDestroyChild(const EVString &name);
				/// <summary>
				/// 通过序号删除并销毁子节点(递归销毁子节点)
				/// </summary>
				/// <param name="index">检索</param>
				/// <returns></returns>
				virtual void removeAndDestroyChild(ev_uint16 index);
				/// <summary>
				/// 删除并销毁此节点的所有子节点
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void removeAndDestroyAllChildren();

			ev_internal:				
				virtual EarthView::World::Graphic::CNode *createChildImpl();	

				/// <summary>
				/// 从父节点变换数据获得节点变换数据
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual void updateFromParentImpl() const;

			protected:
				ev_bool detachObjectImpl(EarthView::World::Graphic::CMovableObject *pObject);

            private:
                EarthView::World::Graphic::CMovableObject *mParentEntity;

				typedef map<EVString, EarthView::World::Graphic::CMovableObject *> ChildObjectMap;
                ChildObjectMap mChildObjects;
				//mutable EarthView::World::Core::CRecursiveMutex mChildObjectsLocker;

                mutable EarthView::World::Spatial::Math::CMatrix4 mFullLocalTransform;
                ev_bool mInheritParentEntityOrientation;
                ev_bool mInheritParentEntityScale;

				mutable EarthView::World::Spatial::Math::CVector3 mLastDerivedPosition;
				mutable EarthView::World::Spatial::Math::CVector3 mLastDerivedScale;
				mutable EarthView::World::Spatial::Math::CQuaternion mLastDerivedOrientation;
            };
        }
    }
}



#endif

