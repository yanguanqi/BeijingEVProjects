
#include "GISDataType.h"
#include "core\classfactory.h"

#pragma region CGrdData

EarthView::GISDataType::CGrdData::~CGrdData()
{
	if (this->IsValid)
	{
		for (ev_uint64 i=0;i<this->RowCount;i++)
		{
			delete this->ZValues[i];
			this->ZValues[i] = NULL;
		}
		delete []this->ZValues;
		this->ZValues = NULL;
	}
}

ev_real64 EarthView::GISDataType::CGrdData::GetXPix()
{
	return (this->MaxX - this->MinX) / this->ColumnCount;
}

ev_real64 EarthView::GISDataType::CGrdData::GetYPix()
{
	return (this->MaxY - this->MinY) / this->RowCount;
}

void EarthView::GISDataType::CGrdData::SetGrdNoDataValue(const ev_real64 noDataValue)
{
	this->mNoDataValue = noDataValue;
}

ev_real64 EarthView::GISDataType::CGrdData::GetGrdNoDataValue()
{
	return this->mNoDataValue;
}

EarthView::GISDataType::CGrdData * EarthView::GISDataType::CGrdData::CopyFrom(CGrdData * srcData, bool isWithZValues)
{
	CGrdData* tmpData = new CGrdData();
	tmpData->ColumnCount = srcData->ColumnCount;
	tmpData->RowCount = srcData->RowCount;
	tmpData->FileName = srcData->FileName;
	tmpData->Head1 = srcData->Head1;
	tmpData->IsValid = srcData->IsValid;
	tmpData->MaxX = srcData->MaxX;
	tmpData->MinX = srcData->MinX;
	tmpData->MaxY = srcData->MaxY;
	tmpData->MinY = srcData->MinY;
	tmpData->MaxZ = srcData->MaxZ;
	tmpData->MinZ = srcData->MinZ;
	tmpData->mNoDataValue = srcData->mNoDataValue;
	if (isWithZValues)
	{
		ev_real64 **zValues = new ev_real64*[tmpData->RowCount];
		for (int i = 0; i < tmpData->RowCount; ++i)
		{
			zValues[i] = new ev_real64[tmpData->ColumnCount];
		}
		for (ev_uint64 rowIndex = 0; rowIndex < tmpData->RowCount; rowIndex++)
		{
			for (ev_uint64 colIndex = 0; colIndex < tmpData->ColumnCount; colIndex++) 
			{
				zValues[rowIndex][colIndex] = (srcData->ZValues[rowIndex])[colIndex];
			}
		}
		tmpData->ZValues = zValues;
	}
	return tmpData;
}

#pragma endregion

//#pragma  region CGrdDataSet
//
////REGISTER_FACTORY_CLASS(EarthView::GISDataType::CGrdDataSet);
//
//EarthView::GISDataType::CGrdDataSet::CGrdDataSet(EarthView::World::Core::CNameValuePairList *pList)
//{
//
//}
//
//EarthView::GISDataType::CGrdDataSet::CGrdDataSet()
//{
//}
//
//EarthView::GISDataType::CGrdDataSet::~CGrdDataSet()
//{
//
//}
//
//
//void EarthView::GISDataType::CGrdDataSet::push_back(_in EarthView::GISDataType::CGrdData const &data)
//{
//	mList.push_back(data);
//}
//
//void EarthView::GISDataType::CGrdDataSet::pop_back()
//{
//	mList.pop_back();
//}
//
//void EarthView::GISDataType::CGrdDataSet::insert(_in ev_uint32 pos, _in EarthView::GISDataType::CGrdData const &data)
//{
//	mList.insert(begin() + pos, data);
//}
//
//void EarthView::GISDataType::CGrdDataSet::remove(_in ev_size_t pos)
//{
//	iterator it = mList.begin();
//	it = it + pos;
//	mList.erase(it);
//}
//
//ev_bool EarthView::GISDataType::CGrdDataSet::empty() const
//{
//	return mList.empty();
//}
//
//EarthView::GISDataType::CGrdData& EarthView::GISDataType::CGrdDataSet::operator[](_in ev_size_t n)
//{
//	reference t = mList[n];
//	return t;
//}
//
//EarthView::GISDataType::CGrdData const &EarthView::GISDataType::CGrdDataSet::operator[](_in ev_size_t n) const
//{
//	const_reference t = mList[n];
//	return t;
//}
//
//EarthView::GISDataType::CGrdData& EarthView::GISDataType::CGrdDataSet::at(_in ev_size_t n)
//{
//	reference t = mList[n];
//	return t;
//}
//
//EarthView::GISDataType::CGrdData const &EarthView::GISDataType::CGrdDataSet::at(_in ev_size_t n) const
//{
//	const_reference t = mList[n];
//	return t;
//}
//
//ev_size_t EarthView::GISDataType::CGrdDataSet::size() const
//{
//	return mList.size();
//}
//
//void EarthView::GISDataType::CGrdDataSet::resize(_in ev_size_t newSize)
//{
//	mList.resize(newSize);
//}
//
//void EarthView::GISDataType::CGrdDataSet::reserve(_in ev_size_t count)
//{
//	mList.reserve(count);
//}
//
//void EarthView::GISDataType::CGrdDataSet::clear()
//{
//	mList.clear();
//	InternalList().swap(mList);
//}
//
//#pragma endregion