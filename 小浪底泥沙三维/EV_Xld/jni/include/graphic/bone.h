#ifndef __Bone_H__
#define __Bone_H__
#pragma once
#include "graphic/graphic_config.h"
#include <mathengine/vector3.h>
#include <mathengine/quaternion.h>
#include "node.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
				class CQuaternion;
			}
		}
	}
}

namespace EarthView
{
    namespace World
    {
        namespace Graphic
        {

            class CSkeleton;
            /// <summary>
            /// 骨头类
            /// 管理骨头(骨骼的组成部分)
            /// </summary>
            class EV_GRAPHIC_DLL CBone : public EarthView::World::Graphic::CNode
            {
            public:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="handle">骨头标识</param>
                /// <param name="creator">所属骨骼对象</param>
                /// <returns></returns>
                CBone(_in ev_uint16 handle, _in EarthView::World::Graphic::CSkeleton *ref_creator);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="name">骨头名称</param>
                /// <param name="handle">骨头标识</param>
                /// <param name="creator">所属骨骼对象</param>
                /// <returns></returns>
                CBone( _in const EVString &name, _in ev_uint16 handle, _in EarthView::World::Graphic::CSkeleton *ref_creator);

            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBone(_in EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CBone();
                /// <summary>
                /// 创建子骨头
                /// </summary>
                /// <param name="handle">子骨头标识</param>
                /// <param name="translate">变换向量</param>
                /// <param name="rotate">旋转四元数</param>
                /// <returns>子骨头对象</returns>
                virtual EarthView::World::Graphic::CBone *createChild(_in ev_uint16 handle,
                                   _in const EarthView::World::Spatial::Math::CVector3 &translate , _in const EarthView::World::Spatial::Math::CQuaternion &rotate);
                /// <summary>
                /// 创建子骨头
                /// </summary>
                /// <param name="handle">子骨头标识</param>
                /// <param name="translate">变换向量</param>
                /// <returns>子骨头对象</returns>
                virtual EarthView::World::Graphic::CBone *createChild(_in ev_uint16 handle, _in const EarthView::World::Spatial::Math::CVector3 &translate);
                /// <summary>
                /// 创建子骨头
                /// </summary>
                /// <param name="handle">子骨头标识</param>
                /// <returns>子骨头对象</returns>
                virtual EarthView::World::Graphic::CBone *createChild(_in ev_uint16 handle);
                /// <summary>
                /// 获得骨头标识
                /// </summary>
                /// <param name=""></param>
                /// <returns>骨头标识</returns>
                ev_uint16 getHandle() const;

				EarthView::World::Graphic::CSkeleton* getCreator() const {return mCreator;}
                /// <summary>
                /// 设置骨头绑定姿态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void setBindingPose();
                /// <summary>
                /// 重置骨头绑定姿态
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void reset();
                /// <summary>
                /// 设置是否手动控制骨头状态
                /// </summary>
                /// <param name="manuallyControlled">是否手动控制骨头状态标志</param>
                /// <returns></returns>
                void setManuallyControlled(_in ev_bool manuallyControlled);
                /// <summary>
                /// 获得是否手动控制骨头状态
                /// </summary>
                /// <param name=""></param>
                /// <returns>是返回true，否则false</returns>
                ev_bool isManuallyControlled() const;
                /// <summary>
                /// 获得骨头变换矩阵
                /// </summary>
                /// <param name="m">变换矩阵</param>
                /// <returns></returns>
                void _getOffsetTransform(_inout EarthView::World::Spatial::Math::CMatrix4 &m) const;
                /// <summary>
                /// 获得骨头绑定姿态逆缩放向量
                /// </summary>
                /// <param name=""></param>
                /// <returns>骨头绑定姿态逆向量</returns>
                const EarthView::World::Spatial::Math::CVector3 &_getBindingPoseInverseScale() const;
                /// <summary>
                /// 获得骨头绑定位置逆向量
                /// </summary>
                /// <param name=""></param>
                /// <returns>骨头绑定位置逆向量</returns>
                const EarthView::World::Spatial::Math::CVector3 &_getBindingPoseInversePosition() const;
                /// <summary>
                /// 获得骨头绑定方向反转四元数
                /// </summary>
                /// <param name=""></param>
                /// <returns>骨头绑定方向反转四元数</returns>
                const EarthView::World::Spatial::Math::CQuaternion &_getBindingPoseInverseOrientation() const;
                /// <summary>
                /// 设置需要更新
                /// </summary>
                /// <param name="forceParentUpdate">是否更新标识</param>
                /// <returns></returns>
                void needUpdate(_in ev_bool forceParentUpdate);
                /// <summary>
                /// 设置需要更新
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void needUpdate();
				void setOffsetMatrix(EarthView::World::Spatial::Math::CMatrix4 offsetMatrix);
				const EarthView::World::Spatial::Math::CMatrix4& getOffsetMatrix() const;
            ev_internal:
                /// <summary>
                /// 执行创建子骨头
                /// </summary>
                /// <param name=""></param>
                /// <returns>返回节点对象</returns>
                EarthView::World::Graphic::CNode *createChildImpl();
                /// <summary>
                /// 执行创建子骨头
                /// </summary>
                /// <param name="name">骨头名称</param>
                /// <returns>返回节点对象</returns>
                EarthView::World::Graphic::CNode *createChildImpl( _in const EVString &name);
            protected:
                ev_uint16 mHandle;

                ev_bool mManuallyControlled;


                EarthView::World::Graphic::CSkeleton *mCreator;

                EarthView::World::Spatial::Math::CVector3 mBindDerivedInverseScale;

                EarthView::World::Spatial::Math::CQuaternion mBindDerivedInverseOrientation;

                EarthView::World::Spatial::Math::CVector3 mBindDerivedInversePosition;

				 EarthView::World::Spatial::Math::CMatrix4 mDerivedInverseMatrix;
				 EarthView::World::Spatial::Math::CMatrix4 mOffsetMatrix;
            };
        }
    }
}

#endif

