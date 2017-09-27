#ifndef __NODEPARAM_H__
#define __NODEPARAM_H__

#include "spatial3dproxy/spatial3dproxy_config.h"
#include "core/stringinterface.h"
#include "graphic/node.h"
#include "spatial3dengine/modelbaseobject.h"
#include "spatial3dproxy/modeleffectdbmanager.h"
#include "spatialdatabase/fields.h"
#include "spatialdatabase/field.h"
#include "graphic/ribbontrail.h"
#include "graphic/light.h"



namespace EarthView{
	namespace World{
		namespace Spatial3DProxy{

			/// <summary>
			/// 模型属性类
			/// 设置模型属性
			/// </summary>
			class EV_SPATIAL3DPROXY_DLL CModelProperty : public EarthView::World::Core::CStringInterface
			{

			public:
				/// <summary>
				/// 位置字段类
				/// 设置模型位置
				/// </summary>
				class  CCmdField : public EarthView::World::Core::CParamCommand 
				{
				private:
					EarthView::World::Spatial::GeoDataset::IField* mpField;

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdField();

					/// <summary>
					/// 获取位置
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置位置
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">位置</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);

					/// <summary>
					/// 设置字段值
					/// </summary>
					/// <param name="field">指向字段的指针</param>
					/// <returns></returns>	
					void setField(EarthView::World::Spatial::GeoDataset::IField* ref_field);

					/// <summary>
					/// 获取字段值
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					EarthView::World::Spatial::GeoDataset::IField* getField();
				};



ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CModelProperty(_in EarthView::World::Core::CNameValuePairList *pList);


			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="nodeCode">模型编号</param>
				/// <param name="meshId">模型索引</param>
				/// <param name="ref_mgr">模型特效管理类</param>
				/// <returns></returns>	
				CModelProperty(const EVString& nodeCode,ev_uint32 meshId,EarthView::World::Spatial3DProxy::CModelEffectDBManager* ref_mgr);

				/// <summary>
				/// 设置字段值
				/// </summary>
				/// <param name="field">指向字段的指针</param>
				/// <param name="val">字段值</param>
				/// <returns></returns>	
				void setFieldValue(EarthView::World::Spatial::GeoDataset::IField* ref_field,EVString val);

				/// <summary>
				/// 获取字段值
				/// </summary>
				/// <param name="field">指向字段的指针</param>
				/// <returns></returns>	
				EVString getFieldValue(EarthView::World::Spatial::GeoDataset::IField* field);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				~CModelProperty();			


			private:
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* mpModelEffectDBMgr;
				EVString mNodeCode;
				ev_uint32 mMeshID;
				EarthView::World::Spatial::GeoDataset::CFields* mpFields;
				vector<CCmdField*> cmdVec;
			};

			/// <summary>
			/// 模型节点参数类
			/// 设置模型节点参数
			/// </summary>
			class EV_SPATIAL3DPROXY_DLL CNodeParam : public EarthView::World::Core::CStringInterface
			{

			public:
				/// <summary>
				/// 模型位置框
				/// 设置模型位置
				/// </summary>
				class  CCmdPos : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdPos();

					/// <summary>
					/// 获取模型位置
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置模型位置
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">模型位置</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 模型旋转设置框
				/// 设置模型旋转角度
				/// </summary>
				class  CCmdRot : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdRot();

					/// <summary>
					/// 获取模型旋转角度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置模型旋转角度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">模型旋转角度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 模型缩放设置框
				/// 设置模型缩放因子
				/// </summary>
				class  CCmdScale : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdScale();

					/// <summary>
					/// 获取模型沿轴缩放因子
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置模型沿轴的缩放因子
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">模型沿轴的缩放值</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};


ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CNodeParam(_in EarthView::World::Core::CNameValuePairList *pList);


			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_node">模型节点</param>
				/// <param name="pos">模型位置</param>
				/// <param name="rot">模型旋转角度数组</param>
				/// <param name="scale">模型缩放因子</param>
				/// <returns></returns>	
				CNodeParam(EarthView::World::Graphic::CNode* ref_node,EarthView::World::Spatial::Math::CVector3 pos,EarthView::World::Spatial::Math::CVector3 rot,EarthView::World::Spatial::Math::CVector3 scale);

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_modelObj">模型对象</param>
				/// <param name="pos">模型位置</param>
				/// <param name="rot">模型旋转角度数组</param>
				/// <param name="scale">模型缩放因子</param>
				/// <param name="mat4">模型世界变换矩阵</param>
				/// <returns></returns>	
				CNodeParam(EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_modelObj,EarthView::World::Spatial::Math::CVector3 pos,EarthView::World::Spatial::Math::CVector3 rot,EarthView::World::Spatial::Math::CVector3 scale,EarthView::World::Spatial::Math::CMatrix4 mat4);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				~CNodeParam();			


