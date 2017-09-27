#ifndef _SPATIAL_POSITION_H_
#define _SPATIAL_POSITION_H_
#include "mathengine/mathengine_config.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
				class EV_MATHENGINE_DLL CSpatialPosition  : public EarthView::World::Core::CAllocatedObject
				{
				private:
					double mPosX;
					double mPosY;
					double mPosZ;

					double mScaleX;
					double mScaleY;
					double mScaleZ;

					double mRotationX;
					double mRotationY;
					double mRotationZ;
					double mRotationW;

				ev_private:
					CSpatialPosition(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CSpatialPosition();
					/// <summary>
					/// 设置位置
					/// </summary>
					/// <param name="x">x轴位置</param>
					/// <param name="y">y轴位置</param>
					/// <param name="z">z轴位置</param>
					/// <returns></returns>
					void setPos(double x, double y, double z);

					/// <summary>
					/// 获取位置
					/// </summary>
					/// <param name="x">x坐标</param>
					/// <param name="y">y坐标</param>
					/// <param name="z">z坐标</param>
					/// <returns></returns>
					void getPos(double& x, double& y, double& z);

					/// <summary>
					/// 设置缩放
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <returns></returns>
					void setScale(double x, double y, double z);

					/// <summary>
					/// 获取缩放
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <returns></returns>
					void getScale(double& x, double& y, double& z);

					/// <summary>
					/// 设置旋转
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <param name="w">w</param>
					/// <returns></returns>
					void setRotation(double x, double y, double z, double w);

					/// <summary>
					/// 获取旋转
					/// </summary>
					/// <param name="x">x</param>
					/// <param name="y">y</param>
					/// <param name="z">z</param>
					/// <param name="w">w</param>
					/// <returns></returns>
					void getRotation(double& x, double& y, double& z, double& w);
				};
			}
		}
	}
}
#endif


