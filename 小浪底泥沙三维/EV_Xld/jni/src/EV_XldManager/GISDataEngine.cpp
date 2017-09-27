
#include "GISDataEngine.h"
#include <QtCore\QFile>
#include <QtCore\QTextStream>
#include "GISDataType.h"

using namespace EarthView::World::Core;

EarthView::Xld::CGISDataEngine::CGISDataEngine()
{
}

EarthView::Xld::CGISDataEngine::~CGISDataEngine()
{
}

void EarthView::Xld::CGISDataEngine::Grd2Tiff(_in const EVString & srcFileName, _in const EVString & destFileName)
{

}

void EarthView::Xld::CGISDataEngine::Grd2Tiff(_in const EVString & srcFileName, _in const EVString & bacFileName, _in const EVString & destFileName)
{
	
}

void EarthView::Xld::CGISDataEngine::SplitGrdFile(_in const EVString& srcFile, _in ev_uint64 rowCount, _in ev_uint64 columnCount, _out vector<GISDataType::CGrdData*> * pGrdDatas)
{
	GISDataType::CGrdData* pData = EarthView::Xld::CGISDataEngine::ReadGrd(srcFile);
	if (pData && pData->IsValid)
	{
		ev_uint64 pointCount = pData->RowCount*pData->ColumnCount;
		ev_uint64 rowPointMax = rowCount;
		ev_uint64 columnPointMax = columnCount;
		ev_uint64 rowPieceCount = (pData->RowCount / rowPointMax);
		if (pData->RowCount % rowPointMax != 0) rowPieceCount++;
		ev_uint64 columnPieceCount = (pData->ColumnCount / columnPointMax);
		if (pData->ColumnCount % columnPointMax != 0) columnPieceCount++;
		ev_uint64 pieceIndex = 0;
		ev_real64 xStep = pData->GetXPix();
		ev_real64 yStep = pData->GetYPix();
		ev_uint64 remainRowCount = pData->RowCount % rowPointMax;
		ev_uint64 remainColumnCount = pData->ColumnCount%columnPointMax;
		for (ev_uint64 i = 0; i < rowPieceCount; i++)
		{
			for (ev_uint64 j = 0; j < columnPieceCount; j++)
			{
				if (i == rowPieceCount - 1 || j == columnPieceCount - 1)
				{
					if (remainRowCount == 0 && remainColumnCount == 0)
						break;
				}
				EarthView::GISDataType::CGrdData* tmpData = EarthView::GISDataType::CGrdData::CopyFrom(pData, false);
				tmpData->FileName += EVString('_' + i + '_' + j);
				tmpData->IsValid = false;
				if (i == rowPieceCount - 1 && remainRowCount != 0)
				{
					tmpData->RowCount = remainRowCount;
				}
				else
				{
					tmpData->RowCount = rowPointMax;
				}
				if (j == columnPieceCount - 1 && remainColumnCount != 0)
				{
					tmpData->ColumnCount = remainColumnCount;
				}
				else
				{
					tmpData->ColumnCount = columnPointMax;
				}
				tmpData->MinX = columnPointMax*xStep*j;
				if (i == rowPieceCount - 1 && remainRowCount != 0)
				{
					tmpData->MaxX = columnPointMax*xStep*j + remainColumnCount*xStep;
				}
				else
				{
					tmpData->MaxX = columnPointMax*xStep*(j + 1);
				}
				tmpData->MinY = rowPointMax*yStep*i;
				if (j == columnPieceCount - 1 && remainColumnCount != 0)
				{
					tmpData->MaxY = rowPointMax*yStep*i + remainRowCount*yStep;
				}
				else
				{
					tmpData->MaxY = rowPointMax*yStep*(i + 1);
				}

				tmpData->IsValid = true;
				ev_real64 **zValues = new ev_real64*[tmpData->RowCount];
				for (int x = 0; x < tmpData->RowCount; ++x)
				{
					zValues[x] = new ev_real64[tmpData->ColumnCount];
				}
				for (ev_uint64 rowIndex = 0; rowIndex < tmpData->RowCount; rowIndex++)
				{
					for (ev_uint64 colIndex = 0; colIndex < tmpData->ColumnCount; colIndex++)
					{
						if (pData->ZValues[rowIndex + i*rowPointMax][colIndex + j*columnPointMax] <= pData->MaxZ && pData->ZValues[rowIndex + i*rowPointMax][colIndex + j*columnPointMax] >= pData->MinZ)
						{

							zValues[rowIndex][colIndex] = pData->ZValues[rowIndex + i*rowPointMax][colIndex + j*columnPointMax];
						}
						else
						{
							zValues[rowIndex][colIndex] = pData->GetGrdNoDataValue();
						}
					}
				}
				tmpData->ZValues = zValues;
				pGrdDatas->push_back(tmpData);
			}
		}
	}
	
}

