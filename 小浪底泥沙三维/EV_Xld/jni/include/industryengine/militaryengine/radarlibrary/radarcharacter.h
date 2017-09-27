#ifndef CRADARCHARACTER_H
#define CRADARCHARACTER_H

#include "radarlibrary_cfg.h"
#include "spatialobject/geometry/linestring.h"
#include "mathengine/vector3.h"
#include "color/rgbcolor.h"
#include "mathengine/matrix4.h"
#include "core/stringvector.h"


namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				class CRadarCharacter;
				class CShadeAngleDatas;
				class CShadeAngleData;
				class CRadarSection;
				class CRadarObject;
				class CSectionPoints;
				/// <summary>
				///雷达截面点
				/// </summary>
				class EV_RADARLIBRARY_DLL CSectionPoint : public EarthView::World::Core::CBaseObject
				{
					friend class CRadarSection;
					friend class CSectionPoints;
					friend class CRadarCharacter;
ev_private:
					/// <summary>
					/// 自动封装构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CSectionPoint(EarthView::World::Core::CNameValuePairList* pList);
				protected:
					Real mPitchAngle;
					EarthView::World::Spatial::Math::CVector3  mPitchPoint;

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					CSectionPoint();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="Real">倾斜角</param>
					/// <param name="EarthView::World::Spatial::Math::CVector3">截面点位置</param>
					CSectionPoint(_in const Real& pitchAngle,_in const EarthView::World::Spatial::Math::CVector3& pitchPoint);

					virtual ~CSectionPoint();
					/// <summary>
					/// 获取截面点倾斜角
					/// </summary>
					/// <param name=""></param>
					/// <returns>截面点的倾斜角</returns>
					Real getPitchAngle() const;
					/// <summary>
					/// 获取截面点位置
					/// </summary>
					/// <param name=""></param>
					/// <returns>截面点位置</returns>
					EarthView::World::Spatial::Math::CVector3 getPitchPoint() const;
					/// <summary>
					/// 设置截面点倾斜角
					/// </summary>
					/// <param name="pitchAngle">截面点的倾斜角</param>
					void setPitchAngle(const Real& pitchAngle);
					/// <summary>
					/// 设置截面点位置
					/// </summary>
					/// <param name="pitchAngle">截面点的位置</param>
					void setPitchPoint(const EarthView::World::Spatial::Math::CVector3 & pitchPoint);
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint clone();

					//private:
					//	C_DISABLE_COPY(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint);
				};
				/// <summary>
				///雷达截面点集合
				/// </summary>
				class EV_RADARLIBRARY_DLL CSectionPoints : public EarthView::World::Core::CBaseObject
				{
					friend class CRadarSection;
					friend class CRadarCharacter;
					friend class CMSRadarCharacter;
ev_private:
					/// <summary>
					/// 自动封装构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CSectionPoints(EarthView::World::Core::CNameValuePairList* pList);
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mSectionPoints);		

				private:
					InternalList mSectionPoints ;
				public :
					CSectionPoints();
					virtual ~CSectionPoints();

					void push_back(_in const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint & t);
					void pop_back();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& front();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& back();
					void insert(_in ev_uint32 pos, _in const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint & t);
					void remove(_in ev_size_t pos);
					ev_bool empty() const;

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& operator[](_in ev_size_t n)
					{
						reference l = mSectionPoints[n];
						return l;
					}

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint const &operator[](_in ev_size_t n) const
					{
						const_reference l =  mSectionPoints[n];
						return l;
					}

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& at(_in ev_size_t n)
					{
						reference l = mSectionPoints[n];
						return l;
					}

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint const &at(_in ev_size_t n) const
					{
						const_reference l =  mSectionPoints[n];
						return l;
					}

					ev_size_t size() const;
					void resize(_in ev_size_t newSize);
					void reserve(_in ev_size_t count);
					void clear();
					virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* clone();

					//private:
					//	C_DISABLE_COPY(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints);
				};
				/// <summary>
				///雷达截面（垂直截面线）
				/// </summary>
				class EV_RADARLIBRARY_DLL CRadarSection : public EarthView::World::Core::CBaseObject
				{
					friend class CRadarCharacter;
					friend class CMSRadarCharacter;
ev_private:
					/// <summary>
					/// 自动封装构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CRadarSection(EarthView::World::Core::CNameValuePairList* pList);
				private:
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* mpSectionPoints;

				public :
					CRadarSection();
					virtual ~CRadarSection();

					/// <summary>
					/// 获取垂直威力数据
					/// </summary>
					/// <returns>垂直威力数据</returns>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* getSectionPoints();
					/// <summary>
					/// 设置垂直威力数据
					/// </summary>
					/// <param name="sectionPoints">垂直威力数据</param>
					void setSectionPoints(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* sectionPoints);
					/// <summary>
					/// 转换为EarthView::World::Spatial::Geometry::CLineString对象
					/// </summary>
					/// <returns>EarthView::World::Spatial::Geometry::CLineString对象</returns>
					_extfree EarthView::World::Spatial::Geometry::CLineString* converToLineString();
					/// <summary>
					/// 转换为XML节点
					/// </summary>
					/// <param name="name">节点名称</param>
					/// <returns>XML节点对象</returns>
					EarthView::World::Core::CXmlElement createSectionXmlElement(const EVString& name);
					/// <summary>
					/// 从XML节点解析
					/// </summary>
					/// <param name="sectionElement">sectionElement</param>
					/// <returns>XML节点对象</returns>
					void parseSectionXmlElement(EarthView::World::Core::CXmlElement sectionElement);
					/// <summary>
					/// 复制
					/// </summary>
					/// <returns>雷达垂直威力面</returns>
					virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* clone();

				private:
					C_DISABLE_COPY(CRadarSection);
				};
				/// <summary>
				///近山遮蔽角
				/// </summary>
				class EV_RADARLIBRARY_DLL CShadeAngleData : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 自动封装构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CShadeAngleData(EarthView::World::Core::CNameValuePairList* pList);
				protected:
					Real mHorizontalAngle;
					Real mShadeAngle ;

				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					CShadeAngleData();
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="horizontalAngle">水平角</param>
					/// <param name="shadeAngle">遮蔽角</param>
					CShadeAngleData(_in const Real& horizontalAngle, const Real& shadeAngle);

					virtual ~CShadeAngleData();
					/// <summary>
					/// 获取水平角
					/// </summary>
					/// <param name=""></param>
					/// <returns>水平角</returns>
					Real getHorizontalAngle() const;
					/// <summary>
					/// 获取遮蔽角
					/// </summary>
					/// <param name=""></param>
					/// <returns>遮蔽角</returns>
					Real getShadeAngle() const;
					/// <summary>
					/// 设置水平角
					/// </summary>
					/// <param name="horizontalAngle">水平角</param>
					void setHorizontalAngle(const Real& horizontalAngle);
					/// <summary>
					/// 设置遮蔽角
					/// </summary>
					/// <param name="pitchAngle">截面点的位置</param>
					void setShadeAngle(const Real& shadeAngle);
					/// <summary>
					///克隆
					/// </summary>
					/// <returns>遮蔽角数据</returns>
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData clone();

					//private:
					//	C_DISABLE_COPY(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint);
				};
				/// <summary>
				///近山遮蔽角集合
				/// </summary>
				class EV_RADARLIBRARY_DLL CShadeAngleDatas : public EarthView::World::Core::CBaseObject
				{
ev_private:
					/// <summary>
					/// 自动封装构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					CShadeAngleDatas(EarthView::World::Core::CNameValuePairList* pList);
					typedef vector<EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mShadeDataList);		

				private:
					InternalList mShadeDataList ;
				public :
					CShadeAngleDatas();
					virtual ~CShadeAngleDatas();

					void push_back(_in const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData & t);
					void pop_back();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& front();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& back();
					void insert(_in ev_uint32 pos, _in const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData & t);
					void remove(_in ev_size_t pos);
					ev_bool empty() const;

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& operator[](_in ev_size_t n)
					{
						reference l = mShadeDataList[n];
						return l;
					}

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData const &operator[](_in ev_size_t n) const
					{
						const_reference l =  mShadeDataList[n];
						return l;
					}

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& at(_in ev_size_t n)
					{
						reference l = mShadeDataList[n];
						return l;
					}

					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData const &at(_in ev_size_t n) const
					{
						const_reference l =  mShadeDataList[n];
						return l;
					}
					/// <summary>
					/// 转换为XML节点
					/// </summary>
					/// <param name="name">节点名称</param>
					/// <returns>XML节点对象</returns>
					EarthView::World::Core::CXmlElement createShadeAngleXmlElement(const EVString& name);
					/// <summary>
					/// 从XML节点解析
					/// </summary>
					/// <param name="sectionElement">sectionElement</param>
					/// <returns>XML节点对象</returns>
					void parseShadeAngleXmlElement(EarthView::World::Core::CXmlElement shadeAngleElement);

					ev_size_t size() const;
					void resize(_in ev_size_t newSize);
					void reserve(_in ev_size_t count);
					void clear();
					virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* clone();

					//private:
					//	C_DISABLE_COPY(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints);
				};
				class EV_RADARLIBRARY_DLL CRadarCharacter: public EarthView::World::Core::CBaseObject
				{
					friend class CRadarObject;
ev_private:
					CRadarCharacter(EarthView::World::Core::CNameValuePairList* pList);
				protected:
					EarthView::World::Spatial::Math::CDegree mScannerHorizontalSpan;//雷达扫描仪水平跨度
					EarthView::World::Spatial::Math::CDegree mHorizontalAngleDelta;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* mpRadarSection;
					EarthView::World::Spatial::Geometry::CLineString* mpLineString;
					float mHeight;
					EarthView::World::Spatial::Math::CVector3 mUpVector;
					float mScanSpeed;
					float mInterferedDistance;
					EarthView::World::Spatial::Display::CRgbColor* mpEnvelopSolidColor;
					EarthView::World::Spatial::Display::CRgbColor* mpEnvelopFrameColor;
					EarthView::World::Spatial::Display::CRgbColor* mpScannerSolidColor;
					EarthView::World::Spatial::Display::CRgbColor* mpScannerFrameColor;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarObject* mpRadarObject;
					int mShadeTypeId;
					int mShadeSplitNum;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* mpShadeAngleDatas;
					bool  mTerrainShadeState;

				protected:
					CRadarCharacter();
					virtual void toXmlRootElement(EarthView::World::Core::CXmlElement& rootElement);
					virtual void parseRootElement(EarthView::World::Core::CXmlElement& rootElement);
					virtual EVString getTypeName()const;
					EarthView::World::Core::CXmlElement createColorXmlElement(const EVString& name, EarthView::World::Spatial::Display::CRgbColor* color);
					EarthView::World::Spatial::Display::CRgbColor* parseColorXmlElement(const EarthView::World::Core::CXmlElement& colorElement);
					EarthView::World::Core::CXmlElement createVector3XmlElement(const EVString& name, const EarthView::World::Spatial::Math::CVector3& vector);
					EarthView::World::Spatial::Math::CVector3 parseVector3XmlElement(const EarthView::World::Core::CXmlElement& vectorElement);

				public:
					virtual ~CRadarCharacter();
					/// <summary>
					///设置扫描速度
					/// </summary>
					/// <param name="value">速度值</param>
					void setScanSpeed(const float& value);
					/// <summary>
					///获取扫描速度
					/// </summary>
					/// <returns>扫描速度</returns>
					float getScanSpeed() const;
					/// <summary>
					///设置水平角度范围
					/// </summary>
					/// <param name="scannerHorizontalSpan">水平角度范围</param>
					void setHorizontalAngleSpan(const EarthView::World::Spatial::Math::CDegree& scannerHorizontalSpan);
					/// <summary>
					///获取水平角度范围
					/// </summary>
					/// <returns>水平角度范围</returns>
					EarthView::World::Spatial::Math::CDegree getHorizontalAngleSpan() const;
					/// <summary>
					///获取水平分段数
					/// </summary>
					/// <returns>水平分段数</returns>
					ev_int32 getHorizontalNum()const;
					/// <summary>
					///设置水平分段间隔角度，只有设置完水平跨度之后才有效
					/// </summary>
					/// <param name="value">水平分段间隔角度</param>
					void setHorizontalAngleDelta(const EarthView::World::Spatial::Math::CDegree& value);
					/// <summary>
					///获取水平分段间隔角度
					/// </summary>
					/// <returns>水平分段间隔角度</returns>
					EarthView::World::Spatial::Math::CDegree getHorizontalAngleDelta() const;
					/// <summary>
					///设置威力距离
					/// </summary>
					/// <param name="interferedDistance">威力距离</param>
					void setInterferedDistance(const float& interferedDistance);
					/// <summary>
					///获取威力距离
					/// </summary>
					/// <returns>威力距离</returns>
					float getInterferedDistance() const;
					/// <summary>
					///获取高度
					/// </summary>
					/// <returns>高度</returns>
					float getHeight() const;
					/// <summary>
					///获取截面线串
					/// </summary>
					/// <returns>截面线串</returns>
					virtual EarthView::World::Spatial::Geometry::CLineString* getSectionCurve();
					/// <summary>
					/// 设置包络实体颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void setEnvelopSolidColor(const ev_uint8& red, const ev_uint8& green, 
						const ev_uint8& blue, const ev_uint8& alpha);
					/// <summary>
					/// 设置扫描实体颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void setScannerSolidColor(const ev_uint8& red, const ev_uint8& green, 
						const ev_uint8& blue, const ev_uint8& alpha) ;
					/// <summary>
					/// 获取扫描网格颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void getScannerFrameColor(_inout ev_uint8& red, _inout ev_uint8& green, 
						_inout ev_uint8& blue, _inout ev_uint8& alpha) const;
					/// <summary>
					/// 设置扫描网格颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void setScannerFrameColor(const ev_uint8& red, const ev_uint8& green, 
						const ev_uint8& blue, const ev_uint8& alpha);
					/// <summary>
					/// 获取雷达截面
					/// </summary>
					/// <returns>雷达截面</returns>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* getRadarSection() const;
					/// <summary>
					/// 获取包络实体颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void getEnvelopSolidColor(_inout ev_uint8& red, _inout ev_uint8& green, 
						_inout ev_uint8& blue, _inout ev_uint8& alpha) const;
					/// <summary>
					/// 设置包络网格颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void setEnvelopFrameColor(const ev_uint8& red, const ev_uint8& green, 
						const ev_uint8& blue, const ev_uint8& alpha);
					/// <summary>
					/// 获取包络网格颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void getEnvelopFrameColor(_inout ev_uint8& red, _inout ev_uint8& green, 
						_inout ev_uint8& blue, _inout ev_uint8& alpha) const;
					/// <summary>
					/// 获取扫描实体颜色
					/// </summary>
					/// <param name="red">红色</param>
					/// <param name="green">绿色</param>
					/// <param name="blue">蓝色</param>
					/// <param name="alpha">透明度</param>
					void getScannerSolidColor(_inout ev_uint8& red, _inout ev_uint8& green, 
						_inout ev_uint8& blue, _inout ev_uint8& alpha) const;
					/// <summary>
					/// 设置高度
					/// </summary>
					/// <param name="value">高度</param>
					void setHeight(const float& value);
					/// <summary>
					/// 设置雷达截面
					/// </summary>
					/// <param name="radarSection">雷达截面</param>
					void setRadarSection(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* radarSection);
					/// <summary>
					/// 获取法线向量
					/// </summary>
					/// <returns>法线向量</returns>
					EarthView::World::Spatial::Math::CVector3 getUpVector() const;
					/// <summary>
					/// 设置法线向量
					/// </summary>
					/// <param name="radarSection">法线向量</param>
					void setUpVector(const EarthView::World::Spatial::Math::CVector3& value);
					/// <summary>
					/// 获取遮蔽类型
					/// </summary>
					/// <returns>遮蔽类型</returns>
					int getShadeTypeId() const;
					/// <summary>
					/// 获取遮蔽线插分段数
					/// </summary>
					/// <returns>遮蔽线插分段数</returns>
					int getShadeSplitNum() const;
					/// <summary>
					/// 获取遮蔽类型
					/// </summary>
					/// <param name="value">遮蔽类型(0:只考虑地形；1:只考虑近山遮蔽角；2:考虑地形和近山遮蔽角)</param>
					void setShadeTypeId(const int& value);
					/// <summary>
					/// 设置遮蔽线插分段数
					/// </summary>
					/// <param name="value">插分段数</param>
					void setShadeSplitNum(const int& value);
					/// <summary>
					/// 设置遮蔽角数据
					/// </summary>
					void setShadeAngleDatas(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* shadeAngleDatas);
					/// <summary>
					/// 设置地形遮蔽状态
					/// </summary>
					void setTerrainShadeState(const bool& value);
					/// <summary>
					/// 获取地形遮蔽状态
					/// </summary>
					/// <returns>地形遮蔽状态</returns>
					bool getTerrainShadeState() const;
					/// <summary>
					/// 获取遮蔽角数据集合
					/// </summary>
					/// <returns>遮蔽角数据集合</returns>
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* getShadeAngleDatas() const;
					/// <summary>
					/// 复制雷达特征
					/// </summary>
					/// <returns>雷达特征</returns>
					virtual _extfree EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* clone();

				private:
					C_DISABLE_COPY(CRadarCharacter);
				};
			}
		}
	}
}
#endif
