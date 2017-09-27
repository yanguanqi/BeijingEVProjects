#ifndef _VARIANT_H_H_
#define _VARIANT_H_H_

#include "core/global.h"
#include "core/memoryallocatedobject.h"
#include "core/datastream.h"
#include "core/ev_time.h"

namespace EarthView
{
	namespace World	
	{
		namespace Core	
		{

			class CCoreTime;
			class MemoryDataStreamPtr;
			class CVariantPrivate;

			class EV_CORE_DLL CVariant : public EarthView::World::Core::CAllocatedObject
			{
			public:
				enum EVDataType
				{
					DT_Unknown				= 0,
					DT_Bool					= 1,
					DT_UInt32				= 2,
					DT_Int32				= 3,
					DT_UInt64				= 4,
					DT_Int64				= 5,
					DT_Real32				= 6,
					DT_Real64				= 7,
					DT_String				= 8,
					DT_WString				= 9,
					DT_Time					= 10,
					DT_MemoryDataStream		= 11,
					DT_UserType            =12
				};

				CVariant();
				CVariant(const CVariant &other);
				~CVariant();

				explicit CVariant(ev_bool boolval)	{init();fromBool(boolval);}
				CVariant(ev_int32 int32val )	{init();fromInt32(int32val);}
				CVariant(ev_int64  int64val)	{init();fromInt64(int64val);}
				CVariant(ev_uint64  uint64val)	{init();fromUInt64(uint64val);}
				CVariant(ev_real32 real32val)	{init();fromReal32(real32val);}
				CVariant(ev_real64 real64val)	{init();fromReal64(real64val);}
				CVariant(const EarthView::World::Core::CCoreTime& ctval )	{init();fromDateTime(ctval);}
				CVariant(const ev_char* charval)	{init();fromString(charval);}
				CVariant(const ev_void* userdata);/////存用户自定义类型
			ev_private:
				CVariant(const ev_wchar* val)	{init();fromWString(val);}
				CVariant(ev_uint32  val)	{init();fromUInt32(val);}
				CVariant(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				CVariant(const ev_string &stringval)	{init();fromString(stringval);}	
				CVariant(const EarthView::World::Core::MemoryDataStreamPtr &mdspval)	{init();fromDataStream(mdspval);}

				ev_void clear();
				ev_bool isNull() const;
				ev_bool isValid() const;
				EarthView::World::Core::CVariant::EVDataType type() const;
				ev_void* data();
				const ev_void* constData() const;
				/////inline const ev_void* data() const {constData();}
			public:
				ev_bool toBool(ev_bool *ok/*=0*/) const;
				ev_bool toBool()const{ return toBool((ev_bool*)0); }
				ev_int32 toInt32(ev_bool *ok/*=0*/) const;
				ev_int32 toInt32() const{ return toInt32((ev_bool*)0);}
				ev_uint32 toUInt32(ev_bool *ok/*=0*/) const;
				ev_uint32 toUInt32() const{ return toUInt32((ev_bool*)0);}
				ev_int64 toInt64(ev_bool *ok/*=0*/) const;
				ev_int64 toInt64() const{ return toInt64((ev_bool*)0);}
				ev_uint64 toUInt64(ev_bool *ok/*=0*/) const;
				ev_uint64 toUInt64() const{ return toUInt64((ev_bool*)0);}
				ev_real32 toReal32(ev_bool *ok/*=0*/) const;
				ev_real32 toReal32() const{ return toReal32((ev_bool*)0);}
				ev_real64 toReal64(ev_bool *ok/*=0*/) const;
				ev_real64 toReal64() const{ return toReal64((ev_bool*)0);}
				EarthView::World::Core::CCoreTime toDateTime() const;
				ev_string toString() const;
				ev_wstring toWString() const;
				EarthView::World::Core::MemoryDataStreamPtr toDataStream() const;

				ev_void fromBool(ev_bool val);
				ev_void fromInt32(ev_int32 val);
				ev_void fromUInt32(ev_uint32 val);
				ev_void fromInt64(ev_int64 val);
				ev_void fromUInt64(ev_uint64 val);
				ev_void fromReal32(ev_real32 val);
				ev_void fromReal64(ev_real64 val);
				ev_void fromDateTime(const EarthView::World::Core::CCoreTime& val);
				ev_void fromString(const ev_string& val);
				ev_void fromWString(const ev_wstring& val);
				ev_void fromDataStream(const EarthView::World::Core::MemoryDataStreamPtr &val);
				ev_void fromCharString(const ev_char* val);
				ev_void fromWCharString(const ev_wchar* val);
				EarthView::World::Core::CVariant& operator=(const EarthView::World::Core::CVariant &other);

				ev_bool operator==(const EarthView::World::Core::CVariant &other) const;
				ev_bool operator!=(const EarthView::World::Core::CVariant &other) const {return !(*this==other);}

			private:
				void init();
				void detach();
				CVariantPrivate *m_private;

			ev_private:
				CVariant(const ev_wstring &val)	{init();fromWString(val);}
			};

			class EV_CORE_DLL CVariantArray : public EarthView::World::Core::CAllocatedObject
			{
			ev_private:
				typedef ev_bool (*Predict) (const EarthView::World::Core::CVariant &var1,const EarthView::World::Core::CVariant &var2);
				ev_void sort(Predict pred);
				CVariantArray(_in EarthView::World::Core::CNameValuePairList* pList);
			public:
				CVariantArray(){}
				ev_int32 count() const;
				EarthView::World::Core::CVariant at(ev_int32 index);
				EarthView::World::Core::CVariant take(ev_int32 index);

				ev_int32 find(EarthView::World::Core::CVariant var,ev_uint32 from/*=0*/) const;
				ev_int32 find(EarthView::World::Core::CVariant var) const { return find(var, 0);}

				ev_void prepend(EarthView::World::Core::CVariant var);
				ev_void insert(ev_int32 index,EarthView::World::Core::CVariant var);
				ev_void append(EarthView::World::Core::CVariant var);
				ev_void append(const EarthView::World::Core::CVariantArray &other);

				ev_void erase(ev_int32 index);

				ev_void swap(ev_int32 first,ev_int32 second);

				ev_bool isEmpty() const;
				ev_void clear();

				EarthView::World::Core::CVariantArray& operator=(const EarthView::World::Core::CVariantArray& other);
				EarthView::World::Core::CVariantArray& operator+=(const EarthView::World::Core::CVariantArray& other);
				EarthView::World::Core::CVariantArray operator+(const EarthView::World::Core::CVariantArray& other);

				EarthView::World::Core::CVariant& operator[](ev_int32 i);
				EarthView::World::Core::CVariant operator[](ev_int32 i) const;

				EarthView::World::Core::CVariant& operator[](ev_uint32 i);
				EarthView::World::Core::CVariant operator[](ev_uint32 i) const;

			private:
				ev_vector<EarthView::World::Core::CVariant> m_vars;
			};



		} //// namespace Core
	} //// namespace World
} //// namespace EarthView

#endif ////_VARIANT_H_H_