EarthView::GISDataType::CGrdData* EarthView::Xld::CGISDataEngine::ReadGrd(_in const EVString& srcFileName)
{
	QFile* pFile = new QFile(srcFileName.c_str());
	GISDataType::CGrdData* pGrdData = NULL;
	if (pFile->open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QTextStream* pStreamIn = new QTextStream(pFile);
		pGrdData = new GISDataType::CGrdData();
		QString lineStr;
		EVString lineContent;
		lineStr = pStreamIn->readLine();//grd文件第一行，DSAA
		pGrdData->Head1 = lineStr.toStdString();
		lineStr = pStreamIn->readLine();//grd文件第二行
		lineContent = lineStr.toStdString();
		vector<EVString> colContents;
		lineContent.tokenize(EVString(" "), colContents);
		if (colContents.size() == 2)
		{
			pGrdData->ColumnCount = colContents[0].getUint64();//行数
			pGrdData->RowCount = colContents[1].getUint64();//列数
		}
		colContents.clear();
		lineStr = pStreamIn->readLine();//grd文件第三行
		lineContent = lineStr.toStdString();
		lineContent.tokenize(EVString(" "), colContents);
		if (colContents.size() == 2)
		{
			pGrdData->MinX = colContents[0].getReal64();//最小X
			pGrdData->MaxX = colContents[1].getReal64();//最大X
		}
		colContents.clear();
		lineStr = pStreamIn->readLine();//grd文件第四行
		lineContent = lineStr.toStdString();
		lineContent.tokenize(EVString(" "), colContents);
		if (colContents.size() == 2)
		{
			pGrdData->MinY = colContents[0].getReal64();//最小Y
			pGrdData->MaxY = colContents[1].getReal64();//最大Y
		}
		colContents.clear();
		lineStr = pStreamIn->readLine();//grd文件第五行
		lineContent = lineStr.toStdString();
		lineContent.tokenize(EVString(" "), colContents);
		if (colContents.size() == 2)
		{
			pGrdData->MinZ = colContents[0].getReal64();//最小Z
			pGrdData->MaxZ = colContents[1].getReal64();//最大Z
		}
		colContents.clear();
		ev_real64 **zValues = new ev_real64*[pGrdData->RowCount];
		for (int i = 0; i < pGrdData->RowCount; ++i)
		{
			zValues[i] = new ev_real64[pGrdData->ColumnCount];
		}
		ev_uint64 rowIndex = 0;
		while (!pStreamIn->atEnd())
		{
			lineStr = pStreamIn->readLine();//grd文件中表示z值行数据
			if (!lineStr.isEmpty()) 
			{
				lineContent = lineStr.toStdString();
				lineContent.tokenize(EVString(" "), colContents);
				if (colContents.size() >= pGrdData->ColumnCount)
				{
					for (ev_uint64 colIndex = 0; colIndex < colContents.size(); colIndex++)
					{
						colContents[colIndex].trimRight(" ");
						if (colContents[colIndex] != "")
						{
							zValues[rowIndex][colIndex] = colContents[colIndex].getReal64();
							if (zValues[rowIndex][colIndex] <= pGrdData->MaxZ && zValues[rowIndex][colIndex] >= pGrdData->MinZ)
							{

							}
							else
							{
								zValues[rowIndex][colIndex] = pGrdData->GetGrdNoDataValue();
							}
						}
					}
				}
				colContents.clear();
				rowIndex++;
			}
		}
		pGrdData->ZValues = zValues;
		pGrdData->IsValid = true;
		delete pStreamIn;
		pFile->close();
		delete pFile;
	}
	return pGrdData;
}


