#ifndef EARTHVIEW_WORLD_CHART_CS57INFO_H
#define EARTHVIEW_WORLD_CHART_CS57INFO_H
#include "spatialdatabase/fields.h"
#include "chart/chartexports.h"
using namespace EarthView::World::Spatial::GeoDataset;
using namespace EarthView::World::Core;

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				
				//////////////////////////////////////////////////
				/*					CChartClassInfo				*/
				/*					海图物标类信息				*/
				//////////////////////////////////////////////////
				class EVCHART_DLL CChartClassInfo :public CAllocatedObject
				{
				public:
					~CChartClassInfo();
					EVChartDataType getChartFieldType() const;
					ev_int32 getClassCode() const;
					const ev_char* getAcronym() const;
					const ev_char* getDescribe() const;

					ev_uint32 getAttributeNum() const;
					const EVString getAttributeName(ev_uint32 index) const;
					const IField* getAttributeFieldRef(ev_uint32 index) const;
					const IFields* getAttributeFieldsRef() const;
				ev_private:
					CChartClassInfo(CNameValuePairList *pList);
				protected:
					CChartClassInfo();
				private:
					ev_int32 mnCode;
					ev_char* mszAcronym;		///缩写
					ev_char* mszDescribe;		///描述	
					IFields* mpFields;			///所附加的属性名称
					ev_uint32 mnAttriNum;
					EVChartDataType mnType;				///

					friend class CS57Info;
				};
				/* 物标属性信息 */
				class EVCHART_DLL CChartAttributeInfo :public CAllocatedObject
				{
				public:
					~CChartAttributeInfo();
					ev_int32 getCode();
					const ev_char* getAcronym()const;
					const ev_char* getDescribe()const;
					EVChartAttributeType getType()const;
					IField* createField();
				protected:
					CChartAttributeInfo();
				ev_private:
					CChartAttributeInfo(CNameValuePairList *pList);
				private:
					ev_int32 mnCode;
					ev_char* mszAcronym;		///缩写
					ev_char* mszDescribe;		///描述
					EVChartAttributeType mnAttriType;		///类型			///

					friend class CS57Info;
				};

				class EVCHART_DLL CS57Info :public CAllocatedObject
				{
				protected:
					CS57Info();
				public:
					~CS57Info();
					static CS57Info* getStaticInstance();
					const CChartAttributeInfo* getChartAttributeInfo(ev_int32 code);
					const CChartAttributeInfo* getChartAttributeInfo(const ev_char* name);
					const CChartClassInfo* getChartClassInfo(ev_int32 code);
					const CChartClassInfo* getChartClassInfo(const ev_char* name);
					const ev_char* getClassName(ev_int32 code);
				ev_private:
					CS57Info(CNameValuePairList *pList);
				private:
					void parseAttr(const ev_char* szValue,IFields* pFields); 
					IField* createField(ev_int32 code);
					IField* createField(const ev_char* name);
					static CS57Info* m_pS57Info;
	
					/* 所有字段的定义：1、字段名缩写；2、相应字段定义 */
					ev_map<EVString,CChartAttributeInfo*> mFieldListByName;
					/* 所有字段的定义：1、字段编码；2、相应字段定义 */
					ev_map<ev_int32,CChartAttributeInfo*> mFieldListByCode;
					/* 所有物标类信息：1、类型编码；2相应类的信息 */
					ev_map<ev_int32,CChartClassInfo*> mClassInfoByCode;
					ev_map<EVString,CChartClassInfo*> mClassInfoByName;
				};
			}
		}
	}
}
#endif