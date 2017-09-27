#ifndef EFFECTINFOPANELPARAM_H
#define EFFECTINFOPANELPARAM_H

#include "spatial3dproxy/spatial3dproxy_config.h"
#include "spatial3dcalculator/spatialcalculator.h"
#include"spatial3dengine/spatial3dengineconfig.h"
#include "core/stringinterface.h"
namespace EarthView{
	namespace World{
		namespace Spatial3D{
	    namespace EffectManager{
			
			class CEffectObject;
		 }
		}

	}
};




namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{

			/// <summary>
			/// 特效属性框类
			/// 通过接受用户的输入来对特效进行相关的设置
			/// </summary>
			class EV_SPATIAL3DPROXY_DLL CEffectInfoPanelParam : public EarthView::World::Core::CStringInterface
			{

			ev_private:
				/// <summary>
				/// 特效名称框
				/// 设置名称
				/// </summary>
				class  CCmdName : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdName();

					/// <summary>
					/// 获取特效名称
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置特效名称
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">特效名称</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 特效经度框
				/// 设置经度
				/// </summary>
				class  CCmdLongitude : public EarthView::World::Core::CParamCommand  
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdLongitude();

					/// <summary>
					/// 获取经度
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置经度
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">经度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 特效纬度框
				/// 设置纬度
				/// </summary>
				class  CCmdLatitude : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdLatitude();

					/// <summary>
					/// 获取纬度
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置纬度
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">纬度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 特效高度框
				/// 设置高度
				/// </summary>
				class  CCmdAltitude : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAltitude();

					/// <summary>
					/// 获取高度
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">高度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 绕X轴旋转输入框
				/// 设置绕X轴旋转的值
				/// </summary>
				class  CCmdAngleX : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAngleX();

					/// <summary>
					/// 获取绕X轴旋转的值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置绕X轴旋转的值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">角度值</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 绕Y轴旋转输入框
				/// 设置绕Y轴旋转的值
				/// </summary>
				class  CCmdAngleY : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAngleY();

					/// <summary>
					/// 获取绕Y轴旋转的值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置绕Y轴旋转的值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">角度值</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 绕Z轴旋转输入框
				/// 设置绕Z轴旋转的值
				/// </summary>
				class  CCmdAngleZ : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAngleZ();

					/// <summary>
					/// 获取绕Z轴旋转的值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置绕Z轴旋转的值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">角度值</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 沿X轴缩放输入框
				/// 设置沿X轴的缩放值
				/// </summary>
				class  CCmdZoomX : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdZoomX();

					/// <summary>
					/// 获取沿X轴的缩放值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置沿X轴的缩放值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">缩放因子</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 沿Y轴缩放输入框
				/// 设置沿Y轴的缩放值
				/// </summary>
				class  CCmdZoomY : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdZoomY();

					/// <summary>
					/// 获取沿Y轴的缩放值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置沿Y轴的缩放值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">缩放因子</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 沿Z轴缩放输入框
				/// 设置沿Z轴的缩放值
				/// </summary>
				class  CCmdZoomZ : public EarthView::World::Core::CParamCommand 
				{
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdZoomZ();

					/// <summary>
					/// 获取沿Z轴的缩放值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置沿Z轴的缩放值
					/// </summary>
					/// <param name="target">指向相关控件的指针</param>
					/// <param name="val">缩放因子</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CEffectInfoPanelParam(EarthView::World::Core::CNameValuePairList* pList);

				/// <summary>
				/// 生成更新命令
				/// </summary>
				/// <param name="obj">目标特效</param>
				/// <param name="oldPos">原位置</param>
				/// <param name="oldScale">原缩放因子</param>
				/// <param name="oldQuat">原旋转四元数</param>
				/// <param name="newPos">新位置</param>
				/// <param name="newScale">新缩放因子</param>
				/// <param name="newQuat">新旋转四元数</param>
				/// <returns></returns>	
				static 	void genUpdateCommand(EarthView::World::Spatial3D::EffectManager::CEffectObject* obj,EarthView::World::Spatial::Math::CVector3 oldPos,EarthView::World::Spatial::Math::CVector3 oldScale,EarthView::World::Spatial::Math::CQuaternion  oldQuat,EarthView::World::Spatial::Math::CVector3 newPos,EarthView::World::Spatial::Math::CVector3 newScale, EarthView::World::Spatial::Math::CQuaternion newQuat);

			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="obj">指向特效的指针</param>
				/// <returns></returns>	
				CEffectInfoPanelParam(EarthView::World::Spatial3D::EffectManager::CEffectObject* ref_obj);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				~CEffectInfoPanelParam();
				ev_void setEffectObject(EarthView::World::Spatial3D::EffectManager::CEffectObject* ref_obj);

			public:
				EVString mName;
				EarthView::World::Spatial3D::EffectManager::CEffectObject* mpEffectObject;

				EarthView::World::Graphic::CSceneNode* mpNode;

			private:

				/// <summary>
				/// 四元数转化为旋转角度值
				/// </summary>
				/// <param name="quter">四元数</param>
				/// <param name="v3">角度数组</param>
				/// <returns></returns>
				static ev_void QuaterToAngle(EarthView::World::Spatial::Math::CQuaternion& quter,EarthView::World::Spatial::Math::CVector3& v3);

				/// <summary>
				/// 旋转角度值转化为四元数
				/// </summary>
				/// <param name="v3">角度数组</param>
				/// <param name="quter">四元数</param>
				/// <returns></returns>
				static ev_void AngleToQuater(EarthView::World::Spatial::Math::CVector3& v3,EarthView::World::Spatial::Math::CQuaternion& quter);

				static CCmdName msName;
				static CCmdLongitude msLongitudeCmd;
				static CCmdLatitude msLatitudeCmd;
				static CCmdAltitude msAltitude;

				static CCmdAngleX msAngleXCmd;
				static CCmdAngleY msAngleYCmd;
				static CCmdAngleZ msAngleZCmd;
				static CCmdZoomX msZoomXCmd;
				static CCmdZoomY msZoomYCmd;
				static CCmdZoomZ msZoomZCmd;
			};
		}
	}
}
#endif
