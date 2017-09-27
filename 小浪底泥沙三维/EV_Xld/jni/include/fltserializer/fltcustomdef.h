#ifndef EV_FLTCUSTOMDEF_H
#define EV_FLTCUSTOMDEF_H
#include "fltserializer/config.h"
#include "core/memoryallocatedobject.h"
#include "fltserializer/fltrenderdatas.h"
#include <mathengine/matrix4.h>
#include <core/variant.h>

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace FLT
			{
				class CFltFace;
				class EV_FLTSERIALIZER_DLL CFltNode : public  EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFltNode(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CFltNode();
					~CFltNode();
					enum EVFLTNODETYPE 
					{
						FLT_GROUP,
						FLT_SWITCH,
						FLT_DOF,
						FLT_LOD,
						FLT_OBJECT,
						FLT_LONGID,
						FLT_LIGHTPOINTSYSTEM,
						FLT_LIGHTPOINT,
						FLT_INDEXEDLIGHTPOINT
					};
					EVString getName();
					ev_void setName(const EVString& name);
					CFltNode* getParent();
					ev_void setParent(CFltNode* parentNode);
					ev_void addFltSubNode(CFltNode* node);
					ev_void removeFltSubNode(ev_uint32 index);
					ev_void removeFltSubNode(CFltNode* node);
					CFltNode* getFltSubNode(ev_uint32 index);
					ev_uint32 getFltSubNodeNum();
					ev_void addFltFace(CFltFace* face);
					CFltFace* getFltFace(ev_uint32 index);
					ev_uint32 getFltFaceNum();
					EarthView::World::Spatial::Math::CMatrix4 getMatrix();
					ev_void setMatrix(EarthView::World::Spatial::Math::CMatrix4 matrix);
					ev_int32 getLodDistance();
					ev_void setLodDistance(ev_int32 lodDistance);
					ev_bool isLeafNode();
					ev_void setIsLeafNode(ev_bool isLeafNode);
					ev_bool getHasPush_PopLevel();
					ev_void setHasPush_PopLevel(ev_bool hasLevel);
					EVFLTNODETYPE getNodeType();
					ev_void setNodeType(EVFLTNODETYPE type);
					ev_uint32 getTotalFaceNum();
					ev_void setTotalFaceNum(ev_uint32 num);
					//Mask
					ev_bool getNodeVisible();
					ev_void setCurrentMask(ev_uint32 mask);
					ev_void setMaskNum(ev_uint32 maskNum);
					ev_void setWorldMask(ev_uint32 maskNum);
					ev_void addMask(ev_uint32 mask);
					//
					ev_bool hasLodLevelSubNode();
					ev_void setHasLodLevelSubNode(ev_bool hasLod,ev_bool lodFromChild);
					//
					ev_bool existAttribute(EVString key,ev_uint32& index);
					ev_void updateAttribute(EVString key,EarthView::World::Core::CVariant dstVvalue);
					ev_void removeAttribute(EVString key);
					ev_void addAttribute(EVString key,EarthView::World::Core::CVariant value);
					ev_uint32 getAttributesCount();
					EVString getattributeKey(ev_uint32 index);
					EarthView::World::Core::CVariant getAttributeValue(ev_uint32 index);
					//
					ev_void setHasValidLightPoint(ev_bool validLPT);
					ev_bool HasValidLightPoint();
				protected:
					EVString mName;
					CFltNode* mParent;
					ev_vector<CFltNode*> mFltSubNodeList;
					ev_vector<CFltFace*> mFltFaceList;
					EarthView::World::Spatial::Math::CMatrix4 mMatrix;
					ev_int32 mLodDistance;
					ev_bool mIsLeafNode;
					ev_bool mbHasPush_PopLevel;
					EVFLTNODETYPE mNodeType;
					//Switch
					ev_uint32 mCurrentMask;
					ev_uint32 mNumberOfMasks;
					ev_uint32 mWordsInMask;
					ev_vector<ev_uint32> mMasks;
					ev_bool mVisible;
					//
					ev_bool mHasLodSubNode;
					ev_bool mLodFromChild;
					ev_bool mHasValidLightPoint;
				private:
					ev_bool mHasGetLodDistance;
					ev_uint32 mTotalFaceNum;
					//EarthView::World::Core::CNameValuePairList mAttributes;
					ev_vector<EVString> mAttributesKeys;
					ev_vector<EarthView::World::Core::CVariant> mAttributesValues;
				};
				//
				class EV_FLTSERIALIZER_DLL CFltLight : public  EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFltLight(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CFltLight();
					~CFltLight();

					ev_void setLightNum(ev_int32 lightNum){_lightnum = lightNum;}
					ev_int32 getLightNum(){return _lightnum;}

					ev_void setAmbient(EarthView::World::Spatial::Math::CVector4 ambient){_ambient = ambient;}
					EarthView::World::Spatial::Math::CVector4 getAmbient(){return _ambient;}

					ev_void setDiffuse(EarthView::World::Spatial::Math::CVector4 diffuse){_diffuse = diffuse;}
					EarthView::World::Spatial::Math::CVector4 getDiffuse(){return _diffuse;}

					ev_void setSpecular(EarthView::World::Spatial::Math::CVector4 specular){_specular = specular;}
					EarthView::World::Spatial::Math::CVector4 getSpecular(){return _specular;}

					ev_void setPosition(EarthView::World::Spatial::Math::CVector4 position){_position = position;}
					EarthView::World::Spatial::Math::CVector4 getPosition(){return _position;}

					ev_void setDirection(EarthView::World::Spatial::Math::CVector3 direction){_direction = direction;}
					EarthView::World::Spatial::Math::CVector3 getDirection(){return _direction;}

					ev_void setConstantAttenuation(ev_real32 constant_attenuation ){_constant_attenuation = constant_attenuation;}
					ev_real32 getConstantAttenuation(){return _constant_attenuation;}

					ev_void setLinearAttenuation ( ev_real32 linear_attenuation ){_linear_attenuation = linear_attenuation;}
					ev_real32 getLinearAttenuation(){return _linear_attenuation;}

					ev_void setQuadraticAttenuation ( ev_real32 quadratic_attenuation ){_quadratic_attenuation = quadratic_attenuation;}
					ev_real32 getQuadraticAttenuation(){return _quadratic_attenuation;}

					void setSpotExponent( ev_real32 spot_exponent ){_spot_exponent = spot_exponent;}
					ev_real32 getSpotExponent(){return _spot_exponent;}

					ev_void setSpotCutoff( ev_real32 spot_cutoff ){ _spot_cutoff = spot_cutoff;}
					ev_real32 getSpotCutoff(){return _spot_cutoff;}
				protected:
					ev_void init();

					ev_int32 _lightnum;                           // OpenGL light number

					EarthView::World::Spatial::Math::CVector4 _ambient;                           // r, g, b, w
					EarthView::World::Spatial::Math::CVector4 _diffuse;                           // r, g, b, w
					EarthView::World::Spatial::Math::CVector4 _specular;                          // r, g, b, w
					EarthView::World::Spatial::Math::CVector4 _position;                          // x, y, z, w
					EarthView::World::Spatial::Math::CVector3 _direction;                         // x, y, z
					ev_real32 _constant_attenuation;             // constant
					ev_real32 _linear_attenuation;               // linear
					ev_real32 _quadratic_attenuation;            // quadratic
					ev_real32 _spot_exponent;                    // exponent
					ev_real32 _spot_cutoff;                      // spread
				};
				//
				class EV_FLTSERIALIZER_DLL CFltLPAppearance : public  EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFltLPAppearance(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CFltLPAppearance();
					~CFltLPAppearance();
					//
					EVString name;
					ev_int32 index;
					ev_int16 materialCode;
					ev_int16 featureID;
					EarthView::World::Spatial::Math::CVector4 backColor;
					ev_int32 displayMode;
					ev_real32 intensityFront;
					ev_real32 intensityBack;
					ev_real32 minDefocus;
					ev_real32 maxDefocus;
					ev_int32 fadingMode;
					ev_int32 fogPunchMode;
					ev_int32 directionalMode;
					ev_int32 rangeMode;
					ev_real32 minPixelSize;
					ev_real32 maxPixelSize;
					ev_real32 actualPixelSize;
					ev_real32 transparentFalloffPixelSize;
					ev_real32 transparentFalloffExponent;
					ev_real32 transparentFalloffScalar;
					ev_real32 transparentFalloffClamp;
					ev_real32 fogScalar;
					ev_real32 fogIntensity;
					ev_real32 sizeDifferenceThreshold;
					ev_int32 directionality;
					ev_real32 horizontalLobeAngle;
					ev_real32 verticalLobeAngle;
					ev_real32 lobeRollAngle;
					ev_real32 directionalFalloffExponent;
					ev_real32 directionalAmbientIntensity;
					ev_real32 significance;
					ev_uint32 flags;
					ev_real32 visibilityRange;
					ev_real32 fadeRangeRatio;
					ev_real32 fadeInDuration;
					ev_real32 fadeOutDuration;
					ev_real32 LODRangeRatio;
					ev_real32 LODScale;
					ev_int16 texturePatternIndex;
				private:
					ev_void init();
				};
				//
				class EV_FLTSERIALIZER_DLL CFltLPAnimation : public  EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CFltLPAnimation(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					CFltLPAnimation();
					~CFltLPAnimation();
					//
					enum EVAnimationType
					{
						AT_FLASHING_SEQUENCE = 0,
						AT_ROTATING = 1,
						AT_STROBE = 2,
						AT_MORSE_CODE = 3
					};

					enum EVState
					{
						S_ON = 0,
						S_OFF = 1,
						S_COLOR_CHANGE = 2
					};

					struct CFLTPulse
					{
						ev_uint32 state;
						ev_real32 duration;
						EarthView::World::Spatial::Math::CVector4 color;
					};

					typedef ev_vector<CFLTPulse>  PulseArray;

					EVString name;                        // animation name
					ev_int32 index;                            // animation index
					ev_real32 animationPeriod;                // animation period, in seconds
					ev_real32 animationPhaseDelay;            // animation phase delay, in seconds from start of period
					ev_real32 animationEnabledPeriod;            // animation enabled period (time on), in seconds
					EarthView::World::Spatial::Math::CVector3 axisOfRotation;                // axis of rotation for rotating animation (i, j, k)
					ev_uint32 flags;                            // flags (bits, from left to right)
					//     0 = flashing
					//   1 = rotating
					//   2 = rotate counter clockwise
					//   3-31 = spare
					ev_int32 animationType;                    // animation type
					//     0 = flashing sequence
					//   1 = rotating
					//   2 = strobe
					//   3 = morse code
					ev_int32 morseCodeTiming;                    // morse code timing
					//     0 = standard timing
					//   1 = Farnsworth timing
					ev_int32 wordRate;                            // word rate (for Farnsworth timing)
					ev_int32 characterRate;                    // character rate (for Farnsworth timing)
					EVString morseCodeString;            // morse code string
					PulseArray sequence;
				private:
					ev_void init();
				};
			}
		}
	}
}
#endif