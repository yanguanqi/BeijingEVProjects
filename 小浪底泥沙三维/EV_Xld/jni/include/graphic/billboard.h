#ifndef __Billboard_H__
#define __Billboard_H__
#pragma once
#include "graphic/graphic_config.h"
#include "colourvalue.h"
#include "common.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class CVector3;
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


            class CBillboardSet;
            /// <summary>
            /// 广告板类
            /// 该类作用于一般动产并且总是面向摄像机
            /// 定义广告板相关操作的类
            /// </summary>
            class EV_GRAPHIC_DLL CBillboard : public EarthView::World::Core::CAllocatedObject
            {
                friend class CBillboardSet;
                friend class CBillboardParticleRenderer;
            protected:
                ev_bool mOwnDimensions;
                ev_bool mUseTexcoordRect;
                ev_uint16 mTexcoordIndex;      			/// index into the EarthView::World::Graphic::CBillboardSet array of texture coordinates
                EarthView::World::Graphic::FloatRect mTexcoordRect;    			/// individual texture coordinates
                Real mWidth;
                Real mHeight;

                ev_bool mSelected;				
            ev_private:
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="pList">构造函数参数键值对表</param>
                /// <returns></returns>
                CBillboard(_in EarthView::World::Core::CNameValuePairList *pList);

            public:
                EarthView::World::Spatial::Math::CVector3 mPosition;
                /// Normalised direction vector
                EarthView::World::Spatial::Math::CVector3 mDirection;
                EarthView::World::Graphic::CBillboardSet *mParentSet;
                EarthView::World::Graphic::CColourValue mColour;
                EarthView::World::Spatial::Math::CRadian mRotation;

				ev_bool mVisible;
				ev_bool mBeyondDistance;

                /// <summary>
                /// 默认构造函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                CBillboard();
                /// <summary>
                /// 析构函数
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ~CBillboard();
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="position">三维向量位置</param>
                /// <param name="owner">广告板的拥有者(广告板集)</param>
                /// <param name="colour">设置的颜色</param>
                /// <returns></returns>
                CBillboard(const EarthView::World::Spatial::Math::CVector3 &position, EarthView::World::Graphic::CBillboardSet *ref_owner, const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 构造函数
                /// </summary>
                /// <param name="position">三维向量位置</param>
                /// <param name="owner">广告板的拥有者(广告板集)</param>
                /// <returns></returns>
                CBillboard(const EarthView::World::Spatial::Math::CVector3 &position, EarthView::World::Graphic::CBillboardSet *ref_owner);
                /// <summary>
                /// 获得广告板的旋转弧度
                /// </summary>
                /// <param name=""></param>
                /// <returns>旋转弧度</returns>
                const EarthView::World::Spatial::Math::CRadian &getRotation() const;
                /// <summary>
                /// 设置广告板的旋转弧度
                /// </summary>
                /// <param name="rotation">所需设置的旋转弧度</param>
                /// <returns></returns>
                void setRotation(const EarthView::World::Spatial::Math::CRadian &rotation);
                /// <summary>
                /// 设置广告板的三维位置
                /// </summary>
                /// <param name="position">所需设置的三维位置</param>
                /// <returns></returns>
                void setPosition(const EarthView::World::Spatial::Math::CVector3 &position);
                /// <summary>
                /// 设置广告板的三维位置
                /// </summary>
                /// <param name="x">x坐标</param>
                /// <param name="y">y坐标</param>
                /// <param name="z">z坐标</param>
                /// <returns></returns>
                void setPosition(Real x, Real y, Real z);
                /// <summary>
                /// 获得广告板的三维位置
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Spatial::Math::CVector3 &getPosition() const;
                /// <summary>
                /// 设置广告板的宽度和高度
                /// </summary>
                /// <param name="width">宽度</param>
                /// <param name="height">高度</param>
                /// <returns></returns>
                void setDimensions(Real width, Real height);
                /// <summary>
                /// 重置广告板的宽度和高度(恢复为广告板集的宽高)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                void resetDimensions();

                /// <summary>
                /// 设置广告板的颜色
                /// </summary>
                /// <param name="colour"></param>
                /// <returns></returns>
                void setColour(const EarthView::World::Graphic::CColourValue &colour);
                /// <summary>
                /// 获得广告板的颜色
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::CColourValue &getColour() const;
                /// <summary>
                /// 判断广告板是否拥有自定义的宽高
                /// </summary>
                /// <param name=""></param>
                /// <returns>没有缺少维数返回true，否则false</returns>
                ev_bool hasOwnDimensions() const;
                /// <summary>
                /// 获得广告板自身的宽度
                /// </summary>
                /// <param name=""></param>
                /// <returns>宽度值</returns>
                Real getOwnWidth() const;
                /// <summary>
                /// 获得广告板自身的高度
                /// </summary>
                /// <param name=""></param>
                /// <returns>高度值</returns
                Real getOwnHeight() const;
                /// <summary>
                /// 自我通知拥有者是谁(内部使用)
                /// </summary>
                /// <param name="owner"></param>
                /// <returns></returns>
                void _notifyOwner(  EarthView::World::Graphic::CBillboardSet *ref_owner);
                /// <summary>
                /// 判断广告板是否使用纹理坐标(范围)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                ev_bool isUseTexcoordRect() const;

                /// <summary>
                /// 设置广告板的纹理坐标索引
                /// </summary>
                /// <param name="texcoordIndex">索引值</param>
                /// <returns></returns>
                void setTexcoordIndex(ev_uint16 texcoordIndex);
                /// <summary>
                /// 获取广告板的纹理坐标索引
                /// </summary>
                /// <param name=""></param>
                /// <returns>索引值</returns>
                ev_uint16 getTexcoordIndex() const;

                /// <summary>
                /// 设置广告板的纹理坐标(范围)
                /// </summary>
                /// <param name="texcoordRect">材质矩阵</param>
                /// <returns></returns>
                void setTexcoordRect(const EarthView::World::Graphic::FloatRect &texcoordRect);
                /// <summary>
                /// 设置广告板的纹理坐标(范围)
                /// </summary>
                /// <param name="u0">u0的值</param>
                /// <param name="v0">v0的值</param>
                /// <param name="u1">u1的值</param>
                /// <param name="v1">v1的值</param>
                /// <returns></returns>
                void setTexcoordRect(Real u0, Real v0, Real u1, Real v1);
                /// <summary>
                /// 获得广告板的纹理坐标(范围)
                /// </summary>
                /// <param name=""></param>
                /// <returns></returns>
                const EarthView::World::Graphic::FloatRect &getTexcoordRect() const;
            };
            /** @} */
            /** @} */
        }
    }
}

#endif
