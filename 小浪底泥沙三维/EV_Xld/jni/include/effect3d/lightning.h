#pragma once;
#include "effect3d_config.h"
#include <graphic/colourvalue.h>
#include <graphic/billboardset.h>
#include <graphic/billboard.h>
#include <graphic/scenemanager.h>
#include <spatialobject/geometry/envelope.h>
#include "heightrange.h"



namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Effect3D
			{

				/// <summary>
				///　闪电管理类
				/// </summary>
			    class EV_EFFECT3D_DLL CLightningManager : public EarthView::World::Core::CBaseObject
				{
//#if 0
//					class EV_EFFECT3D_DLL CLightning : public EarthView::World::Core::CBaseObject
//					{
//					public:
//						CLightning(const EarthView::World::Spatial::Math::CVector3& oriPos, const EarthView::World::Spatial::Math::CVector3& dir, const Real& time, const Real& length, const Real& width);
//						~CLightning();
//						void update(const Real& timeElapsed );
//						bool isFinished() const;
//						CBillboard* getBillboard() const;
//						void setBillboard(CBillboard* billboard);
//						Real getIntensity() const;
//					protected:
//						CBillboard* mBillboard;
//						bool mCreated;
//						bool mFinished;
//						Real mLength;
//						Real mWidth;
//						Real mTime;
//						EarthView::World::Spatial::Math::CVector3 mOriPos;
//						EarthView::World::Spatial::Math::CVector3 mDir;
//						EarthView::World::Spatial::Math::CVector3 mTimeMultipliers;
//						Real mIntensity;
//ev_private:
//						CLightning(EarthView::World::Core::CNameValuePairList *pList);
//					};
//#endif
ev_private:
					CLightningManager(EarthView::World::Core::CNameValuePairList *pList);

					friend class CAtmospherePrivate;
					friend class CRegionAtmosphere;
					friend class CCloudLayer;
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CLightningManager();
					
					/*/// <summary>
					/// 创建
					/// </summary>
					/// <returns></returns>
					void create();*/
					
					/// <summary>
					/// 移除
					/// </summary>
					/// <returns></returns>
					void remove();

					/// <summary>
					/// 根据流逝时间更新闪电对象
					/// </summary>
					/// <param name="timeElapsed">帧距</param>
					/// <param name="cameraPos">摄像机位置</param>
					/// <returns></returns>
					void update(Real timeElapsed , const EarthView::World::Spatial::Math::CVector3 &cameraPos);


					/// <summary>
					/// 设置闪电颜色
					/// </summary>
					/// <param name="color">颜色 </param>
					/// <returns></returns>
					//void setLightningColor(const CColourValue& color);

					/// <summary>
					/// 获取闪电颜色
					/// </summary>
					/// <returns>颜色</returns>
					//CColourValue getLightningColor() const;

					/// <summary>
					/// 设置闪电平均显示时长
					/// </summary>
					/// <returns></returns>
					void setMaxTimeInterval(const Real& interval);

					/// <summary>
					/// 获取闪电平均显示时长
					/// </summary>
					/// <returns></returns>
					Real getMaxTimeInterval() const;

					/// <summary>
					/// 获取名称
					/// </summary>
					/// <returns></returns>
					EVString getName() const;
					/// <summary>
					/// 设置名称
					/// </summary>
					/// <returns></returns>
					void setName(const EVString &name);
					/// <summary>
					/// 获取密度
					/// </summary>
					/// <returns></returns>
					Real getIntensity() const;
					/// <summary>
					/// 设置密度
					/// </summary>
					/// <returns></returns>
					void setIntensity(const Real &intensity);
					/// <summary>
					/// 返回可见性
					/// </summary>
					/// <returns></returns>
					ev_bool isVisible();
					/// <summary>
					/// 设置可见性
					/// </summary>
					/// <returns></returns>
					void setVisible(ev_bool visible);
					/// <summary>
					/// 获取闪电最大高度
					/// </summary>
					/// <returns></returns>
                    Real getMaxHeight() const;
					/// <summary>
					/// 设置闪电最大高度
					/// </summary>
					/// <returns></returns>
					void setMaxHeight(const Real &height);
					/// <summary>
					/// 获取最小高度
					/// </summary>
					/// <returns></returns>
                    Real getMinHeight() const;
					/// <summary>
					/// 设置最小高度
					/// </summary>
					/// <returns></returns>
					void setMinHeight(const Real &height);

					/// <summary>
					/// 获取闪电数量
					/// </summary>
					/// <returns></returns>
					ev_int32 getMaxLightningCount() const;
					/// <summary>
					///设置闪电最大数量
					/// </summary>
					/// <returns></returns>
					void setMaxLightningCount(const ev_int32 &count);

					/*/// <summary>
					/// 获取闪电范围(区域显示时才有效)
					/// </summary>
					/// <returns></returns>
					CEnvelope getEnvelope() const{return CEnvelope();}*/
					/// <summary>
					/// 设置闪电范围(区域显示时才有效)
					/// </summary>
					/// <returns></returns>
					/*void setEnvelope(const CEnvelope &envelope){}*/

					/// <summary>
					///  设置闪电反射
					/// </summary>
					/// <returns></returns>
					ev_void setReflectable(ev_bool reflect){mbReflect = reflect;}
						/// <summary>
					/// 设置闪电折射
					/// </summary>
					/// <returns></returns>
					ev_void setRefractable(ev_bool refract){mbRefract = refract;}
					
					/// <summary>
					/// 清空闪电
					/// </summary>
					/// <returns></returns>
					ev_void clear();
				protected:
					/// <summary>
					/// 添加闪电
					/// </summary>
					/// <returns></returns>
					void addLightning(const EarthView::World::Spatial::Math::CVector3& oriPos, const EarthView::World::Spatial::Math::CVector3& dir, const EarthView::World::Core::ev_string index);
				    ev_int32 genIncreaseNum();
					/// <summary>
					/// 设置闪电显示列表
					/// </summary>
					/// <returns></returns>
					ev_void setPositionList(vector<EarthView::World::Spatial::Math::CVector3> *positions);
				
				private:
					
					/// <summary>
					/// 闪电管理者构造函数（根据区域范围显示）
					/// </summary>
					/// <param name="sceneMgr">场景管理器</param>
					/// <param name="heightRange">闪电大小范围</param>
					CLightningManager(EarthView::World::Graphic::CSceneManager *sceneMgr, const EarthView::World::Spatial::Effect3D::CHeightRange heightRange);

					CLightningManager(const	CLightningManager&);
					CLightningManager& operator=(const CLightningManager&);

				protected:
						EarthView::World::Graphic::CSceneManager *mpSceneMgr;
						EVString mName;

						EarthView::World::Graphic::CMaterialPtr mMaterialLong;
						EarthView::World::Graphic::CMaterialPtr mMaterialShort;

						vector<EarthView::World::Core::ev_string> mBillboardSetNames;
						vector<EarthView::World::Graphic::CLight*> mLights;
						vector<EarthView::World::Graphic::CSceneNode*> mSceneNodes;
						vector<EarthView::World::Spatial::Math::CVector3> *mPositions;
						vector<EarthView::World::Spatial::Math::CVector3> mDisplayPositons;
						EarthView::World::Graphic::CColourValue mLightningColor;
						EarthView::World::Graphic::CColourValue mLightColor;
						Real mRemainingTime;
						Real mCurrentTimeInterval;
						Real mMaxTimeInterval;
						Real mTempTimeInterval;
						ev_bool mCreated;

						ev_bool mbVisible;
						ev_bool mbReflect;
						ev_bool mbRefract;
						EarthView::World::Spatial::Effect3D::CHeightRange mHeightRange;
						EarthView::World::Spatial::Geometry::CEnvelope mEnvelope;
						ev_int32 mMaxLightningCount;

						Real mMaxHeight;
						Real mMinHeight;
						Real mIntensity;
				};
			}
		}
	}
}