			private:
				EarthView::World::Graphic::CNode* mpNode;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* mModelObj;
				EarthView::World::Spatial::Math::CMatrix4 mLocalMat4;
				ev_uint32 mType;


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

				static CCmdPos msPos;
				static CCmdRot msRot;
				static CCmdScale msScale;
			protected:
				EarthView::World::Spatial::Math::CVector3 mPos;
				EarthView::World::Spatial::Math::CVector3 mRot;
				EarthView::World::Spatial::Math::CVector3 mScale;
			public:
				/// <summary>
				/// 设置节点位置
				/// </summary>
				/// <param name="v3">位置数组</param>
				/// <returns></returns>	
				ev_void setPos(EarthView::World::Spatial::Math::CVector3 v3);

				/// <summary>
				/// 获取节点位置
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				EarthView::World::Spatial::Math::CVector3 getPos();

				/// <summary>
				/// 设置节点旋转角度数组
				/// </summary>
				/// <param name="v3">旋转角度数组</param>
				/// <returns></returns>	
				ev_void setRot(EarthView::World::Spatial::Math::CVector3 v3);

				/// <summary>
				/// 获取节点旋转角度数组
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				EarthView::World::Spatial::Math::CVector3 getRot();

				/// <summary>
				/// 设置节点缩放值
				/// </summary>
				/// <param name="v3">缩放值</param>
				/// <returns></returns>	
				ev_void setScale(EarthView::World::Spatial::Math::CVector3 v3);

				/// <summary>
				/// 获取节点缩放值
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				EarthView::World::Spatial::Math::CVector3 getScale();
			};


			/// <summary>
			/// 飘带参数设置类			
			/// </summary>
			class EV_SPATIAL3DPROXY_DLL CTrailParam : public EarthView::World::Core::CStringInterface
			{

			public:
				/// <summary>
				/// 飘带长度				
				/// </summary>
				class  CCmdTrailLenght : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdTrailLenght();

					/// <summary>
					/// 获取飘带长度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带长度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 初始化颜色类
				/// 设置初始化颜色
				/// </summary>
				class  CCmdInitialColour : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdInitialColour();

					/// <summary>
					/// 获取初始化颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置初始化颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">初始化颜色</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 颜色设置类
				/// 设置颜色
				/// </summary>
				class  CCmdColourChange : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdColourChange();

					/// <summary>
					/// 获取颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">颜色</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 初始化宽度类
				/// 设置初始化宽度
				/// </summary>
				class  CCmdInitialWidth : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdInitialWidth();

					/// <summary>
					/// 获取初始化宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置初始化宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">初始化宽度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 宽度设置类
				/// 设置宽度
				/// </summary>
				class  CCmdWidthChange : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdWidthChange();

					/// <summary>
					/// 获取宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">宽度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 飘带是否面向相机设置类
				/// </summary>
				class  CCmdTrailFaceCamera : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdTrailFaceCamera();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};


ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CTrailParam(_in EarthView::World::Core::CNameValuePairList *pList);


			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_trail">指向飘带轨迹的指针</param>
				/// <returns></returns>	
				CTrailParam(EarthView::World::Graphic::CRibbonTrail* ref_trail);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				~CTrailParam();	

				/// <summary>
				/// 获取飘带轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				EarthView::World::Graphic::CRibbonTrail* getRibbonTrail();


			private:
				EarthView::World::Graphic::CRibbonTrail* mpTrail;


				static CCmdTrailLenght msTrailLength;
				static CCmdInitialColour msInitialColour;
				static CCmdColourChange msColourChange;
				static CCmdInitialWidth msInitialWidth;
				static CCmdWidthChange msWidthChange;
				static CCmdTrailFaceCamera msFaceCamera;
		



			};
			/// <summary>
			/// 光源参数设置类			
			/// </summary>
			class EV_SPATIAL3DPROXY_DLL CLightParam : public EarthView::World::Core::CStringInterface
			{

			public:
				/// <summary>
				/// 设置漫射光颜色
				/// </summary>
				class  CCmdDiffuseColour : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdDiffuseColour();

					/// <summary>
					/// 获取初始化颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置初始化颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">初始化颜色</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置镜面反射光颜色
				/// </summary>
				class  CCmdSpecularColour : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdSpecularColour();

					/// <summary>
					/// 获取颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置颜色
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">颜色</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置光源衰减参数之在世界单位下，光源的最高射程
				/// </summary>
				class  CCmdAttenuationRange : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAttenuationRange();

					/// <summary>
					/// 获取初始化宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置初始化宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">初始化宽度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置衰减公式常数值
				/// </summary>
				class  CCmdAttenuationConstant : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAttenuationConstant();

					/// <summary>
					/// 获取宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置宽度
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">宽度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置线性值
				/// </summary>
				class  CCmdAttenuationLinear : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAttenuationLinear();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置衰减公式二次值
				/// </summary>
				class  CCmdAttenuationQuadric : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAttenuationQuadric();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				

				/*/// <summary>
				/// 设置设置光源位置坐标
				/// </summary>
				class  CCmdPosition : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdPosition();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};*/


				/// <summary>
				/// 设置光源衰减参数
				/// </summary>
				/*class  CCmdAttenuation : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdAttenuation();

					/// <summary>
					/// 获取模型位置
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置模型位置
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">模型位置</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};*/

				/// <summary>
				/// 设置聚光灯内锥角
				/// </summary>
				class  CCmdSpotlightInnerAngle : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdSpotlightInnerAngle();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置聚光灯外锥角
				/// </summary>
				class  CCmdSpotlightOuterAngle : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdSpotlightOuterAngle();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置内锥角与外锥角直接的光线衰减率
				/// </summary>
				class  CCmdSpotlightFalloff : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdSpotlightFalloff();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置聚光灯进截面距离
				/// </summary>
				class  CCmdSpotlightNearClipDistance : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdSpotlightNearClipDistance();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置光源位置
				/// </summary>
				class  CCmdPos : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdPos();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置光源朝向(仅聚光灯型光源)
				/// </summary>
				class  CCmdDirection : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdDirection();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置光源强度 只在高动态范围（HDR）渲染的时候考虑此因素
				/// </summary>
				class  CCmdPowerScale : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdPowerScale();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};
				/*/// <summary>
				/// 设置从可见光源阴影到摄像机最大距离
				/// </summary>
				class  CCmdShadowFarDistance : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdShadowFarDistance();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置阴影摄像机使用的近裁剪面距离
				/// </summary>
				class  CCmdShadowNearClipDistance : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdShadowNearClipDistance();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};

				/// <summary>
				/// 设置阴影摄像机使用的近裁剪面距离
				/// </summary>
				class  CCmdShadowFarClipDistance : public EarthView::World::Core::CParamCommand 
				{

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					CCmdShadowFarClipDistance();

					/// <summary>
					/// 获取飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <returns></returns>	
					EVString doGet(const void *target) const;

					/// <summary>
					/// 设置飘带是否面向相机
					/// </summary>
					/// <param name="target">指向参数对象的指针</param>
					/// <param name="val">轨迹长度</param>
					/// <returns></returns>	
					void doSet(void *target, const EVString &val);
				};*/

ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>	
				CLightParam(_in EarthView::World::Core::CNameValuePairList *pList);


			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="ref_trail">指向飘带轨迹的指针</param>
				/// <returns></returns>	
				CLightParam(EarthView::World::Graphic::CLight* light);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				~CLightParam();	

				/// <summary>
				/// 获取飘带轨迹
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>	
				EarthView::World::Graphic::CLight* getLight();
				//EarthView::World::Graphic::CEntity* getEnt();
				//CParamDictionary *dict;

			private:
				EarthView::World::Graphic::CLight* mpLight;
				//EarthView::World::Graphic::CEntity* mpEnt;

				static CCmdDiffuseColour msDiffuseColour;
				static CCmdSpecularColour msSpecularColour;

				static CCmdAttenuationRange msAttenuationRange;
				static CCmdAttenuationConstant msAttenuationConstant;
				static CCmdAttenuationLinear msAttenuationLinear;
				static CCmdAttenuationQuadric msAttenuationQuadric;
				
				//static CCmdPosition msPosition;
				static CCmdSpotlightInnerAngle msSpotlightInnerAngle;
				static CCmdSpotlightOuterAngle msSpotlightOuterAngle;
				static CCmdSpotlightFalloff msSpotlightFalloff;
				static CCmdSpotlightNearClipDistance msSpotlightNearClipDistance;
				static CCmdPowerScale msPowerScale;

				static CCmdPos msPos;
				static CCmdDirection msDirection;
				//static CCmdShadowFarDistance msShadowFarDistance;
				//static CCmdShadowNearClipDistance msShadowNearClipDistance;
				//static CCmdShadowFarClipDistance msShadowFarClipDistance;
				//static CCmdAttenuation mAttenuation;
			};

		}
	}
}
#endif
